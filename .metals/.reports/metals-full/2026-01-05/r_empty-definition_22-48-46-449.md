error id: file://<WORKSPACE>/src/main/scala/conv/RegularConvFull_SA_KTile.scala:`<none>`.
file://<WORKSPACE>/src/main/scala/conv/RegularConvFull_SA_KTile.scala
empty definition using pc, found symbol in pc: `<none>`.
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -chisel3/w_tile.
	 -chisel3/w_tile#
	 -chisel3/w_tile().
	 -chisel3/util/w_tile.
	 -chisel3/util/w_tile#
	 -chisel3/util/w_tile().
	 -w_tile.
	 -w_tile#
	 -w_tile().
	 -scala/Predef.w_tile.
	 -scala/Predef.w_tile#
	 -scala/Predef.w_tile().
offset: 437
uri: file://<WORKSPACE>/src/main/scala/conv/RegularConvFull_SA_KTile.scala
text:
```scala
package conv

import chisel3._
import chisel3.util._

/** Level3 SA - KTile Core
  * - 單一 (oh, ow)
  * - K = kTile（不是 cin*kh*kw）
  * - 產生 cout 條 partial psum
  */
class RegularConvFull_SA_KTile(
  cout: Int,
  kTile: Int,
  cfg: FixedCfg
) extends Module {

  require(cout > 0 && kTile > 0)

  val io = IO(new Bundle {
    val start = Input(Bool())

    // x and w of K-tile
    val x_tile = Input(Vec(kTile, SInt(cfg.dataW.W)))
    val @@w_tile = Input(Vec(cout, Vec(kTile, SInt(cfg.dataW.W))))

    // psum in / out
    val psum_in  = Input(Vec(cout, SInt(cfg.accW.W)))
    val psum_out = Output(Vec(cout, SInt(cfg.accW.W)))

    val done = Output(Bool())
  })

  // SA：rows=cout, cols=kTile
  val sa = Module(new SystolicArrayMatVecFixed(rows = cout, cols = kTile, cfg = cfg))
  for (m <- 0 until cout) {
    for (k <- 0 until kTile) {
      sa.io.a_in(m)(k) := io.w_tile(m)(k)
    }
    sa.io.psum_in(m) := io.psum_in(m)
  }
  for (k <- 0 until kTile) {
    sa.io.b_in(k) := io.x_tile(k)
  }

  // combinational：start 後一拍視為 done（SA 無 pipeline）
  val doneReg = RegInit(false.B)
  io.done := doneReg

  when(io.start) {
    doneReg := true.B
  }.otherwise {
    doneReg := false.B
  }

  for (m <- 0 until cout) {
    io.psum_out(m) := sa.io.psum_out(m)
  }
}

```


#### Short summary: 

empty definition using pc, found symbol in pc: `<none>`.