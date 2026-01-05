package conv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class RegularConvFull_SA_TiledSpec extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "RegularConvFull_SA_Tiled"

  it should "match RegularConvFull_SA output" in {
    val cin = 1
    val cout = 2
    val h = 4
    val w = 4
    val kh = 2
    val kw = 2
    val kTile = 2

    val cfg = FixedCfg(dataW = 8, frac = 0, mulW = 16, accW = 32)

    test(new Module {
      val io = IO(new Bundle {
        val start = Input(Bool())
        val done  = Output(Bool())
      })

      val ref = Module(new RegularConvFull_SA(cin, cout, h, w, kh, kw, cfg))
      val dut = Module(new RegularConvFull_SA_Tiled(cin, cout, h, w, kh, kw, kTile, cfg))

      ref.io.start := io.start
      dut.io.start := io.start

      // random-ish deterministic data
      for (c <- 0 until cin) {
        for (p <- 0 until (h*w)) {
          val v = ((c+1)*3 + p) % 5
          ref.io.x_in(c)(p) := v.S
          dut.io.x_in(c)(p) := v.S
        }
      }

      val Kfull = cin*kh*kw
      for (m <- 0 until cout) {
        for (k <- 0 until Kfull) {
          val wv = ((m+1)*7 + k) % 4
          ref.io.w_in(m)(k) := wv.S
          dut.io.w_in(m)(k) := wv.S
        }
      }

    // compare all outputs when both done
    val outSize = (h - kh + 1) * (w - kw + 1)

    // Each comparison result is a separate wire
    val cmp = Wire(Vec(cout * outSize, Bool()))
    var idx = 0
    for (m <- 0 until cout) {
    for (pos <- 0 until outSize) {
        cmp(idx) := (ref.io.y_out(m)(pos) === dut.io.y_out(m)(pos))
        idx += 1
    }
    }

    // All AND up (no comb loop)
    val ok = cmp.reduce(_ && _)

    // Both sides are done and OK to be considered a pass
    io.done := ref.io.done && dut.io.done && ok

    }).withAnnotations(Seq(WriteVcdAnnotation)) { top =>
      top.io.start.poke(false.B)
      top.clock.step(2)

      top.io.start.poke(true.B)
      top.clock.step(1)
      top.io.start.poke(false.B)

      while (!top.io.done.peek().litToBoolean) {
        top.clock.step(1)
      }
    }
  }
}
