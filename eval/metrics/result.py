from collections import defaultdict
import statistics
from typing import Dict, List, Tuple

from eval.type_recovery.function_prototype import FunctionPrototype
from eval.metrics import *

DECOMPILERS = ("Oxidizer", "angr", "IDA", "Ghidra", "Binary Ninja", "Binary Ninja (Pseudo Rust)")


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

    def add_func_eval_reuslt(self, func_eval_result: FunctionEvalResult):
        if func_eval_result.is_valid_for_all_decompilers():
            self.func_eval_results.append(func_eval_result)

    def _average(self, decompiler, metric):
        values = [func_eval_result.eval_result[decompiler][metric] for func_eval_result in self.func_eval_results]
        assert len(values) > 0
        return sum(values) / len(values)

    def __str__(self) -> str:
        output = f"Binary: {self.binary_path}\n"
        for metric in MALWARE_METRICS if self.is_malware else METRICS:
            output += f'Average {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._average(decompiler, metric):.2f}" for decompiler in DECOMPILERS])}\n'
        return output


class TypeRecoveryEvalResult:

    def __init__(self):
        self.total_inferred_prototypes = 0

        self.num_return_struct = 0
        self.num_return_struct_correct = 0
        self.num_return_struct_wrong_size = 0

        self.num_return_result = 0
        self.num_return_result_correct = 0
        self.num_return_result_wrong_size = 0

        self.num_return_option = 0
        self.num_return_option_correct = 0
        self.num_return_option_wrong_size = 0

        self.num_struct_args = 0
        self.num_struct_args_correct = 0
        self.num_struct_args_wrong_size = 0

    def add_result(self, ground_truth_prototypes, inferred_prototypes):
        function_list = set(inferred_prototypes.keys()) & set(ground_truth_prototypes.keys())
        for func_name in function_list:
            p0: FunctionPrototype = ground_truth_prototypes[func_name]
            p1: FunctionPrototype = inferred_prototypes[func_name]
            self.total_inferred_prototypes += 1
            if p0.return_type.is_struct_or_struct_pointer():
                self.num_return_struct += 1
                if p1.return_type.is_struct_or_struct_pointer():
                    if p1.return_type.size == p0.return_type.size:
                        self.num_return_struct_correct += 1
                    else:
                        self.num_return_struct_wrong_size += 1
            if p0.return_type.is_result_or_result_pointer():
                self.num_return_result += 1
                if p1.return_type.is_result_or_result_pointer():
                    if p1.return_type.size == p0.return_type.size:
                        self.num_return_result_correct += 1
                    else:
                        self.num_return_result_wrong_size += 1
            if p0.return_type.is_option_or_option_pointer():
                self.num_return_option += 1
                if p1.return_type.is_option_or_option_pointer():
                    if p1.return_type.size == p0.return_type.size:
                        self.num_return_option_correct += 1
                    else:
                        self.num_return_option_wrong_size += 1

            # Arguments
            for i in range(len(p0.parameters)):
                arg0 = p0.parameters[i]
                arg1 = p1.parameters[i] if i < len(p1.parameters) else None
                if arg0.is_struct_or_struct_pointer():
                    self.num_struct_args += 1
                    if arg1 and arg1.is_struct_or_struct_pointer():
                        if arg1.size == arg0.size:
                            self.num_struct_args_correct += 1
                        else:
                            self.num_struct_args_wrong_size += 1

    def __str__(self) -> str:
        output = f"Type Recovery Evaluation Result:\n"
        output += f"# Inferred function prototypes: {self.total_inferred_prototypes}\n"
        output += f"# Struct return type - Correct/Wrong size/Total: {self.num_return_struct_correct}/{self.num_return_struct_wrong_size}/{self.num_return_struct}\n"
        output += f"# Result<T, E> return type - Correct/Wrong size/Total: {self.num_return_result_correct}/{self.num_return_result_wrong_size}/{self.num_return_result}\n"
        output += f"# Option<E> return type - Correct/Wrong size/Total: {self.num_return_option_correct}/{self.num_return_option_wrong_size}/{self.num_return_option}\n"
        output += f"# Struct arg type - Correct/Wrong size/Total: {self.num_struct_args_correct}/{self.num_struct_args_wrong_size}/{self.num_struct_args}\n"
        return output


class EvalResult:

    def __init__(self, is_malware):
        self.total_binaries = 0
        self.total_functions = 0
        self.values: Dict[Tuple, List] = defaultdict(list)
        self.metrics = MALWARE_METRICS if is_malware else METRICS

    def add_binary_eval_result(self, binary_eval_result: BinaryEvalResult):
        self.total_binaries += 1
        for func_eval_result in binary_eval_result.func_eval_results:
            self.total_functions += 1
            for decompiler in DECOMPILERS:
                for metric, value in func_eval_result.eval_result[decompiler].items():
                    self.values[(decompiler, metric)].append(value)

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

        return output
