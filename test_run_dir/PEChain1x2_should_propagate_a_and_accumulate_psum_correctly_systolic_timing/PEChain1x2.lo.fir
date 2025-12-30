FIRRTL version 1.2.0
circuit PEChain1x2 :
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

  module PEChain1x2 : @[src/main/scala/conv/PEChain1x2.scala 6:7]
    input clock : Clock @[src/main/scala/conv/PEChain1x2.scala 6:7]
    input reset : UInt<1> @[src/main/scala/conv/PEChain1x2.scala 6:7]
    input io_a_in : SInt<8> @[src/main/scala/conv/PEChain1x2.scala 7:14]
    input io_psum_in : SInt<16> @[src/main/scala/conv/PEChain1x2.scala 7:14]
    input io_b_in_0 : SInt<8> @[src/main/scala/conv/PEChain1x2.scala 7:14]
    input io_b_in_1 : SInt<8> @[src/main/scala/conv/PEChain1x2.scala 7:14]
    output io_a_out : SInt<8> @[src/main/scala/conv/PEChain1x2.scala 7:14]
    output io_psum_out : SInt<16> @[src/main/scala/conv/PEChain1x2.scala 7:14]
    output io_b_out_0 : SInt<8> @[src/main/scala/conv/PEChain1x2.scala 7:14]
    output io_b_out_1 : SInt<8> @[src/main/scala/conv/PEChain1x2.scala 7:14]

    inst pe0 of PE @[src/main/scala/conv/PEChain1x2.scala 22:19]
    inst pe1 of PE @[src/main/scala/conv/PEChain1x2.scala 23:19]
    io_a_out <= pe1.io_a_out @[src/main/scala/conv/PEChain1x2.scala 38:15]
    io_psum_out <= asSInt(bits(pe1.io_psum_out, 15, 0)) @[src/main/scala/conv/PEChain1x2.scala 39:15]
    io_b_out_0 <= pe0.io_b_out @[src/main/scala/conv/PEChain1x2.scala 41:15]
    io_b_out_1 <= pe1.io_b_out @[src/main/scala/conv/PEChain1x2.scala 42:15]
    pe0.clock <= clock
    pe0.reset <= reset
    pe0.io_a_in <= io_a_in @[src/main/scala/conv/PEChain1x2.scala 26:18]
    pe0.io_b_in <= io_b_in_0 @[src/main/scala/conv/PEChain1x2.scala 27:18]
    pe0.io_psum_in <= pad(io_psum_in, 20) @[src/main/scala/conv/PEChain1x2.scala 28:18]
    pe1.clock <= clock
    pe1.reset <= reset
    pe1.io_a_in <= pe0.io_a_out @[src/main/scala/conv/PEChain1x2.scala 32:18]
    pe1.io_b_in <= io_b_in_1 @[src/main/scala/conv/PEChain1x2.scala 33:18]
    pe1.io_psum_in <= pe0.io_psum_out @[src/main/scala/conv/PEChain1x2.scala 34:18]
