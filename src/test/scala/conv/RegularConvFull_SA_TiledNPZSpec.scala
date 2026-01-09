package conv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

import java.io.PrintWriter
import java.nio.file.{Files, Paths}
import scala.io.Source

class RegularConvFull_SA_TiledNPZSpec extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "RegularConvFull_SA_Tiled (NPZ fully verifiable pipeline)"

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

  private def writeBigInts(path: String, xs: Seq[BigInt]): Unit = {
    val pw = new PrintWriter(path)
    try xs.foreach(v => pw.println(v.toString))
    finally pw.close()
  }

  it should "dump observed outputs for case0~case15 (order = (m,pos))" in {

    val cfg = FixedCfg(dataW = 8, frac = 0, mulW = 16, accW = 32)

    val baseDir  = "tests/vectors_sa_tiled"
    val numCases = 16

    // generous timeout for larger cases
    val maxCycles = 300000

    for (caseId <- 0 until numCases) {
      val dir = s"$baseDir/case$caseId"
      Files.createDirectories(Paths.get(dir))

      val meta = readInts(s"$dir/meta.txt")
      require(meta.length >= 7, s"case$caseId meta.txt must have 7 lines: cin cout h w kh kw kTile")

      val cin   = meta(0)
      val cout  = meta(1)
      val h     = meta(2)
      val w     = meta(3)
      val kh    = meta(4)
      val kw    = meta(5)
      val kTile = meta(6)

      require(kTile >= 2, s"case$caseId requires kTile>=2")
      require(h >= kh && w >= kw, s"case$caseId requires h>=kh and w>=kw")

      val Kfull   = cin * kh * kw
      val hout    = h - kh + 1
      val wout    = w - kw + 1
      val outSize = hout * wout

      val inPath  = s"$dir/input.txt"
      val wPath   = s"$dir/weight.txt"
      val outPath = s"$dir/observed.txt"

      val inVec = readInts(inPath)
      val wVec  = readInts(wPath)

      require(inVec.length == cin * h * w, s"case$caseId input length mismatch: ${inVec.length} != ${cin*h*w}")
      require(wVec.length == cout * Kfull, s"case$caseId weight length mismatch: ${wVec.length} != ${cout*Kfull}")

      test(new RegularConvFull_SA_Tiled(cin, cout, h, w, kh, kw, kTile, cfg)) { dut =>

        // poke inputs: x_in(c)(p)
        var idx = 0
        for (c <- 0 until cin) {
          for (p <- 0 until (h*w)) {
            dut.io.x_in(c)(p).poke(inVec(idx).S(cfg.dataW.W))
            idx += 1
          }
        }

        // poke weights: w_in(m)(k)
        idx = 0
        for (m <- 0 until cout) {
          for (k <- 0 until Kfull) {
            dut.io.w_in(m)(k).poke(wVec(idx).S(cfg.dataW.W))
            idx += 1
          }
        }

        // start pulse
        dut.io.start.poke(false.B)
        dut.clock.step(2)
        dut.io.start.poke(true.B)
        dut.clock.step(1)
        dut.io.start.poke(false.B)

        // wait done
        var cycles = 0
        while (!dut.io.done.peek().litToBoolean) {
          dut.clock.step(1)
          cycles += 1
          if (cycles > maxCycles) {
            fail(s"case$caseId timeout: done not asserted within $maxCycles cycles")
          }
        }

        // dump observed in canonical order: (m,pos)
        val observed = for {
          m   <- 0 until cout
          pos <- 0 until outSize
        } yield dut.io.y_out(m)(pos).peek().litValue

        writeBigInts(outPath, observed)

        assert(observed.length == cout * outSize)
      }
    }
  }
}
