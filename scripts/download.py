#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import io
import os
import sys
import time
import math
import json
import tarfile
import shutil
import tempfile
import subprocess
import requests
from concurrent.futures import ThreadPoolExecutor, as_completed

GITHUB_API = "https://api.github.com"
TOKEN = os.getenv("GITHUB_TOKEN")
MAX_LOC = 50000  # skip repos with more than this LOC
MAX_REPO = 500  # number of top repos to fetch

HEADERS = {
    "Accept": "application/vnd.github+json",
    "X-GitHub-Api-Version": "2022-11-28",
}
if TOKEN:
    HEADERS["Authorization"] = f"Bearer {TOKEN}"

# ---------------- Utilities ----------------


def ensure_tokei_or_exit() -> None:
    """Ensure `tokei` is available on PATH; exit with instructions if missing."""
    try:
        subprocess.run(
            ["tokei", "--version"],
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL,
            check=True,
        )
    except Exception:
        print(
            "[error] `tokei` is not installed or not on PATH.\n"
            "Install via Cargo:\n"
            "  curl -sSf https://sh.rustup.rs | sh\n"
            "  cargo install tokei\n"
            "Or download a .deb from releases: https://github.com/XAMPPRocky/tokei/releases",
            file=sys.stderr,
        )
        sys.exit(1)


def http_get(url, params=None, max_retries=5, stream=False):
    """HTTP GET with retry and rate-limit handling."""
    backoff = 1.0
    for _ in range(max_retries):
        r = requests.get(url, headers=HEADERS, params=params, timeout=90, stream=stream)
        # Handle rate limit
        if r.status_code == 403 and "X-RateLimit-Remaining" in r.headers:
            remaining = r.headers.get("X-RateLimit-Remaining", "0")
            if remaining == "0":
                reset = r.headers.get("X-RateLimit-Reset")
                wait_s = max(0, int(reset) - int(time.time())) + 1 if reset else math.ceil(backoff)
                print(f"[rate limit] Waiting {wait_s}s before retry…", file=sys.stderr)
                time.sleep(wait_s)
                continue
        if r.ok:
            return r
        if 500 <= r.status_code < 600:
            time.sleep(backoff)
            backoff = min(60.0, backoff * 2)
            continue
        # Fail on other status codes
        try:
            detail = r.json()
        except Exception:
            detail = r.text[:200]
        raise RuntimeError(f"GET {url} failed: {r.status_code} {detail}")
    raise RuntimeError(f"GET {url} failed after {max_retries} retries")


# ---------------- GitHub search ----------------


def get_latest_commit(owner: str, repo: str):
    url = f"{GITHUB_API}/repos/{owner}/{repo}/commits"
    params = {"per_page": 1}
    resp = http_get(url, params=params)
    data = resp.json()
    if not data:
        return None
    return data[0]["sha"]


def search_top_rust_repos(n: int):
    """
    Return a list of repos with fields: full_name, html_url, stargazers_count (int).
    Fetches multiple pages if needed (GitHub Search per_page ≤ 100).
    """
    repos = []
    per_page = 100
    pages = (n + per_page - 1) // per_page
    for page in range(1, pages + 1):
        fetch_n = min(per_page, n - len(repos))
        if fetch_n <= 0:
            break
        url = f"{GITHUB_API}/search/repositories"
        params = {
            "q": "language:Rust",
            "sort": "stars",
            "order": "desc",
            "per_page": per_page,
            "page": page,
        }
        resp = http_get(url, params=params)
        data = resp.json()
        items = data.get("items", [])
        for it in items:
            full_name = it["full_name"]
            owner, repo_name = full_name.split("/")
            latest_commit = get_latest_commit(owner, repo_name)
            repos.append(
                {
                    "name": it["name"],
                    "full_name": it["full_name"],
                    "html_url": it["html_url"],
                    "latest_commit": latest_commit,
                    "stars": int(it.get("stargazers_count", 0)),
                }
            )
        # Be nice to the API between pages
        time.sleep(0.4)
    # Deduplicate just in case and trim to n
    seen = set()
    unique = []
    for r in repos:
        if r["full_name"] in seen:
            continue
        seen.add(r["full_name"])
        unique.append(r)
        if len(unique) >= n:
            break
    return unique


# ---------------- Tarball + tokei ----------------


def fetch_tarball_to_dir(full_name: str) -> str:
    """
    Download default-branch tarball and extract into a fresh temp directory.
    Returns the directory path. Caller must remove it.
    """
    url = f"{GITHUB_API}/repos/{full_name}/tarball"
    r = http_get(url, stream=True)

    tmpdir = tempfile.mkdtemp(prefix="repo_")
    try:
        content = r.content
        with tarfile.open(fileobj=io.BytesIO(content), mode="r:*") as tf:
            tf.extractall(tmpdir)
        return tmpdir
    except Exception:
        shutil.rmtree(tmpdir, ignore_errors=True)
        raise


def run_tokei_count_rust(dir_path: str) -> int:
    """
    Run `tokei -o json` on dir_path and return Rust SLOC (code lines only).
    """
    cmd = [
        "tokei",
        dir_path,
        "-o",
        "json",
        "--exclude",
        "*/target/*",
        "--exclude",
        "*/.git/*",
        "--exclude",
        "*/node_modules/*",
        "--exclude",
        "*/dist/*",
        "--exclude",
        "*/build/*",
        "--exclude",
        "*/out/*",
        "--exclude",
        "*/vendor/*",
        "--exclude",
        "*/third_party/*",
        "--exclude",
        "*/third-party/*",
        "--exclude",
        "*/.cargo/*",
    ]
    try:
        res = subprocess.run(cmd, capture_output=True, text=True, check=True)
        stats = json.loads(res.stdout)
        if "Rust" in stats and isinstance(stats["Rust"], dict):
            code = stats["Rust"].get("code", 0)
            return int(code) if isinstance(code, int) else 0
        return 0
    except subprocess.CalledProcessError as e:
        stderr_snip = (e.stderr or "")[:200].replace("\n", " ")
        print(f"[warn] tokei failed on {dir_path}: {stderr_snip}", file=sys.stderr)
        return 0
    except Exception as e:
        print(f"[warn] tokei error: {e}", file=sys.stderr)
        return 0


def count_repo_rust_loc_with_tokei(full_name: str) -> int:
    """Extract tarball, run tokei, clean up, return SLOC."""
    repo_dir = fetch_tarball_to_dir(full_name)
    try:
        return run_tokei_count_rust(repo_dir)
    finally:
        shutil.rmtree(repo_dir, ignore_errors=True)


# ---------------- TOML writing ----------------


def _toml_escape(s: str) -> str:
    """Escape a TOML basic string."""
    return s.replace("\\", "\\\\").replace('"', '\\"')


def write_results_to_toml(results, filepath: str) -> None:
    """
    Write a TOML file with one section per repo:
    ["owner/repo"]
    url = "..."
    loc = 123
    stars = 456789
    """
    lines = []
    for r in results:
        section = f'["{_toml_escape(r["name"])}"]'
        url = _toml_escape(r["url"])
        lines.append(section)
        lines.append(f"full_name = \"{_toml_escape(r['full_name'])}\"")
        lines.append(f'url = "{url}"')
        lines.append(f'commit = "{_toml_escape(r["commit"])}"')
        lines.append(f"loc = {int(r['rust_loc'])}")
        lines.append(f"stars = {int(r['stars'])}")
        lines.append("")  # blank line between sections
    data = "\n".join(lines).rstrip() + "\n"
    with open(filepath, "w", encoding="utf-8") as f:
        f.write(data)


# ---------------- Main ----------------


def main():
    ensure_tokei_or_exit()

    # Fetch top Rust repos by stars
    repos = search_top_rust_repos(MAX_REPO)

    # Count LOC concurrently
    results = []
    max_workers = 8
    with ThreadPoolExecutor(max_workers=max_workers) as ex:
        future_map = {ex.submit(count_repo_rust_loc_with_tokei, r["full_name"]): r for r in repos}
        for fut in as_completed(future_map):
            meta = future_map[fut]
            loc = 0
            try:
                loc = fut.result()
            except Exception as e:
                print(f"[warn] {meta['full_name']}: {e}", file=sys.stderr)
            results.append(
                {
                    "name": meta["name"],
                    "full_name": meta["full_name"],
                    "commit": meta["latest_commit"],
                    "url": meta["html_url"],
                    "stars": meta["stars"],
                    "rust_loc": loc,
                }
            )

    # Sort by stars descending
    results.sort(key=lambda x: x["stars"], reverse=True)
    # Filter out too large
    # results = [r for r in results if r["rust_loc"] <= MAX_LOC]

    # Print table
    name_w = max(len(x["name"]) for x in results) if results else 20
    url_w = max(len(x["url"]) for x in results) if results else 20
    header = f"{'NAME'.ljust(name_w)}  {'URL'.ljust(url_w)}  {'STARS':>10}  {'RUST_LOC':>10}"
    print(header)
    print("-" * len(header))
    for x in results:
        print(x)
        print(
            f"{x['name'].ljust(name_w)}  {x['url'].ljust(url_w)}  {str(x['stars']).rjust(10)}  {str(x['rust_loc']).rjust(10)}"
        )

    # Write TOML
    out_path = f"rust_top{MAX_REPO}_loc.toml"
    try:
        write_results_to_toml(results, out_path)
        print(f"\n[info] TOML saved to {out_path}")
    except Exception as e:
        print(f"[error] failed to write TOML: {e}", file=sys.stderr)
        sys.exit(1)


if __name__ == "__main__":
    if not TOKEN:
        print("[info] GITHUB_TOKEN not set. You may quickly hit rate limits.", file=sys.stderr)
    main()
