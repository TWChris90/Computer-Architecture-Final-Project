import os
import sys
import numpy as np

BASE_DIR = "tests/vectors_sa_tiled"
NUM_CASES = 16


def read_txt_ints(path: str) -> np.ndarray:
    return np.loadtxt(path, dtype=np.int64)


def decode_m_pos(npz, idx: int, total_len: int):
    """Decode flat index -> (m, pos) using Cout/cout from npz."""
    Cout = None
    if "Cout" in npz.files:
        Cout = int(npz["Cout"])
    elif "cout" in npz.files:
        Cout = int(npz["cout"])
    if not Cout or Cout <= 0:
        return None
    out_size = total_len // Cout
    return (idx // out_size, idx % out_size)


def compare_flat(case_tag: str, npz, key_golden: str, obs_txt: str, cid: int) -> int:
    """Compare npz[key_golden] (flatten) vs obs_txt (flatten)."""
    if key_golden not in npz.files:
        print(f"[case{cid}] {case_tag} missing key '{key_golden}' in data.npz")
        return 1
    if not os.path.exists(obs_txt):
        print(f"[case{cid}] {case_tag} observed file not found: {obs_txt}")
        return 1

    y_golden = npz[key_golden].astype(np.int64).reshape(-1)
    y_obs = read_txt_ints(obs_txt).astype(np.int64).reshape(-1)

    if y_golden.shape != y_obs.shape:
        print(f"[case{cid}] {case_tag} shape mismatch: golden={y_golden.shape}, obs={y_obs.shape}")
        print(f"         -> obs_file={obs_txt}")
        return 1

    diff_idx = np.nonzero(y_obs != y_golden)[0]
    if diff_idx.size > 0:
        idx = int(diff_idx[0])
        print(f"[case{cid}] {case_tag} MISMATCH at idx={idx}: obs={y_obs[idx]} golden={y_golden[idx]}")
        mp = decode_m_pos(npz, idx, y_golden.size)
        if mp is not None:
            m, pos = mp
            print(f"         -> (m={m}, pos={pos})")
        print(f"         -> obs_file={obs_txt}")
        return 1

    return 0


def main() -> int:
    """
    ChiselTest workflow comparator (CONV + POST).

    IMPORTANT:
      - CONV compares against observed.txt
      - POST compares against observed_post.txt
      - It intentionally ignores observed_verilator.txt to avoid stale/mixed outputs.
    """

    for cid in range(NUM_CASES):
        d = os.path.join(BASE_DIR, f"case{cid}")
        npz = np.load(os.path.join(d, "data.npz"))

        # 1) CONV correctness: y vs observed.txt (ChiselTest)
        ret = compare_flat(
            case_tag="CONV",
            npz=npz,
            key_golden="y",
            obs_txt=os.path.join(d, "observed.txt"),
            cid=cid,
        )
        if ret != 0:
            return ret

        # 2) POST correctness: y_post vs observed_post.txt (ChiselTest)
        ret = compare_flat(
            case_tag="POST",
            npz=npz,
            key_golden="y_post",
            obs_txt=os.path.join(d, "observed_post.txt"),
            cid=cid,
        )
        if ret != 0:
            return ret

        print(f"[case{cid}] PASS (CONV + POST)")

    print("ALL PASS")
    return 0


if __name__ == "__main__":
    sys.exit(main())
