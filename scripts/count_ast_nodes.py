# this script counts the number of AST nodes and edges for each function in each binary for each decompiler
# Usage:
# ./count_ast_nodes.py /path/to/decompilers/folder
#
# The folder should contain subfolders for each decompiler.
# ensure you have pyjoern>=4.0.150.2 installed
#
import argparse
import sys
import tempfile
import shutil
import json
from collections import defaultdict
from pathlib import Path

from pyjoern import parse_source

IGNORED_DECOMPILERS = {"oxidizer"}


def rename_as_cpp_files(decompiler_folder: Path, new_folder: Path):
    for bin_dir in decompiler_folder.iterdir():
        new_bin_dir = new_folder / bin_dir.name
        new_bin_dir.mkdir(exist_ok=True)
        for decompiled_file in bin_dir.glob("*.c"):
            new_decompiled_file = new_bin_dir / (decompiled_file.stem + ".cpp")
            shutil.copy(decompiled_file, new_decompiled_file)


def count_ast_nodes(decompiler_folder: Path) -> dict:
    with tempfile.TemporaryDirectory() as tmpdir:
        tmp_folder = Path(tmpdir)
        rename_as_cpp_files(decompiler_folder, tmp_folder)
        # disable everything except AST
        functions = parse_source(tmp_folder, no_metadata=True, no_cfg=True, no_ddg=True)

    data = defaultdict(dict)
    for (func_name, file_name), function in functions.items():
        bin_name = file_name.split("/")[0]
        ast_data = {'ast_nodes': len(function.ast.nodes), 'ast_edges': len(function.ast.edges)}
        data[bin_name][func_name] = ast_data

    return data


def count_all_decompiler_ast_nodes(decompilers_folder: Path) -> dict[str, dict[tuple[str, str], int]]:
    all_decompiler_ast_nodes = {}
    for decompiler_folder in decompilers_folder.iterdir():
        if decompiler_folder.name in IGNORED_DECOMPILERS:
            continue
        print(f"Counting AST nodes for decompiler {decompiler_folder.name}...")
        decompiler_ast_nodes = count_ast_nodes(decompiler_folder)
        all_decompiler_ast_nodes[decompiler_folder.name] = decompiler_ast_nodes
    return all_decompiler_ast_nodes


def main():
    parser = argparse.ArgumentParser(description="Count AST nodes in a file")
    parser.add_argument("decompilers_folder", type=str, help="The path to the folder containing the decompiler folders.")
    args = parser.parse_args()

    decompilers_folder = Path(args.decompilers_folder)
    if not decompilers_folder.exists():
        print(f"Folder {decompilers_folder} does not exist.")
        sys.exit(1)

    data = count_all_decompiler_ast_nodes(decompilers_folder)
    json.dump(data, open("ast_data.json", "w"))
    print("AST data saved to ast_data.json")
    sys.exit(0)


if __name__ == "__main__":
    main()
