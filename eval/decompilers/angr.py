import logging
import traceback
from collections import Counter, defaultdict
import os
import time

import angr
from angr.ailment.statement import FunctionLikeMacro, Call
from angr.ailment import AILBlockWalker, Block, Const
from angr.ailment.expression import StringLiteral
from angr.rust.sim_type import *
from angr.sim_variable import SimStackVariable, SimRegisterVariable
from angr.sim_type import TypeRef, SimTypeChar, SimTypeInt, SimTypeFloat, SimStruct, SimTypePointer, SimType
from angr.analyses.decompiler.sequence_walker import SequenceWalker

from eval.config import RESULT_DIR, FLIRT_SIGS_DIR
from eval.result import DecompileResult
from eval.type_recovery.function_prototype import Type

l = logging.getLogger("oxidizer-eval")


def _extract_function_body(output):
    body = []
    for idx, line in enumerate(output):
        if len(body) == 0 and line.endswith(")") and len(output) > idx + 1 and output[idx + 1].endswith("{"):
            body.append(line)
            continue
        elif len(body):
            body.append(line)
    return "\n".join(body)


def _normalize_type(ty: SimType) -> Type:
    if ty is None:
        return Type(None, None)
    if isinstance(ty, TypeRef):
        ty = ty.type
    name = None
    size = ty.size // 8 if ty.size else None
    is_pointer = isinstance(ty, SimTypePointer)
    if is_pointer:
        ty = ty.pts_to
    if isinstance(ty, RustSimTypeResult):
        name = "Result"
    elif isinstance(ty, RustSimTypeOption):
        name = "Option"
    elif isinstance(ty, SimStruct):
        name = "struct"
    elif isinstance(ty, RustSimEnum):
        name = "enum"
    elif isinstance(ty, SimTypePointer):
        name = "reference"
    elif isinstance(ty, SimTypeArray):
        name = "array"
    else:
        name = "primitive"
    if is_pointer:
        name = "&" + name
    return Type(name, size)


def _dump_variable_types(decompiler):
    stack_depth = decompiler.clinic.calculate_stack_depth()
    ident_to_types = defaultdict(list)
    func = decompiler.codegen.rust_func if decompiler.project.is_rust_binary else decompiler.codegen.cfunc
    for var, rust_var_and_vartypes in func.get_unified_local_vars().items():
        vartypes = [x[1] for x in rust_var_and_vartypes]
        count = Counter(vartypes)
        vartypes = sorted(
            count.copy(),
            key=lambda x, ct=count: (
                isinstance(x, (SimTypeChar, SimTypeInt, SimTypeFloat)),
                ct[x],
                (
                    0
                    if repr(x).startswith("struct")
                    else (1 if repr(x).startswith("Option") or repr(x).startswith("Result") else 2)
                ),
                repr(x),
            ),
        )
        types = [_normalize_type(ty.with_arch(decompiler.project.arch)).to_tuple() for ty in vartypes][:1]
        if isinstance(var, SimStackVariable):
            stack_offset = var.offset - stack_depth
            ident = f"stack_{stack_offset}"
            ident_to_types[ident] += types
        elif isinstance(var, SimRegisterVariable):
            ident = f"reg_{decompiler.project.arch.register_names.get(var.reg)}"
            ident_to_types[ident] += types
    # Function arguments and return type
    for idx, arg_ty in enumerate(func.functy.args):
        if arg_ty:
            arg_ty = arg_ty.with_arch(decompiler.project.arch)
            types = [_normalize_type(arg_ty).to_tuple()]
            ident = f"arg_{idx}"
            ident_to_types[ident] += types
    ret_ty = func.functy.returnty
    if ret_ty:
        ret_ty = ret_ty.with_arch(decompiler.project.arch)
        types = [_normalize_type(ret_ty).to_tuple()]
        ident = "return_type"
        ident_to_types[ident] += types
    return ident_to_types


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
                self.function_call_counts[func_addr - self.project.loader.main_object.mapped_base] += 1
        elif isinstance(call.target, StringLiteral):
            self.function_call_counts[call.target.data] += 1

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


def _reachable_functions(proj, target_functions):
    reachable_functions = set(target_functions)
    queue = list(reachable_functions)

    while queue:
        func_addr = queue.pop(0)
        try:
            for callee in proj.kb.callgraph.successors(func_addr):
                if callee not in reachable_functions:
                    reachable_functions.add(callee)
                    queue.append(callee)
        except Exception:
            pass
    return reachable_functions


def _angr_dec_base(binary_path, target_functions, tag: str, extract_body_func, is_rust_binary, symbols):
    ll = logging.getLogger(tag)
    decompiler_name = "Oxidizer" if is_rust_binary else "angr"

    assert os.path.exists(binary_path)

    binary_name = os.path.basename(binary_path)
    target_functions = list(target_functions)

    proj = angr.Project(binary_path, auto_load_libs=False, is_rust_binary=is_rust_binary)

    result_dir = RESULT_DIR / tag / decompiler_name / binary_name
    os.makedirs(result_dir, exist_ok=True)
    decompiled_functions = set(int(result_path.stem, 16) for result_path in result_dir.glob("*.json"))

    if not decompiled_functions.issuperset(target_functions):
        cfg = proj.analyses.CFGFast(normalize=True)

        if proj.is_rust_binary:
            try:
                sig_path = str(FLIRT_SIGS_DIR / (tag + ".sig"))
                ll.info(f"Loading FLIRT signature from {sig_path} for {tag}")
                proj.analyses.Flirt(sig_path)
                proj.analyses.FlirtSigPropagation(cfg=cfg)
                proj.analyses.CleanupFunctionIdentification()
            except Exception as e:
                ll.error(f"Failed to load FLIRT signatures for {tag}: {e}")
                ll.error(traceback.format_exc())

            # Debug symbol recovery
            matches, mismatches = 0, 0
            for func in proj.kb.functions.values():
                func_addr = str(func.addr - proj.loader.main_object.mapped_base)
                symbol = symbols.get(func_addr, None)
                if symbol is not None:
                    if func.demangled_name == symbol:
                        matches += 1
                    else:
                        mismatches += 1
            l.info(
                f"{matches} matches and {mismatches} mismatches between symbols and function names for {binary_name}"
            )

        start_time = time.time()
        ccca = proj.analyses.CompleteCallingConventions(
            cfg=cfg,
            target_functions=_reachable_functions(
                proj, [addr + proj.loader.main_object.mapped_base for addr in target_functions]
            ),
        )
        ll.info(
            f"{ccca._total_funcs}/{len(proj.kb.functions)} functions analyzed for calling conventions in {binary_name}"
        )
        ll.info(f"CompleteCallingConventions took {time.time() - start_time:.2f} seconds for {binary_path}")

        if proj.is_rust_binary:
            proj.analyses.KnownTypeLoader()

        for func_addr in proj.kb.functions:
            rebased_func_addr = func_addr - proj.loader.main_object.mapped_base
            if rebased_func_addr in target_functions:
                if rebased_func_addr in decompiled_functions:
                    continue
                try:
                    func = proj.kb.functions[func_addr]
                    decompiler = proj.analyses.Decompiler(cfg=cfg, func=func)
                    output = extract_body_func(decompiler.codegen.text.split("\n"))
                    if output:
                        call_counter = CallCounter(proj)
                        call_counter.walk(decompiler.seq_node)
                        result = DecompileResult(
                            decompilation=output,
                            variable_types=_dump_variable_types(decompiler),
                            function_call_counts=call_counter.function_call_counts,
                            macro_call_counts=call_counter.macro_call_counts,
                        )
                        result_path = result_dir / f"{rebased_func_addr:x}.json"
                        result.save_json(result_path)
                except MemoryError as e:
                    raise
                except BaseException as e:
                    ll.error(f"Failed to decompile function at {rebased_func_addr:x} for {binary_name}: {e}")
                    ll.error(traceback.format_exc())


def angr_dec(binary_path, target_functions, tag, symbols, *args, **kwargs):
    _angr_dec_base(binary_path, target_functions, tag, _extract_function_body, False, symbols)
