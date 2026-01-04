package conv

import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.matchers.must.Matchers

class FixedPointGoldenSpec extends AnyFreeSpec with Matchers {

  // Scala golden: fixed-point multiply with rounding then >> frac
  private def mulFixed(a: Int, b: Int, frac: Int): Int = {
    val prod = a * b
    if (frac == 0) prod
    else {
      val add = 1 << (frac - 1)   // rounding-to-nearest
      (prod + add) >> frac
    }
  }

  private def rowOut(a: Int, b0: Int, b1: Int, ps: Int, frac: Int): Int = {
    ps + mulFixed(a, b0, frac) + mulFixed(a, b1, frac)
  }

  "Fixed-point Q format (e.g., Q4.4) should match Scala golden model" in {
    val w = 8
    val frac = 4
    val cfg = FixedCfg(dataW = w, frac = frac, mulW = 2*w, accW = 2*w + 4)

    simulate(new SystolicArrayRowPsumFixed(2, 2, cfg)) { dut =>
      val cases = Seq(
        (Seq( 16,  -8), Seq( 16,  32), Seq(0, 0)),  // 16 代表 1.0 (Q4.4), 32 代表 2.0
        (Seq(  8,  24), Seq( -8,  16), Seq(5, -6)),
        (Seq(-16,  12), Seq( 24, -20), Seq(10, 20))
      )

      for ((a, b, ps) <- cases) {
        dut.io.a_in(0).poke(a(0))
        dut.io.a_in(1).poke(a(1))
        dut.io.b_in(0).poke(b(0))
        dut.io.b_in(1).poke(b(1))
        dut.io.psum_in(0).poke(ps(0))
        dut.io.psum_in(1).poke(ps(1))

        dut.clock.step()

        val out0 = dut.io.psum_out(0).peek().litValue.toInt
        val out1 = dut.io.psum_out(1).peek().litValue.toInt

        val exp0 = rowOut(a(0), b(0), b(1), ps(0), frac)
        val exp1 = rowOut(a(1), b(0), b(1), ps(1), frac)

        withClue(s"Row0 mismatch a=${a(0)} b=${b} ps=${ps(0)}: ") { out0 mustBe exp0 }
        withClue(s"Row1 mismatch a=${a(1)} b=${b} ps=${ps(1)}: ") { out1 mustBe exp1 }
      }
    }
  }
}
