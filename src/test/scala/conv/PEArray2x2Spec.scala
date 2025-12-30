package conv

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec

class PEArray2x2Spec extends AnyFreeSpec with ChiselScalatestTester {

  "PEArray2x2 should compute per-row psum correctly and propagate a/b" in {
    test(new PEArray2x2(w = 8)) { dut =>

      val a0 = 3
      val a1 = 4

      val b0 = 2
      val b1 = 5

      val ps0 = 1
      val ps1 = 0

      // poke
      dut.io.a_in(0).poke(a0.S)
      dut.io.a_in(1).poke(a1.S)
      dut.io.b_in(0).poke(b0.S)
      dut.io.b_in(1).poke(b1.S)
      dut.io.psum_in(0).poke(ps0.S)
      dut.io.psum_in(1).poke(ps1.S)

      dut.clock.step(1)

      val exp0 = ps0 + a0*b0 + a0*b1
      val exp1 = ps1 + a1*b0 + a1*b1

      dut.io.psum_out(0).expect(exp0.S)
      dut.io.psum_out(1).expect(exp1.S)

      dut.io.a_out(0).expect(a0.S)
      dut.io.a_out(1).expect(a1.S)

      dut.io.b_out(0).expect(b0.S)
      dut.io.b_out(1).expect(b1.S)
    }
  }
}
