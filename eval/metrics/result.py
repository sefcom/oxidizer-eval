from collections import defaultdict

DECOMPILERS = ("IDA", "Oxidizer", "angr")

LOC = "LoC"
NUM_VARIABLES = "# Variables"
NUM_PTR_DEREF = "# Pointer dereference"
NUM_ASSIGNMENTS = "# Assignments"
NUM_WHILES = "# While Loops"
NUM_GOTOS = "# Gotos"
METRICS = (LOC, NUM_VARIABLES, NUM_PTR_DEREF, NUM_ASSIGNMENTS, NUM_WHILES, NUM_GOTOS)


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

    def add_func_eval_reuslt(self, func_eval_result):
        self.func_eval_results.append(func_eval_result)

    def _average(self, decompiler, metric):
        values = [func_eval_result.eval_result[metric][decompiler] for func_eval_result in self.func_eval_results]
        return sum(values) / len(values) if len(values) else -1.0

    def is_valid(self):
        return all(self._average(decompiler, metric) >= 0 for decompiler in DECOMPILERS for metric in METRICS)

    def __str__(self) -> str:
        output = f"Binary: {self.binary_path}\n"
        for metric in METRICS:
            output += f'Average {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._average(decompiler, metric):.2f}" for decompiler in DECOMPILERS])}\n'
        return output


class EvalResult:

    def __init__(self, binary_eval_results):
        self.binary_eval_results = binary_eval_results

    def _average(self, decompiler, metric):
        all_func_eval_results = []
        for binary_eval_result in self.binary_eval_results:
            all_func_eval_results += binary_eval_result.func_eval_results
        values = [func_eval_result.eval_result[metric][decompiler] for func_eval_result in all_func_eval_results]
        return sum(values) / len(values) if len(values) else -1.0

    def __str__(self) -> str:
        output = f"Overall Evaluation Result:\n"
        output += f"# Binaries: {len(self.binary_eval_results)}\n"
        output += f"# Functions: {sum(len(binary_eval_result.func_eval_results) for binary_eval_result in self.binary_eval_results)}\n"
        for metric in METRICS:
            output += f'Average {metric}({"/".join(DECOMPILERS)}): {"/".join([f"{self._average(decompiler, metric):.1f}" for decompiler in DECOMPILERS])}\n'
        return output
