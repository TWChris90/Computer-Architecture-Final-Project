// src/main/scala/conv/RegularConvFullIm2Col.scala
package conv

import chisel3._
import chisel3.util._

/**
  * Level-3: Full output feature map (all oh/ow) and all output channels (m)
  *
  * For Hout = H-Kh+1, Wout = W-Kw+1:
  *   for oh in [0..Hout-1]:
  *     for ow in [0..Wout-1]:
  *       for m  in [0..Cout-1]:
  *         y[m,oh,ow] = sum_{k=0..K-1} xcol(k,oh,ow) * w(m,k)
  *
  * Implementation strategy (minimal correctness-first):
  * - Reuse Im2ColStreamerNCHW and restart it for each (pos,m) pair.
  * - Sequential FSM: pos-loop -> m-loop -> k-loop
  * - Store outputs into y_out(m)(pos) where pos = oh*Wout + ow
  */
class RegularConvFullIm2Col(
  val cout: Int = 3,
  val cin: Int = 2,
  val h: Int = 5,
  val w: Int = 5,
  val kh: Int = 3,
  val kw: Int = 3,
  val dataW: Int = 8,
  val accW: Int = 32
) extends Module {
  require(cout > 0 && cin > 0 && h > 0 && w > 0)
  require(kh > 0 && kw > 0)
  require(h >= kh && w >= kw)
  require(accW >= (dataW * 2 + 2))

  private val K = cin * kh * kw
  private val inSize = cin * h * w

  private val hout = h - kh + 1
  private val wout = w - kw + 1
  private val outSize = hout * wout

  val io = IO(new Bundle {
    // Flattened NCHW input: idx = ((c*h + ih)*w + iw)
    val in = Input(Vec(inSize, SInt(dataW.W)))

    // weights(m)(k) in k-order: c -> kh -> kw
    val weights = Input(Vec(cout, Vec(K, SInt(dataW.W))))

    // control
    val start = Input(Bool())

    // output stored as y_out(m)(pos), pos = oh*wout + ow
    val y_out = Output(Vec(cout, Vec(outSize, SInt(accW.W))))

    val busy = Output(Bool())
    val done = Output(Bool())
  })

  // Im2Col streamer instance
  val s = Module(new Im2ColStreamerNCHW(cin, h, w, kh, kw, dataW))
  s.io.in := io.in

  //drive oh/ow from internal pos counter
  val posCnt = RegInit(0.U(log2Ceil(outSize).W))
  val ohReg  = RegInit(0.U(log2Ceil(h).W))
  val owReg  = RegInit(0.U(log2Ceil(w).W))
  s.io.oh := ohReg
  s.io.ow := owReg

  // Pulse start to streamer when launching each dot-product
  val streamerStart = RegInit(false.B)
  val pendingStart  = RegInit(false.B)
  s.io.start := streamerStart

  // Output registers
  val yRegs = RegInit(VecInit(Seq.fill(cout)(VecInit(Seq.fill(outSize)(0.S(accW.W))))))
  io.y_out := yRegs

  // Accumulator and counters (m/k)
  val acc  = RegInit(0.S(accW.W))
  val kCnt = RegInit(0.U(log2Ceil(K).W))
  val mCnt = RegInit(0.U(log2Ceil(cout).W))

  val busy = RegInit(false.B)
  val done = RegInit(false.B)
  io.busy := busy
  io.done := done

  // defaults
  streamerStart := false.B

  // helper: update (ohReg, owReg) from posCnt
  def updateOhOwFromPos(pos: UInt): Unit = {
    // pos = oh*wout + ow
    ohReg := pos / wout.U
    owReg := pos % wout.U
  }

  // launch pending streamer start (1-cycle pulse)
  when (pendingStart) {
    streamerStart := true.B
    pendingStart := false.B
  }

  when (io.start && !busy) {
    // Start a full run
    busy := true.B
    done := false.B

    yRegs := VecInit(Seq.fill(cout)(VecInit(Seq.fill(outSize)(0.S(accW.W)))))

    posCnt := 0.U
    updateOhOwFromPos(0.U)

    mCnt := 0.U
    kCnt := 0.U
    acc  := 0.S

    // start streamer for (pos=0, m=0)
    streamerStart := true.B
  } .elsewhen (busy) {
    when (s.io.valid) {
      val x    = s.io.a_out.asSInt
      val wgt  = io.weights(mCnt)(kCnt).asSInt
      val prod = (x * wgt).asSInt
      val accNext = (acc + prod).asSInt

      acc := accNext

      when (kCnt === (K - 1).U) {
        // store output for current (m,pos)
        yRegs(mCnt)(posCnt) := accNext

        // advance to next (m,pos)
        when (mCnt === (cout - 1).U) {
          // finished all m for this pos -> next pos
          when (posCnt === (outSize - 1).U) {
            // finished all positions -> done
            busy := false.B
            done := true.B
          } .otherwise {
            posCnt := posCnt + 1.U
            val nextPos = posCnt + 1.U
            updateOhOwFromPos(nextPos)

            mCnt := 0.U
            kCnt := 0.U
            acc  := 0.S
            pendingStart := true.B
          }
        } .otherwise {
          // next m, same pos
          mCnt := mCnt + 1.U
          kCnt := 0.U
          acc  := 0.S
          pendingStart := true.B
        }
      } .otherwise {
        kCnt := kCnt + 1.U
      }
    }
  } .otherwise {
    // idle: clear done after 1 cycle pulse
    when (done) { done := false.B }
  }
}
