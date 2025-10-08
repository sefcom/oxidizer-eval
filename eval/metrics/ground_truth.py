from dataclasses import dataclass
import json
from typing import Dict, List

from angr.rust.utils.library import demangle
from eval.utils.dwarf_parser import DwarfParser, Type


@dataclass
class FunctionGroundTruth:
    """Ground truth information for a function"""

    loc: int
    nofops: int
    nvars: int
    string_literals: Dict[str, int]
    macros: Dict[str, int]
    calls: Dict[str, int]
    variable_types: List[Type]
    mcc: int


class BinaryGroundTruth:
    """Ground truth information for a binary"""

    def __init__(self):
        self.func_ground_truths = {}

    @staticmethod
    def load(path: str) -> "BinaryGroundTruth":
        ground_truth = BinaryGroundTruth()
        with open(path, "r") as fd:
            data = json.load(fd)
        functions = data.get("functions", {})
        for func_name, func_data in functions.items():
            ground_truth.func_ground_truths[func_name] = FunctionGroundTruth(
                loc=func_data["loc"],
                nofops=func_data["nofops"],
                nvars=len(func_data["variables"]),
                string_literals=func_data["string_literals"],
                macros=func_data["macros"],
                calls=func_data["calls"],
                variable_types=[DwarfParser.parse_dict(var_data) for var_data in func_data["variables"]],
                mcc=func_data["mcc"],
            )
        return ground_truth

    def get_function_ground_truth(self, func_name) -> FunctionGroundTruth | None:
        key = demangle(func_name)
        if key in self.func_ground_truths:
            return self.func_ground_truths[key]
        return None
