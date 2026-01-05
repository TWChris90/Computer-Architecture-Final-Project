package conv

import chisel3._
import chisel3.util._

class ConvAtPointMultiOut_SA(
  val cout: Int = 3,
  val cin: Int  = 2,
  val h: Int    = 5,
  val w: Int    = 5,
  val kh: Int   = 3,
  val kw: Int   = 3,
  val cfg: FixedCfg = FixedCfg(dataW = 8, frac = 0, mulW = 16, accW = 32),
  val flushExtra: Int = 16
) extends Module {
  require(cout > 0 && cin > 0 && h > 0 && w > 0)
  require(kh > 0 && kw > 0)
  require(h >= kh && w >= kw)
  require(flushExtra >= 0)

  private val K      = cin * kh * kw
  private val inSize = cin * h * w
  private val rows   = cout
  private val cols   = 1

  // top-level schedule length
  private val runCycles = (2 * K) + (rows - 1) + flushExtra + 4

  // warmup cycles to flush SA internal regs to 0 after capture
  private val warmupCycles = 8  // enough for rows=3, cols=1, PE latency=1

  val io = IO(new Bundle {
    val in      = Input(Vec(inSize, SInt(cfg.dataW.W)))
    val weights = Input(Vec(cout, Vec(K, SInt(cfg.dataW.W))))
    val oh      = Input(UInt(log2Ceil(h).W))
    val ow      = Input(UInt(log2Ceil(w).W))
    val start   = Input(Bool())

    val y_out = Output(Vec(cout, SInt(cfg.accW.W)))
    val busy  = Output(Bool())
    val done  = Output(Bool())
  })
  
  // Im2Col capture
  val im2col = Module(new Im2ColStreamerNCHW(cin, h, w, kh, kw, cfg.dataW))
  im2col.io.in := io.in
  im2col.io.oh := io.oh
  im2col.io.ow := io.ow

  val im2colStart = RegInit(false.B)
  im2col.io.start := im2colStart

  val xBuf   = RegInit(VecInit(Seq.fill(K)(0.S(cfg.dataW.W))))
  val capIdx = RegInit(0.U(log2Ceil(K).W))

  // SA core
  val sa = Module(new SystolicArrayRowPsumFixed(rows, cols, cfg))

  val psumReg = RegInit(VecInit(Seq.fill(rows)(0.S(cfg.accW.W))))
  val yRegs   = RegInit(VecInit(Seq.fill(rows)(0.S(cfg.accW.W))))
  io.y_out := yRegs

  val busy = RegInit(false.B)
  val done = RegInit(false.B)
  io.busy := busy
  io.done := done

  val cycCnt  = RegInit(0.U(log2Ceil(runCycles + 1).W))
  val warmCnt = RegInit(0.U(log2Ceil(warmupCycles + 1).W))

  // FSM
  val sIdle :: sCap :: sWarm :: sRun :: sFinish :: Nil = Enum(5)
  val state = RegInit(sIdle)

  // defaults
  im2colStart := false.B

  // When not in sRun, force SA inputs to 0 to avoid pollution
  val saA = Wire(Vec(rows, SInt(cfg.dataW.W)))
  val saB = Wire(Vec(cols, SInt(cfg.dataW.W)))
  val saP = Wire(Vec(rows, SInt(cfg.accW.W)))

  saA := VecInit(Seq.fill(rows)(0.S(cfg.dataW.W)))
  saB := VecInit(Seq.fill(cols)(0.S(cfg.dataW.W)))
  saP := VecInit(Seq.fill(rows)(0.S(cfg.accW.W)))

  // schedule helpers for sRun
  val isEven = (cycCnt(0) === 0.U)
  val kTop   = (cycCnt >> 1) // t/2

  when (state === sRun) {
    // psum feedback (registered)
    saP := psumReg

    // b injection on even cycles
    saB(0) := Mux(isEven && (kTop < K.U), xBuf(kTop), 0.S(cfg.dataW.W))

    // a per row:
    // ok if t>=r AND (t-r) even ; kRow=(t-r)/2
    for (r <- 0 until rows) {
      val t_ge_r   = (cycCnt >= r.U)
      val tMinusR  = cycCnt - r.U
      val evenRow  = (tMinusR(0) === 0.U)
      val kRow     = (tMinusR >> 1)
      saA(r) := Mux(t_ge_r && evenRow && (kRow < K.U), io.weights(r)(kRow), 0.S(cfg.dataW.W))
    }
  }

  // connect SA
  sa.io.a_in := saA
  sa.io.b_in := saB
  sa.io.psum_in := saP

  switch(state) {
    is(sIdle) {
      busy := false.B
      when (done) { done := false.B }

      when (io.start) {
        busy := true.B
        done := false.B

        capIdx := 0.U
        cycCnt := 0.U
        warmCnt := 0.U
        xBuf := VecInit(Seq.fill(K)(0.S(cfg.dataW.W)))
        psumReg := VecInit(Seq.fill(rows)(0.S(cfg.accW.W)))
        yRegs   := VecInit(Seq.fill(rows)(0.S(cfg.accW.W)))

        im2colStart := true.B
        state := sCap
      }
    }

    is(sCap) {
      when (im2col.io.valid) {
        xBuf(capIdx) := im2col.io.a_out.asSInt
        when (capIdx === (K - 1).U) {
          // after capture, warmup flush SA internal regs to 0
          warmCnt := 0.U
          psumReg := VecInit(Seq.fill(rows)(0.S(cfg.accW.W)))
          state := sWarm
        }.otherwise {
          capIdx := capIdx + 1.U
        }
      }
    }

    is(sWarm) {
      // feed all zeros (already enforced by defaults) and also clear psumReg
      psumReg := VecInit(Seq.fill(rows)(0.S(cfg.accW.W)))

      when (warmCnt === (warmupCycles - 1).U) {
        cycCnt := 0.U
        psumReg := VecInit(Seq.fill(rows)(0.S(cfg.accW.W)))
        state := sRun
      }.otherwise {
        warmCnt := warmCnt + 1.U
      }
    }

    is(sRun) {
      // update feedback every cycle
      psumReg := sa.io.psum_out

      when (cycCnt === (runCycles - 1).U) {
        state := sFinish
      }.otherwise {
        cycCnt := cycCnt + 1.U
      }
    }

    is(sFinish) {
      yRegs := psumReg
      busy := false.B
      done := true.B
      state := sIdle
    }
  }
}
