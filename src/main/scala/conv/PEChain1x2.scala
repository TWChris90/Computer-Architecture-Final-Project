package conv

import chisel3._
import chisel3.util._

class PEChain1x2(val w: Int) extends Module {
  val io = IO(new Bundle {
    val a_in    = Input(SInt(w.W))
    val psum_in = Input(SInt((2*w).W))

    val b_in    = Input(Vec(2, SInt(w.W)))

    val a_out    = Output(SInt(w.W))
    val psum_out = Output(SInt((2*w).W))

    val b_out    = Output(Vec(2, SInt(w.W)))

    // val valid_in  = Input(Bool())
    // val valid_out = Output(Bool())
  })

  val pe0 = Module(new PE(w))
  val pe1 = Module(new PE(w))

  // ---- PE0 ----
  pe0.io.a_in    := io.a_in
  pe0.io.b_in    := io.b_in(0)
  pe0.io.psum_in := io.psum_in
  // pe0.io.valid_in := io.valid_in

  // ---- PE1 ----
  pe1.io.a_in    := pe0.io.a_out
  pe1.io.b_in    := io.b_in(1)
  pe1.io.psum_in := pe0.io.psum_out
  // pe1.io.valid_in := pe0.io.valid_out

  // ---- outputs ----
  io.a_out    := pe1.io.a_out
  io.psum_out := pe1.io.psum_out

  io.b_out(0) := pe0.io.b_out
  io.b_out(1) := pe1.io.b_out

  // io.valid_out := pe1.io.valid_out
}
