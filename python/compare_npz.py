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


def _diff_stats(y_obs: np.ndarray, y_golden: np.ndarray):
    diff = y_obs - y_golden
    abs_diff = np.abs(diff)
    if abs_diff.size == 0:
        return {
            "count": 0,
            "mismatch": 0,
            "max_abs": 0,
            "mean_abs": 0.0,
            "rmse": 0.0,
        }
    mismatch = int(np.count_nonzero(diff))
    max_abs = int(abs_diff.max())
    mean_abs = float(abs_diff.mean())
    rmse = float(np.sqrt(np.mean(diff.astype(np.float64) ** 2)))
    return {
        "count": int(abs_diff.size),
        "mismatch": mismatch,
        "max_abs": max_abs,
        "mean_abs": mean_abs,
        "rmse": rmse,
    }


def _print_stats(case_tag: str, cid: int, stats: dict):
    print(
        f"[case{cid}] {case_tag} stats: "
        f"count={stats['count']} mismatch={stats['mismatch']} "
        f"max_abs={stats['max_abs']} mean_abs={stats['mean_abs']:.4f} rmse={stats['rmse']:.4f}"
    )


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

    diff = y_obs - y_golden
    diff_idx = np.nonzero(diff != 0)[0]
    if diff_idx.size > 0:
        idx = int(diff_idx[0])
        print(f"[case{cid}] {case_tag} MISMATCH at idx={idx}: obs={y_obs[idx]} golden={y_golden[idx]}")
        mp = decode_m_pos(npz, idx, y_golden.size)
        if mp is not None:
            m, pos = mp
            print(f"         -> (m={m}, pos={pos})")
        print(f"         -> obs_file={obs_txt}")
        stats = _diff_stats(y_obs, y_golden)
        _print_stats(case_tag, cid, stats)
        return 1

    stats = _diff_stats(y_obs, y_golden)
    _print_stats(case_tag, cid, stats)
    return 0


def compare_dense(npz, obs_txt: str, cid: int) -> int:
    """Compare dense golden vs observed_dense.txt."""
    if "y_dense" not in npz.files:
        print(f"[case{cid}] DENSE missing key 'y_dense' in data.npz")
        return 1
    if not os.path.exists(obs_txt):
        print(f"[case{cid}] DENSE observed file not found: {obs_txt}")
        return 1

    y_golden = npz["y_dense"].astype(np.int64).reshape(-1)
    y_obs = read_txt_ints(obs_txt).astype(np.int64).reshape(-1)

    if y_golden.shape != y_obs.shape:
        print(f"[case{cid}] DENSE shape mismatch: golden={y_golden.shape}, obs={y_obs.shape}")
        print(f"         -> obs_file={obs_txt}")
        return 1

    diff = y_obs - y_golden
    diff_idx = np.nonzero(diff != 0)[0]
    if diff_idx.size > 0:
        idx = int(diff_idx[0])
        print(f"[case{cid}] DENSE MISMATCH at o={idx}: obs={y_obs[idx]} golden={y_golden[idx]}")
        print(f"         -> obs_file={obs_txt}")
        stats = _diff_stats(y_obs, y_golden)
        _print_stats("DENSE", cid, stats)
        return 1

    stats = _diff_stats(y_obs, y_golden)
    _print_stats("DENSE", cid, stats)
    return 0


def compare_pool_deq(npz, key_golden: str, obs_txt: str, cid: int) -> int:
    if key_golden not in npz.files:
        print(f"[case{cid}] POOL/DEQ missing key '{key_golden}' in data.npz")
        return 1
    if not os.path.exists(obs_txt):
        print(f"[case{cid}] POOL/DEQ observed file not found: {obs_txt}")
        return 1

    y_golden = npz[key_golden].astype(np.int64).reshape(-1)
    y_obs = read_txt_ints(obs_txt).astype(np.int64).reshape(-1)

    if y_golden.shape != y_obs.shape:
        print(f"[case{cid}] POOL/DEQ shape mismatch: golden={y_golden.shape}, obs={y_obs.shape}")
        print(f"         -> obs_file={obs_txt}")
        return 1

    diff = y_obs - y_golden
    diff_idx = np.nonzero(diff != 0)[0]
    if diff_idx.size > 0:
        idx = int(diff_idx[0])
        print(f"[case{cid}] POOL/DEQ MISMATCH at idx={idx}: obs={y_obs[idx]} golden={y_golden[idx]}")
        print(f"         -> obs_file={obs_txt}")
        stats = _diff_stats(y_obs, y_golden)
        _print_stats(key_golden.upper(), cid, stats)
        return 1

    stats = _diff_stats(y_obs, y_golden)
    _print_stats(key_golden.upper(), cid, stats)
    return 0


def compare_optional(case_tag: str, npz, key_golden: str, obs_txt: str, cid: int) -> int:
    """Compare only if observed file exists; otherwise report skip."""
    if not os.path.exists(obs_txt):
        print(f"[case{cid}] {case_tag} SKIP (missing {obs_txt})")
        return 0
    return compare_flat(case_tag, npz, key_golden, obs_txt, cid)


def compare_dense_optional(npz, obs_txt: str, cid: int) -> int:
    if not os.path.exists(obs_txt):
        print(f"[case{cid}] DENSE_VL SKIP (missing {obs_txt})")
        return 0
    return compare_dense(npz, obs_txt, cid)


def main() -> int:
    """
    ChiselTest workflow comparator (CONV + POST + POOL + DEQ + DENSE).

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

        # 3) POOL correctness: y_pool vs observed_pool.txt
        ret = compare_pool_deq(
            npz=npz,
            key_golden="y_pool",
            obs_txt=os.path.join(d, "observed_pool.txt"),
            cid=cid,
        )
        if ret != 0:
            return ret

        # 4) DEQ correctness: y_deq vs observed_deq.txt
        ret = compare_pool_deq(
            npz=npz,
            key_golden="y_deq",
            obs_txt=os.path.join(d, "observed_deq.txt"),
            cid=cid,
        )
        if ret != 0:
            return ret

        # 3) DENSE correctness: y_dense vs observed_dense.txt
        ret = compare_dense(
            npz=npz,
            obs_txt=os.path.join(d, "observed_dense.txt"),
            cid=cid,
        )
        if ret != 0:
            return ret

        print(f"[case{cid}] PASS (CONV + POST + POOL + DEQ + DENSE)")

        # Optional Verilator comparisons (if outputs exist)
        ret = compare_optional(
            case_tag="CONV_VL",
            npz=npz,
            key_golden="y",
            obs_txt=os.path.join(d, "observed_verilator.txt"),
            cid=cid,
        )
        if ret != 0:
            return ret

        ret = compare_dense_optional(
            npz=npz,
            obs_txt=os.path.join(d, "observed_dense_verilator.txt"),
            cid=cid,
        )
        if ret != 0:
            return ret

    print("ALL PASS")
    return 0


if __name__ == "__main__":
    sys.exit(main())
