package conv

import chisel3._
import circt.stage.ChiselStage
import scala.io.Source
import java.nio.file.{Files, Paths, Path, StandardCopyOption}
import scala.jdk.CollectionConverters._

object EmitSA extends App {

  // sbt "runMain conv.EmitSA case 0"
  // sbt "runMain conv.EmitSA case 15"
  // sbt "runMain conv.EmitSA sa 4 8"
  val mode = if (args.length >= 1) args(0) else "case"

  private def readInts(path: String): Seq[Int] = {
    val src = Source.fromFile(path)
    try src.getLines().map(_.trim).filter(s => s.nonEmpty && !s.startsWith("#")).map(_.toInt).toSeq
    finally src.close()
  }

  private def emitSV(gen: => RawModule, outDir: String): Unit = {
    ChiselStage.emitSystemVerilogFile(
      gen,
      args = Array("--target-dir", outDir),
      firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
    )
  }

  private def newestSvFile(outDir: String): Path = {
    val dir = Paths.get(outDir)
    if (!Files.exists(dir)) throw new RuntimeException(s"[EmitSA] outDir not found: $outDir")

    val svs = Files.list(dir).iterator().asScala
      .filter(p => Files.isRegularFile(p) && p.toString.endsWith(".sv"))
      .toSeq

    if (svs.isEmpty) throw new RuntimeException(s"[EmitSA] no .sv emitted in $outDir")

    svs.maxBy(p => Files.getLastModifiedTime(p).toMillis)
  }

  private def moveTo(src: Path, dst: Path): Unit = {
    Files.createDirectories(dst.getParent)
    Files.move(src, dst, StandardCopyOption.REPLACE_EXISTING)
    println(s"[EmitSA] wrote: ${dst.toString}")
  }

  val cfg = FixedCfg(dataW = 8, frac = 0, mulW = 16, accW = 32)

  mode match {
    case "case" =>
      val caseId = if (args.length >= 2) args(1).toInt else 0
      val vecDir = s"tests/vectors_sa_tiled/case$caseId"
      val meta = readInts(s"$vecDir/meta.txt")
      require(meta.length >= 7, s"case$caseId meta.txt must have 7 lines: cin cout h w kh kw kTile")

      val cin   = meta(0)
      val cout  = meta(1)
      val h     = meta(2)
      val w     = meta(3)
      val kh    = meta(4)
      val kw    = meta(5)
      val kTile = meta(6)

      val outDir = "build/verilog"
      val dst = Paths.get(outDir, s"RegularConvFull_SA_Tiled_case$caseId.sv")

      emitSV(new RegularConvFull_SA_Tiled(cin, cout, h, w, kh, kw, kTile, cfg), outDir)

      val emitted = newestSvFile(outDir)
      moveTo(emitted, dst)

    case "sa" =>
      val rows = if (args.length >= 2) args(1).toInt else 4
      val cols = if (args.length >= 3) args(2).toInt else 8
      val outDir = "build/verilog"

      emitSV(new SystolicArrayMatVecFixed(rows = rows, cols = cols, cfg = cfg), outDir)
      val emitted = newestSvFile(outDir)
      println(s"[EmitSA] wrote: ${emitted.toString}")

    case other =>
      throw new RuntimeException(s"unknown mode: $other (use case / sa)")
  }
}
