from collections import defaultdict, Counter
import statistics
from typing import Dict, List, Tuple

from angr.sim_variable import SimStackVariable, SimRegisterVariable

from eval.type_recovery.function_prototype import FunctionPrototype
from eval.metrics import *
from eval.utils.dwarf_parser import *

DECOMPILERS = ("Oxidizer", "angr", "IDA", "Ghidra", "Binary Ninja", "Binary Ninja (Pseudo Rust)")
DECOMPILERS = ("Oxidizer",)
TYPE_CATEGORIES = ("primitive", "reference", "composite", "Option", "Result")


class FunctionEvalResult:
    def __init__(self, func_name):
        self.func_name = func_name
        self.eval_result = defaultdict(dict)

    def add_result(self, metric, decompiler, value):
        self.eval_result[decompiler][metric] = value

    def is_valid_for_all_decompilers(self):
        return len(self.eval_result) == len(DECOMPILERS)


class BinaryEvalResult:

    def __init__(self, binary_path, is_malware):
        self.binary_path = binary_path
        self.is_malware = is_malware
        self.func_eval_results: List[FunctionEvalResult] = []
        self.type_eval_result = defaultdict(list)

    def add_func_eval_reuslt(self, func_eval_result: FunctionEvalResult):
        if func_eval_result.is_valid_for_all_decompilers():
            self.func_eval_results.append(func_eval_result)

    def add_type_eval_result(self, category, result):
        self.type_eval_result[category].append(result)

    def _normalize_dwarf_type(self, dwarf_type: Type):
        match dwarf_type:
            case Struct():
                return "struct", dwarf_type.size
            case Enumeration(name):
                if name.startswith("core::result::Result<"):
                    return "Result", dwarf_type.size
                elif name.startswith("core::option::Option<"):
                    return "Option", dwarf_type.size
                else:
                    return "struct", dwarf_type.size
            case Primitive():
                return "primitive", dwarf_type.size
        return None, None

    def generate_type_eval_result(self, variable_types, ground_truth):
        ident_to_dwarf_vars = defaultdict(list)
        for var in ground_truth:
            if var.category == "stack":
                ident = f"stack_{var.location}"
            elif var.category == "register":
                ident = f"reg_{var.location}"
            else:
                continue
            ident_to_dwarf_vars[ident].append(var)

        for ident, dwarf_vars in ident_to_dwarf_vars.items():
            predicted_types = variable_types.get(ident, [])  # List of normalized (kind, size) tuples

            for dwarf_var in dwarf_vars:
                true_type = self._normalize_dwarf_type(dwarf_var.type)
                category = true_type[0]

                if not predicted_types:
                    # No prediction → FN
                    self.add_type_eval_result(category, "FN")
                elif any(true_type == tuple(pred_type) for pred_type in predicted_types):
                    # Correct prediction → TP
                    self.add_type_eval_result(category, "TP")
                else:
                    # Incorrect prediction → FP
                    self.add_type_eval_result(category, "FP")

    def _average(self, decompiler, metric):
        values = [func_eval_result.eval_result[decompiler][metric] for func_eval_result in self.func_eval_results]
        assert len(values) > 0
        return sum(values) / len(values)

    def __str__(self) -> str:
        output = f"Binary: {self.binary_path}\n"
        if len(self.func_eval_results) == 0:
            output += "N/A\n"
        else:
            for metric in MALWARE_METRICS if self.is_malware else METRICS:
                output += f'Average {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._average(decompiler, metric):.2f}" for decompiler in DECOMPILERS])}\n'
        return output


class EvalResult:

    def __init__(self, is_malware):
        self.total_binaries = 0
        self.total_functions = 0
        self.values: Dict[Tuple, List] = defaultdict(list)
        self.metrics = MALWARE_METRICS if is_malware else METRICS
        self.type_eval_result = defaultdict(list)

    def add_binary_eval_result(self, binary_eval_result: BinaryEvalResult):
        self.total_binaries += 1
        for func_eval_result in binary_eval_result.func_eval_results:
            self.total_functions += 1
            for decompiler in DECOMPILERS:
                for metric, value in func_eval_result.eval_result[decompiler].items():
                    self.values[(decompiler, metric)].append(value)
        for key in binary_eval_result.type_eval_result:
            self.type_eval_result[key] += binary_eval_result.type_eval_result[key]

    def _average(self, decompiler, metric):
        values = self.values[(decompiler, metric)]
        assert len(values)
        return sum(values) / len(values)

    def _sum(self, decompiler, metric):
        values = self.values[(decompiler, metric)]
        assert len(values)
        return sum(values)

    def _median(self, decompiler, metric):
        values = self.values[(decompiler, metric)]
        assert len(values)
        return statistics.median(values) if len(values) else -1

    def __str__(self) -> str:
        output = f"General Evaluation Result:\n"
        output += f"# Binaries: {self.total_binaries}\n"
        output += f"# Functions: {self.total_functions}\n"
        output += "\n"
        for metric in self.metrics:
            output += f'Average {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._average(decompiler, metric):.2f}" for decompiler in DECOMPILERS])}\n'
        output += "\n"
        for metric in self.metrics:
            output += f'Sum {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._sum(decompiler, metric)}" for decompiler in DECOMPILERS])}\n'
        output += "\n"
        for metric in self.metrics:
            output += f'Median {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._median(decompiler, metric)}" for decompiler in DECOMPILERS])}\n'
        output += "Type Recovery Evaluation (per category):\n"
        for category, labels in self.type_eval_result.items():
            counter = Counter(labels)
            tp = counter.get("TP", 0)
            fp = counter.get("FP", 0)
            fn = counter.get("FN", 0)

            precision = tp / (tp + fp) if (tp + fp) > 0 else 0.0
            recall = tp / (tp + fn) if (tp + fn) > 0 else 0.0
            f1 = 2 * precision * recall / (precision + recall) if (precision + recall) > 0 else 0.0

            output += (
                f"{category}: TP={tp}, FP={fp}, FN={fn} | "
                f"precision={precision:.2f}, recall={recall:.2f}, f1={f1:.2f}\n"
            )

        return output
