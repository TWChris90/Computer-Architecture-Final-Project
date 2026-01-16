package conv

import chisel3._

class CNNTop(
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

    val y_out   = Output(Vec(cout, Vec(outSize, SInt(cfg.accW.W))))
    val y_post  = Output(Vec(cout, Vec(outSize, UInt(8.W))))
    val y_pool  = Output(Vec(cout, Vec(poolOutSize, UInt(8.W))))
    val y_deq   = Output(Vec(cout, Vec(poolOutSize, SInt(cfg.accW.W))))
    val y_dense = Output(Vec(denseC, SInt(cfg.accW.W)))

    val done = Output(Bool())
  })

  private val core = Module(new RegularConvFull_SA_Tiled_WithDense(
    cin = cin,
    cout = cout,
    h = h,
    w = w,
    kh = kh,
    kw = kw,
    kTile = kTile,
    denseC = denseC,
    cfg = cfg
  ))

  core.io.start   := io.start
  core.io.x_in    := io.x_in
  core.io.w_in    := io.w_in
  core.io.dense_w := io.dense_w
  core.io.dense_b := io.dense_b

  io.y_out   := core.io.y_out
  io.y_post  := core.io.y_post
  io.y_pool  := core.io.y_pool
  io.y_deq   := core.io.y_deq
  io.y_dense := core.io.y_dense
  io.done    := core.io.done
}
