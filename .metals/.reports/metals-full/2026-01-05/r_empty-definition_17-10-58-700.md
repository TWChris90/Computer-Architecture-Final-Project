error id: file://<WORKSPACE>/src/main/scala/conv/RegularConvFull_SA.scala:`<none>`.
file://<WORKSPACE>/src/main/scala/conv/RegularConvFull_SA.scala
empty definition using pc, found symbol in pc: `<none>`.
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -chisel3/kh.
	 -chisel3/kh#
	 -chisel3/kh().
	 -chisel3/util/kh.
	 -chisel3/util/kh#
	 -chisel3/util/kh().
	 -kh.
	 -kh#
	 -kh().
	 -scala/Predef.kh.
	 -scala/Predef.kh#
	 -scala/Predef.kh().
offset: 1410
uri: file://<WORKSPACE>/src/main/scala/conv/RegularConvFull_SA.scala
text:
```scala
package conv

import chisel3._
import chisel3.util._

/** Level 3 (SA-based): RegularConvFull with spatial K unrolling.
  *
  * - Use Im2ColStreamerNCHW to stream x for each (oh, ow).
  * - Capture K = cin*kh*kw elements into xBuf.
  * - Compute yVec (Cout) in one shot using SystolicArrayMatVecFixed(rows=cout, cols=K).
  * - Write to y_out(m)(pos).
  */
class RegularConvFull_SA(
  cin: Int, cout: Int,
  h: Int, w: Int,
  kh: Int, kw: Int,
  cfg: FixedCfg
) extends Module {

  val K = cin * kh * kw
  val hout = h - kh + 1
  val wout = w - kw + 1
  val outSize = hout * wout

  val io = IO(new Bundle {
    val start = Input(Bool())

    // x_in: [cin][h*w] flattened NCHW (same convention as your Im2Col modules)
    val x_in  = Input(Vec(cin, Vec(h*w, SInt(cfg.dataW.W))))

    // w: [cout][K] where K = cin*kh*kw, matching Im2Col order
    val w_in  = Input(Vec(cout, Vec(K, SInt(cfg.dataW.W))))

    // y_out: [cout][hout*wout]
    val y_out = Output(Vec(cout, Vec(outSize, SInt(cfg.accW.W))))

    val done  = Output(Bool())
  })

  // output regs
  private val yInitRow: Vec[SInt] =
    VecInit(Seq.fill(outSize)(0.S(cfg.accW.W)))

  private val yInit: Vec[Vec[SInt]] =
    VecInit(Seq.fill(cout)(yInitRow))

  val yReg = RegInit(yInit)

  io.y_out := yReg

  // Im2Col streamer for a single (oh, ow) position at a time
  val im2col = Module(new Im2ColStreamerNCHW(
    cin = cin, h = h, w = w, kh = @@kh, kw = kw, cfg = cfg
  ))

  // Control to im2col
  val posReg = RegInit(0.U(log2Ceil(outSize).W))
  val capIdx = RegInit(0.U(log2Ceil(K + 1).W))
  val xBuf   = RegInit(VecInit(Seq.fill(K)(0.S(cfg.dataW.W))))

  // Connect x to im2col, and choose current (oh,ow)
  im2col.io.x_in := io.x_in

  val oh = (posReg / wout.U)
  val ow = (posReg % wout.U)
  im2col.io.oh := oh
  im2col.io.ow := ow

  // SA core: rows=cout, cols=K
  val sa = Module(new SystolicArrayMatVecFixed(rows = cout, cols = K, cfg = cfg))
  for (m <- 0 until cout) {
    for (k <- 0 until K) {
      sa.io.a_in(m)(k) := io.w_in(m)(k)
    }
    sa.io.psum_in(m) := 0.S(cfg.accW.W)
  }
  for (k <- 0 until K) {
    sa.io.b_in(k) := xBuf(k)
  }

  // FSM
  val sIdle :: sCap :: sWrite :: sDone :: Nil = Enum(4)
  val state = RegInit(sIdle)

  switch(state) {
    is(sIdle) {
      doneReg := false.B
      posReg := 0.U
      capIdx := 0.U
      // (optional) clear yReg here if you want deterministic before start
      when(io.start) {
        state := sCap
      }
    }

    is(sCap) {
      // Capture K im2col outputs for this (oh,ow)
      when(im2col.io.valid) {
        xBuf(capIdx) := im2col.io.a_out
        capIdx := capIdx + 1.U
        when(capIdx === (K-1).U) {
          state := sWrite
        }
      }
    }

    is(sWrite) {
      // SA is combinational, xBuf and w_in stable -> directly write results
      for (m <- 0 until cout) {
        yReg(m)(posReg) := sa.io.psum_out(m)
      }

      // move to next output position
      when(posReg === (outSize-1).U) {
        state := sDone
      }.otherwise {
        posReg := posReg + 1.U
        capIdx := 0.U
        state := sCap
      }
    }

    is(sDone) {
      doneReg := true.B
      when(!io.start) { // simple handshake: drop start to re-arm
        state := sIdle
      }
    }
  }
}

```


#### Short summary: 

empty definition using pc, found symbol in pc: `<none>`.