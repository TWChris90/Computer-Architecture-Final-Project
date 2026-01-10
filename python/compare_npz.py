import os
import sys
import numpy as np

BASE_DIR = "tests/vectors_sa_tiled"
NUM_CASES = 16

def read_txt_ints(path: str) -> np.ndarray:
    return np.loadtxt(path, dtype=np.int64)

def pick_observed_path(case_dir: str) -> str:
    """
    Prefer verilator output if it exists; otherwise fall back to default.
    """
    p_veri = os.path.join(case_dir, "observed_verilator.txt")
    p_def  = os.path.join(case_dir, "observed.txt")
    if os.path.exists(p_veri):
        return p_veri
    return p_def

def decode_m_pos(npz, idx: int, total_len: int):
    # support both Cout and cout
    Cout = None
    if "Cout" in npz.files:
        Cout = int(npz["Cout"])
    elif "cout" in npz.files:
        Cout = int(npz["cout"])
    if not Cout or Cout <= 0:
        return None
    outSize = total_len // Cout
    m = idx // outSize
    pos = idx % outSize
    return (m, pos)

def compare_flat(case_tag: str, npz, key_golden: str, obs_txt: str, cid: int) -> int:
    """Compare npz[key_golden] (flatten) vs obs_txt (flatten)."""
    y_golden = npz[key_golden].astype(np.int64).reshape(-1)  # flatten (m,pos)
    y_obs = read_txt_ints(obs_txt).astype(np.int64).reshape(-1)

    if y_golden.shape != y_obs.shape:
        print(f"[case{cid}] {case_tag} shape mismatch: golden={y_golden.shape}, obs={y_obs.shape}")
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

def main():
    for cid in range(NUM_CASES):
        d = os.path.join(BASE_DIR, f"case{cid}")
        npz = np.load(os.path.join(d, "data.npz"))

        # 1) Conv correctness: y vs observed(.txt or _verilator.txt)
        obs_conv = pick_observed_path(d)
        ret = compare_flat(
            case_tag="CONV",
            npz=npz,
            key_golden="y",
            obs_txt=obs_conv,
            cid=cid,
        )
        if ret != 0:
            return ret

        # 2) Postproc correctness: y_post vs observed_post.txt
        if "y_post" not in npz.files:
            print(f"[case{cid}] POST missing key 'y_post' in data.npz (regenerate vectors with y_post)")
            return 1

        obs_post = os.path.join(d, "observed_post.txt")
        ret = compare_flat(
            case_tag="POST",
            npz=npz,
            key_golden="y_post",
            obs_txt=obs_post,
            cid=cid,
        )
        if ret != 0:
            return ret

        print(f"[case{cid}] PASS (CONV + POST)")

    print("ALL PASS")
    return 0

if __name__ == "__main__":
    sys.exit(main())
