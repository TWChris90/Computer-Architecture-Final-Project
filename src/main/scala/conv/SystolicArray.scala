package conv

import chisel3._
import chisel3.util._

/**
  * Parameterizable Systolic Array
  *
  * - rows x cols PE array
  * - a flows to the right
  * - b flows downward
  * - psum is provided externally per PE
  *
  * This module is NEW and does NOT replace PEArray2x2 yet.
  */
class SystolicArray(
  val rows: Int,
  val cols: Int,
  val w: Int = 8,
  val accW: Int = 2 * 8 + 4
) extends Module {

  val io = IO(new Bundle {
    // inject from left and top
    val a_in = Input(Vec(rows, SInt(w.W)))
    val b_in = Input(Vec(cols, SInt(w.W)))

    // per-PE psum input
    val psum_in = Input(Vec(rows, Vec(cols, SInt(accW.W))))

    // per-PE psum output
    val psum_out = Output(Vec(rows, Vec(cols, SInt(accW.W))))
  })

  // ------------------------------------------------------------------
  // PE array
  // ------------------------------------------------------------------
  val pe = Seq.fill(rows, cols)(Module(new PE(w, accW)))

  // interconnect wires
  val aWire = Wire(Vec(rows, Vec(cols + 1, SInt(w.W))))
  val bWire = Wire(Vec(rows + 1, Vec(cols, SInt(w.W))))

  // default zero (avoid unconnected wires)
  for (r <- 0 until rows) {
    for (c <- 0 until cols + 1) {
      aWire(r)(c) := 0.S
    }
  }
  for (r <- 0 until rows + 1) {
    for (c <- 0 until cols) {
      bWire(r)(c) := 0.S
    }
  }

  // edge injection
  for (r <- 0 until rows) {
    aWire(r)(0) := io.a_in(r)
  }
  for (c <- 0 until cols) {
    bWire(0)(c) := io.b_in(c)
  }

  // connect PE array
  for (r <- 0 until rows) {
    for (c <- 0 until cols) {
      val p = pe(r)(c)

      p.io.a_in    := aWire(r)(c)
      p.io.b_in    := bWire(r)(c)
      p.io.psum_in := io.psum_in(r)(c)

      aWire(r)(c + 1) := p.io.a_out
      bWire(r + 1)(c) := p.io.b_out
      io.psum_out(r)(c) := p.io.psum_out
    }
  }
}
