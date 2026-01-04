package conv

import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.matchers.must.Matchers

import scala.util.Random

class FixedPointRandomBoundarySpec extends AnyFreeSpec with Matchers {

  // golden: round-to-nearest then >> frac
  private def mulFixed(a: Int, b: Int, frac: Int): Int = {
    val prod = a * b
    if (frac == 0) prod
    else {
      val add = 1 << (frac - 1)
      (prod + add) >> frac
    }
  }

  private def rowOut(a: Int, b0: Int, b1: Int, ps: Int, frac: Int): Int = {
    ps + mulFixed(a, b0, frac) + mulFixed(a, b1, frac)
  }

  private def clampToSIntBits(x: Int, bits: Int): Int = {
    // interpret x as signed with 'bits' bits (two's complement wrap)
    val mask = (1L << bits) - 1
    val y = (x.toLong & mask).toInt
    val signBit = 1 << (bits - 1)
    if ((y & signBit) != 0) y - (1 << bits) else y
  }

  "Random + boundary tests for multiple frac values should match Scala golden" in {
    val w = 8
    val accW = 2 * w + 4

    val fracs = Seq(0, 1, 4, 7)

    for (frac <- fracs) {
      val cfg = FixedCfg(dataW = w, frac = frac, mulW = 2*w, accW = accW)

      simulate(new SystolicArrayRowPsumFixed(2, 2, cfg)) { dut =>

        // ---------- Boundary tests ----------
        // dataW=8 => SInt range [-128, 127]
        val maxP =  127
        val minN = -128
        val psCandidates = Seq(0, 1, -1, 123, -123, 1024, -1024)

        val boundaryCases = Seq(
          (Seq(maxP, maxP), Seq(maxP, maxP)),
          (Seq(minN, minN), Seq(maxP, maxP)),
          (Seq(maxP, minN), Seq(minN, maxP)),
          (Seq(0, 0),       Seq(maxP, minN)),
          (Seq(1, -1),      Seq(1, -1))
        )

        for ((aVec, bVec) <- boundaryCases; ps0 <- psCandidates; ps1 <- psCandidates) {
          dut.io.a_in(0).poke(aVec(0))
          dut.io.a_in(1).poke(aVec(1))
          dut.io.b_in(0).poke(bVec(0))
          dut.io.b_in(1).poke(bVec(1))
          dut.io.psum_in(0).poke(ps0)
          dut.io.psum_in(1).poke(ps1)

          dut.clock.step()

          val out0 = dut.io.psum_out(0).peek().litValue.toInt
          val out1 = dut.io.psum_out(1).peek().litValue.toInt

          val exp0 = clampToSIntBits(rowOut(aVec(0), bVec(0), bVec(1), ps0, frac), accW)
          val exp1 = clampToSIntBits(rowOut(aVec(1), bVec(0), bVec(1), ps1, frac), accW)

          withClue(s"[boundary frac=$frac] row0 a=$aVec b=$bVec ps=($ps0,$ps1): ") { out0 mustBe exp0 }
          withClue(s"[boundary frac=$frac] row1 a=$aVec b=$bVec ps=($ps0,$ps1): ") { out1 mustBe exp1 }
        }

        // ---------- Random tests ----------
        val rng = new Random(20260103 + frac) // 固定 seed，確保可重現
        val N = 500

        def randSmall(): Int = rng.nextInt(128) - 64
        def randPsum(): Int  = rng.nextInt(2048) - 1024

        for (_ <- 0 until N) {
          val a0 = randSmall()
          val a1 = randSmall()
          val b0 = randSmall()
          val b1 = randSmall()
          val ps0 = randPsum()
          val ps1 = randPsum()

          dut.io.a_in(0).poke(a0)
          dut.io.a_in(1).poke(a1)
          dut.io.b_in(0).poke(b0)
          dut.io.b_in(1).poke(b1)
          dut.io.psum_in(0).poke(ps0)
          dut.io.psum_in(1).poke(ps1)

          dut.clock.step()

          val out0 = dut.io.psum_out(0).peek().litValue.toInt
          val out1 = dut.io.psum_out(1).peek().litValue.toInt

          val exp0 = clampToSIntBits(rowOut(a0, b0, b1, ps0, frac), accW)
          val exp1 = clampToSIntBits(rowOut(a1, b0, b1, ps1, frac), accW)

          withClue(s"[random frac=$frac] row0 a=($a0,$a1) b=($b0,$b1) ps=($ps0,$ps1): ") { out0 mustBe exp0 }
          withClue(s"[random frac=$frac] row1 a=($a0,$a1) b=($b0,$b1) ps=($ps0,$ps1): ") { out1 mustBe exp1 }
        }
      }
    }
  }
}
