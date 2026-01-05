package conv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class RegularConvFullKTileSpec
    extends AnyFlatSpec
    with ChiselScalatestTester {

  behavior of "RegularConvFullKTile"

  it should "accumulate partial sums across K-tiles correctly" in {


    // Parameter settings
    val cout      = 1
    val kTile     = 2
    val numKtiles = 2
    val accW      = 32

    val dataW = 8
    val frac  = 0
    val mulW  = dataW * 2

    val cfg = FixedCfg(
    dataW = dataW,
    frac  = frac,
    mulW  = mulW,
    accW  = accW
    )

    val p = new RegularConvFullKTileParams(
      cout      = cout,
      kTile     = kTile,
      numKtiles = numKtiles,
      accW      = accW
    )

    // 2. Golden model
    // x tiles: [[1,2], [3,4]]
    // w tiles: [[5,6], [7,8]]
    // golden = 1*5 + 2*6 + 3*7 + 4*8 = 70
    val xTiles = Seq(
      Seq(1, 2),
      Seq(3, 4)
    )

    val wTiles = Seq(
      Seq(5, 6),
      Seq(7, 8)
    )

    val golden =
      xTiles(0)(0) * wTiles(0)(0) +
      xTiles(0)(1) * wTiles(0)(1) +
      xTiles(1)(0) * wTiles(1)(0) +
      xTiles(1)(1) * wTiles(1)(1)


    // 3. testing RTL
    test(new RegularConvFullKTile(p, cfg))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

        // Initialize
        dut.io.start.poke(false.B)

        // poke tiles
        for (t <- 0 until numKtiles) {
          for (k <- 0 until kTile) {
            dut.io.x_tiles(t)(k).poke(xTiles(t)(k).S)
            dut.io.w_tiles(t)(0)(k).poke(wTiles(t)(k).S)
          }
        }

        dut.clock.step(2)

        // Launch
        dut.io.start.poke(true.B)
        dut.clock.step(1)
        dut.io.start.poke(false.B)

        // waiting done
        while (!dut.io.done.peek().litToBoolean) {
          dut.clock.step(1)
        }

        // Check the results
        val out = dut.io.out(0).peek().litValue.toInt
        assert(
          out == golden,
          s"Expected $golden, but got $out"
        )
      }
  }
  it should "handle tail K-tile correctly when K % kTile != 0" in {

    // --------------------------------------------------
    // 1. Parameters (K not divisible by kTile)
    // --------------------------------------------------
    val cout      = 1
    val kTile     = 2
    val numKtiles = 3   // Kfull = 5 => [2,2,1]
    val accW      = 32

    val dataW = 8
    val frac  = 0
    val mulW  = dataW * 2

    val cfg = FixedCfg(
      dataW = dataW,
      frac  = frac,
      mulW  = mulW,
      accW  = accW
    )

    val p = new RegularConvFullKTileParams(
      cout      = cout,
      kTile     = kTile,
      numKtiles = numKtiles,
      accW      = accW
    )

    // --------------------------------------------------
    // 2. Prepare Kfull = 5 data
    // --------------------------------------------------
    // x = [1,2,3,4,5]
    // w = [10,20,30,40,50]
    // golden = sum(x_i * w_i)
    val xFull = Seq(1, 2, 3, 4, 5)
    val wFull = Seq(10, 20, 30, 40, 50)

    val golden = xFull.zip(wFull).map { case (x, w) => x * w }.sum
    // = 1*10 + 2*20 + 3*30 + 4*40 + 5*50 = 550

    // tile view (manual padding for clarity)
    // tile0: [1,2]
    // tile1: [3,4]
    // tile2: [5,0]  <-- tail tile padding
    val xTiles = Seq(
      Seq(1, 2),
      Seq(3, 4),
      Seq(5, 0)
    )

    val wTiles = Seq(
      Seq(10, 20),
      Seq(30, 40),
      Seq(50, 0)
    )

    // --------------------------------------------------
    // 3. Run DUT
    // --------------------------------------------------
    test(new RegularConvFullKTile(p, cfg)) { dut =>

      dut.io.start.poke(false.B)
      dut.clock.step(2)

      // poke tiles
      for (t <- 0 until numKtiles) {
        for (k <- 0 until kTile) {
          dut.io.x_tiles(t)(k).poke(xTiles(t)(k).S)
          dut.io.w_tiles(t)(0)(k).poke(wTiles(t)(k).S)
        }
      }

      // start
      dut.io.start.poke(true.B)
      dut.clock.step(1)
      dut.io.start.poke(false.B)

      // wait done
      while (!dut.io.done.peek().litToBoolean) {
        dut.clock.step(1)
      }

      val out = dut.io.out(0).peek().litValue.toInt
      assert(
        out == golden,
        s"Tail-tile test failed: expected $golden, got $out"
      )
    }
}




}

