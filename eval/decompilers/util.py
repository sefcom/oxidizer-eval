from collections import defaultdict
import os
from typing import Dict
import json
import re

import angr
from angr.rust.utils.library import demangle
from angr.ailment.statement import FunctionLikeMacro, Call
from angr.analyses.decompiler.sequence_walker import SequenceWalker
from angr.ailment import AILBlockWalker, Block, Const

from eval.type_recovery.function_prototype import FunctionPrototype

from ..config import (
    CACHE_DIR,
    CACHED_INFERRED_PROTOTYPES_PATH,
)


def save_result(decompiler, bin_name, result):
    result = dict(result)
    for func_name, decompilation in result["decompilation"].items():
        path = os.path.join(CACHE_DIR, "decompilation", decompiler, bin_name, func_name + ".c")
        os.makedirs(os.path.dirname(path), exist_ok=True)
        with open(path, "w", encoding="utf-8") as fd:
            fd.write(decompilation)
    path = os.path.join(CACHE_DIR, "result", decompiler, bin_name + ".json")
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, "w", encoding="utf-8") as fd:
        json.dump(result, fd, indent=2)


def load_cached_result(decompiler, bin_name):
    result = None
    path = os.path.join(CACHE_DIR, "result", decompiler, bin_name + ".json")
    if os.path.exists(path):
        with open(path, "r", encoding="utf-8") as fd:
            result = json.load(fd)
    return result


def load_cached_inferred_prototypes(bin_name) -> Dict[str, FunctionPrototype]:
    path = os.path.join(CACHE_DIR, "result", "oxidizer", bin_name + ".json")
    if os.path.exists(path):
        with open(path, "r") as fd:
            object = json.load(fd)["prototypes"]
            prototypes = {}
            for name in object:
                prototypes[name] = FunctionPrototype.from_dict(object[name])
            return prototypes
    return None


def load_function_list(binary_path, module=None):
    proj = angr.Project(binary_path, auto_load_libs=False)
    symbols = proj.loader.main_object.symbols
    function_list = [symbol.name for symbol in symbols if symbol.is_function]
    return (
        function_list
        if module is None
        else [name for name in function_list if demangle(name).startswith(module + "") and "$closure$" not in name]
    )


def collect_string_literals(output):
    string_literals = defaultdict(int)
    pattern = r'"(?:\\.|[^"\\])*"'
    matches = re.findall(pattern, output)

    for match in matches:
        string_literals[match[1:-1]] += 1
    return string_literals


class BlockCallCounter(AILBlockWalker):

    def __init__(self, project):
        super().__init__()
        self.project = project
        self.function_call_counts = defaultdict(int)
        self.macro_call_counts = defaultdict(int)

    def record_call(self, call: Call):
        if isinstance(call.target, Const):
            func_addr = call.target.value
            if func_addr in self.project.kb.functions:
                func = self.project.kb.functions[func_addr]
                self.function_call_counts[demangle(func.name)] += 1

    def _handle_stmt(self, stmt_idx, stmt, block):
        if isinstance(stmt, FunctionLikeMacro):
            self.macro_call_counts[stmt.name] += 1
        return super()._handle_stmt(stmt_idx, stmt, block)

    def _handle_expr(self, expr_idx, expr, stmt_idx, stmt, block):
        if isinstance(expr, FunctionLikeMacro):
            self.macro_call_counts[expr.name] += 1
        return super()._handle_expr(expr_idx, expr, stmt_idx, stmt, block)

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

        self.function_call_counts = defaultdict(int)
        self.macro_call_counts = defaultdict(int)

    def _handle_AILBlock(self, node, **kwargs):
        walker = BlockCallCounter(self.project)
        walker.walk(node)
        for func_name in walker.function_call_counts:
            self.function_call_counts[func_name] += walker.function_call_counts[func_name]
        for macro_name in walker.macro_call_counts:
            self.macro_call_counts[macro_name] += walker.macro_call_counts[macro_name]


class NodeCounter(SequenceWalker):

    def __init__(self):
        super().__init__()
        self._handlers[Block] = self._handle_AILBlock
        self.node_counts = 0

    def _handle_AILBlock(self, node, **kwargs):
        self.node_counts += 1
