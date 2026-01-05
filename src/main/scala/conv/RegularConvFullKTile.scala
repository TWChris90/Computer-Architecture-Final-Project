package conv

import chisel3._
import chisel3.util._

class RegularConvFullKTileParams(
  val cout: Int,
  val kTile: Int,
  val numKtiles: Int,
  val accW: Int
)

class RegularConvFullKTile(p: RegularConvFullKTileParams, cfg: FixedCfg) extends Module {
  val io = IO(new Bundle {
    val start = Input(Bool())

    // tile banks
    val x_tiles = Input(Vec(p.numKtiles, Vec(p.kTile, SInt(cfg.dataW.W))))
    val w_tiles = Input(Vec(p.numKtiles, Vec(p.cout, Vec(p.kTile, SInt(cfg.dataW.W)))))

    val out = Output(Vec(p.cout, SInt(p.accW.W)))
    val done = Output(Bool())
  })

  val core = Module(new RegularConvFull_SA_KTile(
    cout = p.cout,
    kTile = p.kTile,
    cfg = cfg
  ))

  // psum buffer
  val psum = RegInit(VecInit(Seq.fill(p.cout)(0.S(p.accW.W))))
  io.out := psum

  val tileIdx = RegInit(0.U(log2Ceil(p.numKtiles).W))
  val sIdle :: sRun :: sAcc :: sDone :: Nil = Enum(4)
  val state = RegInit(sIdle)

  // default
  core.io.start := false.B
  core.io.x_tile := io.x_tiles(tileIdx)
  core.io.w_tile := io.w_tiles(tileIdx)
  core.io.psum_in := psum

  io.done := (state === sDone)

  switch(state) {
    is(sIdle) {
      when(io.start) {
        for (m <- 0 until p.cout) { psum(m) := 0.S }
        tileIdx := 0.U
        state := sRun
      }
    }

    is(sRun) {
      core.io.start := true.B
      when(core.io.done) {
        state := sAcc
      }
    }

    is(sAcc) {
      for (m <- 0 until p.cout) {
        psum(m) := core.io.psum_out(m)
      }
      when(tileIdx === (p.numKtiles-1).U) {
        state := sDone
      }.otherwise {
        tileIdx := tileIdx + 1.U
        state := sRun
      }
    }

    is(sDone) {
      when(!io.start) { state := sIdle }
    }
  }
}
