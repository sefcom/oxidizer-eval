#!/usr/bin/env python3
"""
Compare a freshly-generated angr CFG with one loaded back from an AngrDB (.adb).

Usage:
    python scripts/evaluation/compare_cfg_fresh_vs_adb.py [binary_path] [--focus ADDR]

Default binary: targets/stripped/nightly-2025-05-22-O3-inline/cksum
"""

import argparse
import logging
import os
import shutil
import sys
import tempfile
import time
from collections import defaultdict
from pathlib import Path

import angr
from angr.angrdb import AngrDB

logging.basicConfig(
    level=logging.INFO,
    format="%(asctime)s [%(levelname)s] %(message)s",
)
l = logging.getLogger(__name__)


# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

def _reachable_functions(proj, seeds):
    reachable = set(seeds)
    queue = list(reachable)
    while queue:
        addr = queue.pop(0)
        try:
            for callee in proj.kb.callgraph.successors(addr):
                if callee not in reachable:
                    reachable.add(callee)
                    queue.append(callee)
        except Exception:
            pass
    return reachable


def _func_block_info(func):
    """Return a dict {block_addr: block_size} for a Function object."""
    info = {}
    try:
        for block in func.blocks:
            info[block.addr] = block.size
    except Exception:
        pass
    return info


def _func_graph_edges(func):
    """Return a set of (src_addr, dst_addr) edges from the function graph."""
    edges = set()
    try:
        g = func.graph
        if g is not None:
            for src, dst in g.edges():
                edges.add((src.addr, dst.addr))
    except Exception:
        pass
    return edges


def _cfg_graph_edges(cfg):
    """Return the set of (src_addr, dst_addr) for all CFG model edges."""
    edges = set()
    try:
        for src, dst in cfg.graph.edges():
            edges.add((src.addr, dst.addr))
    except Exception:
        pass
    return edges


def _compare_sets(name, set_a, set_b, fmt=hex):
    """Print a summary of two sets and their differences."""
    only_a = set_a - set_b
    only_b = set_b - set_a
    common = set_a & set_b
    print(f"  {name}: fresh={len(set_a)}, loaded={len(set_b)}, "
          f"common={len(common)}, only_fresh={len(only_a)}, only_loaded={len(only_b)}")
    if only_a:
        items = sorted(only_a)[:20]
        print(f"    only in fresh (first 20): {[fmt(x) if callable(fmt) else x for x in items]}")
    if only_b:
        items = sorted(only_b)[:20]
        print(f"    only in loaded (first 20): {[fmt(x) if callable(fmt) else x for x in items]}")
    return only_a, only_b, common


def _compare_edge_sets(name, set_a, set_b):
    only_a = set_a - set_b
    only_b = set_b - set_a
    common = set_a & set_b
    print(f"  {name}: fresh={len(set_a)}, loaded={len(set_b)}, "
          f"common={len(common)}, only_fresh={len(only_a)}, only_loaded={len(only_b)}")
    if only_a:
        items = sorted(only_a)[:20]
        print(f"    only in fresh (first 20): {[(hex(s), hex(d)) for s, d in items]}")
    if only_b:
        items = sorted(only_b)[:20]
        print(f"    only in loaded (first 20): {[(hex(s), hex(d)) for s, d in items]}")
    return only_a, only_b, common


# ---------------------------------------------------------------------------
# Phase 1: Fresh CFG generation
# ---------------------------------------------------------------------------

def generate_fresh(binary_path):
    """Return (project, cfg) from a fresh analysis."""
    l.info("=== Phase 1: Generating fresh CFG ===")
    t0 = time.time()
    proj = angr.Project(binary_path, auto_load_libs=False, is_rust_binary=True)
    cfg = proj.analyses.CFGFast(normalize=True)
    l.info(f"  CFGFast done in {time.time() - t0:.2f}s  "
           f"({len(cfg.graph.nodes())} nodes, {len(cfg.graph.edges())} edges)")

    t1 = time.time()
    all_func_addrs = set(proj.kb.functions.keys())
    ccca = proj.analyses.CompleteCallingConventions(
        cfg=cfg,
        target_functions=_reachable_functions(proj, all_func_addrs),
    )
    l.info(f"  CompleteCallingConventions done in {time.time() - t1:.2f}s  "
           f"({ccca._total_funcs} functions)")

    proj.analyses.RustSymbolRecovery()
    l.info(f"  RustSymbolRecovery done.  Total time: {time.time() - t0:.2f}s")
    return proj, cfg


# ---------------------------------------------------------------------------
# Phase 2: Dump and reload via AngrDB
# ---------------------------------------------------------------------------

def dump_and_reload(proj, binary_path):
    """Dump the project to a temp .adb, reload it, and return (project, cfg)."""
    l.info("=== Phase 2: Dump to AngrDB and reload ===")

    tmp_dir = tempfile.mkdtemp(prefix="cfg_cmp_")
    adb_path = os.path.join(tmp_dir, "test.adb")

    t0 = time.time()
    AngrDB(proj).dump(adb_path)
    l.info(f"  Dumped to {adb_path} in {time.time() - t0:.2f}s  "
           f"(size: {os.path.getsize(adb_path) / 1024 / 1024:.1f} MB)")

    t1 = time.time()
    proj2 = AngrDB().load(adb_path)
    cfg2 = proj2.kb.cfgs.get_most_accurate()
    l.info(f"  Loaded from AngrDB in {time.time() - t1:.2f}s  "
           f"({len(cfg2.graph.nodes()) if cfg2 else '?'} nodes, "
           f"{len(cfg2.graph.edges()) if cfg2 else '?'} edges)")

    # Clean up temp file
    shutil.rmtree(tmp_dir, ignore_errors=True)
    return proj2, cfg2


# ---------------------------------------------------------------------------
# Phase 3: Comprehensive comparison
# ---------------------------------------------------------------------------

def compare(proj1, cfg1, proj2, cfg2, focus_addr=None):
    l.info("=== Phase 3: Comparison ===")
    base = proj1.loader.main_object.mapped_base
    base2 = proj2.loader.main_object.mapped_base

    # ----- 3.1 KB Functions -----
    print("\n" + "=" * 70)
    print("1. Knowledge-Base Functions")
    print("=" * 70)

    funcs1 = set(proj1.kb.functions.keys())
    funcs2 = set(proj2.kb.functions.keys())
    only1, only2, common_funcs = _compare_sets("function addrs", funcs1, funcs2)

    # Compare function metadata for common functions
    meta_diffs = []
    for addr in sorted(common_funcs):
        f1 = proj1.kb.functions[addr]
        f2 = proj2.kb.functions[addr]
        diffs = {}
        # Blocks
        blocks1 = _func_block_info(f1)
        blocks2 = _func_block_info(f2)
        if set(blocks1.keys()) != set(blocks2.keys()):
            diffs["block_addrs"] = (set(blocks1.keys()), set(blocks2.keys()))
        if blocks1 != blocks2:
            diffs["block_sizes"] = (blocks1, blocks2)
        # Edges
        edges1 = _func_graph_edges(f1)
        edges2 = _func_graph_edges(f2)
        if edges1 != edges2:
            diffs["graph_edges"] = (edges1, edges2)
        # Calling convention
        cc1 = repr(f1.calling_convention) if f1.calling_convention else None
        cc2 = repr(f2.calling_convention) if f2.calling_convention else None
        if cc1 != cc2:
            diffs["calling_convention"] = (cc1, cc2)
        # Prototype
        proto1 = repr(f1.prototype) if f1.prototype else None
        proto2 = repr(f2.prototype) if f2.prototype else None
        if proto1 != proto2:
            diffs["prototype"] = (proto1, proto2)
        # is_simprocedure, is_plt, alignment
        for attr in ("is_simprocedure", "is_plt", "alignment", "binary_name",
                      "is_default_name", "has_return", "returning"):
            v1 = getattr(f1, attr, None)
            v2 = getattr(f2, attr, None)
            if v1 != v2:
                diffs[attr] = (v1, v2)
        # Name
        if f1.name != f2.name:
            diffs["name"] = (f1.name, f2.name)
        if diffs:
            meta_diffs.append((addr, diffs))

    print(f"\n  Functions with metadata differences: {len(meta_diffs)} / {len(common_funcs)}")
    if meta_diffs:
        # Categorize diffs
        diff_categories = defaultdict(int)
        for addr, diffs in meta_diffs:
            for key in diffs:
                diff_categories[key] += 1
        print(f"  Diff categories: {dict(diff_categories)}")

        # Show first few
        for addr, diffs in meta_diffs[:10]:
            raddr = addr - base
            print(f"\n    func {hex(raddr)} (rebased {hex(addr)}):")
            for key, (v1, v2) in diffs.items():
                if key in ("block_addrs", "graph_edges"):
                    s1, s2 = v1, v2
                    only_f = s1 - s2
                    only_l = s2 - s1
                    if key == "block_addrs":
                        print(f"      {key}: fresh={len(s1)}, loaded={len(s2)}, "
                              f"only_fresh={[hex(x) for x in sorted(only_f)[:5]]}, "
                              f"only_loaded={[hex(x) for x in sorted(only_l)[:5]]}")
                    else:
                        print(f"      {key}: fresh={len(s1)}, loaded={len(s2)}, "
                              f"only_fresh={[(hex(a),hex(b)) for a,b in sorted(only_f)[:5]]}, "
                              f"only_loaded={[(hex(a),hex(b)) for a,b in sorted(only_l)[:5]]}")
                elif key == "block_sizes":
                    b1, b2 = v1, v2
                    diff_addrs = [a for a in set(b1) & set(b2) if b1[a] != b2[a]]
                    print(f"      {key}: {len(diff_addrs)} blocks differ in size")
                    for a in diff_addrs[:5]:
                        print(f"        {hex(a)}: fresh={b1[a]}, loaded={b2[a]}")
                else:
                    print(f"      {key}: fresh={v1}, loaded={v2}")
        if len(meta_diffs) > 10:
            print(f"\n    ... and {len(meta_diffs) - 10} more functions with differences")

    # ----- 3.2 CFG Graph -----
    print("\n" + "=" * 70)
    print("2. CFG Graph")
    print("=" * 70)

    nodes1 = {n.addr for n in cfg1.graph.nodes()}
    nodes2 = {n.addr for n in cfg2.graph.nodes()}
    _compare_sets("CFG nodes", nodes1, nodes2)

    edges1 = _cfg_graph_edges(cfg1)
    edges2 = _cfg_graph_edges(cfg2)
    _compare_edge_sets("CFG edges", edges1, edges2)

    # ----- 3.3 CFG Node details -----
    print("\n" + "=" * 70)
    print("3. CFG Node Details")
    print("=" * 70)

    # Build addr -> node maps
    node_map1 = {}
    for n in cfg1.graph.nodes():
        node_map1[n.addr] = n
    node_map2 = {}
    for n in cfg2.graph.nodes():
        node_map2[n.addr] = n

    common_nodes = nodes1 & nodes2
    node_diffs = []
    for addr in sorted(common_nodes):
        n1 = node_map1[addr]
        n2 = node_map2[addr]
        diffs = {}
        if n1.size != n2.size:
            diffs["size"] = (n1.size, n2.size)
        if hasattr(n1, "function_address") and hasattr(n2, "function_address"):
            if n1.function_address != n2.function_address:
                diffs["function_address"] = (n1.function_address, n2.function_address)
        # Successors in CFG
        succ1 = {s.addr for s in cfg1.graph.successors(n1)}
        succ2 = {s.addr for s in cfg2.graph.successors(n2)}
        if succ1 != succ2:
            diffs["successors"] = (succ1, succ2)
        # Predecessors
        pred1 = {p.addr for p in cfg1.graph.predecessors(n1)}
        pred2 = {p.addr for p in cfg2.graph.predecessors(n2)}
        if pred1 != pred2:
            diffs["predecessors"] = (pred1, pred2)
        if diffs:
            node_diffs.append((addr, diffs))

    print(f"  Nodes with differences: {len(node_diffs)} / {len(common_nodes)}")
    if node_diffs:
        diff_categories = defaultdict(int)
        for addr, diffs in node_diffs:
            for key in diffs:
                diff_categories[key] += 1
        print(f"  Diff categories: {dict(diff_categories)}")
        for addr, diffs in node_diffs[:10]:
            raddr = addr - base
            print(f"\n    node {hex(raddr)} (rebased {hex(addr)}):")
            for key, (v1, v2) in diffs.items():
                if isinstance(v1, set):
                    only_f = v1 - v2
                    only_l = v2 - v1
                    print(f"      {key}: fresh={len(v1)}, loaded={len(v2)}, "
                          f"only_fresh={[hex(x) for x in sorted(only_f)[:5]]}, "
                          f"only_loaded={[hex(x) for x in sorted(only_l)[:5]]}")
                else:
                    v1_s = hex(v1) if isinstance(v1, int) else v1
                    v2_s = hex(v2) if isinstance(v2, int) else v2
                    print(f"      {key}: fresh={v1_s}, loaded={v2_s}")
        if len(node_diffs) > 10:
            print(f"\n    ... and {len(node_diffs) - 10} more nodes with differences")

    # ----- 3.4 Jump Tables -----
    print("\n" + "=" * 70)
    print("4. CFGModel Jump Tables")
    print("=" * 70)

    jt1 = cfg1.jump_tables if hasattr(cfg1, "jump_tables") else {}
    jt2 = cfg2.jump_tables if hasattr(cfg2, "jump_tables") else {}
    jt_addrs1 = set(jt1.keys())
    jt_addrs2 = set(jt2.keys())
    only_jt1, only_jt2, common_jt = _compare_sets("jump_table addrs", jt_addrs1, jt_addrs2)

    # Compare common jump tables in detail
    jt_diffs = []
    for addr in sorted(common_jt):
        ij1 = jt1[addr]
        ij2 = jt2[addr]
        diffs = {}
        # Compare jump target addresses
        targets1 = set(getattr(ij1, "jumptable_entries", None) or [])
        targets2 = set(getattr(ij2, "jumptable_entries", None) or [])
        if targets1 != targets2:
            diffs["jumptable_entries"] = (targets1, targets2)
        # Compare type
        type1 = getattr(ij1, "type", None)
        type2 = getattr(ij2, "type", None)
        if type1 != type2:
            diffs["type"] = (type1, type2)
        # Compare addr (indirect jump instruction address)
        a1 = getattr(ij1, "addr", None)
        a2 = getattr(ij2, "addr", None)
        if a1 != a2:
            diffs["addr"] = (a1, a2)
        # Compare ins_addr
        ia1 = getattr(ij1, "ins_addr", None)
        ia2 = getattr(ij2, "ins_addr", None)
        if ia1 != ia2:
            diffs["ins_addr"] = (ia1, ia2)
        if diffs:
            jt_diffs.append((addr, diffs))

    print(f"\n  Jump tables with differences: {len(jt_diffs)} / {len(common_jt)}")

    # Dump all jump tables for detailed inspection
    for label, jt in [("FRESH", jt1), ("LOADED", jt2)]:
        print(f"\n  --- {label} jump tables ({len(jt)}) ---")
        for addr in sorted(jt.keys()):
            ij = jt[addr]
            raddr = addr - base
            entries = getattr(ij, "jumptable_entries", None)
            ijtype = getattr(ij, "type", None)
            ins_addr = getattr(ij, "ins_addr", None)
            print(f"    {hex(raddr)} (abs {hex(addr)}): type={ijtype}, "
                  f"ins_addr={hex(ins_addr) if ins_addr else None}, "
                  f"entries={[hex(e) for e in entries] if entries else None}")

    if jt_diffs:
        print(f"\n  Jump table diffs detail:")
        for addr, diffs in jt_diffs:
            raddr = addr - base
            print(f"\n    jump_table {hex(raddr)} (abs {hex(addr)}):")
            for key, (v1, v2) in diffs.items():
                if isinstance(v1, set):
                    only_f = v1 - v2
                    only_l = v2 - v1
                    print(f"      {key}: fresh={len(v1)}, loaded={len(v2)}, "
                          f"only_fresh={[hex(x) for x in sorted(only_f)[:10]]}, "
                          f"only_loaded={[hex(x) for x in sorted(only_l)[:10]]}")
                elif isinstance(v1, int):
                    print(f"      {key}: fresh={hex(v1)}, loaded={hex(v2)}")
                else:
                    print(f"      {key}: fresh={v1}, loaded={v2}")

    # ----- 3.5 Callgraph -----
    print("\n" + "=" * 70)
    print("5. Callgraph")
    print("=" * 70)

    cg_edges1 = set(proj1.kb.callgraph.edges())
    cg_edges2 = set(proj2.kb.callgraph.edges())
    _compare_edge_sets("callgraph edges", cg_edges1, cg_edges2)

    # ----- 3.6 Focus on specific function -----
    if focus_addr is not None:
        rebased_focus = focus_addr + base
        print("\n" + "=" * 70)
        print(f"6. FOCUS: function at {hex(focus_addr)} (rebased {hex(rebased_focus)})")
        print("=" * 70)

        for label, proj, cfg in [("FRESH", proj1, cfg1), ("LOADED", proj2, cfg2)]:
            rb = proj.loader.main_object.mapped_base
            abs_addr = focus_addr + rb
            print(f"\n  --- {label} ---")
            if abs_addr not in proj.kb.functions:
                print(f"    Function NOT FOUND at {hex(abs_addr)}")
                continue
            func = proj.kb.functions[abs_addr]
            print(f"    name: {func.name}")
            print(f"    addr: {hex(func.addr)}")
            print(f"    has_return: {func.has_return}")
            print(f"    returning: {func.returning}")
            print(f"    is_simprocedure: {func.is_simprocedure}")
            print(f"    calling_convention: {func.calling_convention}")
            print(f"    prototype: {func.prototype}")
            print(f"    binary_name: {func.binary_name}")

            # Blocks
            blocks = _func_block_info(func)
            print(f"    blocks ({len(blocks)}):")
            for baddr in sorted(blocks):
                print(f"      {hex(baddr)} size={blocks[baddr]}")

            # Edges
            edges = _func_graph_edges(func)
            print(f"    graph edges ({len(edges)}):")
            for s, d in sorted(edges):
                print(f"      {hex(s)} -> {hex(d)}")

            # Predecessors/successors in callgraph
            try:
                callers = list(proj.kb.callgraph.predecessors(abs_addr))
                callees = list(proj.kb.callgraph.successors(abs_addr))
                print(f"    callgraph callers ({len(callers)}): {[hex(x) for x in callers[:20]]}")
                print(f"    callgraph callees ({len(callees)}): {[hex(x) for x in callees[:20]]}")
            except Exception as e:
                print(f"    callgraph error: {e}")

            # CFG nodes belonging to this function
            func_cfg_nodes = [n for n in cfg.graph.nodes()
                              if hasattr(n, "function_address") and n.function_address == abs_addr]
            print(f"    CFG nodes in this function ({len(func_cfg_nodes)}):")
            for n in sorted(func_cfg_nodes, key=lambda n: n.addr):
                succs = [s.addr for s in cfg.graph.successors(n)]
                print(f"      {hex(n.addr)} size={n.size} -> {[hex(s) for s in succs]}")

            # Jump tables belonging to this function
            jt = cfg.jump_tables if hasattr(cfg, "jump_tables") else {}
            func_block_addrs = set(blocks.keys())
            func_jts = {a: ij for a, ij in jt.items() if a in func_block_addrs}
            print(f"    jump tables in this function ({len(func_jts)}):")
            for jt_addr in sorted(func_jts):
                ij = func_jts[jt_addr]
                entries = getattr(ij, "jumptable_entries", None)
                ijtype = getattr(ij, "type", None)
                ins_addr = getattr(ij, "ins_addr", None)
                stmt_idx = getattr(ij, "stmt_idx", None)
                jumptable_addr = getattr(ij, "jumptable_addr", None)
                print(f"      {hex(jt_addr)}: type={ijtype}, ins_addr={hex(ins_addr) if ins_addr else None}, "
                      f"stmt_idx={stmt_idx}, jumptable_addr={hex(jumptable_addr) if jumptable_addr else None}")
                print(f"        entries ({len(entries) if entries else 0}): "
                      f"{[hex(e) for e in entries] if entries else None}")
                # Dump all attributes for thorough inspection
                print(f"        all attrs: {[a for a in dir(ij) if not a.startswith('_')]}")

    # ----- Summary -----
    print("\n" + "=" * 70)
    print("SUMMARY")
    print("=" * 70)
    print(f"  KB functions:  fresh={len(funcs1)}, loaded={len(funcs2)}, "
          f"only_fresh={len(only1)}, only_loaded={len(only2)}")
    print(f"  CFG nodes:     fresh={len(nodes1)}, loaded={len(nodes2)}")
    print(f"  CFG edges:     fresh={len(edges1)}, loaded={len(edges2)}")
    print(f"  Callgraph edges: fresh={len(cg_edges1)}, loaded={len(cg_edges2)}")
    print(f"  Jump tables:   fresh={len(jt_addrs1)}, loaded={len(jt_addrs2)}, "
          f"only_fresh={len(only_jt1)}, only_loaded={len(only_jt2)}, diffs={len(jt_diffs)}")
    print(f"  Functions with metadata diffs: {len(meta_diffs)}")
    print(f"  CFG nodes with diffs: {len(node_diffs)}")


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("binary", nargs="?",
                        default="targets/stripped/nightly-2025-05-22-O3-inline/cksum",
                        help="Path to the stripped binary")
    parser.add_argument("--focus", type=lambda x: int(x, 0), default=0x6f050,
                        help="Function address to focus on (hex, e.g. 0x6f050)")
    args = parser.parse_args()

    binary_path = os.path.abspath(args.binary)
    if not os.path.exists(binary_path):
        l.error(f"Binary not found: {binary_path}")
        sys.exit(1)

    l.info(f"Binary: {binary_path}")
    l.info(f"Focus address: {hex(args.focus)}")

    proj1, cfg1 = generate_fresh(binary_path)
    proj2, cfg2 = dump_and_reload(proj1, binary_path)
    compare(proj1, cfg1, proj2, cfg2, focus_addr=args.focus)


if __name__ == "__main__":
    main()
