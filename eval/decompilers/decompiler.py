import os

from eval.config import RESULT_DIR
from eval.decompilers.ida import ida_decompile
from eval.decompilers.ghidra import ghidra_decompile
from eval.decompilers.angr import angr_decompile
from eval.decompilers.binja import binja_decompile
from eval.decompilers.ghidrust import ghidrust_decompile
from eval.decompilers.binja_with_plugin import binja_with_plugin_decompile


class DecompilerCache:
    """Per-binary result cache backed by JSON files in RESULT_DIR/<tag>/<decompiler>/<binary>/."""

    def __init__(self, tag, decompiler_name, binary_name):
        self.result_dir = RESULT_DIR / tag / decompiler_name / binary_name
        os.makedirs(self.result_dir, exist_ok=True)
        self.cached = set(int(p.stem, 16) for p in self.result_dir.glob("*.json"))

    def all_cached(self, target_functions):
        return self.cached.issuperset(target_functions)

    def is_cached(self, func_addr):
        return func_addr in self.cached

    def uncached(self, target_functions):
        return set(f for f in target_functions if f not in self.cached)

    def save(self, func_addr, result):
        path = self.result_dir / f"{int(func_addr):x}.json"
        result.save_json(path)


class Decompiler:
    """Unified decompiler interface with automatic caching."""

    def __init__(self, name):
        self.name = name

    def decompile(self, binary_path, target_functions, tag, symbols=None):
        binary_name = os.path.basename(binary_path)
        cache = DecompilerCache(tag, self.name, binary_name)

        # Binary Ninja produces both C and Rust output in a single pass
        if self.name == "Binary Ninja":
            rust_cache = DecompilerCache(tag, "Binary Ninja (Pseudo Rust)", binary_name)
            c_uncached = cache.uncached(target_functions)
            rust_uncached = rust_cache.uncached(target_functions)
            if not c_uncached and not rust_uncached:
                return
            caches = {"C": cache, "Rust": rust_cache}
            for lang, func_addr, result in binja_decompile(binary_path, c_uncached, rust_uncached, tag, symbols):
                caches[lang].save(func_addr, result)
            return

        uncached = cache.uncached(target_functions)
        if not uncached:
            return

        if self.name == "IDA":
            gen = ida_decompile(binary_path, uncached, tag)
        elif self.name == "Ghidra":
            gen = ghidra_decompile(binary_path, uncached, tag)
        elif self.name == "angr":
            gen = angr_decompile(binary_path, uncached, tag, symbols, is_rust=False)
        elif self.name == "Oxidizer":
            gen = angr_decompile(binary_path, uncached, tag, symbols, is_rust=True)
        elif self.name == "GhidRust":
            gen = ghidrust_decompile(binary_path, uncached, tag)
        elif self.name == "Binary Ninja (with Plugin)":
            gen = binja_with_plugin_decompile(binary_path, uncached, tag, symbols)
        elif self.name == "Binary Ninja (Pseudo Rust)":
            return  # Results produced by "Binary Ninja" decompilation
        else:
            return  # Unsupported decompiler

        for func_addr, result in gen:
            cache.save(func_addr, result)
