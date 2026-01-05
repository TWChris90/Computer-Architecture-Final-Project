package conv

import chisel3._
import chisel3.util._

/** Level 3 SA (Plan A: spatial K expansion)
  * - For each (oh, ow), stream K = cin * kh * kw elements via Im2ColStreamerNCHW
  * - After filling xBuf, compute cout outputs at once using SystolicArrayMatVecFixed(rows=cout, cols=K)
  * - Write results back to y_out(m)(pos)
  */
class RegularConvFull_SA(
  cin: Int, cout: Int,
  h: Int, w: Int,
  kh: Int, kw: Int,
  cfg: FixedCfg
) extends Module {

  require(cin > 0 && cout > 0 && h > 0 && w > 0 && kh > 0 && kw > 0)

  private val K = cin * kh * kw
  private val hout = h - kh + 1
  private val wout = w - kw + 1
  private val outSize = hout * wout
  private val inSize = cin * h * w

  private val posW = log2Ceil(outSize max 2)
  private val capW = log2Ceil(K max 2)

  val io = IO(new Bundle {
    val start = Input(Bool())

    // Current spec uses per-channel Vec, so keep cin x (h*w) layout here
    val x_in  = Input(Vec(cin, Vec(h*w, SInt(cfg.dataW.W))))

    // weights: [cout][K], K order = c -> kh -> kw (consistent with Im2ColStreamerNCHW)
    val w_in  = Input(Vec(cout, Vec(K, SInt(cfg.dataW.W))))

    val y_out = Output(Vec(cout, Vec(outSize, SInt(cfg.accW.W))))
    val done  = Output(Bool())
  })

  // Flatten x_in to match Im2ColStreamerNCHW io.in
  // idx = ((c*h + ih)*w + iw) = c*(h*w) + (ih*w + iw)
  val xFlat = Wire(Vec(inSize, SInt(cfg.dataW.W)))
  for (c <- 0 until cin) {
    for (p <- 0 until (h*w)) {
      xFlat(c*(h*w) + p) := io.x_in(c)(p)
    }
  }

  // Output registers (fixed the previous bracket error section)
  private val yInitRow: Vec[SInt] = VecInit(Seq.fill(outSize)(0.S(cfg.accW.W)))
  private val yInit: Vec[Vec[SInt]] = VecInit(Seq.fill(cout)(yInitRow))
  val yReg = RegInit(yInit)
  io.y_out := yReg

  val doneReg = RegInit(false.B)
  io.done := doneReg

  // Im2Col streamer (note: constructor takes dataW, not cfg)
  val im2col = Module(new Im2ColStreamerNCHW(
    cin = cin, h = h, w = w, kh = kh, kw = kw, dataW = cfg.dataW
  ))
  im2col.io.in := xFlat

  // SA core: rows=cout, cols=K (spatial K expansion)
  val sa = Module(new SystolicArrayMatVecFixed(rows = cout, cols = K, cfg = cfg))
  for (m <- 0 until cout) {
    for (k <- 0 until K) {
      sa.io.a_in(m)(k) := io.w_in(m)(k)
    }
    sa.io.psum_in(m) := 0.S(cfg.accW.W)
  }

  // x buffer
  val xBuf  = RegInit(VecInit(Seq.fill(K)(0.S(cfg.dataW.W))))
  for (k <- 0 until K) {
    sa.io.b_in(k) := xBuf(k)
  }

  // position / capture
  val posReg = RegInit(0.U(posW.W))
  val capIdx = RegInit(0.U(capW.W))

  // derive (oh, ow) from pos
  val oh = (posReg / wout.U)
  val ow = (posReg % wout.U)
  im2col.io.oh := oh
  im2col.io.ow := ow

  // FSM
  val sIdle :: sKick :: sCap :: sWrite :: sWaitIdle :: sDone :: Nil = Enum(6)
  val state = RegInit(sIdle)

  // default
  im2col.io.start := false.B

  switch(state) {
    is(sIdle) {
      doneReg := false.B
      posReg := 0.U
      capIdx := 0.U
      when(io.start) {
        state := sKick
      }
    }

    // Only assert start when im2col is not running (valid=0) to avoid overlap
    is(sKick) {
      when(!im2col.io.valid) {
        im2col.io.start := true.B
        capIdx := 0.U
        state := sCap
      }.otherwise {
        im2col.io.start := false.B
      }
    }

    // Capture data: require the last element to wait for done to be asserted
    is(sCap) {
      when(im2col.io.valid) {
        xBuf(capIdx) := im2col.io.a_out

        when(capIdx === (K-1).U) {
          // Last element: advance only when im2col.io.done is also asserted
          when(im2col.io.done) {
            state := sWrite
          }.otherwise {
            // If done does not arrive in the same cycle, stay here (avoid boundary misalignment)
            capIdx := capIdx
          }
        }.otherwise {
          capIdx := capIdx + 1.U
        }
      }
    }

    // SA is combinational: write back cout outputs for this pos
    is(sWrite) {
      for (m <- 0 until cout) {
        yReg(m)(posReg) := sa.io.psum_out(m)
      }

      when(posReg === (outSize-1).U) {
        state := sDone
      }.otherwise {
        posReg := posReg + 1.U
        state := sWaitIdle
      }
    }

    // Wait until im2col is completely idle (valid=0) before kicking next pos
    is(sWaitIdle) {
      when(!im2col.io.valid) {
        state := sKick
      }
    }

    is(sDone) {
      doneReg := true.B
      when(!io.start) {
        state := sIdle
      }
    }
  }
}
