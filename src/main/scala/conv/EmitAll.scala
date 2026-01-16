package conv

import chisel3._
import circt.stage.ChiselStage
import scala.io.Source

object EmitAll extends App {
  private val cfg = FixedCfg(dataW = 8, frac = 0, mulW = 16, accW = 32)
  private val firOpts = Array("-disable-all-randomization", "-strip-debug-info")

  private def emit(name: String, gen: => RawModule): Unit = {
    val outDir = s"build/verilog/all/$name"
    ChiselStage.emitSystemVerilogFile(
      gen,
      args = Array("--target-dir", outDir),
      firtoolOpts = firOpts
    )
    println(s"[EmitAll] $name -> $outDir")
  }

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

  // Base params for examples
  private val cin = 2
  private val cout = 3
  private val h = 5
  private val w = 5
  private val kh = 3
  private val kw = 3
  private val kTile = 4
  private val denseCDefault = 10

  // Emit core compute blocks
  emit("PE", new PE(w = 8, accW = 20))
  emit("PEFixed", new PEFixed(cfg))
  emit("PEArray2x2", new PEArray2x2(w = 8))
  emit("PEChain1x2", new PEChain1x2(w = 8))
  emit("ConvEngine2x2", new ConvEngine2x2(w = 8))

  emit("SystolicArray2x2", new SystolicArray(rows = 2, cols = 2, w = 8, accW = 20))
  emit("SystolicArrayRowPsum2x3", new SystolicArrayRowPsum(rows = 2, cols = 3, w = 8))
  emit("SystolicArrayRowPsumFixed2x3", new SystolicArrayRowPsumFixed(rows = 2, cols = 3, cfg = cfg))
  emit("SystolicArrayMatVecFixed2x4", new SystolicArrayMatVecFixed(rows = 2, cols = 4, cfg = cfg))

  // Im2Col + pointwise/regular variants
  emit("Im2ColStreamerNCHW", new Im2ColStreamerNCHW(cin, h, w, kh, kw, cfg.dataW))
  emit("ConvAtPointIm2Col", new ConvAtPointIm2Col())
  emit("ConvAtPointMultiOutIm2Col", new ConvAtPointMultiOutIm2Col())
  emit("RegularConvFullIm2Col", new RegularConvFullIm2Col())

  // SA + tiled conv pipeline
  emit("RegularConvFull_SA_KTile", new RegularConvFull_SA_KTile(cout = cout, kTile = kTile, cfg = cfg))
  emit("RegularConvFull_SA", new RegularConvFull_SA(cin, cout, h, w, kh, kw, cfg))
  emit("RegularConvFull_SA_Tiled", new RegularConvFull_SA_Tiled(cin, cout, h, w, kh, kw, kTile, cfg))

  val kParams = new RegularConvFullKTileParams(cout = cout, kTile = kTile, numKtiles = 2, accW = cfg.accW)
  emit("RegularConvFullKTile", new RegularConvFullKTile(kParams, cfg))

  // Postprocess + dense
  emit("PostProcessQDP", new PostProcessQDP(cout = cout, hout = 4, wout = 4, cfg = cfg))
  emit("DenseFromYPost", new DenseFromYPost(cout = cout, outSize = 4, denseC = 3, dataW = cfg.dataW, accW = cfg.accW))
  emit("DenseFromYDequant", new DenseFromYDequant(cout = cout, outSize = 4, denseC = 3, dataW = cfg.dataW, accW = cfg.accW))

  // Classic convs from Conv.scala
  emit("DepthwiseConv", new DepthwiseConv(h_in = 5, w_in = 5, d_in = 2, h_filt = 3, w_filt = 3))
  emit("PointwiseConvolution", new PointwiseConvolution(h_in = 5, w_in = 5, d_in = 3, d_out = 4))
  emit("RegularConv", new RegularConv(h_in = 5, w_in = 5, d_in = 2, d_out = 3, k_h = 3, k_w = 3))

  // Top-level integration (use case0 meta if available)
  val metaPath = "tests/vectors_sa_tiled/case0/meta.txt"
  val meta = readInts(metaPath)
  val topCin   = if (meta.length >= 1) meta(0) else cin
  val topCout  = if (meta.length >= 2) meta(1) else cout
  val topH     = if (meta.length >= 3) meta(2) else h
  val topW     = if (meta.length >= 4) meta(3) else w
  val topKh    = if (meta.length >= 5) meta(4) else kh
  val topKw    = if (meta.length >= 6) meta(5) else kw
  val topKTile = if (meta.length >= 7) meta(6) else kTile
  val topDenseC = if (meta.length >= 9) meta(8) else denseCDefault

  emit("RegularConvFull_SA_Tiled_WithDense",
    new RegularConvFull_SA_Tiled_WithDense(topCin, topCout, topH, topW, topKh, topKw, topKTile, topDenseC, cfg)
  )
  emit("CNNTop",
    new CNNTop(topCin, topCout, topH, topW, topKh, topKw, topKTile, topDenseC, cfg)
  )
}
