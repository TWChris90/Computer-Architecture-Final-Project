package conv

import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.matchers.must.Matchers

class ConvAtPointMultiOutIm2ColSpec extends AnyFreeSpec with Matchers {

  "ConvAtPointMultiOutIm2Col should match rc.py y[m=0..2, oh=0, ow=0]" in {
    // Match rc.py: Cin=2, Cout=3, H=W=5, Kh=Kw=3
    val cout = 3
    val cin  = 2
    val h    = 5
    val w    = 5
    val kh   = 3
    val kw   = 3
    val dataW = 8
    val accW  = 32
    val K = cin * kh * kw

    // rc.py input_tensor (NCHW): input_tensor[c][h][w]
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

    // rc.py output tensor at (oh,ow)=(0,0):
    // Filter0=7, Filter1=8, Filter2=5
    val expectedY: Seq[Int] = Seq(7, 8, 5)

    simulate(new ConvAtPointMultiOutIm2Col(cout, cin, h, w, kh, kw, dataW, accW)) { dut =>
      // poke input
      for ((v, idx) <- inFlatNCHW.zipWithIndex) {
        dut.io.in(idx).poke(v.S)
      }

      // poke weights
      for ((v, k) <- w0.zipWithIndex) { dut.io.weights(0)(k).poke(v.S) }
      for ((v, k) <- w1.zipWithIndex) { dut.io.weights(1)(k).poke(v.S) }
      for ((v, k) <- w2.zipWithIndex) { dut.io.weights(2)(k).poke(v.S) }

      // set output position
      dut.io.oh.poke(0.U)
      dut.io.ow.poke(0.U)

      // start pulse
      dut.io.start.poke(true.B)
      dut.clock.step()
      dut.io.start.poke(false.B)

      // wait done
      var cycles = 0
      var done = false
      while (cycles < 300 && !done) {
        done = dut.io.done.peek().litToBoolean
        dut.clock.step()
        cycles += 1
      }

      withClue("should finish within 300 cycles: ") {
        done mustBe true
      }

      // check outputs
      for (m <- 0 until cout) {
        val got = dut.io.y_out(m).peek().litValue.toInt
        val exp = expectedY(m)
        withClue(s"m=$m y_out mismatch, expected=$exp got=$got: ") {
          got mustBe exp
        }
      }
    }
  }
}
