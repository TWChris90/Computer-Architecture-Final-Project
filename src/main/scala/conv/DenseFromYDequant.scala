package conv

import chisel3._
import chisel3.util._

class DenseFromYDequant(
    cout: Int,
    outSize: Int,
    denseC: Int,
    dataW: Int,
    accW: Int
) extends Module {
  require(cout > 0 && outSize > 0 && denseC > 0)

  private val denseN: Int = cout * outSize

  private def idxW(n: Int): Int = if (n <= 1) 1 else log2Ceil(n)
  private val oW   = idxW(denseC)
  private val mW   = idxW(cout)
  private val posW = idxW(outSize)
  private val iW   = idxW(denseN)

  val io = IO(new Bundle {
    val start = Input(Bool())

    val y_in = Input(Vec(cout, Vec(outSize, SInt(accW.W))))

    val w_dense = Input(Vec(denseC, Vec(denseN, SInt(dataW.W))))
    val b_dense = Input(Vec(denseC, SInt(accW.W)))

    val y_dense = Output(Vec(denseC, SInt(accW.W)))
    val done    = Output(Bool())
  })

  val sIdle :: sNewO :: sMac :: sWriteO :: sNextO :: sDone :: Nil = Enum(6)
  val state = RegInit(sIdle)

  val oReg   = RegInit(0.U(oW.W))
  val mReg   = RegInit(0.U(mW.W))
  val posReg = RegInit(0.U(posW.W))

  val doneReg = RegInit(false.B)
  io.done := doneReg

  val acc = RegInit(0.S(accW.W))

  val yDenseReg = RegInit(VecInit(Seq.fill(denseC)(0.S(accW.W))))
  io.y_dense := yDenseReg

  private def idxOrZero(idx: UInt, size: Int): UInt = {
    if (size <= 1) 0.U else idx
  }

  val mIdx = idxOrZero(mReg, cout)
  val posIdx = idxOrZero(posReg, outSize)
  val oIdx = idxOrZero(oReg, denseC)

  val outSizeU = outSize.U
  val iIdx = if (denseN <= 1) 0.U else (mReg * outSizeU + posReg)(iW - 1, 0)

  val x_s = io.y_in(mIdx)(posIdx)
  val w_s = io.w_dense(oIdx)(iIdx)
  val mul = (x_s * w_s).asSInt
  val mulAcc = Wire(SInt(accW.W))
  mulAcc := mul.asSInt

  private def resetToIdle(): Unit = {
    state := sIdle
    doneReg := false.B
    oReg := 0.U
    mReg := 0.U
    posReg := 0.U
    acc := 0.S
  }

  when(!io.start && state =/= sIdle) {
    resetToIdle()
  }.otherwise {
    switch(state) {
      is(sIdle) {
        doneReg := false.B
        when(io.start) {
          oReg := 0.U
          state := sNewO
        }
      }

      is(sNewO) {
        acc := io.b_dense(oReg)
        mReg := 0.U
        posReg := 0.U
        state := sMac
      }

      is(sMac) {
        acc := (acc + mulAcc).asSInt

        val lastPos = posReg === (outSize - 1).U
        val lastM   = mReg   === (cout - 1).U

        when(lastPos) {
          posReg := 0.U
          when(lastM) {
            state := sWriteO
          }.otherwise {
            mReg := mReg + 1.U
          }
        }.otherwise {
          posReg := posReg + 1.U
        }
      }

      is(sWriteO) {
        yDenseReg(oReg) := acc
        state := sNextO
      }

      is(sNextO) {
        when(oReg === (denseC - 1).U) {
          state := sDone
        }.otherwise {
          oReg := oReg + 1.U
          state := sNewO
        }
      }

      is(sDone) {
        doneReg := true.B
        when(!io.start) { resetToIdle() }
      }
    }
  }
}
