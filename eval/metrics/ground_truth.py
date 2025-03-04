import json
import os

from angr.rust.utils.library import demangle

from ..config import CACHED_GROUND_TRUTH_PATH, CACHED_MALWARE_CALLS_PATH


class GroundTruth:

    def __init__(self, binary_name):
        with open(os.path.join(CACHED_GROUND_TRUTH_PATH, binary_name + ".json"), "r") as fd:
            self.data = json.load(fd)

    def get_function_ground_truth(self, func_name):
        key = demangle(func_name)
        if key in self.data:
            return self.data[key]
        return None


class MalwareGroundTruth:

    def __init__(self):
        with open(CACHED_MALWARE_CALLS_PATH, "r") as fd:
            self.malware_calls = json.load(fd)

    def get_malware_call_counts(self, sample, func_name):
        return self.malware_calls[sample][func_name]

    def get_malware_function_list(self, sample):
        return list(self.malware_calls[sample].keys())
