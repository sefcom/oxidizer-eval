#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Fast async pipeline:
1) Fetch Debian Popcon binary popularity (by_inst.gz)
2) Filter binary packages whose names start with a given prefix (default 'rust-')
3) Map each binary -> source package by scraping packages.debian.org (async)
4) Output:
   - top_rust_binary_prefix_by_inst.csv/json  (binary-level, sorted by inst)
   - top_rust_sources_agg.csv/json            (source-level aggregated, sorted by summed inst)

Requires:
  - Python 3.11+
  - aiohttp (pip install aiohttp)

Note:
  - packages.debian.org HTML is parsed via regex (no BeautifulSoup dependency).
  - We try multiple suites to maximize hit rate: sid/unstable/testing/stable/trixie/bookworm/bullseye/experimental
"""

from __future__ import annotations
import asyncio
import aiohttp
import gzip
import csv
import json
import re
from dataclasses import dataclass
from typing import List, Dict, Tuple, Optional

POPCON_BIN_BY_INST_GZ = "https://popcon.debian.org/by_inst.gz"
UA = "rust-decomp-fast/0.2 (+noapikey)"
TIMEOUT = aiohttp.ClientTimeout(total=60)

# Suites to try when mapping binary -> source
SUITES = ["sid", "unstable", "testing", "stable", "trixie", "bookworm", "bullseye", "experimental"]

SOURCE_RE = re.compile(r'href="/source/[^/]+/([^"/]+)"')
# Some pages format 'Source:' cell; we'll just search for the first /source/<suite>/<src> link.


@dataclass
class BinRow:
    pkg: str
    inst: int


async def fetch_popcon_by_inst(session: aiohttp.ClientSession) -> List[BinRow]:
    async with session.get(POPCON_BIN_BY_INST_GZ) as resp:
        resp.raise_for_status()
        raw = await resp.read()
    text = gzip.decompress(raw).decode("utf-8", errors="replace")
    rows: List[BinRow] = []
    for line in text.splitlines():
        line = line.strip()
        if not line or line.startswith("#"):
            continue
        parts = line.split()
        # Format: "<inst> <vote> <old> <recent> <nofiles> <binary>"
        try:
            inst = int(parts[0])
            pkg = parts[-1]
        except Exception:
            continue
        rows.append(BinRow(pkg=pkg, inst=inst))
    # already sorted desc, but ensure:
    rows.sort(key=lambda r: r.inst, reverse=True)
    return rows


async def fetch_source_for_binary(session: aiohttp.ClientSession, binary: str) -> Tuple[Optional[str], Optional[str]]:
    """
    Try multiple suites on packages.debian.org to find a 'Source:' link.
    Returns: (source_name, suite_found)
    """
    for suite in SUITES:
        url = f"https://packages.debian.org/{suite}/{binary}"
        try:
            async with session.get(url, allow_redirects=True) as resp:
                if resp.status == 404:
                    continue
                resp.raise_for_status()
                html = await resp.text()
        except Exception:
            continue
        m = SOURCE_RE.search(html)
        if m:
            return m.group(1), suite
    return None, None


async def main():
    import argparse

    ap = argparse.ArgumentParser()
    ap.add_argument("--top", type=int, default=100, help="Top N binaries to output (default 100)")
    ap.add_argument("--prefix", type=str, default="rust-", help="Binary package name prefix (default 'rust-')")
    ap.add_argument("--concurrency", type=int, default=24, help="Concurrent requests for source mapping")
    ap.add_argument("--out-binary-csv", default="top_rust_binary_prefix_by_inst.csv")
    ap.add_argument("--out-binary-json", default="top_rust_binary_prefix_by_inst.json")
    ap.add_argument("--out-source-csv", default="top_rust_sources_agg.csv")
    ap.add_argument("--out-source-json", default="top_rust_sources_agg.json")
    args = ap.parse_args()

    connector = aiohttp.TCPConnector(limit=args.concurrency)
    async with aiohttp.ClientSession(timeout=TIMEOUT, connector=connector, headers={"User-Agent": UA}) as session:
        print("==> Fetching Popcon binary popularity (by_inst.gz) ...")
        all_bins = await fetch_popcon_by_inst(session)
        print(f"Retrieved {len(all_bins)} binary entries.")

        print(f"==> Filtering binaries by prefix '{args.prefix}' ...")
        filtered = [r for r in all_bins if r.pkg.startswith(args.prefix)]
        # Keep TOP N by install counts
        top_bins = filtered[: args.top]
        print(f"Selected {len(top_bins)} binaries after prefix filter.")

        print("==> Mapping binary -> source (async) ...")
        sem = asyncio.Semaphore(args.concurrency)
        results: List[Dict[str, object]] = []

        async def handle(row: BinRow):
            async with sem:
                src, suite = await fetch_source_for_binary(session, row.pkg)
                results.append({"binary": row.pkg, "inst": row.inst, "source": src or "", "suite_found": suite or ""})

        tasks = [asyncio.create_task(handle(r)) for r in top_bins]
        # Drain as they complete
        for fut in asyncio.as_completed(tasks):
            await fut

        # --- Output binary-level (sorted by inst desc) ---
        results.sort(key=lambda x: int(x["inst"]), reverse=True)
        with open(args.out_binary_csv, "w", newline="", encoding="utf-8") as f:
            w = csv.DictWriter(f, fieldnames=["binary", "inst", "source", "suite_found"])
            w.writeheader()
            w.writerows(results)
        with open(args.out_binary_json, "w", encoding="utf-8") as f:
            json.dump(results, f, ensure_ascii=False, indent=2)

        print(f"✅ Wrote binary-level list: {args.out_binary_csv} / {args.out_binary_json}")

        # --- Aggregate by source (sum inst; collect binaries) ---
        agg: Dict[str, Dict[str, object]] = {}
        for r in results:
            src = r.get("source") or "(unknown)"
            d = agg.setdefault(src, {"source": src, "sum_inst": 0, "binaries": []})
            d["sum_inst"] = int(d["sum_inst"]) + int(r["inst"])
            d["binaries"].append(r["binary"])
        agg_rows = list(agg.values())
        agg_rows.sort(key=lambda x: int(x["sum_inst"]), reverse=True)

        with open(args.out_source_csv, "w", newline="", encoding="utf-8") as f:
            w = csv.DictWriter(f, fieldnames=["source", "sum_inst", "binaries"])
            w.writeheader()
            for row in agg_rows:
                w.writerow(
                    {"source": row["source"], "sum_inst": row["sum_inst"], "binaries": ";".join(row["binaries"])}
                )
        with open(args.out_source_json, "w", encoding="utf-8") as f:
            json.dump(agg_rows, f, ensure_ascii=False, indent=2)

        print(f"✅ Wrote source-level aggregation: {args.out_source_csv} / {args.out_source_json}")


if __name__ == "__main__":
    asyncio.run(main())
