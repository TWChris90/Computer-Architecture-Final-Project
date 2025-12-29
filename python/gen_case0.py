import os
import numpy as np
import torch
import torch.nn.functional as F

OUTDIR = "tests/vectors/case0"
os.makedirs(OUTDIR, exist_ok=True)

np.random.seed(0)
torch.manual_seed(0)

# N=1, Cin=1, H=W=5
x = torch.randint(low=-2, high=3, size=(1, 1, 5, 5), dtype=torch.int64)  # (N,C,H,W)

# Cout=1, Cin=1, Kh=Kw=3
w = torch.randint(low=-2, high=3, size=(1, 1, 3, 3), dtype=torch.int64)  # (F,C,Kh,Kw)

# golden：PyTorch conv2d 預設是 cross-correlation
y = F.conv2d(x, w, bias=None, stride=1, padding=0)  # (1,1,3,3)

Cin = 1
Cout = 1
H = W = 5
Kh = Kw = 3
Hout = Wout = 3

# input.txt：(c)(h)(w)
input_flat = []
for c in range(Cin):
    for hh in range(H):
        for ww in range(W):
            input_flat.append(int(x[0, c, hh, ww].item()))

# weight.txt：(f)(c)(kh)(kw)
weight_flat = []
for f in range(Cout):
    for c in range(Cin):
        for kh in range(Kh):
            for kw in range(Kw):
                weight_flat.append(int(w[f, c, kh, kw].item()))

# output_expected.txt：(f)(w)(h)
out_flat = []
for f in range(Cout):
    for ww in range(Wout):
        for hh in range(Hout):
            out_flat.append(int(y[0, f, hh, ww].item()))

np.savetxt(os.path.join(OUTDIR, "input.txt"), np.array(input_flat, dtype=np.int64), fmt="%d")
np.savetxt(os.path.join(OUTDIR, "weight.txt"), np.array(weight_flat, dtype=np.int64), fmt="%d")
np.savetxt(os.path.join(OUTDIR, "output_expected.txt"), np.array(out_flat, dtype=np.int64), fmt="%d")

print("[gen_case0] wrote:")
print(" - input.txt           len =", len(input_flat))   # 25
print(" - weight.txt          len =", len(weight_flat))  # 9
print(" - output_expected.txt len =", len(out_flat))     # 9
print("x shape =", tuple(x.shape), "w shape =", tuple(w.shape), "y shape =", tuple(y.shape))
