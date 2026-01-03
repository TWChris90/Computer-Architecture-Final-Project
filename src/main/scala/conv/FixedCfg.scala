package conv

/** Fixed-point format config (Q format) using SInt storage.
  *
  * value_real = value_sint / 2^frac
  *
  * dataW:  input width (activation/weight)
  * frac:   fractional bits
  * mulW:   multiplication intermediate width (recommend 2*dataW)
  * accW:   accumulator width (must be >= mulW + extra headroom)
  */
case class FixedCfg(
  dataW: Int,
  frac: Int,
  mulW: Int,
  accW: Int
) {
  require(dataW > 0)
  require(frac >= 0 && frac < dataW)
  require(mulW >= 2 * dataW)
  require(accW >= mulW + 2)
}
