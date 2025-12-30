package conv

import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.matchers.must.Matchers

import java.io.File
import scala.io.Source

class RegularConvMultiCaseSpec extends AnyFreeSpec with Matchers {

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

  private def listCases(baseDir: String): Seq[File] = {
    val base = new File(baseDir)
    val cases = Option(base.listFiles()).getOrElse(Array.empty)
      .filter(f => f.isDirectory && f.getName.startsWith("case"))
      .sortBy(_.getName.stripPrefix("case").toInt)
    cases.toSeq
  }

  private def runOneCase(dir: File): Unit = {
    val inVec  = readInts(new File(dir, "input.txt").getPath)
    val wVec   = readInts(new File(dir, "weight.txt").getPath)
    val golden = readInts(new File(dir, "output_expected.txt").getPath)

    //RegularConv(5,5,1,1,3,3)
    simulate(new RegularConv(5, 5, 1, 1, 3, 3)) { dut =>

      // input: (c)(h)(w)
      var idx = 0
      for (c <- 0 until 1; h <- 0 until 5; w <- 0 until 5) {
        dut.io.input(c)(h)(w).poke(inVec(idx).S)
        idx += 1
      }
      idx mustBe 25

      // weight: (f)(c)(kh)(kw)
      idx = 0
      for (f <- 0 until 1; c <- 0 until 1; kh <- 0 until 3; kw <- 0 until 3) {
        dut.io.weights(f)(c)(kh)(kw).poke(wVec(idx).S)
        idx += 1
      }
      idx mustBe 9

      dut.clock.step()

      // output: (f)(w)(h)
      idx = 0
      for (f <- 0 until 1; w <- 0 until 3; h <- 0 until 3) {
        val observed = dut.io.output(f)(w)(h).peek().litValue.toInt
        val expected = golden(idx)
        withClue(s"[${dir.getName}] mismatch at (f=$f,w=$w,h=$h) idx=$idx: ") {
          observed mustBe expected
        }
        idx += 1
      }
      idx mustBe 9
    }
  }

  "RegularConv multi-case should match PyTorch golden for all cases" in {
    val baseDir = "tests/vectors"
    val cases = listCases(baseDir)

    cases.nonEmpty mustBe true

    for (dir <- cases) {
      println(s"[RUN] ${dir.getName}")
      runOneCase(dir)
    }
  }
}
