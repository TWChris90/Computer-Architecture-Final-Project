
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "VRegularConvFull_SA_Tiled.h"

static std::vector<long long> read_ints(const std::string &path) {
  std::ifstream ifs(path);
  if (!ifs) throw std::runtime_error("cannot open: " + path);
  std::vector<long long> v;
  std::string line;
  while (std::getline(ifs, line)) {
    auto p = line.find('#');
    if (p != std::string::npos) line = line.substr(0, p);
    std::stringstream ss(line);
    long long x;
    if (ss >> x) v.push_back(x);
  }
  return v;
}

static void write_ints(const std::string &path, const std::vector<long long> &v) {
  std::ofstream ofs(path);
  if (!ofs) throw std::runtime_error("cannot write: " + path);
  for (auto x : v) ofs << x << "\n";
}

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);

  const std::string dir = "../tests/vectors_sa_tiled/case0";
  const auto meta = read_ints(dir + "/meta.txt");
  if (meta.size() < 7) {
    std::cerr << "meta.txt must have 7 lines\n";
    return 1;
  }

  const auto inVec = read_ints(dir + "/input.txt");
  const auto wVec  = read_ints(dir + "/weight.txt");

  auto* dut = new VRegularConvFull_SA_Tiled;

  Verilated::traceEverOn(true);
  auto* tfp = new VerilatedVcdC;
  dut->trace(tfp, 99);
  tfp->open("wave_case0.vcd");

  vluint64_t t = 0;
  auto tick = [&]() {
    dut->clock = 0; dut->eval(); tfp->dump(t++);
    dut->clock = 1; dut->eval(); tfp->dump(t++);
  };

  dut->reset = 1;
  dut->io_start = 0;
  for (int i = 0; i < 5; i++) tick();
  dut->reset = 0;
  for (int i = 0; i < 2; i++) tick();

  if ((int)inVec.size() != (int)25) {
    std::cerr << "input length mismatch vs pin count: " << inVec.size() << " vs " << 25 << "\n";
    return 1;
  }
  dut->io_x_in_0_0 = (int)inVec[0];
  dut->io_x_in_0_1 = (int)inVec[1];
  dut->io_x_in_0_2 = (int)inVec[2];
  dut->io_x_in_0_3 = (int)inVec[3];
  dut->io_x_in_0_4 = (int)inVec[4];
  dut->io_x_in_0_5 = (int)inVec[5];
  dut->io_x_in_0_6 = (int)inVec[6];
  dut->io_x_in_0_7 = (int)inVec[7];
  dut->io_x_in_0_8 = (int)inVec[8];
  dut->io_x_in_0_9 = (int)inVec[9];
  dut->io_x_in_0_10 = (int)inVec[10];
  dut->io_x_in_0_11 = (int)inVec[11];
  dut->io_x_in_0_12 = (int)inVec[12];
  dut->io_x_in_0_13 = (int)inVec[13];
  dut->io_x_in_0_14 = (int)inVec[14];
  dut->io_x_in_0_15 = (int)inVec[15];
  dut->io_x_in_0_16 = (int)inVec[16];
  dut->io_x_in_0_17 = (int)inVec[17];
  dut->io_x_in_0_18 = (int)inVec[18];
  dut->io_x_in_0_19 = (int)inVec[19];
  dut->io_x_in_0_20 = (int)inVec[20];
  dut->io_x_in_0_21 = (int)inVec[21];
  dut->io_x_in_0_22 = (int)inVec[22];
  dut->io_x_in_0_23 = (int)inVec[23];
  dut->io_x_in_0_24 = (int)inVec[24];

  if ((int)wVec.size() != (int)9) {
    std::cerr << "weight length mismatch vs pin count: " << wVec.size() << " vs " << 9 << "\n";
    return 1;
  }
  dut->io_w_in_0_0 = (int)wVec[0];
  dut->io_w_in_0_1 = (int)wVec[1];
  dut->io_w_in_0_2 = (int)wVec[2];
  dut->io_w_in_0_3 = (int)wVec[3];
  dut->io_w_in_0_4 = (int)wVec[4];
  dut->io_w_in_0_5 = (int)wVec[5];
  dut->io_w_in_0_6 = (int)wVec[6];
  dut->io_w_in_0_7 = (int)wVec[7];
  dut->io_w_in_0_8 = (int)wVec[8];

  dut->io_start = 1;
  tick();
  dut->io_start = 0;

  const int maxCycles = 300000;
  int cyc = 0;
  while (!dut->io_done) {
    tick();
    cyc++;
    if (cyc > maxCycles) {
      std::cerr << "TIMEOUT\n";
      return 1;
    }
  }

  std::vector<long long> observed;
  observed.reserve(9);
  observed.push_back((int32_t)dut->io_y_out_0_0);
  observed.push_back((int32_t)dut->io_y_out_0_1);
  observed.push_back((int32_t)dut->io_y_out_0_2);
  observed.push_back((int32_t)dut->io_y_out_0_3);
  observed.push_back((int32_t)dut->io_y_out_0_4);
  observed.push_back((int32_t)dut->io_y_out_0_5);
  observed.push_back((int32_t)dut->io_y_out_0_6);
  observed.push_back((int32_t)dut->io_y_out_0_7);
  observed.push_back((int32_t)dut->io_y_out_0_8);

  write_ints(dir + "/observed_verilator.txt", observed);
  std::cout << "[case0] wrote " << observed.size() << " values, cycles=" << cyc << "\n";

  tfp->close();
  delete tfp;
  delete dut;
  return 0;
}
