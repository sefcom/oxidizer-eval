import angr
from angr.analyses.flirt import FlirtAnalysis
from angr.flirt import load_signatures

binary_path = "targets/release/O3/fmt"
sig_dir = "targets/src/rust-std-sigs/mingw_linux"

load_signatures(sig_dir)
proj = angr.Project(binary_path, auto_load_libs=False)
cfg = proj.analyses.CFGFast()
flirt = proj.analyses.Flirt()
print("Matched libraries and functions:")
for lib_name, (sig, suggestions) in flirt.matched_suggestions.items():
    print("Library:", lib_name)
    print("Signature file:", sig.sig_path)
    for addr, new_name in suggestions.items():
        print(f"  0x{addr:x} -> {new_name}")

# for func in proj.kb.functions.values():
#     print(f"0x{func.addr:x}: {func.name}")
