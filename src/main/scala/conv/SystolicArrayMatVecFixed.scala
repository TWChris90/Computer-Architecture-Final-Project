package conv

import chisel3._
import chisel3.util._

/** Spatial-K unrolled MatVec (rows=Cout, cols=K)
  * y[r] = sum_{c=0..K-1} a[r][c] * b[c] + psum_in[r]
  */
class SystolicArrayMatVecFixed(rows: Int, cols: Int, cfg: FixedCfg) extends Module {
  val io = IO(new Bundle {
    val a_in     = Input(Vec(rows, Vec(cols, SInt(cfg.dataW.W)))) // weights
    val b_in     = Input(Vec(cols, SInt(cfg.dataW.W)))            // activations
    val psum_in  = Input(Vec(rows, SInt(cfg.accW.W)))
    val psum_out = Output(Vec(rows, SInt(cfg.accW.W)))
  })

  val pWire = Wire(Vec(rows, Vec(cols + 1, SInt(cfg.accW.W))))
  for (r <- 0 until rows) {
    pWire(r)(0) := io.psum_in(r)
  }

  for (r <- 0 until rows) {
    for (c <- 0 until cols) {
      val pe = Module(new PEFixed(cfg))
      pe.io.a_in    := io.a_in(r)(c)
      pe.io.b_in    := io.b_in(c)
      pe.io.psum_in := pWire(r)(c)
      pWire(r)(c + 1) := pe.io.psum_out
    }
    io.psum_out(r) := pWire(r)(cols)
  }
}
