import os
import sys
import numpy as np

BASE_DIR = "tests/vectors_sa_tiled"
NUM_CASES = 16

def read_txt_ints(path):
    return np.loadtxt(path, dtype=np.int64)

def main():
    for cid in range(NUM_CASES):
        d = os.path.join(BASE_DIR, f"case{cid}")
        npz = np.load(os.path.join(d, "data.npz"))
        y_golden = npz["y"].astype(np.int64)     # flatten (m,pos)
        y_obs = read_txt_ints(os.path.join(d, "observed_verilator.txt")).astype(np.int64)

        if y_golden.shape != y_obs.shape:
            print(f"[case{cid}] shape mismatch: golden={y_golden.shape}, obs={y_obs.shape}")
            return 1

        diff = y_obs - y_golden
        if np.any(diff != 0):
            idx = int(np.where(diff != 0)[0][0])
            print(f"[case{cid}] MISMATCH at flat_idx={idx}: obs={y_obs[idx]} golden={y_golden[idx]}")
            Cout = int(npz["Cout"])
            outSize = y_golden.size // Cout
            m = idx // outSize
            pos = idx % outSize
            print(f"         -> (m={m}, pos={pos})")
            return 1

        print(f"[case{cid}] PASS")

    print("ALL PASS")
    return 0

if __name__ == "__main__":
    sys.exit(main())
