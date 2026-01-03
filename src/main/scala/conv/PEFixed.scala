package conv

import chisel3._
import chisel3.util._

/** Fixed-point PE:
  * psum_out = psum_in + round( (a_in * b_in) >> frac )
  *
  * All signals are stored as SInt with implicit scaling by cfg.frac.
  */
class PEFixed(cfg: FixedCfg) extends Module {
  val io = IO(new Bundle {
    val a_in    = Input(SInt(cfg.dataW.W))
    val b_in    = Input(SInt(cfg.dataW.W))
    val psum_in = Input(SInt(cfg.accW.W))

    val a_out    = Output(SInt(cfg.dataW.W))
    val b_out    = Output(SInt(cfg.dataW.W))
    val psum_out = Output(SInt(cfg.accW.W))
  })

  // forward
  io.a_out := io.a_in
  io.b_out := io.b_in

  // multiply (widen)
  val prod = (io.a_in.asSInt * io.b_in.asSInt).asSInt  // width about 2*dataW

  // align back to fixed-point scale: >> frac with rounding-to-nearest
  // rounding: add 2^(frac-1) before shifting (for frac>0)
  val rounded =
    if (cfg.frac == 0) {
      prod
    } else {
      val add = (1.S << (cfg.frac - 1)).asSInt
      (prod + add).asSInt
    }

  val scaled = (rounded >> cfg.frac).asSInt

  // widen scaled to accW
  val scaledAcc = Wire(SInt(cfg.accW.W))
  scaledAcc := scaled.asSInt

  // accumulate (no saturation in Step 2)
  io.psum_out := io.psum_in + scaledAcc
}
