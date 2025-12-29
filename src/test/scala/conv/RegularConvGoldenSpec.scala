package conv

import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.matchers.must.Matchers

import scala.io.Source

class RegularConvGoldenSpec extends AnyFreeSpec with Matchers {

  private def readInts(path: String): Seq[Int] = {
    val src = Source.fromFile(path)
    try {
      src.getLines()
        .map(_.trim)
        .filter(s => s.nonEmpty && !s.startsWith("#"))
        .map(_.toInt)
        .toSeq
    } finally src.close()
  }

  "RegularConv(5,5,1,1,3,3) should match PyTorch golden (case0)" in {
    val dir = "tests/vectors/case0"
    val inVec  = readInts(s"$dir/input.txt")            // 25
    val wVec   = readInts(s"$dir/weight.txt")           // 9
    val golden = readInts(s"$dir/output_expected.txt")  // 9

    //RegularConv(w_in=5, h_in=5, d_in=1, d_out=1, w_filt=3, h_filt=3)
    simulate(new RegularConv(5, 5, 1, 1, 3, 3)) { dut =>

      // 1) Poke input：io.input(c)(w)(h)
      var idx = 0
      for (c <- 0 until 1; h <- 0 until 5; w <- 0 until 5) {
        dut.io.input(c)(h)(w).poke(inVec(idx).S)
        idx += 1
      }
      idx mustBe 25

      // 2) Poke weights：io.weights(f)(c)(w)(h)
      idx = 0
      for (f <- 0 until 1; c <- 0 until 1; kh <- 0 until 3; kw <- 0 until 3) {
      dut.io.weights(f)(c)(kh)(kw).poke(wVec(idx).S)
      idx += 1
      }
      idx mustBe 9

      dut.clock.step()

      // 3)read output：io.output(f)(w)(h)
      idx = 0
      for (f <- 0 until 1; w <- 0 until 3; h <- 0 until 3) {
        val observed = dut.io.output(f)(w)(h).peek().litValue.toInt
        val expected = golden(idx)
        withClue(s"Mismatch at (f=$f, w=$w, h=$h), idx=$idx: ") {
          observed mustBe expected
        }
        idx += 1
      }
      idx mustBe 9
    }
  }
}
