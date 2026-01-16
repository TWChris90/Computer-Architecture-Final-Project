package conv

import circt.stage.ChiselStage
import chisel3.RawModule
import chisel3.stage.ChiselGeneratorAnnotation

import java.nio.file.{Files, Path, Paths, StandardCopyOption}
import scala.collection.JavaConverters._

object EmitConvDense {

  private val VEC_BASE = "tests/vectors_sa_tiled"
  private val OUT_DIR  = "build/verilog"

  private def readInts(path: String): Seq[Int] = {
    val p = Paths.get(path)
    if (!Files.exists(p)) throw new RuntimeException(s"File not found: $path")
    Files.readAllLines(p).asScala
      .map(_.trim)
      .filter(s => s.nonEmpty && !s.startsWith("#"))
      .map(_.toInt)
      .toSeq
  }

  private def newestSvFile(outDir: String): Path = {
    val d = Paths.get(outDir)
    val svs = Files.list(d).iterator().asScala
      .filter(p => p.toString.endsWith(".sv"))
      .toSeq
    if (svs.isEmpty) throw new RuntimeException(s"No .sv emitted under $outDir")
    svs.maxBy(p => Files.getLastModifiedTime(p).toMillis)
  }

  private def moveTo(src: Path, dst: Path): Unit = {
    Files.createDirectories(dst.getParent)
    Files.move(src, dst, StandardCopyOption.REPLACE_EXISTING)
  }

  private def emitSV(gen: => RawModule, outDir: String): Unit = {
    (new ChiselStage).execute(
      Array("--target-dir", outDir, "--target", "systemverilog"),
      Seq(ChiselGeneratorAnnotation(() => gen))
    )

  }

  // Usage:
  //   sbt "runMain conv.EmitConvDense 0"
  //   sbt "runMain conv.EmitConvDense 0 1 2 3"
  def main(args: Array[String]): Unit = {
    if (args.isEmpty) {
      throw new RuntimeException(
        "Usage: runMain conv.EmitConvDense <caseId> [caseId2 ...]\n" +
        "Example: sbt \"runMain conv.EmitConvDense 0 1 2\""
      )
    }

    val caseIds = args.map(_.toInt)

    caseIds.foreach { caseId =>
      val vecDir = s"$VEC_BASE/case$caseId"
      val meta   = readInts(s"$vecDir/meta.txt")
      require(meta.length >= 7, s"case$caseId meta.txt must have >= 7 lines: cin cout h w kh kw kTile")

      val cin   = meta(0)
      val cout  = meta(1)
      val h     = meta(2)
      val w     = meta(3)
      val kh    = meta(4)
      val kw    = meta(5)
      val kTile = meta(6)

      val denseC = if (meta.length >= 9) meta(8) else 10

      // Match your FixedCfg signature and the conv config you already use elsewhere.
      val cfg = FixedCfg(dataW = 8, frac = 0, mulW = 16, accW = 32)

      val dst = Paths.get(OUT_DIR, s"CNNTop_case$caseId.sv")

      emitSV(
        new CNNTop(cin, cout, h, w, kh, kw, kTile, denseC, cfg),
        OUT_DIR
      )

      val emitted = newestSvFile(OUT_DIR)
      moveTo(emitted, dst)

      println(s"[EmitConvDense] case$caseId -> $dst (denseC=$denseC)")
    }
  }
}
