package conv

import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.matchers.must.Matchers

class RegularConvFullIm2ColSpec extends AnyFreeSpec with Matchers {

  "RegularConvFullIm2Col should match rc.py full output tensor (Cout=3, Hout=3, Wout=3)" in {
    // rc.py: Cin=2, Cout=3, H=W=5, Kh=Kw=3
    val cout = 3
    val cin  = 2
    val h    = 5
    val w    = 5
    val kh   = 3
    val kw   = 3
    val dataW = 8
    val accW  = 32

    val hout = h - kh + 1 // 3
    val wout = w - kw + 1 // 3
    val outSize = hout * wout // 9
    val K = cin * kh * kw // 18

    // rc.py input_tensor (NCHW)
    val ch0 = Seq(
      1,2,2,2,1,
      3,0,3,0,3,
      1,1,1,1,1,
      1,3,3,3,1,
      1,1,1,1,1
    )
    val ch1 = Seq(
      0,1,0,2,0,
      1,1,0,1,1,
      4,1,0,1,3,
      4,1,0,1,2,
      0,1,0,2,0
    )
    val inFlatNCHW: Seq[Int] = ch0 ++ ch1
    inFlatNCHW.length mustBe (cin * h * w)

    // rc.py filters flattened in k-order: c -> kh -> kw
    val w0: Seq[Int] = Seq(
      -1, 0, 1,
       0,-1, 1,
       0, 1,-1,
      -1,-1, 1,
      -1, 1, 0,
       1, 0, 0
    )
    val w1: Seq[Int] = Seq(
      -1, 0, 1,
       0,-1, 1,
       0, 1,-1,
      -1,-1, 1,
      -1, 1, 1,
       1, 1, 1
    )
    val w2: Seq[Int] = Seq(
      -1,-1, 1,
      -1, 1, 1,
       1, 1, 1,
      -1,-1, 1,
      -1, 1, 0,
       1, 0, 0
    )
    w0.length mustBe K
    w1.length mustBe K
    w2.length mustBe K

    // rc.py golden full output tensor (Cout=3, Hout=3, Wout=3)
    // Stored as expected(m)(pos), pos = oh*wout + ow
    val expected0 = Seq(
       7, -2,  1,
      -1,  0,  3,
      -8,  0,  1
    )
    val expected1 = Seq(
       8,  0,  6,
       0,  2,  9,
      -7,  3,  5
    )
    val expected2 = Seq(
       5,  5, -1,
       7,  7,  9,
      -1,  5,  6
    )
    val expected = Seq(expected0, expected1, expected2)
    expected.foreach(_.length mustBe outSize)

    simulate(new RegularConvFullIm2Col(cout, cin, h, w, kh, kw, dataW, accW)) { dut =>
      // poke input
      for ((v, idx) <- inFlatNCHW.zipWithIndex) {
        dut.io.in(idx).poke(v.S)
      }

      // poke weights
      for ((v, k) <- w0.zipWithIndex) { dut.io.weights(0)(k).poke(v.S) }
      for ((v, k) <- w1.zipWithIndex) { dut.io.weights(1)(k).poke(v.S) }
      for ((v, k) <- w2.zipWithIndex) { dut.io.weights(2)(k).poke(v.S) }

      // start pulse
      dut.io.start.poke(true.B)
      dut.clock.step()
      dut.io.start.poke(false.B)

      // wait done
      var cycles = 0
      var done = false
      while (cycles < 3000 && !done) {
        done = dut.io.done.peek().litToBoolean
        dut.clock.step()
        cycles += 1
      }

      withClue("should finish within 3000 cycles: ") {
        done mustBe true
      }

      // compare all outputs
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
