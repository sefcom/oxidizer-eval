import os

# DECOMPILERS = ("angr", "Oxidizer", "IDA", "Ghidra", "Binary Ninja", "Binary Ninja (Pseudo Rust)")
DECOMPILERS = ("Source", "Oxidizer", "angr", "IDA", "Ghidra", "Binary Ninja", "Binary Ninja (Pseudo Rust)")

IDA_PATH = os.path.abspath("tools/idapro-9.0/idat64")
GHIDRA_PATH = os.path.abspath("../ghidra_11.2.1_PUBLIC/support/analyzeHeadless")
IDA_SCRIPTS_PATH = os.path.abspath("scripts/ida")
CACHE_DIR = os.path.abspath("output")
CACHED_DECOMPILED_CODE_PATH = os.path.abspath("output/decompiled_code")
CACHED_CALL_COUNTS_PATH = os.path.abspath("output/call_counts")
CACHED_OTHER_PATH = os.path.abspath("output/other")
CACHED_GROUND_TRUTH_PATH = os.path.abspath("output/ground_truth")
CACHED_DWARF_GROUND_TRUTH_PATH = os.path.abspath("output/dwarf")
CACHED_MALWARE_CALLS_PATH = os.path.abspath("output/malware_calls.json")
CACHED_INFERRED_PROTOTYPES_PATH = os.path.abspath("output/inferred_prototypes")
