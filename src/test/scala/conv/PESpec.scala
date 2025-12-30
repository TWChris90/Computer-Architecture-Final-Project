package conv

import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.matchers.must.Matchers

class PESpec extends AnyFreeSpec with Matchers {

  "PE should perform MAC and forward a/b correctly" in {
    val w = 8
    val accW = 2 * w + 8
    val cases = Seq(
      // (a, b, psum_in)
      (  3,   4,   0),    // 0 + 12
      ( -2,   7,   5),    // 5 + (-14)
      ( -3,  -6, -10),    // -10 + 18
      ( 12,  -5, 100)     // 100 + (-60)
    )

    simulate(new PE(w, accW)) { dut =>
      for ((a, b, ps) <- cases) {
        dut.io.a_in.poke(a.S)
        dut.io.b_in.poke(b.S)
        dut.io.psum_in.poke(ps.S)

        dut.clock.step()

        val expected = ps + a * b
        val observed = dut.io.psum_out.peek().litValue.toInt

        withClue(s"MAC mismatch (a=$a, b=$b, psum_in=$ps): ") {
          observed mustBe expected
        }

        // forwarding check
        val aFwd = dut.io.a_out.peek().litValue.toInt
        val bFwd = dut.io.b_out.peek().litValue.toInt
        withClue(s"a_out forwarding mismatch (a=$a): ") { aFwd mustBe a }
        withClue(s"b_out forwarding mismatch (b=$b): ") { bFwd mustBe b }
      }
    }
  }
}
