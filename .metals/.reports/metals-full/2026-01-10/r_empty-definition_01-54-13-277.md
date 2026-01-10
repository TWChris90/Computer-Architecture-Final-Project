error id: file://<WORKSPACE>/src/main/scala/conv/EmitSA.scala:`<none>`.
file://<WORKSPACE>/src/main/scala/conv/EmitSA.scala
empty definition using pc, found symbol in pc: `<none>`.
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -chisel3/ChiselStage.
	 -circt/stage/ChiselStage.
	 -ChiselStage.
	 -scala/Predef.ChiselStage.
offset: 592
uri: file://<WORKSPACE>/src/main/scala/conv/EmitSA.scala
text:
```scala
package conv

import chisel3._
import circt.stage.ChiselStage
import scala.io.Source

object EmitSA extends App {

  // 用法：
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
    ChiselStage@@.emitSystemVerilogFile(
      gen,
      args = Array("--target-dir", outDir),
      firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
    )
  }

  val cfg = FixedCfg(dataW = 8, frac = 0, mulW = 16, accW = 32)

  mode match {
    case "case" =>
      val caseId = if (args.length >= 2) args(1).toInt else 0
      val dir = s"tests/vectors_sa_tiled/case$caseId"
      val meta = readInts(s"$dir/meta.txt")
      require(meta.length >= 7, s"case$caseId meta.txt must have 7 lines: cin cout h w kh kw kTile")

      val cin   = meta(0)
      val cout  = meta(1)
      val h     = meta(2)
      val w     = meta(3)
      val kh    = meta(4)
      val kw    = meta(5)
      val kTile = meta(6)

      // 讓每個 case 的 top name 不同，避免覆蓋與混淆
      val outDir = "build/verilog"
      val topName = s"RegularConvFull_SA_Tiled_case$caseId"

      // 這裡用 output-file 固定檔名
      ChiselStage.emitSystemVerilogFile(
        new RegularConvFull_SA_Tiled(cin, cout, h, w, kh, kw, kTile, cfg),
        args = Array("--target-dir", outDir, "--output-file", s"$topName.sv"),
        firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
      )

    case "sa" =>
      val rows = if (args.length >= 2) args(1).toInt else 4
      val cols = if (args.length >= 3) args(2).toInt else 8
      emitSV(new SystolicArrayMatVecFixed(rows = rows, cols = cols, cfg = cfg), outDir = "build/verilog")

    case other =>
      throw new RuntimeException(s"unknown mode: $other (use case / sa)")
  }
}

```


#### Short summary: 

empty definition using pc, found symbol in pc: `<none>`.