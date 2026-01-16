package conv

import chisel3._

class RegularConvFull_SA_Tiled_WithDense(
    cin: Int,
    cout: Int,
    h: Int,
    w: Int,
    kh: Int,
    kw: Int,
    kTile: Int,
    denseC: Int,
    cfg: FixedCfg
) extends Module {

  private val hout: Int = h - kh + 1
  private val wout: Int = w - kw + 1
  private val outSize: Int = hout * wout
  private val Kfull: Int = cin * kh * kw
  private val poolH: Int = 2
  private val poolW: Int = 2
  private val poolStride: Int = 2
  private val qShift: Int = 2
  private val deqShift: Int = 2

  private val poolOutH: Int = (hout - poolH) / poolStride + 1
  private val poolOutW: Int = (wout - poolW) / poolStride + 1
  private val poolOutSize: Int = poolOutH * poolOutW
  private val denseN: Int = cout * poolOutSize

  val io = IO(new Bundle {
    val start = Input(Bool())

    val x_in = Input(Vec(cin, Vec(h * w, SInt(cfg.dataW.W))))
    val w_in = Input(Vec(cout, Vec(Kfull, SInt(cfg.dataW.W))))

    val dense_w = Input(Vec(denseC, Vec(denseN, SInt(cfg.dataW.W))))
    val dense_b = Input(Vec(denseC, SInt(cfg.accW.W)))

    val y_out  = Output(Vec(cout, Vec(outSize, SInt(cfg.accW.W))))
    val y_post = Output(Vec(cout, Vec(outSize, UInt(8.W))))
    val y_pool = Output(Vec(cout, Vec(poolOutSize, UInt(8.W))))
    val y_deq  = Output(Vec(cout, Vec(poolOutSize, SInt(cfg.accW.W))))

    val y_dense = Output(Vec(denseC, SInt(cfg.accW.W)))

    val done = Output(Bool())
  })

  val conv = Module(new RegularConvFull_SA_Tiled(cin, cout, h, w, kh, kw, kTile, cfg))
  conv.io.start := io.start
  conv.io.x_in  := io.x_in
  conv.io.w_in  := io.w_in

  val post = Module(new PostProcessQDP(
    cout = cout,
    hout = hout,
    wout = wout,
    cfg = cfg,
    qShift = qShift,
    poolH = poolH,
    poolW = poolW,
    poolStride = poolStride,
    deqShift = deqShift
  ))

  post.io.y_in := conv.io.y_out

  io.y_out  := conv.io.y_out
  io.y_post := post.io.y_q
  io.y_pool := post.io.y_pool
  io.y_deq  := post.io.y_deq

  val dense = Module(new DenseFromYDequant(
    cout   = cout,
    outSize = poolOutSize,
    denseC = denseC,
    dataW  = cfg.dataW,
    accW   = cfg.accW
  ))

  dense.io.y_in    := post.io.y_deq
  dense.io.w_dense := io.dense_w
  dense.io.b_dense := io.dense_b

  dense.io.start := io.start && conv.io.done

  io.y_dense := dense.io.y_dense
  io.done    := dense.io.done
}
