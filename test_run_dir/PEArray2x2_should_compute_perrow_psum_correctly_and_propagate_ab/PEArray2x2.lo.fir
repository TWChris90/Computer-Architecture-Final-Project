FIRRTL version 1.2.0
circuit PEArray2x2 :
  module PE : @[src/main/scala/conv/PE.scala 18:7]
    input clock : Clock @[src/main/scala/conv/PE.scala 18:7]
    input reset : UInt<1> @[src/main/scala/conv/PE.scala 18:7]
    input io_a_in : SInt<8> @[src/main/scala/conv/PE.scala 21:14]
    input io_b_in : SInt<8> @[src/main/scala/conv/PE.scala 21:14]
    input io_psum_in : SInt<20> @[src/main/scala/conv/PE.scala 21:14]
    output io_a_out : SInt<8> @[src/main/scala/conv/PE.scala 21:14]
    output io_b_out : SInt<8> @[src/main/scala/conv/PE.scala 21:14]
    output io_psum_out : SInt<20> @[src/main/scala/conv/PE.scala 21:14]

    node prod = mul(io_a_in, io_b_in) @[src/main/scala/conv/PE.scala 36:23]
    node _io_psum_out_T = add(io_psum_in, prod) @[src/main/scala/conv/PE.scala 37:29]
    node _io_psum_out_T_1 = tail(_io_psum_out_T, 1) @[src/main/scala/conv/PE.scala 37:29]
    node _io_psum_out_T_2 = asSInt(_io_psum_out_T_1) @[src/main/scala/conv/PE.scala 37:29]
    io_a_out <= io_a_in @[src/main/scala/conv/PE.scala 32:12]
    io_b_out <= io_b_in @[src/main/scala/conv/PE.scala 33:12]
    io_psum_out <= _io_psum_out_T_2 @[src/main/scala/conv/PE.scala 37:15]

  module PEArray2x2 : @[src/main/scala/conv/PEArray2x2.scala 5:7]
    input clock : Clock @[src/main/scala/conv/PEArray2x2.scala 5:7]
    input reset : UInt<1> @[src/main/scala/conv/PEArray2x2.scala 5:7]
    input io_a_in_0 : SInt<8> @[src/main/scala/conv/PEArray2x2.scala 6:14]
    input io_a_in_1 : SInt<8> @[src/main/scala/conv/PEArray2x2.scala 6:14]
    input io_b_in_0 : SInt<8> @[src/main/scala/conv/PEArray2x2.scala 6:14]
    input io_b_in_1 : SInt<8> @[src/main/scala/conv/PEArray2x2.scala 6:14]
    input io_psum_in_0 : SInt<16> @[src/main/scala/conv/PEArray2x2.scala 6:14]
    input io_psum_in_1 : SInt<16> @[src/main/scala/conv/PEArray2x2.scala 6:14]
    output io_psum_out_0 : SInt<16> @[src/main/scala/conv/PEArray2x2.scala 6:14]
    output io_psum_out_1 : SInt<16> @[src/main/scala/conv/PEArray2x2.scala 6:14]
    output io_a_out_0 : SInt<8> @[src/main/scala/conv/PEArray2x2.scala 6:14]
    output io_a_out_1 : SInt<8> @[src/main/scala/conv/PEArray2x2.scala 6:14]
    output io_b_out_0 : SInt<8> @[src/main/scala/conv/PEArray2x2.scala 6:14]
    output io_b_out_1 : SInt<8> @[src/main/scala/conv/PEArray2x2.scala 6:14]

    inst pe00 of PE @[src/main/scala/conv/PEArray2x2.scala 26:20]
    inst pe01 of PE @[src/main/scala/conv/PEArray2x2.scala 27:20]
    inst pe10 of PE @[src/main/scala/conv/PEArray2x2.scala 28:20]
    inst pe11 of PE @[src/main/scala/conv/PEArray2x2.scala 29:20]
    io_psum_out_0 <= asSInt(bits(pe01.io_psum_out, 15, 0)) @[src/main/scala/conv/PEArray2x2.scala 54:19]
    io_psum_out_1 <= asSInt(bits(pe11.io_psum_out, 15, 0)) @[src/main/scala/conv/PEArray2x2.scala 60:19]
    io_a_out_0 <= pe01.io_a_out @[src/main/scala/conv/PEArray2x2.scala 55:19]
    io_a_out_1 <= pe11.io_a_out @[src/main/scala/conv/PEArray2x2.scala 61:19]
    io_b_out_0 <= pe10.io_b_out @[src/main/scala/conv/PEArray2x2.scala 64:15]
    io_b_out_1 <= pe11.io_b_out @[src/main/scala/conv/PEArray2x2.scala 65:15]
    pe00.clock <= clock
    pe00.reset <= reset
    pe00.io_a_in <= io_a_in_0 @[src/main/scala/conv/PEArray2x2.scala 34:16]
    pe00.io_b_in <= io_b_in_0 @[src/main/scala/conv/PEArray2x2.scala 43:16]
    pe00.io_psum_in <= pad(io_psum_in_0, 20) @[src/main/scala/conv/PEArray2x2.scala 52:19]
    pe01.clock <= clock
    pe01.reset <= reset
    pe01.io_a_in <= pe00.io_a_out @[src/main/scala/conv/PEArray2x2.scala 35:16]
    pe01.io_b_in <= io_b_in_1 @[src/main/scala/conv/PEArray2x2.scala 46:16]
    pe01.io_psum_in <= pe00.io_psum_out @[src/main/scala/conv/PEArray2x2.scala 53:19]
    pe10.clock <= clock
    pe10.reset <= reset
    pe10.io_a_in <= io_a_in_1 @[src/main/scala/conv/PEArray2x2.scala 37:16]
    pe10.io_b_in <= pe00.io_b_out @[src/main/scala/conv/PEArray2x2.scala 44:16]
    pe10.io_psum_in <= pad(io_psum_in_1, 20) @[src/main/scala/conv/PEArray2x2.scala 58:19]
    pe11.clock <= clock
    pe11.reset <= reset
    pe11.io_a_in <= pe10.io_a_out @[src/main/scala/conv/PEArray2x2.scala 38:16]
    pe11.io_b_in <= pe01.io_b_out @[src/main/scala/conv/PEArray2x2.scala 47:16]
    pe11.io_psum_in <= pe10.io_psum_out @[src/main/scala/conv/PEArray2x2.scala 59:19]
