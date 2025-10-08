from pathlib import Path
import json
from pprint import pprint


def main():
    ground_truth_dir = Path(__file__).parent.parent / "targets" / "ground_truth"
    dwarf_dir = Path(__file__).parent.parent / "targets" / "dwarf"
    ground_truth_path = ground_truth_dir / "rg.json"
    dwarf_path = dwarf_dir / "O3" / "rg.json"
    with open(ground_truth_path, "r", encoding="utf-8") as f:
        ground_truth = json.load(f)
    with open(dwarf_path, "r", encoding="utf-8") as f:
        dwarf = json.load(f)
    decl_path_to_func_name = dwarf["decl_path_to_func_name"]
    processed_ground_truth = {"functions": {}, "structs": dwarf.get("structs", {})}
    for decl_path in ground_truth:
        if decl_path not in decl_path_to_func_name:
            # print(f"[missing] {decl_path} not in dwarf output")
            continue
        func_name = decl_path_to_func_name[decl_path]
        print(f"[ok] {decl_path}: {func_name}")
        func_ground_truth = ground_truth[decl_path]
        variables = dwarf.get("variables", {}).get(func_name, None)
        prototype = dwarf.get("prototypes", {}).get(func_name, None)
        if (
            variables is not None
            and prototype is not None
            and (func_name.startswith("rg::") or func_name.startswith("<rg::"))
        ):
            func_ground_truth["variables"] = variables
            func_ground_truth["prototype"] = prototype
            processed_ground_truth["functions"][func_name] = func_ground_truth
    print(len(processed_ground_truth["functions"]))
    with open("ground_truth_merged.json", "w", encoding="utf-8") as f:
        json.dump(processed_ground_truth, f, indent=2)


if __name__ == "__main__":
    main()
