
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

  const std::string dir = "../tests/vectors_sa_tiled/case14";
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
  tfp->open("wave_case14.vcd");

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

  if ((int)inVec.size() != (int)200) {
    std::cerr << "input length mismatch vs pin count: " << inVec.size() << " vs " << 200 << "\n";
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
  dut->io_x_in_1_0 = (int)inVec[25];
  dut->io_x_in_1_1 = (int)inVec[26];
  dut->io_x_in_1_2 = (int)inVec[27];
  dut->io_x_in_1_3 = (int)inVec[28];
  dut->io_x_in_1_4 = (int)inVec[29];
  dut->io_x_in_1_5 = (int)inVec[30];
  dut->io_x_in_1_6 = (int)inVec[31];
  dut->io_x_in_1_7 = (int)inVec[32];
  dut->io_x_in_1_8 = (int)inVec[33];
  dut->io_x_in_1_9 = (int)inVec[34];
  dut->io_x_in_1_10 = (int)inVec[35];
  dut->io_x_in_1_11 = (int)inVec[36];
  dut->io_x_in_1_12 = (int)inVec[37];
  dut->io_x_in_1_13 = (int)inVec[38];
  dut->io_x_in_1_14 = (int)inVec[39];
  dut->io_x_in_1_15 = (int)inVec[40];
  dut->io_x_in_1_16 = (int)inVec[41];
  dut->io_x_in_1_17 = (int)inVec[42];
  dut->io_x_in_1_18 = (int)inVec[43];
  dut->io_x_in_1_19 = (int)inVec[44];
  dut->io_x_in_1_20 = (int)inVec[45];
  dut->io_x_in_1_21 = (int)inVec[46];
  dut->io_x_in_1_22 = (int)inVec[47];
  dut->io_x_in_1_23 = (int)inVec[48];
  dut->io_x_in_1_24 = (int)inVec[49];
  dut->io_x_in_2_0 = (int)inVec[50];
  dut->io_x_in_2_1 = (int)inVec[51];
  dut->io_x_in_2_2 = (int)inVec[52];
  dut->io_x_in_2_3 = (int)inVec[53];
  dut->io_x_in_2_4 = (int)inVec[54];
  dut->io_x_in_2_5 = (int)inVec[55];
  dut->io_x_in_2_6 = (int)inVec[56];
  dut->io_x_in_2_7 = (int)inVec[57];
  dut->io_x_in_2_8 = (int)inVec[58];
  dut->io_x_in_2_9 = (int)inVec[59];
  dut->io_x_in_2_10 = (int)inVec[60];
  dut->io_x_in_2_11 = (int)inVec[61];
  dut->io_x_in_2_12 = (int)inVec[62];
  dut->io_x_in_2_13 = (int)inVec[63];
  dut->io_x_in_2_14 = (int)inVec[64];
  dut->io_x_in_2_15 = (int)inVec[65];
  dut->io_x_in_2_16 = (int)inVec[66];
  dut->io_x_in_2_17 = (int)inVec[67];
  dut->io_x_in_2_18 = (int)inVec[68];
  dut->io_x_in_2_19 = (int)inVec[69];
  dut->io_x_in_2_20 = (int)inVec[70];
  dut->io_x_in_2_21 = (int)inVec[71];
  dut->io_x_in_2_22 = (int)inVec[72];
  dut->io_x_in_2_23 = (int)inVec[73];
  dut->io_x_in_2_24 = (int)inVec[74];
  dut->io_x_in_3_0 = (int)inVec[75];
  dut->io_x_in_3_1 = (int)inVec[76];
  dut->io_x_in_3_2 = (int)inVec[77];
  dut->io_x_in_3_3 = (int)inVec[78];
  dut->io_x_in_3_4 = (int)inVec[79];
  dut->io_x_in_3_5 = (int)inVec[80];
  dut->io_x_in_3_6 = (int)inVec[81];
  dut->io_x_in_3_7 = (int)inVec[82];
  dut->io_x_in_3_8 = (int)inVec[83];
  dut->io_x_in_3_9 = (int)inVec[84];
  dut->io_x_in_3_10 = (int)inVec[85];
  dut->io_x_in_3_11 = (int)inVec[86];
  dut->io_x_in_3_12 = (int)inVec[87];
  dut->io_x_in_3_13 = (int)inVec[88];
  dut->io_x_in_3_14 = (int)inVec[89];
  dut->io_x_in_3_15 = (int)inVec[90];
  dut->io_x_in_3_16 = (int)inVec[91];
  dut->io_x_in_3_17 = (int)inVec[92];
  dut->io_x_in_3_18 = (int)inVec[93];
  dut->io_x_in_3_19 = (int)inVec[94];
  dut->io_x_in_3_20 = (int)inVec[95];
  dut->io_x_in_3_21 = (int)inVec[96];
  dut->io_x_in_3_22 = (int)inVec[97];
  dut->io_x_in_3_23 = (int)inVec[98];
  dut->io_x_in_3_24 = (int)inVec[99];
  dut->io_x_in_4_0 = (int)inVec[100];
  dut->io_x_in_4_1 = (int)inVec[101];
  dut->io_x_in_4_2 = (int)inVec[102];
  dut->io_x_in_4_3 = (int)inVec[103];
  dut->io_x_in_4_4 = (int)inVec[104];
  dut->io_x_in_4_5 = (int)inVec[105];
  dut->io_x_in_4_6 = (int)inVec[106];
  dut->io_x_in_4_7 = (int)inVec[107];
  dut->io_x_in_4_8 = (int)inVec[108];
  dut->io_x_in_4_9 = (int)inVec[109];
  dut->io_x_in_4_10 = (int)inVec[110];
  dut->io_x_in_4_11 = (int)inVec[111];
  dut->io_x_in_4_12 = (int)inVec[112];
  dut->io_x_in_4_13 = (int)inVec[113];
  dut->io_x_in_4_14 = (int)inVec[114];
  dut->io_x_in_4_15 = (int)inVec[115];
  dut->io_x_in_4_16 = (int)inVec[116];
  dut->io_x_in_4_17 = (int)inVec[117];
  dut->io_x_in_4_18 = (int)inVec[118];
  dut->io_x_in_4_19 = (int)inVec[119];
  dut->io_x_in_4_20 = (int)inVec[120];
  dut->io_x_in_4_21 = (int)inVec[121];
  dut->io_x_in_4_22 = (int)inVec[122];
  dut->io_x_in_4_23 = (int)inVec[123];
  dut->io_x_in_4_24 = (int)inVec[124];
  dut->io_x_in_5_0 = (int)inVec[125];
  dut->io_x_in_5_1 = (int)inVec[126];
  dut->io_x_in_5_2 = (int)inVec[127];
  dut->io_x_in_5_3 = (int)inVec[128];
  dut->io_x_in_5_4 = (int)inVec[129];
  dut->io_x_in_5_5 = (int)inVec[130];
  dut->io_x_in_5_6 = (int)inVec[131];
  dut->io_x_in_5_7 = (int)inVec[132];
  dut->io_x_in_5_8 = (int)inVec[133];
  dut->io_x_in_5_9 = (int)inVec[134];
  dut->io_x_in_5_10 = (int)inVec[135];
  dut->io_x_in_5_11 = (int)inVec[136];
  dut->io_x_in_5_12 = (int)inVec[137];
  dut->io_x_in_5_13 = (int)inVec[138];
  dut->io_x_in_5_14 = (int)inVec[139];
  dut->io_x_in_5_15 = (int)inVec[140];
  dut->io_x_in_5_16 = (int)inVec[141];
  dut->io_x_in_5_17 = (int)inVec[142];
  dut->io_x_in_5_18 = (int)inVec[143];
  dut->io_x_in_5_19 = (int)inVec[144];
  dut->io_x_in_5_20 = (int)inVec[145];
  dut->io_x_in_5_21 = (int)inVec[146];
  dut->io_x_in_5_22 = (int)inVec[147];
  dut->io_x_in_5_23 = (int)inVec[148];
  dut->io_x_in_5_24 = (int)inVec[149];
  dut->io_x_in_6_0 = (int)inVec[150];
  dut->io_x_in_6_1 = (int)inVec[151];
  dut->io_x_in_6_2 = (int)inVec[152];
  dut->io_x_in_6_3 = (int)inVec[153];
  dut->io_x_in_6_4 = (int)inVec[154];
  dut->io_x_in_6_5 = (int)inVec[155];
  dut->io_x_in_6_6 = (int)inVec[156];
  dut->io_x_in_6_7 = (int)inVec[157];
  dut->io_x_in_6_8 = (int)inVec[158];
  dut->io_x_in_6_9 = (int)inVec[159];
  dut->io_x_in_6_10 = (int)inVec[160];
  dut->io_x_in_6_11 = (int)inVec[161];
  dut->io_x_in_6_12 = (int)inVec[162];
  dut->io_x_in_6_13 = (int)inVec[163];
  dut->io_x_in_6_14 = (int)inVec[164];
  dut->io_x_in_6_15 = (int)inVec[165];
  dut->io_x_in_6_16 = (int)inVec[166];
  dut->io_x_in_6_17 = (int)inVec[167];
  dut->io_x_in_6_18 = (int)inVec[168];
  dut->io_x_in_6_19 = (int)inVec[169];
  dut->io_x_in_6_20 = (int)inVec[170];
  dut->io_x_in_6_21 = (int)inVec[171];
  dut->io_x_in_6_22 = (int)inVec[172];
  dut->io_x_in_6_23 = (int)inVec[173];
  dut->io_x_in_6_24 = (int)inVec[174];
  dut->io_x_in_7_0 = (int)inVec[175];
  dut->io_x_in_7_1 = (int)inVec[176];
  dut->io_x_in_7_2 = (int)inVec[177];
  dut->io_x_in_7_3 = (int)inVec[178];
  dut->io_x_in_7_4 = (int)inVec[179];
  dut->io_x_in_7_5 = (int)inVec[180];
  dut->io_x_in_7_6 = (int)inVec[181];
  dut->io_x_in_7_7 = (int)inVec[182];
  dut->io_x_in_7_8 = (int)inVec[183];
  dut->io_x_in_7_9 = (int)inVec[184];
  dut->io_x_in_7_10 = (int)inVec[185];
  dut->io_x_in_7_11 = (int)inVec[186];
  dut->io_x_in_7_12 = (int)inVec[187];
  dut->io_x_in_7_13 = (int)inVec[188];
  dut->io_x_in_7_14 = (int)inVec[189];
  dut->io_x_in_7_15 = (int)inVec[190];
  dut->io_x_in_7_16 = (int)inVec[191];
  dut->io_x_in_7_17 = (int)inVec[192];
  dut->io_x_in_7_18 = (int)inVec[193];
  dut->io_x_in_7_19 = (int)inVec[194];
  dut->io_x_in_7_20 = (int)inVec[195];
  dut->io_x_in_7_21 = (int)inVec[196];
  dut->io_x_in_7_22 = (int)inVec[197];
  dut->io_x_in_7_23 = (int)inVec[198];
  dut->io_x_in_7_24 = (int)inVec[199];

  if ((int)wVec.size() != (int)72) {
    std::cerr << "weight length mismatch vs pin count: " << wVec.size() << " vs " << 72 << "\n";
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
  dut->io_w_in_0_9 = (int)wVec[9];
  dut->io_w_in_0_10 = (int)wVec[10];
  dut->io_w_in_0_11 = (int)wVec[11];
  dut->io_w_in_0_12 = (int)wVec[12];
  dut->io_w_in_0_13 = (int)wVec[13];
  dut->io_w_in_0_14 = (int)wVec[14];
  dut->io_w_in_0_15 = (int)wVec[15];
  dut->io_w_in_0_16 = (int)wVec[16];
  dut->io_w_in_0_17 = (int)wVec[17];
  dut->io_w_in_0_18 = (int)wVec[18];
  dut->io_w_in_0_19 = (int)wVec[19];
  dut->io_w_in_0_20 = (int)wVec[20];
  dut->io_w_in_0_21 = (int)wVec[21];
  dut->io_w_in_0_22 = (int)wVec[22];
  dut->io_w_in_0_23 = (int)wVec[23];
  dut->io_w_in_0_24 = (int)wVec[24];
  dut->io_w_in_0_25 = (int)wVec[25];
  dut->io_w_in_0_26 = (int)wVec[26];
  dut->io_w_in_0_27 = (int)wVec[27];
  dut->io_w_in_0_28 = (int)wVec[28];
  dut->io_w_in_0_29 = (int)wVec[29];
  dut->io_w_in_0_30 = (int)wVec[30];
  dut->io_w_in_0_31 = (int)wVec[31];
  dut->io_w_in_0_32 = (int)wVec[32];
  dut->io_w_in_0_33 = (int)wVec[33];
  dut->io_w_in_0_34 = (int)wVec[34];
  dut->io_w_in_0_35 = (int)wVec[35];
  dut->io_w_in_0_36 = (int)wVec[36];
  dut->io_w_in_0_37 = (int)wVec[37];
  dut->io_w_in_0_38 = (int)wVec[38];
  dut->io_w_in_0_39 = (int)wVec[39];
  dut->io_w_in_0_40 = (int)wVec[40];
  dut->io_w_in_0_41 = (int)wVec[41];
  dut->io_w_in_0_42 = (int)wVec[42];
  dut->io_w_in_0_43 = (int)wVec[43];
  dut->io_w_in_0_44 = (int)wVec[44];
  dut->io_w_in_0_45 = (int)wVec[45];
  dut->io_w_in_0_46 = (int)wVec[46];
  dut->io_w_in_0_47 = (int)wVec[47];
  dut->io_w_in_0_48 = (int)wVec[48];
  dut->io_w_in_0_49 = (int)wVec[49];
  dut->io_w_in_0_50 = (int)wVec[50];
  dut->io_w_in_0_51 = (int)wVec[51];
  dut->io_w_in_0_52 = (int)wVec[52];
  dut->io_w_in_0_53 = (int)wVec[53];
  dut->io_w_in_0_54 = (int)wVec[54];
  dut->io_w_in_0_55 = (int)wVec[55];
  dut->io_w_in_0_56 = (int)wVec[56];
  dut->io_w_in_0_57 = (int)wVec[57];
  dut->io_w_in_0_58 = (int)wVec[58];
  dut->io_w_in_0_59 = (int)wVec[59];
  dut->io_w_in_0_60 = (int)wVec[60];
  dut->io_w_in_0_61 = (int)wVec[61];
  dut->io_w_in_0_62 = (int)wVec[62];
  dut->io_w_in_0_63 = (int)wVec[63];
  dut->io_w_in_0_64 = (int)wVec[64];
  dut->io_w_in_0_65 = (int)wVec[65];
  dut->io_w_in_0_66 = (int)wVec[66];
  dut->io_w_in_0_67 = (int)wVec[67];
  dut->io_w_in_0_68 = (int)wVec[68];
  dut->io_w_in_0_69 = (int)wVec[69];
  dut->io_w_in_0_70 = (int)wVec[70];
  dut->io_w_in_0_71 = (int)wVec[71];

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
  std::cout << "[case14] wrote " << observed.size() << " values, cycles=" << cyc << "\n";

  tfp->close();
  delete tfp;
  delete dut;
  return 0;
}
