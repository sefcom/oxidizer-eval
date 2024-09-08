import json
import os
from collections import defaultdict

import idaapi
import idautils
import idc
import ida_nalt


if __name__ == "__main__":
    with open("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/test.log", "w") as fd:
        fd.write("debug")
    out_path = os.path.join("output", "call_counts", "ida", os.path.basename(ida_nalt.get_input_file_path() + ".json"))
    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    counts = {}
    for function_ea in idautils.Functions():
        f_name = str(idc.get_func_name(function_ea))
        for ref_ea in idautils.CodeRefsTo(function_ea, 0):
            caller_name = idc.get_func_name(ref_ea)
            if caller_name not in counts:
                counts[caller_name] = defaultdict(int)
            counts[caller_name][f_name] += 1
    with open(out_path, "w") as fd:
        json.dump(counts, fd, indent=2)
