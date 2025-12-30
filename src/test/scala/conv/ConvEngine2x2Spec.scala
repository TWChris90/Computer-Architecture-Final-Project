package conv

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec

class ConvEngine2x2Spec extends AnyFreeSpec with ChiselScalatestTester {

  "ConvEngine2x2 should compute y = sum(x_ij * w_ij) correctly" in {
    test(new ConvEngine2x2(w = 8)) { dut =>

      val x = Seq(3,  4,  2,  1)   // x00 x01 x10 x11
      val k = Seq(2,  5, -3,  6)   // w00 w01 w10 w11

      // 期望 y
      val expY = x(0)*k(0) + x(1)*k(1) + x(2)*k(2) + x(3)*k(3)

      // poke inputs
      for (i <- 0 until 4) {
        dut.io.x(i).poke(x(i).S)
        dut.io.k(i).poke(k(i).S)
      }

      dut.clock.step(1)
      dut.io.y.expect(expY.S)
    }
  }

  "ConvEngine2x2 should work on multiple random-like vectors" in {
    test(new ConvEngine2x2(w = 8)) { dut =>

      val tests = Seq(
        (Seq(1, 2, 3, 4),   Seq(1, 1, 1, 1)),
        (Seq(-2, 3, -1, 2), Seq(4, -1, 2, 3)),
        (Seq(0, 5, 0, -3),  Seq(7, 2, -6, 1))
      )

      for ((x, k) <- tests) {
        val expY = x(0)*k(0) + x(1)*k(1) + x(2)*k(2) + x(3)*k(3)

        for (i <- 0 until 4) {
          dut.io.x(i).poke(x(i).S)
          dut.io.k(i).poke(k(i).S)
        }

        dut.clock.step(1)
        dut.io.y.expect(expY.S)
      }
    }
  }
}
