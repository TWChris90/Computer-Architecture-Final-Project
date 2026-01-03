package conv

import chisel3._
import chisel3.util._

/**
  * Parameterizable systolic array with row-wise psum chaining
  * (semantic-compatible with legacy PEArray2x2):
  *  - A flows left -> right
  *  - B flows top  -> bottom
  *  - psum chains left -> right within each row
  *
  * IO psum width is (2*w), matching PEArray2x2.io.psum_in/out.
  */
class SystolicArrayRowPsum(val rows: Int, val cols: Int, val w: Int = 8) extends Module {
  private val ioAccW = 2 * w
  private val peAccW = 2 * w + 4   // 跟你 PE.scala 的預設風格一致（w=8時是20）

  val io = IO(new Bundle {
    val a_in    = Input(Vec(rows, SInt(w.W)))
    val b_in    = Input(Vec(cols, SInt(w.W)))
    val psum_in  = Input(Vec(rows, SInt(ioAccW.W)))
    val psum_out = Output(Vec(rows, SInt(ioAccW.W)))
  })

  val pe = Seq.fill(rows, cols)(Module(new PE(w, peAccW)))

  val aWire = Wire(Vec(rows, Vec(cols + 1, SInt(w.W))))
  val bWire = Wire(Vec(rows + 1, Vec(cols, SInt(w.W))))
  val pWire = Wire(Vec(rows, Vec(cols + 1, SInt(peAccW.W)))) // internal psum chain uses peAccW

  // defaults
  for (r <- 0 until rows; c <- 0 until cols + 1) {
    aWire(r)(c) := 0.S
    pWire(r)(c) := 0.S
  }
  for (r <- 0 until rows + 1; c <- 0 until cols) {
    bWire(r)(c) := 0.S
  }

  // injections
  for (r <- 0 until rows) {
    aWire(r)(0) := io.a_in(r)
    pWire(r)(0) := io.psum_in(r).asSInt // widen into peAccW domain
  }
  for (c <- 0 until cols) {
    bWire(0)(c) := io.b_in(c)
  }

  // connect
  for (r <- 0 until rows; c <- 0 until cols) {
    val p = pe(r)(c)
    p.io.a_in    := aWire(r)(c)
    p.io.b_in    := bWire(r)(c)
    p.io.psum_in := pWire(r)(c)

    aWire(r)(c + 1) := p.io.a_out
    bWire(r + 1)(c) := p.io.b_out
    pWire(r)(c + 1) := p.io.psum_out
  }

  // outputs: truncate back to (2*w) to match legacy IO width
  for (r <- 0 until rows) {
    io.psum_out(r) := pWire(r)(cols)(ioAccW - 1, 0).asSInt
  }
}
