FIRRTL version 1.2.0
circuit ConvEngine2x2 :
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

  module ConvEngine2x2 : @[src/main/scala/conv/ConvEngine2x2.scala 6:7]
    input clock : Clock @[src/main/scala/conv/ConvEngine2x2.scala 6:7]
    input reset : UInt<1> @[src/main/scala/conv/ConvEngine2x2.scala 6:7]
    input io_x_0 : SInt<8> @[src/main/scala/conv/ConvEngine2x2.scala 9:14]
    input io_x_1 : SInt<8> @[src/main/scala/conv/ConvEngine2x2.scala 9:14]
    input io_x_2 : SInt<8> @[src/main/scala/conv/ConvEngine2x2.scala 9:14]
    input io_x_3 : SInt<8> @[src/main/scala/conv/ConvEngine2x2.scala 9:14]
    input io_k_0 : SInt<8> @[src/main/scala/conv/ConvEngine2x2.scala 9:14]
    input io_k_1 : SInt<8> @[src/main/scala/conv/ConvEngine2x2.scala 9:14]
    input io_k_2 : SInt<8> @[src/main/scala/conv/ConvEngine2x2.scala 9:14]
    input io_k_3 : SInt<8> @[src/main/scala/conv/ConvEngine2x2.scala 9:14]
    output io_y : SInt<18> @[src/main/scala/conv/ConvEngine2x2.scala 9:14]

    inst pe00 of PE @[src/main/scala/conv/ConvEngine2x2.scala 19:20]
    inst pe01 of PE @[src/main/scala/conv/ConvEngine2x2.scala 20:20]
    inst pe10 of PE @[src/main/scala/conv/ConvEngine2x2.scala 21:20]
    inst pe11 of PE @[src/main/scala/conv/ConvEngine2x2.scala 22:20]
    node _io_y_T = add(pe01.io_psum_out, pe11.io_psum_out) @[src/main/scala/conv/ConvEngine2x2.scala 46:28]
    node _io_y_T_1 = tail(_io_y_T, 1) @[src/main/scala/conv/ConvEngine2x2.scala 46:28]
    node _io_y_T_2 = asSInt(_io_y_T_1) @[src/main/scala/conv/ConvEngine2x2.scala 46:28]
    io_y <= asSInt(bits(_io_y_T_2, 17, 0)) @[src/main/scala/conv/ConvEngine2x2.scala 46:8]
    pe00.clock <= clock
    pe00.reset <= reset
    pe00.io_a_in <= io_x_0 @[src/main/scala/conv/ConvEngine2x2.scala 27:19]
    pe00.io_b_in <= io_k_0 @[src/main/scala/conv/ConvEngine2x2.scala 28:19]
    pe00.io_psum_in <= SInt<20>("h0") @[src/main/scala/conv/ConvEngine2x2.scala 29:19]
    pe01.clock <= clock
    pe01.reset <= reset
    pe01.io_a_in <= io_x_1 @[src/main/scala/conv/ConvEngine2x2.scala 31:19]
    pe01.io_b_in <= io_k_1 @[src/main/scala/conv/ConvEngine2x2.scala 32:19]
    pe01.io_psum_in <= pe00.io_psum_out @[src/main/scala/conv/ConvEngine2x2.scala 33:19]
    pe10.clock <= clock
    pe10.reset <= reset
    pe10.io_a_in <= io_x_2 @[src/main/scala/conv/ConvEngine2x2.scala 38:19]
    pe10.io_b_in <= io_k_2 @[src/main/scala/conv/ConvEngine2x2.scala 39:19]
    pe10.io_psum_in <= SInt<20>("h0") @[src/main/scala/conv/ConvEngine2x2.scala 40:19]
    pe11.clock <= clock
    pe11.reset <= reset
    pe11.io_a_in <= io_x_3 @[src/main/scala/conv/ConvEngine2x2.scala 42:19]
    pe11.io_b_in <= io_k_3 @[src/main/scala/conv/ConvEngine2x2.scala 43:19]
    pe11.io_psum_in <= pe10.io_psum_out @[src/main/scala/conv/ConvEngine2x2.scala 44:19]
