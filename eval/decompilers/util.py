from collections import defaultdict
import os

import angr
from angr.rust.utils.library import demangle
from angr.analyses.decompiler.sequence_walker import SequenceWalker
from ailment import AILBlockWalker, Block, Const
from ailment.statement import Call

from ..config import CACHED_DECOMPILED_CODE_PATH, CACHED_CALL_COUNTS_PATH


def load_cached_output(cache_dir, func_name):
    path = os.path.join(CACHED_DECOMPILED_CODE_PATH, cache_dir, func_name + ".c")
    if os.path.exists(path):
        with open(path, "r") as fd:
            return fd.read()
    return None


def load_cached_call_counts_output(cache_dir, func_name):
    path = os.path.join(CACHED_CALL_COUNTS_PATH, cache_dir, func_name + ".json")
    if os.path.exists(path):
        with open(path, "r") as fd:
            return fd.read()
    return None


def save_output(cache_dir, func_name, output):
    path = os.path.join(CACHED_DECOMPILED_CODE_PATH, cache_dir)
    os.makedirs(path, exist_ok=True)
    with open(os.path.join(path, func_name + ".c"), "w") as fd:
        fd.write(output)


def save_call_counts_output(cache_dir, func_name, output):
    path = os.path.join(CACHED_CALL_COUNTS_PATH, cache_dir)
    os.makedirs(path, exist_ok=True)
    with open(os.path.join(path, func_name + ".json"), "w") as fd:
        fd.write(output)


def load_function_list(binary_path, module=None):
    proj = angr.Project(binary_path, auto_load_libs=False)
    symbols = proj.loader.main_object.symbols
    function_list = [symbol.name for symbol in symbols if symbol.is_function]
    return (
        function_list
        if module is None
        else [name for name in function_list if demangle(name).startswith(module + "::") and "$closure$" not in name]
    )


class BlockCallCounter(AILBlockWalker):

    def __init__(self, project):
        super().__init__()
        self.project = project
        self.call_counts = defaultdict(int)

    def record_call(self, call: Call):
        if isinstance(call.target, Const):
            func_addr = call.target.value
            if func_addr in self.project.kb.functions:
                func = self.project.kb.functions[func_addr]
                self.call_counts[demangle(func.name)] += 1
                return
        self.call_counts["UNKNOWN_FUNCTION"] += 1

    def _handle_CallExpr(self, expr_idx, expr, stmt_idx, stmt, block):
        self.record_call(expr)
        return super()._handle_CallExpr(expr_idx, expr, stmt_idx, stmt, block)

    def _handle_Call(self, stmt_idx, stmt, block):
        self.record_call(stmt)
        return super()._handle_Call(stmt_idx, stmt, block)


class CallCounter(SequenceWalker):

    def __init__(self, project):
        super().__init__()
        self.project = project
        self._handlers[Block] = self._handle_AILBlock

        self.call_counts = defaultdict(int)

    def _handle_AILBlock(self, node, **kwargs):
        walker = BlockCallCounter(self.project)
        walker.walk(node)
        for func_name in walker.call_counts:
            self.call_counts[func_name] += walker.call_counts[func_name]
