package conv

import chisel3._
import chisel3.util._

/**
  * Level-1 minimal end-to-end:
  *   - NCHW, N=1
  *   - Compute ONE output value y[m, oh, ow] for a single filter (m fixed by provided weights)
  *   - Uses Im2ColStreamerNCHW to stream K=Cin*Kh*Kw activations
  *   - Accumulates dot-product with provided flattened weights (same k order: c->kh->kw)
  *
  * This is intentionally minimal:
  *   - stride=1, pad=0
  *   - assumes (oh,ow) is valid
  *   - no tiling, no multi-output, no buffering
  */
class ConvAtPointIm2Col(
  val cin: Int = 2,
  val h: Int = 5,
  val w: Int = 5,
  val kh: Int = 3,
  val kw: Int = 3,
  val dataW: Int = 8,
  val accW: Int = 32
) extends Module {
  require(cin > 0 && h > 0 && w > 0)
  require(kh > 0 && kw > 0)
  require(accW >= (dataW * 2 + 2))

  private val K = cin * kh * kw
  private val inSize = cin * h * w

  val io = IO(new Bundle {
    // Flattened NCHW input: idx = ((c*h + ih)*w + iw)
    val in = Input(Vec(inSize, SInt(dataW.W)))

    // Flattened weights for ONE filter:
    // k order: c -> kh -> kw
    val weights = Input(Vec(K, SInt(dataW.W)))

    // output spatial position
    val oh = Input(UInt(log2Ceil(h).W))
    val ow = Input(UInt(log2Ceil(w).W))

    // control
    val start = Input(Bool())

    // result
    val y_out = Output(SInt(accW.W))
    val done  = Output(Bool())
    val busy  = Output(Bool())
  })

  // Instantiate Im2Col streamer
  val s = Module(new Im2ColStreamerNCHW(cin, h, w, kh, kw, dataW))
  s.io.in := io.in
  s.io.oh := io.oh
  s.io.ow := io.ow

  val streamerStart = RegInit(false.B)
  s.io.start := streamerStart

  // Accumulate dot-product
  val acc  = RegInit(0.S(accW.W))
  val kCnt = RegInit(0.U(log2Ceil(K).W))
  val busy = RegInit(false.B)
  val done = RegInit(false.B)

  io.y_out := acc
  io.busy  := busy
  io.done  := done

  // default
  streamerStart := false.B

  when (io.start && !busy) {
    // kick off a new run
    busy := true.B
    done := false.B
    acc := 0.S
    kCnt := 0.U
    streamerStart := true.B  // 1-cycle pulse
  } .elsewhen (busy) {
    when (s.io.valid) {
      val x = s.io.a_out.asSInt
      val wgt = io.weights(kCnt).asSInt
      val prod = (x * wgt).asSInt  // width grows automatically
      acc := acc + prod.asSInt

      // advance k counter while streaming
      when (kCnt === (K - 1).U) {
        // this should coincide with s.io.done
        busy := false.B
        done := true.B
      } .otherwise {
        kCnt := kCnt + 1.U
      }
    }
  } .otherwise {
    // idle state: keep done asserted for 1 cycle after finishing, then clear
    when (done) { done := false.B }
  }
}
