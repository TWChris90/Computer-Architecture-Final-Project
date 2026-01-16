package conv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class SystolicArrayVerilatorSpec extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "SystolicArray (Verilator)"

  it should "perform MAC correctly in Verilator" in {
    val w = 8
    val accW = 2 * w + 8

    val vcd = sys.env.get("VCD").isDefined
    val ann = Seq(VerilatorBackendAnnotation) ++ (if (vcd) Seq(WriteVcdAnnotation) else Seq())

    test(new SystolicArray(2, 2, w, accW)).withAnnotations(ann) { dut =>
      val a = Seq(3, -2)
      val b = Seq(4, 5)

      for (r <- 0 until 2) { dut.io.a_in(r).poke(a(r).S) }
      for (c <- 0 until 2) { dut.io.b_in(c).poke(b(c).S) }
      for (r <- 0 until 2; c <- 0 until 2) { dut.io.psum_in(r)(c).poke(0.S) }

      dut.clock.step()

      val expected = Seq(
        Seq(12, 15),
        Seq(-8, -10)
      )

      for (r <- 0 until 2; c <- 0 until 2) {
        dut.io.psum_out(r)(c).expect(expected(r)(c).S)
      }
    }
  }
}
