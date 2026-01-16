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


POST_SHIFT = 2
ROUND_ADD = 1 << (POST_SHIFT - 1)  

# Pooling + dequant
POOL_H = 2
POOL_W = 2
POOL_STRIDE = 2
DEQ_SHIFT = 2

def post_v0_flat(y_flat):
    out = []
    for v in y_flat:
        p = v if v > 0 else 0
        t = (p + ROUND_ADD) >> POST_SHIFT
        if t > 255:
            t = 255
        out.append(int(t))
    return out

def max_pool_flat(y_flat, cout, hout, wout):
    pool_out_h = (hout - POOL_H) // POOL_STRIDE + 1
    pool_out_w = (wout - POOL_W) // POOL_STRIDE + 1
    out = []
    for m in range(cout):
        for oh in range(pool_out_h):
            for ow in range(pool_out_w):
                max_v = None
                for rh in range(POOL_H):
                    for rw in range(POOL_W):
                        ih = oh * POOL_STRIDE + rh
                        iw = ow * POOL_STRIDE + rw
                        pos = ih * wout + iw
                        v = y_flat[m * (hout * wout) + pos]
                        if max_v is None or v > max_v:
                            max_v = v
                out.append(int(max_v))
    return out, pool_out_h, pool_out_w

def dequant_flat(y_pool_flat):
    return [int(v << DEQ_SHIFT) for v in y_pool_flat]

# ------------------------------------------------------------
# Dense (Final FC) vectors (txt-based, to match your Scala/Verilator flow)
# ------------------------------------------------------------
DENSE_C = 10                 # class count
DENSE_LOW, DENSE_HIGH = -2, 3  # dense weights randint range [low, high)

def write_meta(outdir, cin, cout, h, w, kh, kw, kTile, denseN=None, denseC=None):
    """
    meta.txt (backward compatible):
      line1..7:  cin, cout, h, w, kh, kw, kTile   (same as before)
      optional:
        line8: denseN
        line9: denseC
    """
    meta_path = os.path.join(outdir, "meta.txt")
    with open(meta_path, "w") as f:
        f.write(f"{cin}\n{cout}\n{h}\n{w}\n{kh}\n{kw}\n{kTile}\n")
        if denseN is not None:
            f.write(f"{denseN}\n")
        if denseC is not None:
            f.write(f"{denseC}\n")

def write_case(case_id: int, seed: int):
    cin, cout, h, w, kh, kw, kTile = CASES[case_id]
    assert kTile >= 2

    outdir = os.path.join(BASE_DIR, f"case{case_id}")
    os.makedirs(outdir, exist_ok=True)

    np.random.seed(seed)
    torch.manual_seed(seed)

    # conv inputs/weights
    x = torch.randint(low=LOW, high=HIGH, size=(1, cin, h, w), dtype=torch.int64)
    wgt = torch.randint(low=LOW, high=HIGH, size=(cout, cin, kh, kw), dtype=torch.int64)

    # conv output
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
    y_golden = y[0].reshape(cout, outSize).contiguous()          # (cout, outSize)
    y_flat = [int(v) for v in y_golden.reshape(-1).tolist()]     # m-major, pos-minor
    y_post_flat = post_v0_flat(y_flat)                           # UInt8-like values in int list
    y_pool_flat, pool_out_h, pool_out_w = max_pool_flat(y_post_flat, cout, hout, wout)
    y_deq_flat = dequant_flat(y_pool_flat)

    # --------------------------
    # Dense (Final FC) generation
    # --------------------------
    denseN = cout * (pool_out_h * pool_out_w)
    denseC = DENSE_C

    # Dense input vector = dequantized pooled output (canonical m-major, pos-minor)
    x_dense = torch.tensor(y_deq_flat, dtype=torch.int64)        # [denseN]

    # Dense weights/bias (small int range for bring-up)
    W_dense = torch.randint(low=DENSE_LOW, high=DENSE_HIGH, size=(denseC, denseN), dtype=torch.int64)
    b_dense = torch.zeros((denseC,), dtype=torch.int64)

    # Golden dense logits: y = W x + b
    y_dense = (W_dense @ x_dense) + b_dense                      # [denseC]

    # Flatten weights as o-major contiguous: W[o*denseN + i]
    dense_weight_flat = [int(v) for v in W_dense.reshape(-1).tolist()]
    dense_bias_flat   = [int(v) for v in b_dense.tolist()]
    dense_golden_flat = [int(v) for v in y_dense.tolist()]

    # --------------------------
    # files
    # --------------------------
    write_meta(outdir, cin, cout, h, w, kh, kw, kTile, denseN=denseN, denseC=denseC)

    np.savetxt(os.path.join(outdir, "input.txt"),
               np.array(input_flat, dtype=np.int64), fmt="%d")
    np.savetxt(os.path.join(outdir, "weight.txt"),
               np.array(weight_flat, dtype=np.int64), fmt="%d")

    # Dense txt files (for Scala spec / Verilator TB)
    np.savetxt(os.path.join(outdir, "dense_weight.txt"),
               np.array(dense_weight_flat, dtype=np.int64), fmt="%d")
    np.savetxt(os.path.join(outdir, "dense_bias.txt"),
               np.array(dense_bias_flat, dtype=np.int64), fmt="%d")
    np.savetxt(os.path.join(outdir, "dense_golden.txt"),
               np.array(dense_golden_flat, dtype=np.int64), fmt="%d")

    # Keep your original npz (and optionally add dense info too)
    np.savez(
        os.path.join(outdir, "data.npz"),
        x=np.array(input_flat, dtype=np.int64),
        w=np.array(weight_flat, dtype=np.int64),
        y=np.array(y_flat, dtype=np.int64),             # canonical (m,pos) flatten
        y_post=np.array(y_post_flat, dtype=np.int64),   # post golden (m,pos) flatten
        y_pool=np.array(y_pool_flat, dtype=np.int64),   # pooled golden (m,pos) flatten
        y_deq=np.array(y_deq_flat, dtype=np.int64),     # dequant golden (m,pos) flatten
        post_shift=np.int64(POST_SHIFT),
        pool_h=np.int64(POOL_H),
        pool_w=np.int64(POOL_W),
        pool_stride=np.int64(POOL_STRIDE),
        deq_shift=np.int64(DEQ_SHIFT),

        # dense extras (optional, but handy for python compare/debug)
        denseN=np.int64(denseN),
        denseC=np.int64(denseC),
        x_dense=np.array(y_post_flat, dtype=np.int64),
        W_dense=np.array(dense_weight_flat, dtype=np.int64),
        b_dense=np.array(dense_bias_flat, dtype=np.int64),
        y_dense=np.array(dense_golden_flat, dtype=np.int64),

        cin=np.int64(cin), cout=np.int64(cout), h=np.int64(h), w_img=np.int64(w),
        kh=np.int64(kh), kw=np.int64(kw), kTile=np.int64(kTile),
        hout=np.int64(hout), wout=np.int64(wout),
        pool_hout=np.int64(pool_out_h), pool_wout=np.int64(pool_out_w)
    )

    tail = (Kfull % kTile) != 0
    print(f"[case{case_id:02d}] cin={cin} cout={cout} {h}x{w} k={kh}x{kw} K={Kfull} kTile={kTile} "
          f"{'TAIL' if tail else 'DIV'} -> out={hout}x{wout} "
          f"files: in={len(input_flat)} w={len(weight_flat)} y={len(y_flat)} seed={seed} "
          f"| dense: N={denseN} C={denseC} | pool={pool_out_h}x{pool_out_w}")

def main():
    os.makedirs(BASE_DIR, exist_ok=True)
    for case_id in range(NUM_CASES):
        seed = 1000 + case_id
        write_case(case_id, seed)

if __name__ == "__main__":
    main()

