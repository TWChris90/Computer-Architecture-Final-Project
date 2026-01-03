package conv

import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.matchers.must.Matchers

class SystolicArraySpec extends AnyFreeSpec with Matchers {

  "SystolicArray 2x2 should perform MAC correctly" in {
    val w = 8
    val accW = 2 * w + 8

    simulate(new SystolicArray(2, 2, w, accW)) { dut =>
      // input
      val a = Seq(3, -2)
      val b = Seq(4, 5)

      // initialize
      for (r <- 0 until 2) {
        dut.io.a_in(r).poke(a(r).S)
      }
      for (c <- 0 until 2) {
        dut.io.b_in(c).poke(b(c).S)
      }
      for (r <- 0 until 2; c <- 0 until 2) {
        dut.io.psum_in(r)(c).poke(0.S)
      }

      dut.clock.step()

      // expected:
      // (0,0) = 3*4
      // (0,1) = 3*5
      // (1,0) = -2*4
      // (1,1) = -2*5
      val expected = Seq(
        Seq(12, 15),
        Seq(-8, -10)
      )

      for (r <- 0 until 2; c <- 0 until 2) {
        val got = dut.io.psum_out(r)(c).peek().litValue.toInt
        got mustBe expected(r)(c)
      }
    }
  }
}
