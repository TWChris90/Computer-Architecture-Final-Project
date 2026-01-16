#!/usr/bin/env python3
import shutil
import subprocess
from pathlib import Path

VEC_BASE = Path("tests/vectors_sa_tiled")
SV_DIR   = Path("build/verilog")

TOP_MOD   = "RegularConvFull_SA_Tiled_WithDense"
NUM_CASES = 16

DATA_W = 8
ACC_W  = 32
POOL_H = 2
POOL_W = 2
POOL_STRIDE = 2


TB_CPP_TEMPLATE = r'''
#include <verilated.h>
#include <fstream>
#include <string>
#include <vector>
#include <cstdint>
#include <stdexcept>

#include "V{TOP}.h"

static std::vector<int64_t> read_ints64(const std::string& path) {{
  std::ifstream ifs(path);
  if (!ifs) throw std::runtime_error("Cannot open: " + path);
  std::vector<int64_t> xs;
  std::string line;
  while (std::getline(ifs, line)) {{
    if (line.empty()) continue;
    if (line.size() && line[0] == '#') continue;
    xs.push_back(std::stoll(line));
  }}
  return xs;
}}

static void write_ints64(const std::string& path, const std::vector<int64_t>& xs) {{
  std::ofstream ofs(path);
  if (!ofs) throw std::runtime_error("Cannot write: " + path);
  for (auto v : xs) ofs << v << "\n";
}}

static uint64_t mask_w(int w) {{
  if (w >= 64) return ~0ULL;
  return (1ULL << w) - 1ULL;
}}

static uint64_t pack_sint(int64_t v, int w) {{
  return (uint64_t)v & mask_w(w);
}}

static int64_t unpack_sint(uint64_t raw, int w) {{
  raw &= mask_w(w);
  if (w >= 64) return (int64_t)raw;
  uint64_t sign = 1ULL << (w - 1);
  if (raw & sign) return (int64_t)(raw - (1ULL << w));
  return (int64_t)raw;
}}

static void tick(V{TOP}* dut, VerilatedContext* ctx) {{
  dut->clock = 0;
  dut->eval();
  ctx->timeInc(1);
  dut->clock = 1;
  dut->eval();
  ctx->timeInc(1);
}}

int main(int argc, char** argv) {{
  VerilatedContext* ctx = new VerilatedContext;
  ctx->commandArgs(argc, argv);

  V{TOP}* dut = new V{TOP}(ctx);

  const std::string dir = "{CASE_DIR}";

  const int cin   = {CIN};
  const int cout  = {COUT};
  const int h     = {H};
  const int w     = {W};
  const int kh    = {KH};
  const int kw    = {KW};

  const int outH = {OUTH};
  const int outW = {OUTW};
  const int outSize = {OUTSIZE};
  const int Kfull   = {KFULL};

  const int denseN  = {DENSEN};
  const int denseC  = {DENSEC};

  const auto inVec = read_ints64(dir + "/input.txt");
  const auto wVec  = read_ints64(dir + "/weight.txt");
  const auto dWVec = read_ints64(dir + "/dense_weight.txt");
  const auto dBVec = read_ints64(dir + "/dense_bias.txt");

  if ((int)inVec.size() != cin * h * w) throw std::runtime_error("input.txt length mismatch");
  if ((int)wVec.size()  != cout * Kfull) throw std::runtime_error("weight.txt length mismatch");
  if ((int)dWVec.size() != denseC * denseN) throw std::runtime_error("dense_weight.txt length mismatch");
  if ((int)dBVec.size() != denseC) throw std::runtime_error("dense_bias.txt length mismatch");

  // Reset
  dut->reset = 1;
  dut->io_start = 0;
  tick(dut, ctx);
  tick(dut, ctx);
  dut->reset = 0;
  tick(dut, ctx);

  // Poke inputs/weights using flattened IO names
  int idx = 0;
{POKE_X}

  idx = 0;
{POKE_W}

  idx = 0;
{POKE_DW}

{POKE_DB}

  // Start
  dut->io_start = 1;
  tick(dut, ctx);

  // Run until done
  int guard = 0;
  while (!dut->io_done) {{
    tick(dut, ctx);
    guard++;
    if (guard > 200000) throw std::runtime_error("timeout waiting for io_done");
  }}

  // Dump conv y_out
  std::vector<int64_t> observed;
  observed.reserve((size_t)cout * (size_t)outSize);
{DUMP_Y}

  write_ints64(dir + "/observed_dense_verilator_conv.txt", observed);
  write_ints64(dir + "/observed_verilator.txt", observed);

  // Dump dense y_dense
  std::vector<int64_t> observedDense;
  observedDense.reserve((size_t)denseC);
{DUMP_DENSE}

  write_ints64(dir + "/observed_dense_verilator.txt", observedDense);

  // Deassert start
  dut->io_start = 0;
  tick(dut, ctx);
  tick(dut, ctx);

  dut->final();
  delete dut;
  delete ctx;
  return 0;
}}
'''


def run(cmd, cwd=None):
  print(" ".join(cmd))
  subprocess.run(cmd, cwd=cwd, check=True)


def read_meta(case_dir: Path):
  meta = (case_dir / "meta.txt").read_text().strip().splitlines()
  meta = [int(x.strip()) for x in meta if x.strip() and not x.strip().startswith("#")]
  if len(meta) < 7:
    raise RuntimeError("meta.txt must have >= 7 lines")

  cin, cout, h, w, kh, kw, kTile = meta[:7]
  outH = h - kh + 1
  outW = w - kw + 1
  outSize = outH * outW
  Kfull = cin * kh * kw

  pool_out_h = (outH - POOL_H) // POOL_STRIDE + 1
  pool_out_w = (outW - POOL_W) // POOL_STRIDE + 1
  denseN_calc = cout * (pool_out_h * pool_out_w)
  denseN = meta[7] if len(meta) >= 8 else denseN_calc
  denseC = meta[8] if len(meta) >= 9 else 10
  return cin, cout, h, w, kh, kw, outH, outW, outSize, Kfull, denseN, denseC


def gen_poke_x(cin, hw, data_w):
  lines = []
  for c in range(cin):
    for p in range(hw):
      lines.append(f"  dut->io_x_in_{c}_{p} = pack_sint(inVec[idx++], {data_w});")
  return "\n".join(lines) + "\n"


def gen_poke_w(cout, kfull, data_w):
  lines = []
  for m in range(cout):
    for k in range(kfull):
      lines.append(f"  dut->io_w_in_{m}_{k} = pack_sint(wVec[idx++], {data_w});")
  return "\n".join(lines) + "\n"


def gen_poke_dw(denseC, denseN, data_w):
  lines = []
  for o in range(denseC):
    for i in range(denseN):
      lines.append(f"  dut->io_dense_w_{o}_{i} = pack_sint(dWVec[idx++], {data_w});")
  return "\n".join(lines) + "\n"


def gen_poke_db(denseC, acc_w):
  lines = []
  for o in range(denseC):
    lines.append(f"  dut->io_dense_b_{o} = pack_sint(dBVec[{o}], {acc_w});")
  return "\n".join(lines) + "\n"


def gen_dump_y(cout, outSize, acc_w):
  lines = []
  for m in range(cout):
    for pos in range(outSize):
      lines.append(f"  observed.push_back(unpack_sint((uint64_t)dut->io_y_out_{m}_{pos}, {acc_w}));")
  return "\n".join(lines) + "\n"


def gen_dump_dense(denseC, acc_w):
  lines = []
  for o in range(denseC):
    lines.append(f"  observedDense.push_back(unpack_sint((uint64_t)dut->io_y_dense_{o}, {acc_w}));")
  return "\n".join(lines) + "\n"


def build_and_run_case(case_id: int):
  case_dir = (VEC_BASE / f"case{case_id}").resolve()
  sv_file  = (SV_DIR / f"{TOP_MOD}_case{case_id}.sv").resolve()
  if not sv_file.exists():
    raise RuntimeError(f"Missing SV: {sv_file}. Did you run EmitConvDense for case{case_id}?")

  cin, cout, h, w, kh, kw, outH, outW, outSize, Kfull, denseN, denseC = read_meta(case_dir)

  build_dir = (Path("build") / "verilator_dense" / f"case{case_id}").resolve()
  obj_dir   = (build_dir / "obj_dir").resolve()
  build_dir.mkdir(parents=True, exist_ok=True)

  tb_cpp = (build_dir / "tb.cpp").resolve()

  tb_cpp.write_text(
    TB_CPP_TEMPLATE.format(
      TOP=TOP_MOD,
      CASE_DIR=str(case_dir),
      CIN=cin, COUT=cout, H=h, W=w, KH=kh, KW=kw,
      OUTH=outH, OUTW=outW, OUTSIZE=outSize, KFULL=Kfull,
      DENSEN=denseN, DENSEC=denseC,
      POKE_X=gen_poke_x(cin, h*w, DATA_W),
      POKE_W=gen_poke_w(cout, Kfull, DATA_W),
      POKE_DW=gen_poke_dw(denseC, denseN, DATA_W),
      POKE_DB=gen_poke_db(denseC, ACC_W),
      DUMP_Y=gen_dump_y(cout, outSize, ACC_W),
      DUMP_DENSE=gen_dump_dense(denseC, ACC_W),
    )
  )

  if obj_dir.exists():
    shutil.rmtree(obj_dir)

  run([
    "verilator",
    "-cc",
    "--exe",
    "--build",
    "-O3",
    "--top-module", TOP_MOD,
    "-Mdir", str(obj_dir),
    str(sv_file),
    str(tb_cpp),
  ])

  exe = obj_dir / f"V{TOP_MOD}"
  if not exe.exists():
    raise RuntimeError(f"Missing executable: {exe}")

  run([str(exe)])


def main():
  for cid in range(NUM_CASES):
    print(f"\n=== Case {cid} ===")
    build_and_run_case(cid)

  print("\nDone. Check:")
  print("  tests/vectors_sa_tiled/case0/observed_dense_verilator.txt")


if __name__ == "__main__":
  main()
