import logging
import subprocess
import traceback
from pathlib import Path

from eval.config import RESULT_DIR
from eval.result import DecompileResult

GHIDRUST_JAR = Path(__file__).parent.parent.parent / "tools" / "GhidRust.jar"


def ghidrust_decompile(binary_path, target_functions, tag):
    """
    GhidRust decompiler: transforms Ghidra's C decompilation into Rust-like pseudocode.

    Reads cached Ghidra results, pipes each function's decompilation through the GhidRust
    Java tool, and yields results with the transformed decompilation.
    """
    l = logging.getLogger(tag)
    binary_name = Path(binary_path).name
    ghidra_result_dir = RESULT_DIR / tag / "Ghidra" / binary_name

    if not ghidra_result_dir.exists():
        l.error(f"GhidRust: Ghidra results not found at {ghidra_result_dir}")
        return

    for func_addr in target_functions:
        ghidra_result_path = ghidra_result_dir / f"{int(func_addr):x}.json"
        if not ghidra_result_path.exists():
            continue

        ghidra_result = DecompileResult.load_json(ghidra_result_path)
        code = ghidra_result.decompilation.encode()

        try:
            process = subprocess.Popen(
                ["java", "-cp", str(GHIDRUST_JAR), "ghidrust.decompiler.parser.Run"],
                stdin=subprocess.PIPE,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
            )
            out, err = process.communicate(code)
        except Exception as e:
            l.error(f"GhidRust: failed to run for function {func_addr:#x}: {e}")
            l.error(traceback.format_exc())
            continue

        if err:
            # l.debug(f"GhidRust: stderr for function {func_addr:#x}: {err.decode()}")
            continue

        decompilation = out.decode().strip()
        if not decompilation:
            continue

        # Trim parser noise before the actual function signature
        lines = decompilation.splitlines()
        for i, line in enumerate(lines):
            if line.startswith("fn ") and line.rstrip().endswith("{"):
                decompilation = "\n".join(lines[i:])
                break

        result = DecompileResult(
            decompilation=decompilation,
            variable_types=ghidra_result.variable_types,
            function_call_counts=ghidra_result.function_call_counts,
            macro_call_counts=ghidra_result.macro_call_counts,
        )
        yield func_addr, result
