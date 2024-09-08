from collections import defaultdict, OrderedDict
import os
from pprint import pprint
import subprocess
import toml
import json

from ailment import AILBlockWalker, Block
from ailment.statement import Call, Statement
from ailment.expression import Const
import angr
from angr.rust.utils.library import demangle

from ..decompilers import ida_dec
from ..config import *


def _generate_valid_prefixes(name):
    prefixes = {name}
    path = os.path.abspath(f"dataset/{name}/src")
    for root, _, _ in os.walk(path):
        conf_file = os.path.join(root, "Cargo.toml")
        if os.path.exists(conf_file):
            with open(conf_file, "r") as fd:
                conf = toml.load(fd)
            if "package" in conf and "name" in conf["package"]:
                prefixes.add(conf["package"]["name"])
    return {prefix.replace("-", "_") + "::" for prefix in prefixes}


def normalize_result(result):
    pass


def collect_call_counts_angr(name, rust_mode):
    path = os.path.abspath(f"dataset/{name}")
    subprocess.run(["cargo", "+nightly", "build", "--release"], cwd=path, stderr=subprocess.DEVNULL)
    path = os.path.join(path, "target", "release", name)
    proj = angr.Project(path, auto_load_libs=False, is_rust_binary=rust_mode)
    cfg = proj.analyses.CFGFast(normalize=True)
    proj.analyses.CompleteCallingConventions(recover_variables=True, cfg=cfg)
    counts = {}
    prefixes = _generate_valid_prefixes(name)
    for func_addr in proj.kb.functions:
        func = proj.kb.functions[func_addr]
        if func.size and func.normalized:
            caller = demangle(func.name)
            if not any(caller.startswith(prefix) for prefix in prefixes):
                continue
            try:
                decompiler = proj.analyses.Decompiler(cfg=cfg, func=func)
                if caller not in counts:
                    counts[caller] = defaultdict(int)

                class CallWalker(AILBlockWalker):
                    def __init__(self, stmt_handlers=None, expr_handlers=None):
                        super().__init__(stmt_handlers=stmt_handlers, expr_handlers=expr_handlers)

                    def _count_call(self, call: Call):
                        if isinstance(call.target, str):
                            counts[caller][call.target] += 1
                        elif isinstance(call.target, Const):
                            if call.target.value in proj.kb.functions:
                                callee_func = proj.kb.functions[call.target.value]
                                callee = demangle(callee_func.name)
                                counts[caller][callee] += 1

                    def _handle_Call(self, stmt_idx: int, stmt: Call, block: Block | None):
                        self._count_call(stmt)
                        super()._handle_Call(stmt_idx, stmt, block)

                    def _handle_CallExpr(
                        self, expr_idx: int, expr: Call, stmt_idx: int, stmt: Statement, block: Block | None
                    ):
                        self._count_call(expr)
                        super()._handle_CallExpr(expr_idx, expr, stmt_idx, stmt, block)

                for block in decompiler.ail_graph.nodes:
                    CallWalker().walk(block)

            except Exception as e:
                print(f"Error occured when decompiling {caller}")
                import traceback

                traceback.print_exception(e)
                continue
    return counts


def collect_call_counts_source(name):
    path = os.path.abspath(f"dataset/{name}")
    env = os.environ.copy()
    env["RUSTC"] = "rust-scanner"
    subprocess.run(["cargo", "+nightly", "clean"], cwd=path, stderr=subprocess.DEVNULL)
    result = subprocess.run(
        ["cargo", "+nightly", "build", "--release"],
        env=env,
        cwd=path,
        stderr=subprocess.DEVNULL,
        stdout=subprocess.PIPE,
    )
    counts = {}
    prefixes = _generate_valid_prefixes(name)
    for line in result.stdout.decode().splitlines():
        if any(line.startswith(prefix) for prefix in prefixes):
            caller, callee = line.split("---")
            if caller not in counts:
                counts[caller] = defaultdict(int)
            counts[caller][callee] += 1
    out_dir = os.path.join("output", "call_counts", "source")
    os.makedirs(out_dir, exist_ok=True)
    with open(os.path.join(out_dir, name + ".json"), "w") as fd:
        json.dump(counts, fd, indent=2)


def collect_call_counts_ida(name):
    binary_path = os.path.join("dataset", name, "target", "release", name)
    ida_dec(binary_path, os.path.join(IDA_SCRIPTS_PATH, "call_counts.py"))
