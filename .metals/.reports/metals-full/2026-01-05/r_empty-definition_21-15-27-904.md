error id: file://<WORKSPACE>/src/main/scala/conv/RegularConvFull_SA_Tiled.scala:`<none>`.
file://<WORKSPACE>/src/main/scala/conv/RegularConvFull_SA_Tiled.scala
empty definition using pc, found symbol in pc: `<none>`.
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -chisel3/idxTrunc.
	 -chisel3/idxTrunc#
	 -chisel3/idxTrunc().
	 -chisel3/util/idxTrunc.
	 -chisel3/util/idxTrunc#
	 -chisel3/util/idxTrunc().
	 -idxTrunc.
	 -idxTrunc#
	 -idxTrunc().
	 -scala/Predef.idxTrunc.
	 -scala/Predef.idxTrunc#
	 -scala/Predef.idxTrunc().
offset: 3941
uri: file://<WORKSPACE>/src/main/scala/conv/RegularConvFull_SA_Tiled.scala
text:
```scala
package conv

import chisel3._
import chisel3.util._

/** Level3 SA + K-tiling (Im2Col stream -> KTile slicer -> SA_KTile -> psum accumulate)
  * - 對每個 (oh, ow)：
  *   - Im2ColStreamerNCHW 連續吐出 Kfull=cin*kh*kw 筆
  *   - 用 ping-pong buffer 把 stream 切成 kTile 一塊
  *   - 每塊丟給 RegularConvFull_SA_KTile 做 partial
  *   - 外層 psum 做 temporal accumulation
  * - 最後寫回 y_out(:, pos)
  */
class RegularConvFull_SA_Tiled(
  cin: Int, cout: Int,
  h: Int, w: Int,
  kh: Int, kw: Int,
  kTile: Int,
  cfg: FixedCfg
) extends Module {

  require(cin > 0 && cout > 0 && h > 0 && w > 0 && kh > 0 && kw > 0)
  require(kTile >= 2, "MVP assumes kTile >= 2 for 1-cycle-per-tile accumulation without stalling")

  private val Kfull   = cin * kh * kw
  private val hout    = h - kh + 1
  private val wout    = w - kw + 1
  private val outSize = hout * wout
  private val inSize  = cin * h * w

  private def ceilDiv(a: Int, b: Int): Int = (a + b - 1) / b
  private val numKtiles = ceilDiv(Kfull, kTile)

  private val posW   = log2Ceil(outSize max 2)
  private val gkW    = log2Ceil(Kfull max 2)
  private val capW   = log2Ceil(kTile max 2)
  private val tileW  = log2Ceil(numKtiles max 2)

  val io = IO(new Bundle {
    val start = Input(Bool())

    // same as RegularConvFull_SA
    val x_in  = Input(Vec(cin, Vec(h*w, SInt(cfg.dataW.W))))
    val w_in  = Input(Vec(cout, Vec(Kfull, SInt(cfg.dataW.W))))

    val y_out = Output(Vec(cout, Vec(outSize, SInt(cfg.accW.W))))
    val done  = Output(Bool())
  })

  // -----------------------------
  // Flatten x_in -> xFlat, same as RegularConvFull_SA
  // -----------------------------
  val xFlat = Wire(Vec(inSize, SInt(cfg.dataW.W)))
  for (c <- 0 until cin) {
    for (p <- 0 until (h*w)) {
      xFlat(c*(h*w) + p) := io.x_in(c)(p)
    }
  }

  // -----------------------------
  // Output regs
  // -----------------------------
  private val yInitRow: Vec[SInt] = VecInit(Seq.fill(outSize)(0.S(cfg.accW.W)))
  private val yInit: Vec[Vec[SInt]] = VecInit(Seq.fill(cout)(yInitRow))
  val yReg = RegInit(yInit)
  io.y_out := yReg

  val doneReg = RegInit(false.B)
  io.done := doneReg

  // -----------------------------
  // Im2Col streamer (same wiring style as RegularConvFull_SA)
  // -----------------------------
  val im2col = Module(new Im2ColStreamerNCHW(cin = cin, h = h, w = w, kh = kh, kw = kw, dataW = cfg.dataW))
  im2col.io.in := xFlat

  // pos -> (oh, ow)
  val posReg = RegInit(0.U(posW.W))
  im2col.io.oh := (posReg / wout.U)
  im2col.io.ow := (posReg % wout.U)

  // -----------------------------
  // KTile core
  // -----------------------------
  val core = Module(new RegularConvFull_SA_KTile(cout = cout, kTile = kTile, cfg = cfg))

  // psum buffer for this (oh, ow)
  val psumReg = RegInit(VecInit(Seq.fill(cout)(0.S(cfg.accW.W))))

  // ping-pong buffers
  val buf0 = RegInit(VecInit(Seq.fill(kTile)(0.S(cfg.dataW.W))))
  val buf1 = RegInit(VecInit(Seq.fill(kTile)(0.S(cfg.dataW.W))))
  val bufSel = RegInit(false.B) // false->buf0 capturing, true->buf1 capturing

  // capture indices
  val gkIdx   = RegInit(0.U(gkW.W))     // global k index [0..Kfull-1]
  val capIdx  = RegInit(0.U(capW.W))    // index within tile [0..kTile-1]
  val tileIdx = RegInit(0.U(tileW.W))   // tile index [0..numKtiles-1]

  // one-tile "compute request" latched when a tile completes
  val compValid    = RegInit(false.B)
  val compBufSel   = RegInit(false.B)
  val compTileIdx  = RegInit(0.U(tileW.W))
  val compLastTile = RegInit(false.B)

  // helper: read completed buffer
  val compX = Wire(Vec(kTile, SInt(cfg.dataW.W)))
  for (k <- 0 until kTile) {
    compX(k) := Mux(compBufSel, buf1(k), buf0(k))
  }

  // weight slice for this tile (pad 0 for out-of-range)
  val wTile = Wire(Vec(cout, Vec(kTile, SInt(cfg.dataW.W))))
  for (m <- 0 until cout) {
    for (k <- 0 until kTile) {
      val base = compTileIdx * kTile.U
      val idx  = base + k.U
      val idxW = log2Ceil(Kfull max 2)
val id@@xTrunc = idx(idxW-1, 0)

wTile(m)(k) := Mux(idx < Kfull.U, io.w_in(m)(idxTrunc), 0.S(cfg.dataW.W))
    }
  }

  // drive core (combinational)
  core.io.start   := compValid
  core.io.x_tile  := compX
  core.io.w_tile  := wTile
  core.io.psum_in := psumReg

  // -----------------------------
  // FSM: per-pos streaming and tiling
  // -----------------------------
  val sIdle :: sKick :: sStream :: sWaitIdle :: sDone :: Nil = Enum(5)
  val state = RegInit(sIdle)

  // default
  im2col.io.start := false.B

  switch(state) {
    is(sIdle) {
      doneReg := false.B
      posReg := 0.U
      psumReg := VecInit(Seq.fill(cout)(0.S(cfg.accW.W)))
      gkIdx := 0.U; capIdx := 0.U; tileIdx := 0.U
      bufSel := false.B
      compValid := false.B
      when(io.start) { state := sKick }
    }

    // start im2col only when it's idle (valid=0)
    is(sKick) {
      psumReg := VecInit(Seq.fill(cout)(0.S(cfg.accW.W)))
      gkIdx := 0.U; capIdx := 0.U; tileIdx := 0.U
      bufSel := false.B
      compValid := false.B

      when(!im2col.io.valid) {
        im2col.io.start := true.B
        state := sStream
      }
    }

    // streaming capture + tile completion detection
    is(sStream) {
      // 1) if there is a completed tile (compValid), accumulate it this cycle
      when(compValid) {
        // update psum to core result
        for (m <- 0 until cout) { psumReg(m) := core.io.psum_out(m) }

        // if this was last tile of this pos, commit y and move pos
        when(compLastTile) {
          for (m <- 0 until cout) { yReg(m)(posReg) := core.io.psum_out(m) }

          when(posReg === (outSize-1).U) {
            state := sDone
          }.otherwise {
            posReg := posReg + 1.U
            state := sWaitIdle
          }
        }
        compValid := false.B
      }

      // 2) capture incoming stream when valid
      when(im2col.io.valid) {
        val inVal = im2col.io.a_out

        when(!bufSel) { buf0(capIdx) := inVal } .otherwise { buf1(capIdx) := inVal }

        val isLastGlobal = (gkIdx === (Kfull-1).U)
        val isTileEnd    = (capIdx === (kTile-1).U) || isLastGlobal

        when(isTileEnd) {
          // schedule compute on the tile that just completed
          compValid    := true.B
          compBufSel   := bufSel
          compTileIdx  := tileIdx
          compLastTile := isLastGlobal

          // advance for next tile capture
          bufSel := ~bufSel
          capIdx := 0.U
          tileIdx := tileIdx + 1.U
        }.otherwise {
          capIdx := capIdx + 1.U
        }

        gkIdx := gkIdx + 1.U
      }
    }

    // wait for im2col to become fully idle (valid=0) before starting next pos
    is(sWaitIdle) {
      when(!im2col.io.valid) {
        state := sKick
      }
    }

    is(sDone) {
      doneReg := true.B
      when(!io.start) { state := sIdle }
    }
  }
}

```


#### Short summary: 

empty definition using pc, found symbol in pc: `<none>`.