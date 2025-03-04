from collections import Counter, defaultdict
import itertools
import os
import sys
from multiprocessing import Pool

sys.path.append(os.path.abspath("."))

from eval.decompilers.util import load_cached_inferred_prototypes, load_function_list
from eval.type_recovery.dwarf_parser import extract_function_prototypes

binary_paths = []
return_types = []

for root, dirs, files in os.walk("dataset-debug/o3"):
    for file in files:
        binary_path = os.path.join(root, file)
        binary_paths.append(binary_path)


def stat(binary_path):
    binary_name = os.path.basename(binary_path)
    inferred_prototypes = load_cached_inferred_prototypes(os.path.basename(binary_name))
    # function_list = load_function_list(binary_path, module=f"uu_{binary_name}")
    prototypes = extract_function_prototypes(binary_path, list(inferred_prototypes.keys()), normalize=False)
    result = []
    for prototype in prototypes.values():
        if prototype.return_type.category.startswith("Result<"):
            result.append(prototype.return_type.category + f" (size: {prototype.return_type.size})")
    return result


with Pool() as pool:
    results = pool.starmap(stat, [(binary_path,) for binary_path in binary_paths])
    return_types = list(itertools.chain.from_iterable(results))


print(Counter(filter(lambda ele: ele.startswith("Result<"), return_types)).most_common(10))
# print(Counter(return_types).most_common(10))
print(f"{len(return_types)=}")
