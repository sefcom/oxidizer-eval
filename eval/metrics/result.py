from collections import defaultdict
from pprint import pprint
import statistics
from typing import List

from angr import Tuple

from eval.type_recovery.function_prototype import FunctionPrototype

DECOMPILERS = ("Oxidizer", "angr", "IDA", "Ghidra")

LOC = "LoC"
NUM_VARIABLES = "# Variables"
NUM_PTR_DEREF = "# Pointer dereference"
NUM_ASSIGNMENTS = "# Assignments"
NUM_WHILES = "# While Loops"
NUM_GOTOS = "# Gotos"
NUM_FUNCTION_CALL_COUNTS = "# Function Calls"
NUM_NODE_COUNTS = "# Basic Blocks"
NUM_OPERATORS = "# Operators"
# METRICS = (LOC, NUM_VARIABLES, NUM_PTR_DEREF, NUM_ASSIGNMENTS, NUM_WHILES, NUM_GOTOS)
METRICS = (LOC, NUM_GOTOS, NUM_NODE_COUNTS, NUM_VARIABLES, NUM_OPERATORS)


class FunctionEvalResult:

    def __init__(self, func_name):
        self.func_name = func_name
        self.eval_result = defaultdict(dict)

    def add_loc(self, decompiler, value):
        self.eval_result[LOC][decompiler] = value

    def add_num_variables(self, decompiler, value):
        self.eval_result[NUM_VARIABLES][decompiler] = value

    def add_num_ptr_deref(self, decompiler, value):
        self.eval_result[NUM_PTR_DEREF][decompiler] = value

    def add_num_assignments(self, decompiler, value):
        self.eval_result[NUM_ASSIGNMENTS][decompiler] = value

    def add_num_whiles(self, decompiler, value):
        self.eval_result[NUM_WHILES][decompiler] = value

    def add_num_gotos(self, decompiler, value):
        self.eval_result[NUM_GOTOS][decompiler] = value

    def add_num_call_counts(self, decompiler, value):
        self.eval_result[NUM_CALL_COUNTS][decompiler] = value

    def add_num_node_counts(self, decompiler, value):
        self.eval_result[NUM_NODE_COUNTS][decompiler] = value

    def add_num_operators(self, decompiler, value):
        self.eval_result[NUM_OPERATORS][decompiler] = value

    @staticmethod
    def merge(results):
        new_result = FunctionEvalResult(results[0].func_name)
        for result in results:
            for metric in METRICS:
                new_result.eval_result[metric].update(result.eval_result[metric])
        return new_result

    def __str__(self) -> str:
        output = f"Function: {self.func_name}\n"
        for metric, result in self.eval_result.items():
            items = result.items()
            decompilers = [item[0] for item in items]
            values = [str(item[1]) for item in items]
            output += f'{metric}({"/".join(decompilers)}): {"/".join(values)}\n'
        return output


class BinaryEvalResult:

    def __init__(self, binary_path):
        self.binary_path = binary_path
        self.func_eval_results = []
        self.ground_truth_prototypes = None
        self.inferred_prototypes = None

    def add_func_eval_reuslt(self, func_eval_result):
        self.func_eval_results.append(func_eval_result)

    def _average(self, decompiler, metric):
        values = [func_eval_result.eval_result[metric][decompiler] for func_eval_result in self.func_eval_results]
        return sum(values) / len(values) if len(values) else -1.0

    def is_valid(self):
        return all(self._average(decompiler, metric) >= 0 for decompiler in DECOMPILERS for metric in METRICS)

    def generate_type_recovery_pairs(self):
        function_list = set(self.inferred_prototypes.keys()).intersection(self.ground_truth_prototypes.keys())
        pairs = []
        for func_name in function_list:
            pairs.append((self.ground_truth_prototypes[func_name], self.inferred_prototypes[func_name]))
        pprint(pairs)
        return pairs

    def __str__(self) -> str:
        output = f"Binary: {self.binary_path}\n"
        for metric in METRICS:
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

    def _percentage(self, a, b):
        return f"{a/b*100:.1f}\%"

    def _generate_data_line(self, title, num_correct, num_wrong_size, num_total):
        num_incorrect = num_total - num_correct - num_wrong_size
        p_correct = self._percentage(num_correct, num_total)
        p_wrong_size = self._percentage(num_wrong_size, num_total)
        p_incorrect = self._percentage(num_incorrect, num_total)
        return f"{title} & {num_correct} ({p_correct}) & {num_wrong_size} ({p_wrong_size}) & {num_incorrect} ({p_incorrect}) & {num_total} \\\\"

    def save_latex(self):
        result = (
            f"""
\\begin{{table}}[ht]
    \\caption{{Oxidizer's function prototype inference evaluation result.}}
    \\label{{tab:type_eval_result}}
    \\centering
    \\resizebox{{\columnwidth}}{{!}}{{
        \\begin{{tabular}}{{lcccc}}
            \\toprule
            & \\textbf{{Correct}} & \\textbf{{Wrong size}} & \\textbf{{Incorrect}} & \\textbf{{Total}} \\\\
            \\midrule
            {self._generate_data_line("Struct return type", self.num_return_struct_correct, self.num_return_struct_wrong_size, self.num_return_struct)}
            {self._generate_data_line("Result<T, E> return type", self.num_return_result_correct, self.num_return_result_wrong_size, self.num_return_result)}
            {self._generate_data_line("Option<T> return type", self.num_return_option_correct, self.num_return_option_wrong_size, self.num_return_option)}
            {self._generate_data_line("Struct argument types", self.num_struct_args_correct, self.num_struct_args_wrong_size, self.num_struct_args)}
            \\bottomrule
        \end{{tabular}}
    }}
\end{{table}}
        """.replace(
                "<", "\\textless{}"
            )
            .replace(">", "\\textgreater{}")
            .strip()
        )
        with open("type_eval_result.tex", "w") as fd:
            fd.write(result)

    def __str__(self) -> str:
        output = f"Type Recovery Evaluation Result:\n"
        output += f"# Inferred function prototypes: {self.total_inferred_prototypes}\n"
        output += f"# Struct return type - Correct/Wrong size/Total: {self.num_return_struct_correct}/{self.num_return_struct_wrong_size}/{self.num_return_struct}\n"
        output += f"# Result<T, E> return type - Correct/Wrong size/Total: {self.num_return_result_correct}/{self.num_return_result_wrong_size}/{self.num_return_result}\n"
        output += f"# Option<E> return type - Correct/Wrong size/Total: {self.num_return_option_correct}/{self.num_return_option_wrong_size}/{self.num_return_option}\n"
        output += f"# Struct arg type - Correct/Wrong size/Total: {self.num_struct_args_correct}/{self.num_struct_args_wrong_size}/{self.num_struct_args}\n"
        return output


class EvalResult:

    def __init__(self, binary_eval_results):
        self.binary_eval_results = binary_eval_results
        self.type_recovery_pairs: List[Tuple[FunctionPrototype, FunctionPrototype]] = []
        for binary_eval_result in binary_eval_results:
            self.type_recovery_pairs += binary_eval_result.generate_type_recovery_pairs()

    def _values(self, decompiler, metric):
        all_func_eval_results = []
        for binary_eval_result in self.binary_eval_results:
            all_func_eval_results += binary_eval_result.func_eval_results
        values = [func_eval_result.eval_result[metric][decompiler] for func_eval_result in all_func_eval_results]
        return values

    def _average(self, decompiler, metric):
        values = self._values(decompiler, metric)
        return sum(values) / len(values) if len(values) else -1.0

    def _sum(self, decompiler, metric):
        values = self._values(decompiler, metric)
        return sum(values) if len(values) else -1

    def _median(self, decompiler, metric):
        values = self._values(decompiler, metric)
        return statistics.median(values) if len(values) else -1

    def _generate_type_recovery_eval_result(self):
        result = TypeRecoveryEvalResult()
        result.total_inferred_prototypes = len(self.type_recovery_pairs)
        for p0, p1 in self.type_recovery_pairs:
            if p0.return_type.is_struct_or_struct_pointer():
                result.num_return_struct += 1
                if p1.return_type.is_struct_or_struct_pointer():
                    if p1.return_type.size == p0.return_type.size:
                        result.num_return_struct_correct += 1
                    else:
                        result.num_return_struct_wrong_size += 1
            if p0.return_type.is_result_or_result_pointer():
                result.num_return_result += 1
                if p1.return_type.is_result_or_result_pointer():
                    if p1.return_type.size == p0.return_type.size:
                        result.num_return_result_correct += 1
                    else:
                        result.num_return_result_wrong_size += 1
            if p0.return_type.is_option_or_option_pointer():
                result.num_return_option += 1
                if p1.return_type.is_option_or_option_pointer():
                    if p1.return_type.size == p0.return_type.size:
                        result.num_return_option_correct += 1
                    else:
                        result.num_return_option_wrong_size += 1

            # Arguments
            for i in range(len(p0.parameters)):
                arg0 = p0.parameters[i]
                arg1 = p1.parameters[i] if i < len(p1.parameters) else None
                if arg0.is_struct_or_struct_pointer():
                    result.num_struct_args += 1
                    if arg1 and arg1.is_struct_or_struct_pointer():
                        if arg1.size == arg0.size:
                            result.num_struct_args_correct += 1
                        else:
                            result.num_struct_args_wrong_size += 1
        result.save_latex()
        return result

    def __str__(self) -> str:
        output = f"Overall Evaluation Result:\n"
        output += f"# Binaries: {len(self.binary_eval_results)}\n"
        output += f"# Functions: {sum(len(binary_eval_result.func_eval_results) for binary_eval_result in self.binary_eval_results)}\n"
        output += "\n"
        for metric in METRICS:
            output += f'Average {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._average(decompiler, metric):.2f}" for decompiler in DECOMPILERS])}\n'
        output += "\n"
        for metric in METRICS:
            output += f'Sum {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._sum(decompiler, metric)}" for decompiler in DECOMPILERS])}\n'
        output += "\n"
        for metric in METRICS:
            output += f'Median {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._median(decompiler, metric)}" for decompiler in DECOMPILERS])}\n'

        output += "\n"
        output += str(self._generate_type_recovery_eval_result())

        return output
