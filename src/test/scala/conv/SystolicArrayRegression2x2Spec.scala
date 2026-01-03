package conv

import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.matchers.must.Matchers

class SystolicArrayRegression2x2Spec extends AnyFreeSpec with Matchers {

  /** Wrap both legacy and new module into ONE Module to avoid nested simulations */
  class RegressionWrapper(val w: Int = 8) extends Module {
    val io = IO(new Bundle {
      val a_in    = Input(Vec(2, SInt(w.W)))
      val b_in    = Input(Vec(2, SInt(w.W)))
      val psum_in  = Input(Vec(2, SInt((2*w).W)))

      val ref_out = Output(Vec(2, SInt((2*w).W)))
      val dut_out = Output(Vec(2, SInt((2*w).W)))
    })

    val ref = Module(new PEArray2x2(w))                 // legacy :contentReference[oaicite:2]{index=2}
    val dut = Module(new SystolicArrayRowPsum(2, 2, w)) // new, row-wise psum

    ref.io.a_in   := io.a_in
    ref.io.b_in   := io.b_in
    ref.io.psum_in:= io.psum_in

    dut.io.a_in   := io.a_in
    dut.io.b_in   := io.b_in
    dut.io.psum_in:= io.psum_in

    io.ref_out := ref.io.psum_out
    io.dut_out := dut.io.psum_out
  }

  "SystolicArrayRowPsum(2,2) should match PEArray2x2 exactly (regression)" in {
    val w = 8

    val cases = Seq(
      (Seq( 3, -2), Seq( 4,  5), Seq(0, 0)),
      (Seq(-1,  7), Seq(-3,  2), Seq(5, -6)),
      (Seq(12, -5), Seq( 6, -4), Seq(10, 20))
    )

    simulate(new RegressionWrapper(w)) { dut =>
      for ((aVec, bVec, psVec) <- cases) {
        dut.io.a_in(0).poke(aVec(0))
        dut.io.a_in(1).poke(aVec(1))
        dut.io.b_in(0).poke(bVec(0))
        dut.io.b_in(1).poke(bVec(1))
        dut.io.psum_in(0).poke(psVec(0))
        dut.io.psum_in(1).poke(psVec(1))

        dut.clock.step()

        val ref0 = dut.io.ref_out(0).peek().litValue.toInt
        val ref1 = dut.io.ref_out(1).peek().litValue.toInt
        val out0 = dut.io.dut_out(0).peek().litValue.toInt
        val out1 = dut.io.dut_out(1).peek().litValue.toInt

        withClue(s"Row0 mismatch a=$aVec b=$bVec ps=$psVec: ") { out0 mustBe ref0 }
        withClue(s"Row1 mismatch a=$aVec b=$bVec ps=$psVec: ") { out1 mustBe ref1 }
      }
    }
  }
}
