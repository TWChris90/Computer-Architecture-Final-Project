package conv

import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.matchers.must.Matchers

class RegularConvFull_SASpec extends AnyFreeSpec with Matchers {

  "RegularConvFull_SA should match rc.py full output tensor (Cout=3, Hout=3, Wout=3)" in {
    val cout = 3
    val cin  = 2
    val h    = 5
    val w    = 5
    val kh   = 3
    val kw   = 3

    val cfg = FixedCfg(dataW = 16, frac = 0, mulW = 32, accW = 40)

    val hout = h - kh + 1
    val wout = w - kw + 1
    val outSize = hout * wout
    val K = cin * kh * kw

    // rc.py input_tensor (2x5x5)
    val x = Array(
      Array(
        Array(1, 2, 2, 2, 1),
        Array(3, 0, 3, 0, 3),
        Array(1, 1, 1, 1, 1),
        Array(1, 3, 3, 3, 1),
        Array(1, 1, 1, 1, 1)
      ),
      Array(
        Array(0, 1, 0, 2, 0),
        Array(1, 1, 0, 1, 1),
        Array(4, 1, 0, 1, 3),
        Array(4, 1, 0, 1, 2),
        Array(0, 1, 0, 2, 0)
      )
    )

    // rc.py filters (3x2x3x3)
    val filt = Array(
      Array(
        Array( Array(-1, 0, 1), Array(0, -1, 1), Array(0, 1, -1) ),
        Array( Array(-1, -1, 1), Array(-1, 1, 0), Array(1, 0, 0) )
      ),
      Array(
        Array( Array(-1, 0, 1), Array(1,  0, 0), Array(0, 1,  0) ),
        Array( Array( 1, 0, 0), Array(0, -1, 1), Array(0, 1, -1) )
      ),
      Array(
        Array( Array(0, 1, 0), Array(1, 0, 1), Array(0, 1, 0) ),
        Array( Array(1, 0, 1), Array(0, 1, 0), Array(1, 0, 1) )
      )
    )

    // golden: compute expected by Scala reference conv
    val expected = Array.ofDim[Int](cout, outSize)
    for (m <- 0 until cout) {
      for (oh <- 0 until hout) {
        for (ow <- 0 until wout) {
          var acc = 0
          for (c <- 0 until cin) {
            for (r <- 0 until kh) {
              for (s <- 0 until kw) {
                acc += x(c)(oh + r)(ow + s) * filt(m)(c)(r)(s)
              }
            }
          }
          val pos = oh * wout + ow
          expected(m)(pos) = acc
        }
      }
    }

    simulate(new RegularConvFull_SA(cin, cout, h, w, kh, kw, cfg)) { dut =>
      // drive x_in (flatten H*W)
      for (c <- 0 until cin) {
        for (i <- 0 until h) {
          for (j <- 0 until w) {
            val idx = i*w + j
            dut.io.x_in(c)(idx).poke(x(c)(i)(j).S(cfg.dataW.W))
          }
        }
      }

      // drive w_in in Im2Col order: c -> kh -> kw
      for (m <- 0 until cout) {
        var k = 0
        for (c <- 0 until cin) {
          for (r <- 0 until kh) {
            for (s <- 0 until kw) {
              dut.io.w_in(m)(k).poke(filt(m)(c)(r)(s).S(cfg.dataW.W))
              k += 1
            }
          }
        }
        k mustBe K
      }

      // start
      dut.io.start.poke(true.B)

      // wait done (safe upper bound)
      val maxCycles = outSize * (K + 5) + 50
      var cycles = 0
      while (dut.io.done.peek().litToBoolean == false && cycles < maxCycles) {
        dut.clock.step(1)
        cycles += 1
      }
      withClue(s"timeout waiting done, cycles=$cycles max=$maxCycles: ") {
        dut.io.done.peek().litToBoolean mustBe true
      }

      // compare outputs
      for (m <- 0 until cout) {
        for (pos <- 0 until outSize) {
          val got = dut.io.y_out(m)(pos).peek().litValue.toInt
          val exp = expected(m)(pos)
          val oh = pos / wout
          val ow = pos % wout
          withClue(s"m=$m pos=$pos (oh=$oh,ow=$ow) mismatch, expected=$exp got=$got: ") {
            got mustBe exp
          }
        }
      }
    }
  }
}
