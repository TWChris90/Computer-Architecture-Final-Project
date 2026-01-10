import re
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
VERI_DIR = ROOT / "verilator"
SV_DIR   = ROOT / "build" / "verilog"
VEC_DIR  = ROOT / "tests" / "vectors_sa_tiled"

TOP = "RegularConvFull_SA_Tiled"

RE_X = re.compile(r"\b(io_x_in_\d+_\d+)\b")
RE_W = re.compile(r"\b(io_w_in_\d+_\d+)\b")
RE_Y = re.compile(r"\b(io_y_out_\d+_\d+)\b")

def sh(cmd, cwd=None):
    print("+", " ".join(cmd), flush=True)
    subprocess.check_call(cmd, cwd=cwd)

def idx2(name: str):
    # io_x_in_3_17 -> (3,17)
    a = name.split("_")
    return (int(a[-2]), int(a[-1]))

def parse_pins(vh_path: Path):
    txt = vh_path.read_text()
    xs = sorted(set(RE_X.findall(txt)), key=idx2)
    ws = sorted(set(RE_W.findall(txt)), key=idx2)
    ys = sorted(set(RE_Y.findall(txt)), key=idx2)
    if not xs or not ws or not ys:
        raise RuntimeError(f"failed to parse pins from {vh_path}")
    return xs, ws, ys

def gen_tb(case_id: int, xs, ws, ys) -> str:
    x_assign = "".join([f"  dut->{n} = (int)inVec[{i}];\n" for i, n in enumerate(xs)])
    w_assign = "".join([f"  dut->{n} = (int)wVec[{i}];\n" for i, n in enumerate(ws)])
    y_read   = "".join([f"  observed.push_back((int32_t)dut->{n});\n" for n in ys])

    tpl = r'''
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "V__TOP__.h"

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

  const std::string dir = "../tests/vectors_sa_tiled/case__CID__";
  const auto meta = read_ints(dir + "/meta.txt");
  if (meta.size() < 7) {
    std::cerr << "meta.txt must have 7 lines\n";
    return 1;
  }

  const auto inVec = read_ints(dir + "/input.txt");
  const auto wVec  = read_ints(dir + "/weight.txt");

  auto* dut = new V__TOP__;

  Verilated::traceEverOn(true);
  auto* tfp = new VerilatedVcdC;
  dut->trace(tfp, 99);
  tfp->open("wave_case__CID__.vcd");

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

  if ((int)inVec.size() != (int)__NX__) {
    std::cerr << "input length mismatch vs pin count: " << inVec.size() << " vs " << __NX__ << "\n";
    return 1;
  }
__X_ASSIGN__

  if ((int)wVec.size() != (int)__NW__) {
    std::cerr << "weight length mismatch vs pin count: " << wVec.size() << " vs " << __NW__ << "\n";
    return 1;
  }
__W_ASSIGN__

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
  observed.reserve(__NY__);
__Y_READ__

  write_ints(dir + "/observed_verilator.txt", observed);
  std::cout << "[case__CID__] wrote " << observed.size() << " values, cycles=" << cyc << "\n";

  tfp->close();
  delete tfp;
  delete dut;
  return 0;
}
'''
    return (tpl
            .replace("__TOP__", TOP)
            .replace("__CID__", str(case_id))
            .replace("__NX__", str(len(xs)))
            .replace("__NW__", str(len(ws)))
            .replace("__NY__", str(len(ys)))
            .replace("__X_ASSIGN__", x_assign.rstrip("\n"))
            .replace("__W_ASSIGN__", w_assign.rstrip("\n"))
            .replace("__Y_READ__", y_read.rstrip("\n"))
           )

def main():
    # make sure that vectors exist
    for cid in range(16):
        d = VEC_DIR / f"case{cid}"
        if not (d / "meta.txt").exists():
            raise RuntimeError(f"missing {d}/meta.txt (Your vectors are not complete)")

    for cid in range(16):
        print(f"\n=== CASE {cid} ===", flush=True)

        # 1) emit SV for this case
        sh(["sbt", f"runMain conv.EmitSA case {cid}"], cwd=ROOT)
        sv = SV_DIR / f"{TOP}_case{cid}.sv"
        if not sv.exists():
            raise RuntimeError(f"SV not found: {sv}")

        # 2) use temporary tb build once to generate V*.h
        tmp_tb = VERI_DIR / "tb_tmp.cpp"
        tmp_tb.write_text(f'#include <verilated.h>\n#include "V{TOP}.h"\nint main(){{return 0;}}\n')

        sh(["make", "clean"], cwd=VERI_DIR)
        sh(["make", "all",
            f"TOP={TOP}",
            f"SV=../build/verilog/{TOP}_case{cid}.sv",
            f"TB={tmp_tb.name}"], cwd=VERI_DIR)

        vh = VERI_DIR / "build" / f"V{TOP}.h"
        xs, ws, ys = parse_pins(vh)

        # 3) generate TB for that case
        tb_name = f"tb_rc_sa_tiled_case{cid}.cpp"
        tb_path = VERI_DIR / tb_name
        tb_path.write_text(gen_tb(cid, xs, ws, ys))

        # 4) recompile + run（observed_verilator.txt）
        sh(["make", "clean"], cwd=VERI_DIR)
        sh(["make", "run",
            f"TOP={TOP}",
            f"SV=../build/verilog/{TOP}_case{cid}.sv",
            f"TB={tb_name}"], cwd=VERI_DIR)

        out = VEC_DIR / f"case{cid}" / "observed_verilator.txt"
        if not out.exists():
            raise RuntimeError(f"[case{cid}] finished but {out} not found")

    print("\nDone: observed_verilator.txt generated for case0~case15", flush=True)

if __name__ == "__main__":
    main()
