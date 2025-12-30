import os
import numpy as np
import torch
import torch.nn.functional as F

#case0 ~ case9
NUM_CASES = 10
BASE_DIR = "tests/vectors"

#baseline
Cin = 1
Cout = 1
H = W = 5
Kh = Kw = 3
stride = 1
pad = 0

LOW, HIGH = -2, 3  # randint: [LOW, HIGH)

def write_case(case_id: int, seed: int):
    outdir = os.path.join(BASE_DIR, f"case{case_id}")
    os.makedirs(outdir, exist_ok=True)

    np.random.seed(seed)
    torch.manual_seed(seed)

    x = torch.randint(low=LOW, high=HIGH, size=(1, Cin, H, W), dtype=torch.int64)
    w = torch.randint(low=LOW, high=HIGH, size=(Cout, Cin, Kh, Kw), dtype=torch.int64)

    # PyTorch golden
    y = F.conv2d(x, w, bias=None, stride=stride, padding=pad)

    # input:  (c)(h)(w)
    input_flat = []
    for c in range(Cin):
        for hh in range(H):
            for ww in range(W):
                input_flat.append(int(x[0, c, hh, ww].item()))

    # weight: (f)(c)(kh)(kw)
    weight_flat = []
    for f in range(Cout):
        for c in range(Cin):
            for kh in range(Kh):
                for kw in range(Kw):
                    weight_flat.append(int(w[f, c, kh, kw].item()))

    # output: (f)(w)(h)
    Hout = y.shape[2]
    Wout = y.shape[3]
    out_flat = []
    for f in range(Cout):
        for ww in range(Wout):
            for hh in range(Hout):
                out_flat.append(int(y[0, f, hh, ww].item()))

    np.savetxt(os.path.join(outdir, "input.txt"), np.array(input_flat, dtype=np.int64), fmt="%d")
    np.savetxt(os.path.join(outdir, "weight.txt"), np.array(weight_flat, dtype=np.int64), fmt="%d")
    np.savetxt(os.path.join(outdir, "output_expected.txt"), np.array(out_flat, dtype=np.int64), fmt="%d")

    print(f"[case{case_id}] wrote input={len(input_flat)} weight={len(weight_flat)} output={len(out_flat)} "
          f"yshape={tuple(y.shape)} seed={seed}")

def main():
    for case_id in range(NUM_CASES):
        seed = 1000 + case_id
        write_case(case_id, seed)

if __name__ == "__main__":
    main()
