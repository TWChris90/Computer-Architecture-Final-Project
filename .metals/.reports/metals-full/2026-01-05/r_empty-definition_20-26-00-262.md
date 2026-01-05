error id: file://<WORKSPACE>/src/test/scala/conv/RegularConvFullKTileSpec.scala:`<none>`.
file://<WORKSPACE>/src/test/scala/conv/RegularConvFullKTileSpec.scala
empty definition using pc, found symbol in pc: `<none>`.
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -chisel3/numKtiles.
	 -chisel3/numKtiles#
	 -chisel3/numKtiles().
	 -chiseltest/numKtiles.
	 -chiseltest/numKtiles#
	 -chiseltest/numKtiles().
	 -numKtiles.
	 -numKtiles#
	 -numKtiles().
	 -scala/Predef.numKtiles.
	 -scala/Predef.numKtiles#
	 -scala/Predef.numKtiles().
offset: 425
uri: file://<WORKSPACE>/src/test/scala/conv/RegularConvFullKTileSpec.scala
text:
```scala
package conv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class RegularConvFullKTileSpec extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "RegularConvFullKTile"

  it should "match full-K golden by accumulating K-tiles" in {
    // 你先固定小參數（MVP）
    val outW = 1
    val outH = 1
    val outC = 1
    val numKtiles = 2
    val accW = 32

    val cout = 1
val kTile = 2
val nu@@mKtiles = 2
val accW = 32

val p = new RegularConvFullKTileParams(
  cout      = cout,
  kTile     = kTile,
  numKtiles = numKtiles,
  accW      = accW
)

    test(new RegularConvFullKTile(p)).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
      // TODO: 在這裡準備 tiles 的 input/weight，並 poke 進去（取決於你 wrapper/core IO 怎麼接）
      //
      // 最小版如果你暫時把 tile 資料寫死在 core 裡，那這裡先只要啟動 start 跑流程。

      dut.io.start.poke(false.B)
      dut.clock.step(2)

      dut.io.start.poke(true.B)
      dut.clock.step(1)
      dut.io.start.poke(false.B)

      // 等 done
      while (!dut.io.done.peek().litToBoolean) {
        dut.clock.step(1)
      }

      // 讀 out
      val out = dut.io.out(0).peek().litValue.toInt

      // TODO: 算 goldenFull
      val goldenFull = /* 你用 Scala helper 算 */

      assert(out == goldenFull)
    }
  }
}

```


#### Short summary: 

empty definition using pc, found symbol in pc: `<none>`.