package conv

import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.matchers.must.Matchers

class ConvAtPointIm2ColSpec extends AnyFreeSpec with Matchers {

  "ConvAtPointIm2Col should match rc.py y[m=0, oh=0, ow=0]" in {
    // Match rc.py: Cin=2, H=W=5, Kh=Kw=3
    val cin = 2
    val h = 5
    val w = 5
    val kh = 3
    val kw = 3
    val dataW = 8
    val accW = 32
    val K = cin * kh * kw

    // rc.py input_tensor (NCHW): input_tensor[c][h][w]
    // Channel 0:
    val ch0 = Seq(
      1,2,2,2,1,
      3,0,3,0,3,
      1,1,1,1,1,
      1,3,3,3,1,
      1,1,1,1,1
    )
    // Channel 1:
    val ch1 = Seq(
      0,1,0,2,0,
      1,1,0,1,1,
      4,1,0,1,3,
      4,1,0,1,2,
      0,1,0,2,0
    )

    val inFlatNCHW: Seq[Int] = ch0 ++ ch1
    inFlatNCHW.length mustBe (cin * h * w)

    // rc.py filters[0] flattened in k-order: c -> kh -> kw
    // Derived from your rc.py content:
    val w0: Seq[Int] = Seq(
      // c=0 (3x3)
      -1, 0, 1,
       0,-1, 1,
       0, 1,-1,
      // c=1 (3x3)
      -1,-1, 1,
      -1, 1, 0,
       1, 0, 0
    )
    w0.length mustBe K

    // Expected rc.py output_tensor[0][0][0] = 7
    val expectedY = 7

    simulate(new ConvAtPointIm2Col(cin, h, w, kh, kw, dataW, accW)) { dut =>
      // poke input tensor
      for ((v, idx) <- inFlatNCHW.zipWithIndex) {
        dut.io.in(idx).poke(v.S)
      }

      // poke weights for filter 0
      for ((v, k) <- w0.zipWithIndex) {
        dut.io.weights(k).poke(v.S)
      }

      // set output position (oh,ow) = (0,0)
      dut.io.oh.poke(0.U)
      dut.io.ow.poke(0.U)

      // start pulse
      dut.io.start.poke(true.B)
      dut.clock.step()
      dut.io.start.poke(false.B)

      // run until done (should take ~K cycles after streamer starts)
      var cycles = 0
      var done = false
      while (cycles < 100 && !done) {
        done = dut.io.done.peek().litToBoolean
        dut.clock.step()
        cycles += 1
      }

      withClue("should finish within 100 cycles: ") {
        done mustBe true
      }

      val got = dut.io.y_out.peek().litValue.toInt
      withClue(s"y_out mismatch, expected=$expectedY got=$got: ") {
        got mustBe expectedY
      }
    }
  }
}
