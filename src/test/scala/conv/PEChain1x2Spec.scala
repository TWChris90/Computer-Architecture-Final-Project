package conv

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec

import scala.collection.mutable

class PEChain1x2Spec extends AnyFreeSpec with ChiselScalatestTester {

  "PEChain1x2 should propagate a and accumulate psum correctly (systolic timing)" in {
    test(new PEChain1x2(w = 8)).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      val aDelayToPE1    = mutable.Queue[Int]()
      val psumDelayToPE1 = mutable.Queue[Int]()

      def stepOnce(a: Int, b0: Int, b1: Int, psumIn: Int): Unit = {
        //poke inputs
        dut.io.a_in.poke(a.S)
        dut.io.b_in(0).poke(b0.S)
        dut.io.b_in(1).poke(b1.S)
        dut.io.psum_in.poke(psumIn.S)

        val p0_now = psumIn + a*b0

        aDelayToPE1.enqueue(a)
        psumDelayToPE1.enqueue(p0_now)

        val a_seen_by_pe1    = aDelayToPE1.dequeue()
        val psum_seen_by_pe1 = psumDelayToPE1.dequeue()

        val p1_now = psum_seen_by_pe1 + a_seen_by_pe1*b1

        //tick
        dut.clock.step(1)

        //check outputs
      }

      dut.io.a_in.poke(0.S)
      dut.io.b_in(0).poke(0.S)
      dut.io.b_in(1).poke(0.S)
      dut.io.psum_in.poke(0.S)
      dut.clock.step(2)

      val vec = Seq(
        (3, 2, 5, 1),   // a=3, b0=2, b1=5, psum=1
        (4, 1, 7, 0),
        (2, -3, 6, 10)
      )

      val expectPsumOut = mutable.Queue[Int]()
      val expectAOut    = mutable.Queue[Int]()

      for ((a, b0, b1, ps) <- vec) {
        val p0 = ps + a*b0
        val p1 = p0 + a*b1
        expectPsumOut.enqueue(p1)
        expectAOut.enqueue(a)

        // poke + step
        dut.io.a_in.poke(a.S)
        dut.io.b_in(0).poke(b0.S)
        dut.io.b_in(1).poke(b1.S)
        dut.io.psum_in.poke(ps.S)
        dut.clock.step(1)

        val expP = expectPsumOut.dequeue()
        val expA = expectAOut.dequeue()
        dut.io.psum_out.expect(expP.S)
        dut.io.a_out.expect(expA.S)
      }
    }
  }
}
