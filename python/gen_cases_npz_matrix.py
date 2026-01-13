import os
import numpy as np
import torch
import torch.nn.functional as F

BASE_DIR = "tests/vectors_sa_tiled"

# 16-case config matrix: (Cin, Cout, H, W, Kh, Kw, kTile)
CASES = [
    # --- baseline + tail coverage ---
    (1,  1, 5, 5, 3, 3, 2),   # K=9,  tail
    (1,  2, 5, 5, 3, 3, 4),   # K=9,  tail
    (2,  1, 5, 5, 3, 3, 7),   # K=18, tail
    (2,  3, 5, 5, 3, 3, 8),   # K=18, tail
    (3,  4, 5, 5, 3, 3, 8),   # K=27, tail

    # --- different spatial sizes ---
    (2,  4, 6, 6, 3, 3, 8),   # K=18, tail
    (1,  3, 6, 6, 3, 3, 8),   # K=9,  tail
    (2,  3, 7, 7, 3, 3, 8),   # K=18, tail

    # --- bigger Cin/Cout + both tail and divisible ---
    (4,  4, 6, 6, 3, 3, 8),   # K=36, tail
    (4,  1, 6, 6, 3, 3, 9),   # K=36, divisible

    (2,  8, 8, 8, 3, 3, 6),   # K=18, divisible
    (3,  2, 7, 7, 3, 3, 9),   # K=27, divisible
    (1,  8, 8, 8, 3, 3, 3),   # K=9,  divisible

    # --- 1x1 kernel (tiny Kfull) ---
    (2,  2, 8, 8, 1, 1, 2),   # K=2,  divisible

    # --- stress-ish Kfull=72 ---
    (8,  1, 5, 5, 3, 3, 16),  # K=72, tail
    (8,  8, 5, 5, 3, 3, 10),  # K=72, tail
]

NUM_CASES = len(CASES)

LOW, HIGH = -2, 3  # randint in [LOW, HIGH)

# Post-processing v0 (shift=2)
POST_SHIFT = 2
ROUND_ADD = 1 << (POST_SHIFT - 1)  # 32

def post_v0_flat(y_flat):
    """
    v0 spec:
      p = max(0, psum)
      t = (p + 2^(shift-1)) >> shift
      y = clamp(t, 0..255)
    returns: list[int] (same flatten order as y_flat)
    """
    out = []
    for v in y_flat:
        p = v if v > 0 else 0
        t = (p + ROUND_ADD) >> POST_SHIFT
        if t > 255:
            t = 255
        out.append(int(t))
    return out


def write_meta(outdir, cin, cout, h, w, kh, kw, kTile):
    meta_path = os.path.join(outdir, "meta.txt")
    with open(meta_path, "w") as f:
        f.write(f"{cin}\n{cout}\n{h}\n{w}\n{kh}\n{kw}\n{kTile}\n")

def write_case(case_id: int, seed: int):
    cin, cout, h, w, kh, kw, kTile = CASES[case_id]
    assert kTile >= 2

    outdir = os.path.join(BASE_DIR, f"case{case_id}")
    os.makedirs(outdir, exist_ok=True)

    np.random.seed(seed)
    torch.manual_seed(seed)

    x = torch.randint(low=LOW, high=HIGH, size=(1, cin, h, w), dtype=torch.int64)
    wgt = torch.randint(low=LOW, high=HIGH, size=(cout, cin, kh, kw), dtype=torch.int64)

    y = F.conv2d(x, wgt, bias=None, stride=1, padding=0)  # (1, cout, hout, wout)
    hout, wout = int(y.shape[2]), int(y.shape[3])
    outSize = hout * wout
    Kfull = cin * kh * kw

    # input.txt: x_in(c)(p), p = ih*w + iw, c-major
    input_flat = []
    for c in range(cin):
        for p in range(h * w):
            ih = p // w
            iw = p % w
            input_flat.append(int(x[0, c, ih, iw].item()))

    # weight.txt: w_in(m)(k), k order = c->kh->kw, m-major
    weight_flat = []
    for m in range(cout):
        for c in range(cin):
            for r in range(kh):
                for s in range(kw):
                    weight_flat.append(int(wgt[m, c, r, s].item()))

    # canonical golden y: (m,pos), pos = oh*wout + ow
    y_golden = y[0].reshape(cout, outSize).contiguous()  # (cout, outSize)
    y_flat = [int(v) for v in y_golden.reshape(-1).tolist()]  # m-major, pos-minor
    y_post_flat = post_v0_flat(y_flat)


    # files
    write_meta(outdir, cin, cout, h, w, kh, kw, kTile)
    np.savetxt(os.path.join(outdir, "input.txt"),  np.array(input_flat, dtype=np.int64), fmt="%d")
    np.savetxt(os.path.join(outdir, "weight.txt"), np.array(weight_flat, dtype=np.int64), fmt="%d")

    np.savez(
        os.path.join(outdir, "data.npz"),
        x=np.array(input_flat, dtype=np.int64),
        w=np.array(weight_flat, dtype=np.int64),
        y=np.array(y_flat, dtype=np.int64),  # canonical (m,pos) flatten
        y_post=np.array(y_post_flat, dtype=np.int64),       # post golden (m,pos) flatten
        post_shift=np.int64(POST_SHIFT),
        cin=cin, cout=cout, h=h, w_img=w, kh=kh, kw=kw, kTile=kTile,
        hout=hout, wout=wout
    )

    tail = (Kfull % kTile) != 0
    print(f"[case{case_id:02d}] cin={cin} cout={cout} {h}x{w} k={kh}x{kw} K={Kfull} kTile={kTile} "
          f"{'TAIL' if tail else 'DIV'} -> out={hout}x{wout} "
          f"files: in={len(input_flat)} w={len(weight_flat)} y={len(y_flat)} seed={seed}")

def main():
    os.makedirs(BASE_DIR, exist_ok=True)
    for case_id in range(NUM_CASES):
        seed = 1000 + case_id
        write_case(case_id, seed)

if __name__ == "__main__":
    main()
