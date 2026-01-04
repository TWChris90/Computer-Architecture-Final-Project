package conv

import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.matchers.must.Matchers

class FixedPointFormatSmokeSpec extends AnyFreeSpec with Matchers {

  class Wrapper extends Module {
    val w = 8
    val cfg = FixedCfg(dataW = w, frac = 0, mulW = 2*w, accW = 2*w + 4)

    val io = IO(new Bundle {
      val a_in    = Input(Vec(2, SInt(w.W)))
      val b_in    = Input(Vec(2, SInt(w.W)))
      val psum_in = Input(Vec(2, SInt((2*w).W))) // legacy uses 2*w
      val ref_out = Output(Vec(2, SInt((2*w).W)))
      val dut_out = Output(Vec(2, SInt((2*w).W)))
    })

    val ref = Module(new PEArray2x2(w)) // legacy
    val dut = Module(new SystolicArrayRowPsumFixed(2, 2, cfg))

    ref.io.a_in := io.a_in
    ref.io.b_in := io.b_in
    ref.io.psum_in := io.psum_in

    dut.io.a_in := io.a_in
    dut.io.b_in := io.b_in
    dut.io.psum_in(0) := io.psum_in(0).asSInt
    dut.io.psum_in(1) := io.psum_in(1).asSInt

    io.ref_out := ref.io.psum_out
    io.dut_out(0) := dut.io.psum_out(0)(2*w-1, 0).asSInt
    io.dut_out(1) := dut.io.psum_out(1)(2*w-1, 0).asSInt
  }

  "Fixed-point cfg.frac=0 should match legacy integer PEArray2x2" in {
    simulate(new Wrapper) { dut =>
      val cases = Seq(
        (Seq(3, -2), Seq(4, 5), Seq(0, 0)),
        (Seq(-1, 7), Seq(-3, 2), Seq(5, -6)),
        (Seq(12, -5), Seq(6, -4), Seq(10, 20))
      )

      for ((a, b, ps) <- cases) {
        dut.io.a_in(0).poke(a(0)); dut.io.a_in(1).poke(a(1))
        dut.io.b_in(0).poke(b(0)); dut.io.b_in(1).poke(b(1))
        dut.io.psum_in(0).poke(ps(0)); dut.io.psum_in(1).poke(ps(1))

        dut.clock.step()

        val r0 = dut.io.ref_out(0).peek().litValue.toInt
        val r1 = dut.io.ref_out(1).peek().litValue.toInt
        val d0 = dut.io.dut_out(0).peek().litValue.toInt
        val d1 = dut.io.dut_out(1).peek().litValue.toInt

        d0 mustBe r0
        d1 mustBe r1
      }
    }
  }
}
