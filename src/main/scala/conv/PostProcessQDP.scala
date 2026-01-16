package conv

import chisel3._

class PostProcessQDP(
    cout: Int,
    hout: Int,
    wout: Int,
    cfg: FixedCfg,
    qShift: Int = 2,
    poolH: Int = 2,
    poolW: Int = 2,
    poolStride: Int = 2,
    deqShift: Int = 2
) extends Module {
  require(cout > 0 && hout > 0 && wout > 0)
  require(qShift >= 0 && deqShift >= 0)
  require(poolH > 0 && poolW > 0 && poolStride > 0)
  require(hout >= poolH && wout >= poolW)

  private val outSize = hout * wout
  private val poolOutH = (hout - poolH) / poolStride + 1
  private val poolOutW = (wout - poolW) / poolStride + 1
  private val poolOutSize = poolOutH * poolOutW

  val io = IO(new Bundle {
    val y_in = Input(Vec(cout, Vec(outSize, SInt(cfg.accW.W))))

    val y_q    = Output(Vec(cout, Vec(outSize, UInt(8.W))))
    val y_pool = Output(Vec(cout, Vec(poolOutSize, UInt(8.W))))
    val y_deq  = Output(Vec(cout, Vec(poolOutSize, SInt(cfg.accW.W))))
  })

  private val roundAdd = if (qShift > 0) (1.U << (qShift - 1)) else 0.U

  private def quantize(x: SInt): UInt = {
    val reluU = Mux(x < 0.S, 0.U, x.asUInt)
    val wide = Wire(UInt((cfg.accW + 1).W))
    wide := reluU
    val rounded = wide + roundAdd
    val shifted = if (qShift > 0) rounded >> qShift else rounded
    Mux(shifted >= 255.U, 255.U, shifted(7, 0))
  }

  // quantize (m, pos) -> y_q
  for (m <- 0 until cout) {
    for (pos <- 0 until outSize) {
      io.y_q(m)(pos) := quantize(io.y_in(m)(pos))
    }
  }

  // max-pool on y_q (m, oh, ow) with stride
  for (m <- 0 until cout) {
    for (oh <- 0 until poolOutH) {
      for (ow <- 0 until poolOutW) {
        var maxVal: UInt = 0.U(8.W)
        for (rh <- 0 until poolH) {
          for (rw <- 0 until poolW) {
            val ih = oh * poolStride + rh
            val iw = ow * poolStride + rw
            val pos = ih * wout + iw
            val v = io.y_q(m)(pos)
            maxVal = Mux(v > maxVal, v, maxVal)
          }
        }
        val ppos = oh * poolOutW + ow
        io.y_pool(m)(ppos) := maxVal
      }
    }
  }

  // dequantize pooled output
  for (m <- 0 until cout) {
    for (pos <- 0 until poolOutSize) {
      val zext = io.y_pool(m)(pos).zext.asSInt
      val shifted = if (deqShift > 0) (zext << deqShift).asSInt else zext
      val deq = Wire(SInt(cfg.accW.W))
      deq := shifted.asSInt
      io.y_deq(m)(pos) := deq
    }
  }
}
