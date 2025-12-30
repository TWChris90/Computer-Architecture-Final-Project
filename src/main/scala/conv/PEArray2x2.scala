package conv

import chisel3._

class PEArray2x2(val w: Int) extends Module {
  val io = IO(new Bundle {

    val a_in    = Input(Vec(2, SInt(w.W)))
    val b_in    = Input(Vec(2, SInt(w.W)))
    val psum_in  = Input(Vec(2, SInt((2*w).W)))
    val psum_out = Output(Vec(2, SInt((2*w).W)))
    val a_out    = Output(Vec(2, SInt(w.W)))
    val b_out    = Output(Vec(2, SInt(w.W)))
  })

  // 4 PEs: (row, col)
  val pe00 = Module(new PE(w))
  val pe01 = Module(new PE(w))
  val pe10 = Module(new PE(w))
  val pe11 = Module(new PE(w))

  // -------------------------
  // A flows left -> right (per row)
  // Row 0
  pe00.io.a_in := io.a_in(0)
  pe01.io.a_in := pe00.io.a_out
  // Row 1
  pe10.io.a_in := io.a_in(1)
  pe11.io.a_in := pe10.io.a_out

  // -------------------------
  // B flows top -> bottom (per col)
  // Col 0
  pe00.io.b_in := io.b_in(0)
  pe10.io.b_in := pe00.io.b_out
  // Col 1
  pe01.io.b_in := io.b_in(1)
  pe11.io.b_in := pe01.io.b_out

  // -------------------------
  // psum flows left -> right (per row)
  // Row 0
  pe00.io.psum_in := io.psum_in(0)
  pe01.io.psum_in := pe00.io.psum_out
  io.psum_out(0)  := pe01.io.psum_out
  io.a_out(0)     := pe01.io.a_out

  // Row 1
  pe10.io.psum_in := io.psum_in(1)
  pe11.io.psum_in := pe10.io.psum_out
  io.psum_out(1)  := pe11.io.psum_out
  io.a_out(1)     := pe11.io.a_out

  // bottom b_outs (for debug)
  io.b_out(0) := pe10.io.b_out
  io.b_out(1) := pe11.io.b_out
}
