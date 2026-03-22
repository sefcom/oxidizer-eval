from __future__ import annotations

import logging
import traceback
from pathlib import Path

from eval.config import RESULT_DIR
from eval.result import DecompileResult

MODEL_NAME = "LLM4Binary/llm4decompile-6.7b-v2"
MAX_NEW_TOKENS = 2048
MAX_INPUT_TOKENS = 3500

_model = None
_tokenizer = None


def _load_model(model_name: str = MODEL_NAME):
    global _model, _tokenizer
    if _model is None:
        from transformers import AutoTokenizer, AutoModelForCausalLM
        import torch

        _tokenizer = AutoTokenizer.from_pretrained(model_name)
        _model = AutoModelForCausalLM.from_pretrained(
            model_name, torch_dtype=torch.bfloat16
        ).cuda()
        _model.eval()
    return _model, _tokenizer


def llm4decompile_decompile(binary_path, target_functions, tag, symbols=None, model_name=MODEL_NAME):
    import torch

    l = logging.getLogger(tag)
    binary_name = Path(binary_path).name
    ghidra_result_dir = RESULT_DIR / tag / "Ghidra" / binary_name

    if not ghidra_result_dir.exists():
        l.error(f"LLM4Decompile: Ghidra results not found at {ghidra_result_dir}")
        return

    model, tokenizer = _load_model(model_name)

    for func_addr in target_functions:
        ghidra_result_path = ghidra_result_dir / f"{int(func_addr):x}.json"
        if not ghidra_result_path.exists():
            continue

        ghidra_result = DecompileResult.load_json(ghidra_result_path)

        try:
            prompt = (
                "# This is the assembly code:\n"
                + ghidra_result.decompilation
                + "\n# What is the source code?\n"
            )

            inputs = tokenizer(
                prompt,
                return_tensors="pt",
                truncation=True,
                max_length=MAX_INPUT_TOKENS,
            ).to(model.device)

            with torch.no_grad():
                outputs = model.generate(
                    **inputs,
                    max_new_tokens=MAX_NEW_TOKENS,
                    do_sample=False,
                    pad_token_id=tokenizer.eos_token_id,
                )

            generated = tokenizer.decode(
                outputs[0][len(inputs["input_ids"][0]):-1],
                skip_special_tokens=True,
            )
            generated = generated.replace("\u0120", " ").replace("\u010a", "\n")

            result = DecompileResult(
                decompilation=generated,
                variable_types=ghidra_result.variable_types,
                function_call_counts=ghidra_result.function_call_counts,
                macro_call_counts=ghidra_result.macro_call_counts,
            )
            yield func_addr, result

        except Exception as e:
            l.error(f"LLM4Decompile: failed for function {func_addr:#x} in {binary_name}: {e}")
            l.error(traceback.format_exc())
