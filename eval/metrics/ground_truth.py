import json
import os

from angr.rust.utils.library import demangle
from eval.utils.dwarf_parser import *

from ..config import CACHED_GROUND_TRUTH_PATH, CACHED_DWARF_GROUND_TRUTH_PATH, CACHED_MALWARE_CALLS_PATH


class FunctionGroundTruth:
    def __init__(self, loc, nofops, string_literals, macros, calls, variables_types):
        self.loc = loc
        self.nofops = nofops
        self.nvars = len(variables_types)
        self.string_literals = string_literals
        self.macros = macros
        self.calls = calls
        self.variable_types = variables_types


class BinaryGroundTruth:

    def __init__(self):
        self.func_ground_truths = {}

    @staticmethod
    def load(binary_name):
        ground_truth = BinaryGroundTruth()
        with open(os.path.join(CACHED_GROUND_TRUTH_PATH, binary_name + ".json"), "r") as fd:
            data = json.load(fd)
        parser = DwarfParser()
        parser.parse_json(os.path.join(CACHED_DWARF_GROUND_TRUTH_PATH, binary_name + ".json"))
        for decl_line, func_data in data.items():
            func_name = parser.decl_path_to_func_name.get(decl_line, None)
            if func_name is not None:
                func_name = demangle(func_name)
                ground_truth.func_ground_truths[func_name] = FunctionGroundTruth(
                    loc=func_data["loc"],
                    nofops=func_data["nofops"],
                    string_literals=func_data["string_literals"],
                    macros=func_data["macros"],
                    calls=func_data["calls"],
                    variables_types=parser.local_variables.get(func_name, []),
                )
        return ground_truth

    def get_function_ground_truth(self, func_name) -> FunctionGroundTruth | None:
        key = demangle(func_name)
        if key in self.func_ground_truths:
            return self.func_ground_truths[key]
        return None


# class GroundTruth:

#     def __init__(self, binary_name):
#         with open(os.path.join(CACHED_GROUND_TRUTH_PATH, binary_name + ".json"), "r") as fd:
#             self.data = json.load(fd)
#         parser = DwarfParser()
#         parser.parse_json(os.path.join(CACHED_DWARF_GROUND_TRUTH_PATH, binary_name + ".json"))
#         self.data["variable_types"] = parser.local_variables

#     def get_function_ground_truth(self, func_name):
#         key = demangle(func_name)
#         if key in self.data:
#             result = dict(self.data[key])
#             result["variable_types"] = self.data["variable_types"].get(key, [])
#             return result
#         return None


# class MalwareGroundTruth:

#     def __init__(self):
#         with open(CACHED_MALWARE_CALLS_PATH, "r") as fd:
#             self.malware_calls = json.load(fd)

#     def get_malware_call_counts(self, sample, func_name):
#         return self.malware_calls[sample][func_name]

#     def get_malware_function_list(self, sample):
#         return list(self.malware_calls[sample].keys())
