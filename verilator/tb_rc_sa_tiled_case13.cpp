
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

  const std::string dir = "../tests/vectors_sa_tiled/case13";
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
  tfp->open("wave_case13.vcd");

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

  if ((int)inVec.size() != (int)128) {
    std::cerr << "input length mismatch vs pin count: " << inVec.size() << " vs " << 128 << "\n";
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
  dut->io_x_in_0_25 = (int)inVec[25];
  dut->io_x_in_0_26 = (int)inVec[26];
  dut->io_x_in_0_27 = (int)inVec[27];
  dut->io_x_in_0_28 = (int)inVec[28];
  dut->io_x_in_0_29 = (int)inVec[29];
  dut->io_x_in_0_30 = (int)inVec[30];
  dut->io_x_in_0_31 = (int)inVec[31];
  dut->io_x_in_0_32 = (int)inVec[32];
  dut->io_x_in_0_33 = (int)inVec[33];
  dut->io_x_in_0_34 = (int)inVec[34];
  dut->io_x_in_0_35 = (int)inVec[35];
  dut->io_x_in_0_36 = (int)inVec[36];
  dut->io_x_in_0_37 = (int)inVec[37];
  dut->io_x_in_0_38 = (int)inVec[38];
  dut->io_x_in_0_39 = (int)inVec[39];
  dut->io_x_in_0_40 = (int)inVec[40];
  dut->io_x_in_0_41 = (int)inVec[41];
  dut->io_x_in_0_42 = (int)inVec[42];
  dut->io_x_in_0_43 = (int)inVec[43];
  dut->io_x_in_0_44 = (int)inVec[44];
  dut->io_x_in_0_45 = (int)inVec[45];
  dut->io_x_in_0_46 = (int)inVec[46];
  dut->io_x_in_0_47 = (int)inVec[47];
  dut->io_x_in_0_48 = (int)inVec[48];
  dut->io_x_in_0_49 = (int)inVec[49];
  dut->io_x_in_0_50 = (int)inVec[50];
  dut->io_x_in_0_51 = (int)inVec[51];
  dut->io_x_in_0_52 = (int)inVec[52];
  dut->io_x_in_0_53 = (int)inVec[53];
  dut->io_x_in_0_54 = (int)inVec[54];
  dut->io_x_in_0_55 = (int)inVec[55];
  dut->io_x_in_0_56 = (int)inVec[56];
  dut->io_x_in_0_57 = (int)inVec[57];
  dut->io_x_in_0_58 = (int)inVec[58];
  dut->io_x_in_0_59 = (int)inVec[59];
  dut->io_x_in_0_60 = (int)inVec[60];
  dut->io_x_in_0_61 = (int)inVec[61];
  dut->io_x_in_0_62 = (int)inVec[62];
  dut->io_x_in_0_63 = (int)inVec[63];
  dut->io_x_in_1_0 = (int)inVec[64];
  dut->io_x_in_1_1 = (int)inVec[65];
  dut->io_x_in_1_2 = (int)inVec[66];
  dut->io_x_in_1_3 = (int)inVec[67];
  dut->io_x_in_1_4 = (int)inVec[68];
  dut->io_x_in_1_5 = (int)inVec[69];
  dut->io_x_in_1_6 = (int)inVec[70];
  dut->io_x_in_1_7 = (int)inVec[71];
  dut->io_x_in_1_8 = (int)inVec[72];
  dut->io_x_in_1_9 = (int)inVec[73];
  dut->io_x_in_1_10 = (int)inVec[74];
  dut->io_x_in_1_11 = (int)inVec[75];
  dut->io_x_in_1_12 = (int)inVec[76];
  dut->io_x_in_1_13 = (int)inVec[77];
  dut->io_x_in_1_14 = (int)inVec[78];
  dut->io_x_in_1_15 = (int)inVec[79];
  dut->io_x_in_1_16 = (int)inVec[80];
  dut->io_x_in_1_17 = (int)inVec[81];
  dut->io_x_in_1_18 = (int)inVec[82];
  dut->io_x_in_1_19 = (int)inVec[83];
  dut->io_x_in_1_20 = (int)inVec[84];
  dut->io_x_in_1_21 = (int)inVec[85];
  dut->io_x_in_1_22 = (int)inVec[86];
  dut->io_x_in_1_23 = (int)inVec[87];
  dut->io_x_in_1_24 = (int)inVec[88];
  dut->io_x_in_1_25 = (int)inVec[89];
  dut->io_x_in_1_26 = (int)inVec[90];
  dut->io_x_in_1_27 = (int)inVec[91];
  dut->io_x_in_1_28 = (int)inVec[92];
  dut->io_x_in_1_29 = (int)inVec[93];
  dut->io_x_in_1_30 = (int)inVec[94];
  dut->io_x_in_1_31 = (int)inVec[95];
  dut->io_x_in_1_32 = (int)inVec[96];
  dut->io_x_in_1_33 = (int)inVec[97];
  dut->io_x_in_1_34 = (int)inVec[98];
  dut->io_x_in_1_35 = (int)inVec[99];
  dut->io_x_in_1_36 = (int)inVec[100];
  dut->io_x_in_1_37 = (int)inVec[101];
  dut->io_x_in_1_38 = (int)inVec[102];
  dut->io_x_in_1_39 = (int)inVec[103];
  dut->io_x_in_1_40 = (int)inVec[104];
  dut->io_x_in_1_41 = (int)inVec[105];
  dut->io_x_in_1_42 = (int)inVec[106];
  dut->io_x_in_1_43 = (int)inVec[107];
  dut->io_x_in_1_44 = (int)inVec[108];
  dut->io_x_in_1_45 = (int)inVec[109];
  dut->io_x_in_1_46 = (int)inVec[110];
  dut->io_x_in_1_47 = (int)inVec[111];
  dut->io_x_in_1_48 = (int)inVec[112];
  dut->io_x_in_1_49 = (int)inVec[113];
  dut->io_x_in_1_50 = (int)inVec[114];
  dut->io_x_in_1_51 = (int)inVec[115];
  dut->io_x_in_1_52 = (int)inVec[116];
  dut->io_x_in_1_53 = (int)inVec[117];
  dut->io_x_in_1_54 = (int)inVec[118];
  dut->io_x_in_1_55 = (int)inVec[119];
  dut->io_x_in_1_56 = (int)inVec[120];
  dut->io_x_in_1_57 = (int)inVec[121];
  dut->io_x_in_1_58 = (int)inVec[122];
  dut->io_x_in_1_59 = (int)inVec[123];
  dut->io_x_in_1_60 = (int)inVec[124];
  dut->io_x_in_1_61 = (int)inVec[125];
  dut->io_x_in_1_62 = (int)inVec[126];
  dut->io_x_in_1_63 = (int)inVec[127];

  if ((int)wVec.size() != (int)4) {
    std::cerr << "weight length mismatch vs pin count: " << wVec.size() << " vs " << 4 << "\n";
    return 1;
  }
  dut->io_w_in_0_0 = (int)wVec[0];
  dut->io_w_in_0_1 = (int)wVec[1];
  dut->io_w_in_1_0 = (int)wVec[2];
  dut->io_w_in_1_1 = (int)wVec[3];

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
  observed.reserve(128);
  observed.push_back((int32_t)dut->io_y_out_0_0);
  observed.push_back((int32_t)dut->io_y_out_0_1);
  observed.push_back((int32_t)dut->io_y_out_0_2);
  observed.push_back((int32_t)dut->io_y_out_0_3);
  observed.push_back((int32_t)dut->io_y_out_0_4);
  observed.push_back((int32_t)dut->io_y_out_0_5);
  observed.push_back((int32_t)dut->io_y_out_0_6);
  observed.push_back((int32_t)dut->io_y_out_0_7);
  observed.push_back((int32_t)dut->io_y_out_0_8);
  observed.push_back((int32_t)dut->io_y_out_0_9);
  observed.push_back((int32_t)dut->io_y_out_0_10);
  observed.push_back((int32_t)dut->io_y_out_0_11);
  observed.push_back((int32_t)dut->io_y_out_0_12);
  observed.push_back((int32_t)dut->io_y_out_0_13);
  observed.push_back((int32_t)dut->io_y_out_0_14);
  observed.push_back((int32_t)dut->io_y_out_0_15);
  observed.push_back((int32_t)dut->io_y_out_0_16);
  observed.push_back((int32_t)dut->io_y_out_0_17);
  observed.push_back((int32_t)dut->io_y_out_0_18);
  observed.push_back((int32_t)dut->io_y_out_0_19);
  observed.push_back((int32_t)dut->io_y_out_0_20);
  observed.push_back((int32_t)dut->io_y_out_0_21);
  observed.push_back((int32_t)dut->io_y_out_0_22);
  observed.push_back((int32_t)dut->io_y_out_0_23);
  observed.push_back((int32_t)dut->io_y_out_0_24);
  observed.push_back((int32_t)dut->io_y_out_0_25);
  observed.push_back((int32_t)dut->io_y_out_0_26);
  observed.push_back((int32_t)dut->io_y_out_0_27);
  observed.push_back((int32_t)dut->io_y_out_0_28);
  observed.push_back((int32_t)dut->io_y_out_0_29);
  observed.push_back((int32_t)dut->io_y_out_0_30);
  observed.push_back((int32_t)dut->io_y_out_0_31);
  observed.push_back((int32_t)dut->io_y_out_0_32);
  observed.push_back((int32_t)dut->io_y_out_0_33);
  observed.push_back((int32_t)dut->io_y_out_0_34);
  observed.push_back((int32_t)dut->io_y_out_0_35);
  observed.push_back((int32_t)dut->io_y_out_0_36);
  observed.push_back((int32_t)dut->io_y_out_0_37);
  observed.push_back((int32_t)dut->io_y_out_0_38);
  observed.push_back((int32_t)dut->io_y_out_0_39);
  observed.push_back((int32_t)dut->io_y_out_0_40);
  observed.push_back((int32_t)dut->io_y_out_0_41);
  observed.push_back((int32_t)dut->io_y_out_0_42);
  observed.push_back((int32_t)dut->io_y_out_0_43);
  observed.push_back((int32_t)dut->io_y_out_0_44);
  observed.push_back((int32_t)dut->io_y_out_0_45);
  observed.push_back((int32_t)dut->io_y_out_0_46);
  observed.push_back((int32_t)dut->io_y_out_0_47);
  observed.push_back((int32_t)dut->io_y_out_0_48);
  observed.push_back((int32_t)dut->io_y_out_0_49);
  observed.push_back((int32_t)dut->io_y_out_0_50);
  observed.push_back((int32_t)dut->io_y_out_0_51);
  observed.push_back((int32_t)dut->io_y_out_0_52);
  observed.push_back((int32_t)dut->io_y_out_0_53);
  observed.push_back((int32_t)dut->io_y_out_0_54);
  observed.push_back((int32_t)dut->io_y_out_0_55);
  observed.push_back((int32_t)dut->io_y_out_0_56);
  observed.push_back((int32_t)dut->io_y_out_0_57);
  observed.push_back((int32_t)dut->io_y_out_0_58);
  observed.push_back((int32_t)dut->io_y_out_0_59);
  observed.push_back((int32_t)dut->io_y_out_0_60);
  observed.push_back((int32_t)dut->io_y_out_0_61);
  observed.push_back((int32_t)dut->io_y_out_0_62);
  observed.push_back((int32_t)dut->io_y_out_0_63);
  observed.push_back((int32_t)dut->io_y_out_1_0);
  observed.push_back((int32_t)dut->io_y_out_1_1);
  observed.push_back((int32_t)dut->io_y_out_1_2);
  observed.push_back((int32_t)dut->io_y_out_1_3);
  observed.push_back((int32_t)dut->io_y_out_1_4);
  observed.push_back((int32_t)dut->io_y_out_1_5);
  observed.push_back((int32_t)dut->io_y_out_1_6);
  observed.push_back((int32_t)dut->io_y_out_1_7);
  observed.push_back((int32_t)dut->io_y_out_1_8);
  observed.push_back((int32_t)dut->io_y_out_1_9);
  observed.push_back((int32_t)dut->io_y_out_1_10);
  observed.push_back((int32_t)dut->io_y_out_1_11);
  observed.push_back((int32_t)dut->io_y_out_1_12);
  observed.push_back((int32_t)dut->io_y_out_1_13);
  observed.push_back((int32_t)dut->io_y_out_1_14);
  observed.push_back((int32_t)dut->io_y_out_1_15);
  observed.push_back((int32_t)dut->io_y_out_1_16);
  observed.push_back((int32_t)dut->io_y_out_1_17);
  observed.push_back((int32_t)dut->io_y_out_1_18);
  observed.push_back((int32_t)dut->io_y_out_1_19);
  observed.push_back((int32_t)dut->io_y_out_1_20);
  observed.push_back((int32_t)dut->io_y_out_1_21);
  observed.push_back((int32_t)dut->io_y_out_1_22);
  observed.push_back((int32_t)dut->io_y_out_1_23);
  observed.push_back((int32_t)dut->io_y_out_1_24);
  observed.push_back((int32_t)dut->io_y_out_1_25);
  observed.push_back((int32_t)dut->io_y_out_1_26);
  observed.push_back((int32_t)dut->io_y_out_1_27);
  observed.push_back((int32_t)dut->io_y_out_1_28);
  observed.push_back((int32_t)dut->io_y_out_1_29);
  observed.push_back((int32_t)dut->io_y_out_1_30);
  observed.push_back((int32_t)dut->io_y_out_1_31);
  observed.push_back((int32_t)dut->io_y_out_1_32);
  observed.push_back((int32_t)dut->io_y_out_1_33);
  observed.push_back((int32_t)dut->io_y_out_1_34);
  observed.push_back((int32_t)dut->io_y_out_1_35);
  observed.push_back((int32_t)dut->io_y_out_1_36);
  observed.push_back((int32_t)dut->io_y_out_1_37);
  observed.push_back((int32_t)dut->io_y_out_1_38);
  observed.push_back((int32_t)dut->io_y_out_1_39);
  observed.push_back((int32_t)dut->io_y_out_1_40);
  observed.push_back((int32_t)dut->io_y_out_1_41);
  observed.push_back((int32_t)dut->io_y_out_1_42);
  observed.push_back((int32_t)dut->io_y_out_1_43);
  observed.push_back((int32_t)dut->io_y_out_1_44);
  observed.push_back((int32_t)dut->io_y_out_1_45);
  observed.push_back((int32_t)dut->io_y_out_1_46);
  observed.push_back((int32_t)dut->io_y_out_1_47);
  observed.push_back((int32_t)dut->io_y_out_1_48);
  observed.push_back((int32_t)dut->io_y_out_1_49);
  observed.push_back((int32_t)dut->io_y_out_1_50);
  observed.push_back((int32_t)dut->io_y_out_1_51);
  observed.push_back((int32_t)dut->io_y_out_1_52);
  observed.push_back((int32_t)dut->io_y_out_1_53);
  observed.push_back((int32_t)dut->io_y_out_1_54);
  observed.push_back((int32_t)dut->io_y_out_1_55);
  observed.push_back((int32_t)dut->io_y_out_1_56);
  observed.push_back((int32_t)dut->io_y_out_1_57);
  observed.push_back((int32_t)dut->io_y_out_1_58);
  observed.push_back((int32_t)dut->io_y_out_1_59);
  observed.push_back((int32_t)dut->io_y_out_1_60);
  observed.push_back((int32_t)dut->io_y_out_1_61);
  observed.push_back((int32_t)dut->io_y_out_1_62);
  observed.push_back((int32_t)dut->io_y_out_1_63);

  write_ints(dir + "/observed_verilator.txt", observed);
  std::cout << "[case13] wrote " << observed.size() << " values, cycles=" << cyc << "\n";

  tfp->close();
  delete tfp;
  delete dut;
  return 0;
}
