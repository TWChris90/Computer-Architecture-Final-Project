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

  it should "dump observed outputs for case0~case9 (order = (m,pos))" in {

    // ====== MUST MATCH python/gen_cases_npz.py ======
    val cin   = 1
    val cout  = 1
    val h     = 5
    val w     = 5
    val kh    = 3
    val kw    = 3
    val kTile = 2

    val cfg = FixedCfg(dataW = 8, frac = 0, mulW = 16, accW = 32)

    val Kfull   = cin * kh * kw
    val hout    = h - kh + 1
    val wout    = w - kw + 1
    val outSize = hout * wout

    val baseDir = "tests/vectors_sa_tiled"
    val numCases = 10

    // a hard timeout to avoid infinite loop if DUT stuck
    val maxCycles = 20000

    for (caseId <- 0 until numCases) {
      val dir = s"$baseDir/case$caseId"
      val inPath  = s"$dir/input.txt"
      val wPath   = s"$dir/weight.txt"
      val outPath = s"$dir/observed.txt"

      // ensure dir exists
      Files.createDirectories(Paths.get(dir))

      val inVec = readInts(inPath)
      val wVec  = readInts(wPath)

      require(inVec.length == cin * h * w, s"case$caseId input length mismatch: ${inVec.length}")
      require(wVec.length == cout * Kfull, s"case$caseId weight length mismatch: ${wVec.length}")

      test(new RegularConvFull_SA_Tiled(cin, cout, h, w, kh, kw, kTile, cfg))
        .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

          // 1) poke x_in(c)(p) where p = ih*w + iw, c-major
          var idx = 0
          for (c <- 0 until cin) {
            for (p <- 0 until (h*w)) {
              dut.io.x_in(c)(p).poke(inVec(idx).S(cfg.dataW.W))
              idx += 1
            }
          }

          // 2) poke w_in(m)(k) where k order = c->kh->kw, m-major
          idx = 0
          for (m <- 0 until cout) {
            for (k <- 0 until Kfull) {
              dut.io.w_in(m)(k).poke(wVec(idx).S(cfg.dataW.W))
              idx += 1
            }
          }

          // 3) start pulse
          dut.io.start.poke(false.B)
          dut.clock.step(2)
          dut.io.start.poke(true.B)
          dut.clock.step(1)
          dut.io.start.poke(false.B)

          // 4) wait done
          var cycles = 0
          while (!dut.io.done.peek().litToBoolean) {
            dut.clock.step(1)
            cycles += 1
            if (cycles > maxCycles) {
              fail(s"case$caseId timeout: done not asserted within $maxCycles cycles")
            }
          }

          // 5) dump observed in canonical order: (m,pos) with pos=oh*wout+ow
          val observed = for {
            m   <- 0 until cout
            pos <- 0 until outSize
          } yield dut.io.y_out(m)(pos).peek().litValue

          writeBigInts(outPath, observed)

          // a minimal assertion: observed size correct
          assert(observed.length == cout * outSize)
        }
    }
  }
}
