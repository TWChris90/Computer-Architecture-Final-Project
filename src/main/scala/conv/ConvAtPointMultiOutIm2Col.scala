package conv

import chisel3._
import chisel3.util._

/**
  * Level-2: Single output position (oh,ow), compute multiple output channels (Cout)
  *
  * For fixed (oh, ow):
  *   for m in [0..Cout-1]:
  *     y[m] = sum_{k=0..K-1} xcol[k] * w[m][k]
  *
  * Notes:
  * - Reuses Im2ColStreamerNCHW; restarts the streamer for each output channel m.
  * - Minimal controller (FSM) to sequence m-loop and k-loop.
  * - stride=1, pad=0 assumed (same as rc.py).
  */
class ConvAtPointMultiOutIm2Col(
  val cout: Int = 3,
  val cin: Int = 2,
  val h: Int = 5,
  val w: Int = 5,
  val kh: Int = 3,
  val kw: Int = 3,
  val dataW: Int = 8,
  val accW: Int = 32
) extends Module {
  require(cout > 0 && cin > 0 && h > 0 && w > 0)
  require(kh > 0 && kw > 0)
  require(accW >= (dataW * 2 + 2))

  private val K = cin * kh * kw
  private val inSize = cin * h * w

  val io = IO(new Bundle {
    // Flattened NCHW input: idx = ((c*h + ih)*w + iw)
    val in = Input(Vec(inSize, SInt(dataW.W)))

    // weights(m)(k) in k-order: c -> kh -> kw
    val weights = Input(Vec(cout, Vec(K, SInt(dataW.W))))

    // output spatial position
    val oh = Input(UInt(log2Ceil(h).W))
    val ow = Input(UInt(log2Ceil(w).W))

    // control
    val start = Input(Bool())

    // results
    val y_out = Output(Vec(cout, SInt(accW.W)))
    val busy  = Output(Bool())
    val done  = Output(Bool())
  })

  // Im2Col streamer instance
  val s = Module(new Im2ColStreamerNCHW(cin, h, w, kh, kw, dataW))
  s.io.in := io.in
  s.io.oh := io.oh
  s.io.ow := io.ow

  // Pulse start to streamer when launching each dot-product
  val streamerStart = RegInit(false.B)
  val pendingStart  = RegInit(false.B)
  s.io.start := streamerStart

  // Controller state
  val yRegs = RegInit(VecInit(Seq.fill(cout)(0.S(accW.W))))
  io.y_out := yRegs

  val acc  = RegInit(0.S(accW.W))
  val kCnt = RegInit(0.U(log2Ceil(K).W))
  val mCnt = RegInit(0.U(log2Ceil(cout).W))

  val busy = RegInit(false.B)
  val done = RegInit(false.B)

  io.busy := busy
  io.done := done

  // defaults each cycle
  streamerStart := false.B

  // launch pending streamer start (1-cycle pulse)
  when (pendingStart) {
    streamerStart := true.B
    pendingStart := false.B
  }

  when (io.start && !busy) {
    // Start a new multi-output computation
    busy := true.B
    done := false.B
    yRegs := VecInit(Seq.fill(cout)(0.S(accW.W)))

    mCnt := 0.U
    kCnt := 0.U
    acc  := 0.S

    // start streamer for m=0
    streamerStart := true.B
  } .elsewhen (busy) {
    when (s.io.valid) {
      val x   = s.io.a_out.asSInt
      val wgt = io.weights(mCnt)(kCnt).asSInt
      val prod = (x * wgt).asSInt
      val accNext = (acc + prod).asSInt

      // update acc
      acc := accNext

      // last k?
      when (kCnt === (K - 1).U) {
        // store y for current m using accNext (includes last product)
        yRegs(mCnt) := accNext

        // move to next m or finish
        when (mCnt === (cout - 1).U) {
          busy := false.B
          done := true.B
        } .otherwise {
          mCnt := mCnt + 1.U
          kCnt := 0.U
          acc  := 0.S
          // restart streamer for next m
          pendingStart := true.B
        }
      } .otherwise {
        kCnt := kCnt + 1.U
      }
    }
  } .otherwise {
    // idle: clear done after 1 cycle pulse
    when (done) { done := false.B }
  }
}
