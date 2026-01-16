# Chisel Convolution Modules

## Project Overview
This repository contains the hardware design, software references, and lab documentation for EE310 Lab 4. The project develops parameterizable depthwise, pointwise, and regular 2D convolution blocks in Chisel, exercises them with signed data, and cross-checks behavior against Python reference scripts. The workflow targets rapid iteration from algorithm exploration to synthesizable SystemVerilog suitable for downstream FPGA or ASIC tooling.

## Features
- **Chisel Implementations**: Modular depthwise, pointwise, and full convolutions backed by a reusable signed dot-product primitive.
- **Configurable Arithmetic**: Parameter inputs define tensor dimensions, filter sizes, and channel counts to explore different convolution footprints.
- **Simulation & Testing**: ScalaTest suites validate individual modules and the end-to-end SA + dense pipeline; Verilator is supported for SA bring-up.
- **SystemVerilog Generation**: `ChiselStage.emitSystemVerilogFile` creates clean RTL for each convolution block and the integrated CNN top.
- **Python References**: `dw.py`, `pw.py`, and `rc.py` reproduce the same operations in NumPy for quick sanity checks or dataset creation.
- **Lab Artifacts**: PDF reports document design goals, derivations, and experimental outcomes for the course submission.

## Repository Structure
```
Chisel_Convolution_Module/
├── build.sbt                         # sbt project definition and Chisel/ScalaTest dependencies
├── project/build.properties          # sbt version pin
├── src/main/scala/conv/Conv.scala    # Depthwise, pointwise, and regular convolution hardware
├── src/main/scala/conv/Main.scala    # Entry point that emits SystemVerilog for each module
├── src/main/scala/conv/CNNTop.scala  # End-to-end conv + post + dense integration
├── src/main/scala/conv/EmitConvDense.scala # Emit CNNTop SystemVerilog from test vectors
├── src/test/scala/conv/ConvSpec.scala # ScalaTest specs exercising all convolution variants
├── src/test/scala/conv/CNNTopNPZSpec.scala # End-to-end closed-loop test (case vectors)
├── dw.py | pw.py | rc.py             # NumPy reference scripts for each convolution style
├── random_sample.py                  # Helper that generates randomized Scala tests (WIP)
├── EE310_Lab_4.pdf                   # Lab handout and assignment notes
├── EE310_lab4_report_yagizebil.pdf   # Final report summarizing design and results
├── target/                           # sbt build artifacts
└── venv/                             # Optional Python virtual environment
```

## How to Build and Run
1. **Clone the Repository**
   ```bash
   git clone https://github.com/YagizEbil/ee310_lab4_yagizebil.git
   cd ee310_lab4_yagizebil
   ```

2. **Install Scala/Chisel Tooling**  
   Make sure Java 11+, `sbt`, and a recent Scala toolchain are available. Resolve dependencies and compile the project:
   ```bash
   sbt compile
   ```

3. **Run Hardware Tests**  
   Execute the ScalaTest suites to simulate the convolution blocks with signed data sets:
   ```bash
   sbt test
   ```

4. **Generate SystemVerilog**  
   Emit RTL for each module. Depthwise output lands in the project root, while pointwise and regular convolution modules are written into dedicated folders:
   ```bash
   sbt "runMain conv.Main"
   ```
   Inspect the generated `.sv` files before integrating them into downstream toolflows.

5. **Generate SystemVerilog for All Modules (including CNNTop)**  
   Emit every module into `build/verilog/all/<ModuleName>`:
   ```bash
   sbt "runMain conv.EmitAll"
   ```

6. **Generate CNNTop SystemVerilog (SA + Dense)**  
   Emit a closed-loop top module using the same vector metadata used by tests:
   ```bash
   sbt "runMain conv.EmitConvDense 0"
   ```
   Output is written to `build/verilog/CNNTop_case0.sv`.

7. **End-to-End Closed-Loop Test (SA + Quant/Pool/Dequant + Dense)**  
   This uses `tests/vectors_sa_tiled/case*` and produces `observed*.txt` files:
   ```bash
   sbt "testOnly conv.CNNTopNPZSpec"
   python python/compare_npz.py
   ```
   To dump waveforms for case0, set `VCD=1`.

8. **Verilator SA Bring-up**  
   ```bash
   sbt "testOnly conv.SystolicArrayVerilatorSpec"
   ```

9. **Verify with Python References (Optional)**  
   Use NumPy scripts to reproduce expected outputs or craft new stimuli. A lightweight setup looks like:
   ```bash
   python3 -m venv venv
   source venv/bin/activate
   pip install numpy

   python dw.py   # depthwise convolution walk-through
   python pw.py   # pointwise convolution walk-through
   python rc.py   # regular convolution walk-through
   ```
   Script logs detail every multiply-accumulate term, making it easy to match against simulation traces.

## Additional Resources
- `EE310_Lab_4.pdf` outlines the original assignment prompt and design constraints.
- `EE310_lab4_report_yagizebil.pdf` documents the final architecture, verification strategy, and conclusions.

## Authors
- [Kadir Yagiz Ebil](https://github.com/YagizEbil)
- [TWChris90](https://github.com/TWChris90)
## License
No license file has been provided. Please contact the author before reusing this work outside the course setting.
