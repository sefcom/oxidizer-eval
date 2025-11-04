import os
from pathlib import Path

import angr

path = "targets/release/nightly-2025-05-22-O3/printenv"
proj = angr.Project(path, auto_load_libs=False)
cfg = proj.analyses.CFGFast(normalize=True)

target_functions = set()
for add in Path("targets/merged_ground_truth/nightly-2025-05-22-O3/printenv").rglob("*.json"):
    func_addr = int(add.stem, 16) + proj.loader.main_object.mapped_base
    target_functions.add(func_addr)

print(target_functions)

queue = list(target_functions)

while queue:
    func_addr = queue.pop(0)
    for callee in proj.kb.callgraph.successors(func_addr):
        if callee not in target_functions:
            target_functions.add(callee)
            queue.append(callee)

print(len(target_functions))
print(len(proj.kb.functions))
