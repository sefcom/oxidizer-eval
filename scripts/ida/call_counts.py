import json
from collections import defaultdict, Counter
import os

import idautils
import idc
import idaapi


if __name__ == "__main__":
    callees = defaultdict(list)
    for function_ea in idautils.Functions():
        func_name = str(idc.get_func_name(function_ea))
        for ref_ea in idautils.CodeRefsTo(function_ea, 0):
            caller_name = str(idc.get_func_name(ref_ea))
            callees[caller_name].append(func_name)
    counts = {k: dict(Counter(v)) for k, v in callees.items()}
    bin_name = os.path.basename(idaapi.get_input_file_path())
    out_path = "CALL_COUNTS_" + bin_name + ".json"
    with open(out_path, "w") as fd:
        json.dump(counts, fd, indent=2)
