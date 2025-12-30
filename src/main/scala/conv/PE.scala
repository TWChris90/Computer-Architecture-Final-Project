package conv

import chisel3._

/**
  * Minimal Systolic Processing Element (PE)
  *
  * Behavior per cycle (combinational in this minimal version):
  *   psum_out = psum_in + a_in * b_in
  *   a_out    = a_in   (forward to the right)
  *   b_out    = b_in   (forward to the bottom)
  *
  * Notes on bitwidth:
  * - a_in and b_in are w-bit signed
  * - a_in * b_in needs up to 2w bits
  * - psum_in/psum_out are set to accW bits (>= 2w) for accumulation safety
  */
class PE(val w: Int = 8, val accW: Int = 2 * 8 + 4) extends Module {
  require(accW >= 2 * w, s"accW must be >= 2*w (accW=$accW, w=$w)")

  val io = IO(new Bundle {
    val a_in    = Input(SInt(w.W))
    val b_in    = Input(SInt(w.W))
    val psum_in = Input(SInt(accW.W))

    val a_out    = Output(SInt(w.W))
    val b_out    = Output(SInt(w.W))
    val psum_out = Output(SInt(accW.W))
  })

  // systolic forwarding
  io.a_out := io.a_in
  io.b_out := io.b_in

  // MAC
  val prod = (io.a_in * io.b_in).asSInt  // width ~ 2w
  io.psum_out := io.psum_in + prod
}
