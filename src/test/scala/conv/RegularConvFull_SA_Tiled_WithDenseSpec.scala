package conv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

import java.nio.file.{Files, Paths}
import scala.jdk.CollectionConverters._

class RegularConvFull_SA_Tiled_WithDenseSpec extends AnyFlatSpec with ChiselScalatestTester {

  private val VEC_BASE = "tests/vectors_sa_tiled"

  private def readInts(path: String): Seq[Int] = {
    val p = Paths.get(path)
    if (!Files.exists(p)) throw new RuntimeException(s"File not found: $path")
    Files.readAllLines(p).asScala
      .map(_.trim)
      .filter(s => s.nonEmpty && !s.startsWith("#"))
      .map(_.toInt)
      .toSeq
  }

  private def writeBigInts(path: String, xs: Seq[BigInt]): Unit = {
    val p = Paths.get(path)
    Files.write(p, xs.map(_.toString).asJava)
  }

  private def signedMod(v: Int, width: Int): BigInt = {
    val mask = (BigInt(1) << width) - 1
    val raw = BigInt(v) & mask
    if (raw.testBit(width - 1)) raw - (BigInt(1) << width) else raw
  }

  private def pokeVec2D[T <: Data](v: Vec[Vec[T]], flat: Seq[Int], outer: Int, inner: Int)(pokeFn: (T, Int) => Unit): Unit = {
    require(flat.length == outer * inner, s"flat length ${flat.length} != ${outer * inner}")
    var idx = 0
    for (o <- 0 until outer) {
      for (i <- 0 until inner) {
        pokeFn(v(o)(i), flat(idx))
        idx += 1
      }
    }
  }

  it should "run conv + dense and dump observed_dense.txt for all cases" in {
    val numCases = 16

    for (caseId <- 0 until numCases) {

      val dir = s"$VEC_BASE/case$caseId"
      val meta = readInts(s"$dir/meta.txt")
      require(meta.length >= 7, s"case$caseId meta.txt must have >= 7 lines: cin cout h w kh kw kTile")

      val cin   = meta(0)
      val cout  = meta(1)
      val h     = meta(2)
      val w     = meta(3)
      val kh    = meta(4)
      val kw    = meta(5)
      val kTile = meta(6)

      val outH = h - kh + 1
      val outW = w - kw + 1
      val outSize = outH * outW
      val kFull = cin * kh * kw
      val poolH = 2
      val poolW = 2
      val poolStride = 2
      val poolOutH = (outH - poolH) / poolStride + 1
      val poolOutW = (outW - poolW) / poolStride + 1
      val poolOutSize = poolOutH * poolOutW
      val denseNCalc = cout * poolOutSize

      val denseN = if (meta.length >= 8) meta(7) else denseNCalc
      val denseC = if (meta.length >= 9) meta(8) else 10

      val inVec = readInts(s"$dir/input.txt")     // cin * (h*w), c-major
      val wVec  = readInts(s"$dir/weight.txt")    // cout * kFull, m-major
      val dWVec = readInts(s"$dir/dense_weight.txt") // denseC * denseN, o-major
      val dBVec = readInts(s"$dir/dense_bias.txt")   // denseC

      require(inVec.length == cin * h * w, s"case$caseId input.txt length mismatch")
      require(wVec.length  == cout * kFull, s"case$caseId weight.txt length mismatch")
      require(dWVec.length == denseC * denseN, s"case$caseId dense_weight.txt length mismatch")
      require(dBVec.length == denseC, s"case$caseId dense_bias.txt length mismatch")

      val cfg = FixedCfg(dataW = 8, frac = 0, mulW = 16, accW = 32)


      test(new RegularConvFull_SA_Tiled_WithDense(cin, cout, h, w, kh, kw, kTile, denseC, cfg))
        .withAnnotations(Seq()) { dut =>
          dut.clock.setTimeout(0) // disable chiseltest idle timeout
          // Load conv inputs
          pokeVec2D(dut.io.x_in, inVec, cin, h * w) { (sig, value) =>
            sig.poke(signedMod(value, cfg.dataW).S)
          }
          pokeVec2D(dut.io.w_in, wVec, cout, kFull) { (sig, value) =>
            sig.poke(signedMod(value, cfg.dataW).S)
          }

          // Load dense weights/bias
          pokeVec2D(dut.io.dense_w, dWVec, denseC, denseN) { (sig, value) =>
            sig.poke(signedMod(value, cfg.dataW).S)
          }
          for (o <- 0 until denseC) {
            dut.io.dense_b(o).poke(signedMod(dBVec(o), cfg.accW).S)
          }

          // Run
          dut.io.start.poke(true.B)
          dut.clock.step(1)

          var guard = 0
          while (!dut.io.done.peek().litToBoolean) {
            dut.clock.step(1)
            guard += 1
            if (guard > 200000) {
              throw new RuntimeException(s"case$caseId timeout waiting for done")
            }
          }

          // Dump conv outputs (optional)
          val observed = for { m <- 0 until cout; pos <- 0 until outSize }
            yield dut.io.y_out(m)(pos).peek().litValue
          writeBigInts(s"$dir/observed.txt", observed)

          val observedPost = for { m <- 0 until cout; pos <- 0 until outSize }
            yield dut.io.y_post(m)(pos).peek().litValue
          writeBigInts(s"$dir/observed_post.txt", observedPost)

          val observedPool = for { m <- 0 until cout; pos <- 0 until poolOutSize }
            yield dut.io.y_pool(m)(pos).peek().litValue
          writeBigInts(s"$dir/observed_pool.txt", observedPool)

          val observedDeq = for { m <- 0 until cout; pos <- 0 until poolOutSize }
            yield dut.io.y_deq(m)(pos).peek().litValue
          writeBigInts(s"$dir/observed_deq.txt", observedDeq)

          // Dump dense output
          val observedDense = for (o <- 0 until denseC)
            yield dut.io.y_dense(o).peek().litValue
          writeBigInts(s"$dir/observed_dense.txt", observedDense)

          // Hold semantics: drop start to let modules return to idle
          dut.io.start.poke(false.B)
          dut.clock.step(2)
        }
    }
  }
}
