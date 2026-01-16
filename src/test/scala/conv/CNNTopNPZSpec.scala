package conv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

import java.io.PrintWriter
import java.nio.file.{Files, Paths}
import scala.io.Source

class CNNTopNPZSpec extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "CNNTop (end-to-end: conv + post + dense)"

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

  it should "generate observed outputs for case0~case15 and check dense golden" in {

    val cfg = FixedCfg(dataW = 8, frac = 0, mulW = 16, accW = 32)

    val baseDir  = "tests/vectors_sa_tiled"
    val numCases = 16
    val maxCycles = 300000

    val dumpVcd = sys.env.get("VCD").isDefined

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

      val hout    = h - kh + 1
      val wout    = w - kw + 1
      val outSize = hout * wout
      val Kfull   = cin * kh * kw

      val poolH = 2
      val poolW = 2
      val poolStride = 2
      val poolOutH = (hout - poolH) / poolStride + 1
      val poolOutW = (wout - poolW) / poolStride + 1
      val poolOutSize = poolOutH * poolOutW

      val denseN  = if (meta.length >= 8) meta(7) else cout * poolOutSize
      val denseC  = if (meta.length >= 9) meta(8) else 10

      val inPath     = s"$dir/input.txt"
      val wPath      = s"$dir/weight.txt"
      val denseWPath = s"$dir/dense_weight.txt"
      val denseBPath = s"$dir/dense_bias.txt"
      val denseGPath = s"$dir/dense_golden.txt"

      val outPath      = s"$dir/observed.txt"
      val outPathPost  = s"$dir/observed_post.txt"
      val outPathPool  = s"$dir/observed_pool.txt"
      val outPathDeq   = s"$dir/observed_deq.txt"
      val outPathDense = s"$dir/observed_dense.txt"

      val inVec = readInts(inPath)
      val wVec  = readInts(wPath)
      val denseWVec = readInts(denseWPath)
      val denseBVec = readInts(denseBPath)
      val denseGVec = readInts(denseGPath)

      require(inVec.length == cin * h * w, s"case$caseId input length mismatch: ${inVec.length} != ${cin*h*w}")
      require(wVec.length == cout * Kfull, s"case$caseId weight length mismatch: ${wVec.length} != ${cout*Kfull}")
      require(denseWVec.length == denseC * denseN, s"case$caseId dense weight length mismatch: ${denseWVec.length} != ${denseC*denseN}")
      require(denseBVec.length == denseC, s"case$caseId dense bias length mismatch: ${denseBVec.length} != $denseC")
      require(denseGVec.length == denseC, s"case$caseId dense golden length mismatch: ${denseGVec.length} != $denseC")

      val ann = if (dumpVcd && caseId == 0) Seq(WriteVcdAnnotation) else Seq()

      test(new CNNTop(cin, cout, h, w, kh, kw, kTile, denseC, cfg)).withAnnotations(ann) { dut =>
        dut.clock.setTimeout(maxCycles + 1000)

        var idx = 0
        for (c <- 0 until cin) {
          for (p <- 0 until (h*w)) {
            dut.io.x_in(c)(p).poke(inVec(idx).S(cfg.dataW.W))
            idx += 1
          }
        }

        idx = 0
        for (m <- 0 until cout) {
          for (k <- 0 until Kfull) {
            dut.io.w_in(m)(k).poke(wVec(idx).S(cfg.dataW.W))
            idx += 1
          }
        }

        idx = 0
        for (o <- 0 until denseC) {
          for (i <- 0 until denseN) {
            dut.io.dense_w(o)(i).poke(denseWVec(idx).S(cfg.dataW.W))
            idx += 1
          }
        }
        for (o <- 0 until denseC) {
          dut.io.dense_b(o).poke(denseBVec(o).S(cfg.accW.W))
        }

        dut.io.start.poke(false.B)
        dut.clock.step(2)
        dut.io.start.poke(true.B)

        var cycles = 0
        while (!dut.io.done.peek().litToBoolean) {
          dut.clock.step(1)
          cycles += 1
          if (cycles > maxCycles) {
            fail(s"case$caseId timeout: done not asserted within $maxCycles cycles")
          }
        }
        dut.io.start.poke(false.B)
        dut.clock.step(2)

        val observed = for {
          m   <- 0 until cout
          pos <- 0 until outSize
        } yield dut.io.y_out(m)(pos).peek().litValue

        val observedPost = for {
          m   <- 0 until cout
          pos <- 0 until outSize
        } yield dut.io.y_post(m)(pos).peek().litValue

        val observedPool = for {
          m   <- 0 until cout
          pos <- 0 until poolOutSize
        } yield dut.io.y_pool(m)(pos).peek().litValue

        val observedDeq = for {
          m   <- 0 until cout
          pos <- 0 until poolOutSize
        } yield dut.io.y_deq(m)(pos).peek().litValue

        val observedDense = for {
          o <- 0 until denseC
        } yield dut.io.y_dense(o).peek().litValue

        writeBigInts(outPath, observed)
        writeBigInts(outPathPost, observedPost)
        writeBigInts(outPathPool, observedPool)
        writeBigInts(outPathDeq, observedDeq)
        writeBigInts(outPathDense, observedDense)

        val denseMismatch = observedDense.zip(denseGVec).indexWhere { case (obs, exp) => obs != BigInt(exp) }
        if (denseMismatch >= 0) {
          val obs = observedDense(denseMismatch)
          val exp = denseGVec(denseMismatch)
          fail(s"case$caseId dense mismatch at o=$denseMismatch: obs=$obs exp=$exp")
        }
      }
    }
  }
}
