package conv

import chisel3._
import chisel3.util._

/** Row-wise psum chaining systolic array using PEFixed */
class SystolicArrayRowPsumFixed(rows: Int, cols: Int, cfg: FixedCfg) extends Module {
  val io = IO(new Bundle {
    val a_in     = Input(Vec(rows, SInt(cfg.dataW.W)))
    val b_in     = Input(Vec(cols, SInt(cfg.dataW.W)))
    val psum_in  = Input(Vec(rows, SInt(cfg.accW.W)))
    val psum_out = Output(Vec(rows, SInt(cfg.accW.W)))
  })

  val pe = Seq.fill(rows, cols)(Module(new PEFixed(cfg)))

  val aWire = Wire(Vec(rows, Vec(cols + 1, SInt(cfg.dataW.W))))
  val bWire = Wire(Vec(rows + 1, Vec(cols, SInt(cfg.dataW.W))))
  val pWire = Wire(Vec(rows, Vec(cols + 1, SInt(cfg.accW.W))))

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
    pWire(r)(0) := io.psum_in(r)
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

  for (r <- 0 until rows) {
    io.psum_out(r) := pWire(r)(cols)
  }
}
