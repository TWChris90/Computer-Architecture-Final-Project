package conv

import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.matchers.must.Matchers

class Im2ColStreamerNCHWSpec extends AnyFreeSpec with Matchers {

  "Im2ColStreamerNCHW should stream correct K elements for rc.py input at (oh,ow)=(0,0)" in {
    // Match rc.py: Cin=2, H=W=5, Kh=Kw=3  => K=18
    val cin = 2
    val h = 5
    val w = 5
    val kh = 3
    val kw = 3
    val dataW = 8

    // rc.py input_tensor (NCHW): input_tensor[c][h][w]
    // Channel 0:
    // [1,2,2,2,1]
    // [3,0,3,0,3]
    // [1,1,1,1,1]
    // [1,3,3,3,1]
    // [1,1,1,1,1]
    //
    // Channel 1:
    // [0,1,0,2,0]
    // [1,1,0,1,1]
    // [4,1,0,1,3]
    // [4,1,0,1,2]
    // [0,1,0,2,0]
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

    // Expected img2col sequence at (oh,ow)=(0,0), order: c -> kh -> kw
    // Channel 0 patch (rows 0..2, cols 0..2):
    // [1,2,2,
    //  3,0,3,
    //  1,1,1]
    // Channel 1 patch:
    // [0,1,0,
    //  1,1,0,
    //  4,1,0]
    val expected: Seq[Int] = Seq(
      // c=0
      1,2,2,
      3,0,3,
      1,1,1,
      // c=1
      0,1,0,
      1,1,0,
      4,1,0
    )
    expected.length mustBe (cin * kh * kw)

    simulate(new Im2ColStreamerNCHW(cin, h, w, kh, kw, dataW)) { dut =>
      // poke input tensor
      for ((v, idx) <- inFlatNCHW.zipWithIndex) {
        dut.io.in(idx).poke(v.S)
      }

      // set output position (oh,ow) = (0,0)
      dut.io.oh.poke(0.U)
      dut.io.ow.poke(0.U)

      // start pulse
      dut.io.start.poke(true.B)
      dut.clock.step()
      dut.io.start.poke(false.B)

      // Now streaming should be active; each cycle, read a_out then step.
      for (i <- expected.indices) {
        withClue(s"cycle=$i: valid should be true while streaming: ") {
          dut.io.valid.peek().litToBoolean mustBe true
        }

        val got = dut.io.a_out.peek().litValue.toInt
        val exp = expected(i)

        withClue(s"cycle=$i, expected a_out=$exp, got=$got: ") {
          got mustBe exp
        }

        // done should only be true on the last element
        val doneNow = dut.io.done.peek().litToBoolean
        withClue(s"cycle=$i: done flag mismatch: ") {
          doneNow mustBe (i == expected.length - 1)
        }

        dut.clock.step()
      }

      // After one extra step, valid should drop (stream finished)
      withClue("after streaming finished, valid should be false: ") {
        dut.io.valid.peek().litToBoolean mustBe false
      }
    }
  }
}
