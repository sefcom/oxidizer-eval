import json
import os

from angr.rust.utils.library import demangle
from eval.utils.dwarf_parser import *

from ..config import CACHED_GROUND_TRUTH_PATH, CACHED_DWARF_GROUND_TRUTH_PATH, CACHED_MALWARE_CALLS_PATH


class GroundTruth:

    def __init__(self, binary_name):
        with open(os.path.join(CACHED_GROUND_TRUTH_PATH, binary_name + ".json"), "r") as fd:
            self.data = json.load(fd)
        parser = DwarfParser()
        parser.parse_json(os.path.join(CACHED_DWARF_GROUND_TRUTH_PATH, binary_name + ".json"))
        self.data["variable_types"] = parser.local_variables

    def get_function_ground_truth(self, func_name):
        key = demangle(func_name)
        if key in self.data:
            result = dict(self.data[key])
            result["variable_types"] = self.data["variable_types"].get(key, [])
            return result
        return None


class MalwareGroundTruth:

    def __init__(self):
        with open(CACHED_MALWARE_CALLS_PATH, "r") as fd:
            self.malware_calls = json.load(fd)

    def get_malware_call_counts(self, sample, func_name):
        return self.malware_calls[sample][func_name]

    def get_malware_function_list(self, sample):
        return list(self.malware_calls[sample].keys())
