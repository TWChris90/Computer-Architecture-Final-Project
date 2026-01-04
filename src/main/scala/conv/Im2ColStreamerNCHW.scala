package conv

import chisel3._
import chisel3.util._

/**
  * Minimal Im2Col Streamer (NCHW, N=1)
  *
  * For a given output position (oh, ow), stream the flattened patch:
  *   k = (((c * Kh) + kh) * Kw) + kw
  *   a_out = input[c][oh + kh][ow + kw]
  *
  * This minimal version assumes:
  *   - stride = 1
  *   - pad = 0
  *   - (oh, ow) always in valid range
  *
  * Handshake:
  *   - pulse start=1 for 1 cycle to begin streaming K=Cin*Kh*Kw elements
  *   - valid stays high while streaming
  *   - done is asserted when the current output is the last element (k==K-1)
  */
class Im2ColStreamerNCHW(
  val cin: Int = 2,
  val h: Int = 5,
  val w: Int = 5,
  val kh: Int = 3,
  val kw: Int = 3,
  val dataW: Int = 8
) extends Module {
  require(cin > 0 && h > 0 && w > 0)
  require(kh > 0 && kw > 0)

  private val K = cin * kh * kw
  private val inSize = cin * h * w

  val io = IO(new Bundle {
    // Flattened NCHW input: idx = ((c*h + ih)*w + iw)
    val in = Input(Vec(inSize, SInt(dataW.W)))

    // output spatial position
    val oh = Input(UInt(log2Ceil(h).W))
    val ow = Input(UInt(log2Ceil(w).W))

    // control
    val start = Input(Bool())

    // stream output
    val a_out = Output(SInt(dataW.W))
    val valid = Output(Bool())
    val done  = Output(Bool())
  })

  val running = RegInit(false.B)
  val kIdx    = RegInit(0.U(log2Ceil(K).W))

  when (io.start) {
    running := true.B
    kIdx := 0.U
  } .elsewhen (running) {
    when (kIdx === (K - 1).U) {
      running := false.B
    } .otherwise {
      kIdx := kIdx + 1.U
    }
  }

  // Decode k -> (c, kh, kw)
  val kPerC = (kh * kw).U
  val cIdx  = (kIdx / kPerC)
  val rem   = (kIdx % kPerC)
  val khIdx = (rem / kw.U)
  val kwIdx = (rem % kw.U)

  val ih = io.oh + khIdx
  val iw = io.ow + kwIdx

  // addr = ((c*h + ih)*w + iw)
  val addrWide = (cIdx * h.U + ih) * w.U + iw
  val addr = addrWide(log2Ceil(inSize)-1, 0)
  // outputs
  io.valid := running
  io.done  := running && (kIdx === (K - 1).U)
  io.a_out := Mux(running, io.in(addr), 0.S)
}
