package conv

import chisel3._
import chisel3.util._

class ConvEngine2x2(val w: Int) extends Module {
  val outW = 2 * w + 2
  val io = IO(new Bundle {
    // patch: x00 x01 x10 x11
    val x = Input(Vec(4, SInt(w.W)))
    // kernel: w00 w01 w10 w11
    val k = Input(Vec(4, SInt(w.W)))
    val y = Output(SInt(outW.W))
  })

  val pe00 = Module(new PE(w))
  val pe01 = Module(new PE(w))
  val pe10 = Module(new PE(w))
  val pe11 = Module(new PE(w))

  // Row 0: x00*w00 + x01*w01
  pe00.io.a_in    := io.x(0)       // x00
  pe00.io.b_in    := io.k(0)       // w00
  pe00.io.psum_in := 0.S((2*w).W)  // psum = 0

  pe01.io.a_in    := io.x(1)       // x01
  pe01.io.b_in    := io.k(1)       // w01
  pe01.io.psum_in := pe00.io.psum_out

  // Row 1: x10*w10 + x11*w11
  pe10.io.a_in    := io.x(2)       // x10
  pe10.io.b_in    := io.k(2)       // w10
  pe10.io.psum_in := 0.S((2*w).W)

  pe11.io.a_in    := io.x(3)       // x11
  pe11.io.b_in    := io.k(3)       // w11
  pe11.io.psum_in := pe10.io.psum_out

  io.y := pe01.io.psum_out + pe11.io.psum_out
}
