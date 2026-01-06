import os
import numpy as np
import torch
import torch.nn.functional as F

NUM_CASES = 10
BASE_DIR = "tests/vectors_sa_tiled"

# ===== MUST MATCH Scala Spec =====
Cin = 1
Cout = 1
H = W = 5
Kh = Kw = 3
stride = 1
pad = 0

LOW, HIGH = -2, 3  # randint in [LOW, HIGH)

def write_case(case_id: int, seed: int):
    outdir = os.path.join(BASE_DIR, f"case{case_id}")
    os.makedirs(outdir, exist_ok=True)

    np.random.seed(seed)
    torch.manual_seed(seed)

    x = torch.randint(low=LOW, high=HIGH, size=(1, Cin, H, W), dtype=torch.int64)
    w = torch.randint(low=LOW, high=HIGH, size=(Cout, Cin, Kh, Kw), dtype=torch.int64)

    # PyTorch golden (cross-correlation)
    y = F.conv2d(x, w, bias=None, stride=stride, padding=pad)  # (1,Cout,Hout,Wout)
    Hout, Wout = int(y.shape[2]), int(y.shape[3])
    outSize = Hout * Wout

    # input.txt: x_in(c)(p), p = ih*W + iw, c-major
    input_flat = []
    for c in range(Cin):
        for p in range(H * W):
            ih = p // W
            iw = p % W
            input_flat.append(int(x[0, c, ih, iw].item()))

    # weight.txt: w_in(m)(k), k order = c->kh->kw, m-major
    weight_flat = []
    for m in range(Cout):
        for c in range(Cin):
            for kh in range(Kh):
                for kw in range(Kw):
                    weight_flat.append(int(w[m, c, kh, kw].item()))

    # canonical golden y: (m,pos), pos = oh*Wout + ow
    y_golden = y[0].reshape(Cout, outSize).contiguous()  # (Cout, outSize)
    y_flat = [int(v) for v in y_golden.reshape(-1).tolist()]  # m-major, pos-minor

    np.savetxt(os.path.join(outdir, "input.txt"),  np.array(input_flat, dtype=np.int64), fmt="%d")
    np.savetxt(os.path.join(outdir, "weight.txt"), np.array(weight_flat, dtype=np.int64), fmt="%d")

    np.savez(
        os.path.join(outdir, "data.npz"),
        x=np.array(input_flat, dtype=np.int64),
        w=np.array(weight_flat, dtype=np.int64),
        y=np.array(y_flat, dtype=np.int64),  # canonical (m,pos) flatten
        Cin=Cin, Cout=Cout, H=H, W=W, Kh=Kh, Kw=Kw, Hout=Hout, Wout=Wout
    )

    print(f"[case{case_id}] wrote: input={len(input_flat)} weight={len(weight_flat)} y={len(y_flat)} seed={seed}")

def main():
    os.makedirs(BASE_DIR, exist_ok=True)
    for case_id in range(NUM_CASES):
        write_case(case_id, 1000 + case_id)

if __name__ == "__main__":
    main()
