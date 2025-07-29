# this script counts the number of AST nodes and edges for each function in each binary for each decompiler
# Usage:
# ./measure_mcc.py /path/to/decompilers/folder
#
# The folder should contain subfolders for each decompiler.
# ensure you have installed:
# pyjoern>=4.0.150.2
# tree-sitter
# tree-sitter-rust

import argparse
import re
import sys
import tempfile
import shutil
import json
import textwrap
from collections import defaultdict
from pathlib import Path

from tree_sitter import Language, Parser
import tree_sitter_rust as trust

from pyjoern import parse_source

DECOMPILERS = {"oxidizer", "angr", "ida", "ghidra"}
# DECOMPILERS = {"oxidizer", }
RUST_LANGUAGE = Language(trust.language())

#
# Rendering
#


def tablify_data(summary, show_stats=False):
    table_summary = list()
    metadata_table = {}
    for dec, data in summary.items():

        row = {"Decompiler": dec}
        for metric_name, metric_data in data.items():
            row[metric_name] = metric_data

        if dec == "metadata":
            del row["Decompiler"]
            metadata_table = row
            continue

        table_summary.append(row)

    return table_summary, metadata_table


def save_data_as_markdown_table(summary, save_path="./summary.md", show_stats=False):
    def format_table(myDict, colList=None):
        """Pretty print a list of dictionaries (myDict) as a dynamically sized table.
        If column names (colList) aren't specified, they will show in random order.
        Author: Thierry Husson - Use it as you want but don't blame me.
        """
        if not colList:
            colList = list(myDict[0].keys() if myDict else [])
        myList = [colList]  # 1st row = header
        for item in myDict:
            myList.append([str(item[col] if item[col] is not None else "") for col in colList])
        colSize = [max(map(len, col)) for col in zip(*myList)]
        formatStr = " | ".join(["{{:<{}}}".format(i) for i in colSize])
        myList.insert(1, ["-" * i for i in colSize])  # Seperating line
        for item in myList:
            yield formatStr.format(*item)

    markdown_summary = ""
    table_summary, metadata_table = tablify_data(summary, show_stats=show_stats)
    markdown_summary += f"### Coreutils\n" + f"\n".join(list(format_table(table_summary))) + "\n\n"

    markdown_metadata = "\n".join(list(format_table([metadata_table])))
    markdown_doc = textwrap.dedent(
        f"""\n\n# Evaluation Data
## Stats
{markdown_summary}
## Metadata
{markdown_metadata}"""
    )

    return markdown_doc


#
# Rust Source
#


class RustSourceMCC:
    def __init__(self):
        self.parser = Parser(RUST_LANGUAGE)

    def compute_cyclomatic_complexity(self, source_code: str) -> int:
        tree = self.parser.parse(bytes(source_code, "utf8"))
        root_node = tree.root_node

        # Initialize stats
        complexity = 0
        stats = {"cyclomatic": complexity}

        def visit_node(node):
            nonlocal stats
            kind = node.type

            # Increment complexity for relevant constructs
            if kind in {"if", "for", "while", "loop", "match_arm", "&&", "||", "?"}:
                stats["cyclomatic"] += 1

            # Recurse through children
            for child in node.children:
                visit_node(child)

        # Start visiting nodes from the root
        visit_node(root_node)
        return stats["cyclomatic"]


def measure_rust_source(source_folder: Path) -> dict:
    complexity = RustSourceMCC()
    data = defaultdict(dict)
    for source_file in source_folder.rglob("*.rs"):
        source_code = source_file.read_text()
        mcc = complexity.compute_cyclomatic_complexity(source_code)
        metric_data = {"mcc": mcc}
        data[source_file.stem] = metric_data
    return data


#
# Rust Decompilers
#


class RustDecompilerMCC:
    # based on:
    # https://github.com/mozilla/rust-code-analysis/blob/efe98948323d4965348559ca607838746e6d7e4c/src/metrics/cyclomatic.rs#L190
    IF_REGEX = r"if .*\{"
    FOR_REGEX = r"for .*\{"
    WHILE_REGEX = r"while .*\{"
    LOOP_REGEX = r"loop \{"
    MATCH_ARM_REGEX = r" => \{"
    AND_REGEX = r" && "
    OR_REGEX = r" \|\| "
    # Due to the special way cyclomatic complexity is calculated in programs without CFGs, you can actually ignore
    # counting any question mark operators. Why? The formula below:
    # C = D - E + 2
    #
    # Where:
    # C = Cyclomatic complexity
    # D = Number of decision points in the program
    # E = Number of exits in the program
    #
    # Every question mark operator is a decision point, but it is also an exit. So, it cancels itself out.
    # QUESTION_MARK_REGEX = r"\?;"
    # needed because bug in decompiler:
    SWITCH_CASE_REGEX = r"case \d+:"

    # returns:
    RETURN_REGEX = r"return "

    CONTROL_STRUCTURE_REGEXES = [
        IF_REGEX,
        FOR_REGEX,
        WHILE_REGEX,
        LOOP_REGEX,
        MATCH_ARM_REGEX,
        AND_REGEX,
        OR_REGEX,
        SWITCH_CASE_REGEX,
    ]

    def measure_mcc(self, source_file_path) -> int:
        decision_points = 0
        with open(source_file_path, "r") as fp:
            code = fp.read()

        # count exits
        returns = re.findall(self.RETURN_REGEX, code)
        if returns:
            # we can always have a function that has no return at the end because it is implicit
            # so we need to find out if our current count of returns includes a return at the end.
            # If it does not, we need to add one to the count.
            exits = len(returns)
            code_lines = code.split("\n")
            # find the last line starting from the bottm
            for i, line in enumerate(code_lines[::-1]):
                if line.startswith("}"):
                    break
            else:
                raise ValueError("No closing bracket found.")
            last_line = code_lines[-(i + 2)]

            # last line has one of the returns?
            if not re.findall(self.RETURN_REGEX, last_line):
                exits += 1
        else:
            exits = 1

        count = {}
        for regex in self.CONTROL_STRUCTURE_REGEXES:
            matches = re.findall(regex, code)
            count[regex] = len(matches)
            decision_points += len(matches)

        if exits == 1:
            # formula:
            # C = D + 1
            mcc = decision_points + 1
        elif exits > 1:
            # formula:
            # C = D - E + 2
            mcc = decision_points - exits + 2
        else:
            raise ValueError("Invalid number of exits.")

        return mcc


def measure_rust_decompiler(decompiler_folder: Path) -> dict:
    mcc_counter = RustDecompilerMCC()
    data = defaultdict(dict)
    for source_file in decompiler_folder.rglob("*.c"):
        _, has_gotos = preprocess_decompiled_code(source_file)
        mcc_value = mcc_counter.measure_mcc(source_file)
        metric_data = {"mcc": mcc_value, "has_gotos": has_gotos}
        data[source_file.stem] = metric_data

    return data


def measure_mcc_rust(code):
    with tempfile.NamedTemporaryFile(mode="w", suffix=".rs", delete=False) as fd:
        fd.write(code)
        temp_path = Path(fd.name)

    _, _ = preprocess_decompiled_code(temp_path)

    mcc_counter = RustDecompilerMCC()
    result = mcc_counter.measure_mcc(temp_path)

    temp_path.unlink()
    return result


def measure_mcc_c(code) -> dict:
    with tempfile.NamedTemporaryFile(mode="w", suffix=".cpp", delete=False) as fd:
        fd.write(code)
        temp_path = Path(fd.name)

    functions = parse_source(temp_path, no_metadata=True, no_cfg=False, no_ddg=True, no_ast=True)
    for function in functions.values():
        mcc = len(function.cfg.edges) - len(function.cfg.nodes) + 2
        return mcc
    return -1


#
# C Decompilers
#


def preprocess_decompiled_code(decompiled_code_path: Path) -> tuple[bool, bool]:
    code_updated = False
    with open(decompiled_code_path, "r") as f:
        code = f.read()

    # check for gotos
    has_gotos = "goto" in code

    # remove special __rustcall in ghidra
    if "__rustcall" in code:
        pattern = r"undefined\s+\[\d{1,4}\]\s+__rustcall"
        code = re.sub(pattern, "undefined", code)
        code_updated |= True

    # remove special ida things
    # TODO: if we ever do more than x64, this needs to be updated!
    replacement_map = {
        "__int8": "char",
        "__int16": "short",
        "__int32": "int",
        "__int64": "long",
        "__fastcall": "",
        "__noreturn": "",
        "__cdecl": "",
    }
    for k, v in replacement_map.items():
        if k in code:
            code = code.replace(k, v)
            code_updated |= True

    # remove things that cause joern to crash
    bad_strings = [
        "__rustcall",
    ]
    for bad_string in bad_strings:
        if bad_string in code:
            code_updated |= True

        code = code.replace(bad_string, "")

    # header replacements for joern
    code_lines = code.split("\n")
    header_replacements = {
        "new": "new_joern_token",
        "delete": "delete_joern_token",
    }
    for idx, line in enumerate(code_lines):
        # only for the header!
        if idx > 2:
            break

        for old, new in header_replacements.items():
            if old in line:
                code_lines[idx] = line.replace(old, new)
                code_updated |= True
    code = "\n".join(code_lines)

    # write back if updated
    if code_updated:
        with open(decompiled_code_path, "w") as f:
            f.write(code)

    return code_updated, has_gotos


def rename_as_cpp_files(decompiler_folder: Path, new_folder: Path):
    for bin_dir in decompiler_folder.iterdir():
        new_bin_dir = new_folder / bin_dir.name
        new_bin_dir.mkdir(exist_ok=True)
        for decompiled_file in bin_dir.glob("*.c"):
            new_decompiled_file = new_bin_dir / (decompiled_file.stem + ".cpp")
            shutil.copy(decompiled_file, new_decompiled_file)
            preprocess_decompiled_code(new_decompiled_file)


def measure_mcc(decompiler_folder: Path) -> dict:
    with tempfile.TemporaryDirectory() as tmpdir:
        tmp_folder = Path(tmpdir)
        rename_as_cpp_files(decompiler_folder, tmp_folder)
        # disable everything except CFG
        functions = parse_source(tmp_folder, no_metadata=True, no_cfg=False, no_ddg=True, no_ast=True)

    data = defaultdict(dict)
    for (func_name, file_name), function in functions.items():
        mcc = len(function.cfg.edges) - len(function.cfg.nodes) + 2
        metric_data = {"mcc": mcc}
        data[Path(file_name).with_suffix("").name] = metric_data

    return data


#
# Main
#


def measure_all_decompilers(decompilers_folder: Path) -> dict[str, dict[tuple[str, str], int]]:
    all_decompiler_ast_nodes = {}
    for decompiler_folder in decompilers_folder.iterdir():
        dec_name = decompiler_folder.name
        if dec_name not in DECOMPILERS:
            continue

        print(f"Measuring decompiler: {dec_name}...")
        if dec_name == "oxidizer":
            # do a special evaluation for oxidizer
            measurement = measure_rust_decompiler(decompiler_folder)
        else:
            measurement = measure_mcc(decompiler_folder)

        all_decompiler_ast_nodes[dec_name] = measurement
    return all_decompiler_ast_nodes


def analyze_data(show_diffs=False):
    with open("data.json", "r") as f:
        data = json.load(f)

    ox_wins = list()
    oxidizer_data = data["oxidizer"]
    other_decompilers = {k: v for k, v in data.items() if k != "oxidizer"}
    winners = defaultdict(int)
    total_cases = 0
    # name: reason
    skipped_functions = {}
    stats = {dec_name: defaultdict(int) for dec_name in DECOMPILERS}
    all_mcc = defaultdict(list)

    for func_name, metric_data in oxidizer_data.items():
        must_skip = False
        oxidizer_func_value = metric_data["mcc"]
        has_gotos = metric_data.get("has_gotos", False)
        if has_gotos:
            skipped_functions[func_name] = "has-gotos"
            continue

        lowest_dec = "oxidizer"
        lowest_val = oxidizer_func_value
        for decompiler, decompiler_data in other_decompilers.items():
            other_func_value = decompiler_data.get(func_name, {}).get("mcc", None)
            if other_func_value is None:
                skipped_functions[func_name] = f"no-dec: {decompiler}"
                must_skip = True
                break

            if other_func_value < lowest_val:
                lowest_val = other_func_value
                lowest_dec = decompiler

        if lowest_dec == "oxidizer" and lowest_val == 1 and not must_skip:
            ida_val = other_decompilers["ida"][func_name]["mcc"]
            if int(ida_val / 4) > oxidizer_func_value:
                skipped_functions[func_name] = "ida-4x-larger-outlier"
                must_skip = True

        if must_skip:
            continue

        # find winner ties
        total_cases += 1
        all_decs_results = [("oxidizer", oxidizer_func_value)]
        all_decs_results += [
            (dec, decompiler_data.get(func_name, {}).get("mcc", None))
            for dec, decompiler_data in other_decompilers.items()
        ]
        same_val = 0
        for dec, val in all_decs_results:
            if val == lowest_val:
                same_val += 1
        if same_val > 1:
            # print(f"Skipping {func_name} because of a tie.")
            continue

        for dec, val in all_decs_results:
            stats[dec]["mcc_sum"] += val
            all_mcc[dec].append(val)

        winners[lowest_dec] += 1
        stats[lowest_dec]["num_mcc_lowest"] += 1
        if lowest_dec == "oxidizer":
            ida_val = other_decompilers["ida"][func_name]["mcc"]
            ox_wins += [(func_name, oxidizer_func_value, ida_val, ida_val - oxidizer_func_value)]
        # if lowest_dec == "angr":
        #    angr_val = other_decompilers["angr"][func_name]["mcc"]
        #    ox_wins += [(func_name, angr_val, oxidizer_func_value, oxidizer_func_value - angr_val)]

    # compute mean and median
    for dec, mcc_values in all_mcc.items():
        stats[dec]["mcc_mean"] = sum(mcc_values) / len(mcc_values)
        stats[dec]["mcc_median"] = sorted(mcc_values)[len(mcc_values) // 2]

    # move num_mcc_lowest to the end
    for dec in DECOMPILERS:
        # TODO: only done for eval but should've been in final but was now
        if "num_mcc_lowest" in stats[dec]:
            del stats[dec]["num_mcc_lowest"]

    # add metadata
    all_cases = total_cases + len(skipped_functions)
    stats["metadata"] = {
        "total_cases": f"{total_cases} ({total_cases/all_cases:.2%})",
        "skipped_functions": f"{len(skipped_functions)} ({len(skipped_functions)/all_cases:.2%})",
        "total_functions": total_cases + len(skipped_functions),
    }
    # count each type of skip
    for reason in skipped_functions.values():
        if "no-dec" in reason:
            _reason = "skip-no-dec-{}".format(reason.split(":")[1].strip())
        else:
            _reason = "skip-" + reason
        stats["metadata"][_reason] = stats["metadata"].get(_reason, 0) + 1
    # rewrite each skip reason with a percent of total functions
    for reason, num in list(stats["metadata"].items()):
        if "skip-" in reason:
            stats["metadata"][reason] = f"{num} ({num/all_cases:.2%})"

    print(save_data_as_markdown_table(stats))

    if show_diffs:
        sorted_ox_wins = sorted(ox_wins, key=lambda x: x[3])
        for func_name, ox_val, ida_val, diff in sorted_ox_wins:
            if ox_val == 0:
                print(f"{func_name}: oxidizer={ox_val}, ida={ida_val}, diff={diff}")
        # for func_name, angr_val, ox_val, diff in sorted_ox_wins:
        #    print(f"{func_name}: angr={angr_val}, oxidizer={ox_val}, diff={diff}")


def main():
    parser = argparse.ArgumentParser(
        description="Measure the McCabe Cyclomatic Complexity for each function in each binary for each decompiler."
    )
    parser.add_argument(
        "decompilers_folder", type=str, help="The path to the folder containing the decompiler folders."
    )
    parser.add_argument("--output", type=str, help="The path to the output file.")
    parser.add_argument("--collect", action="store_true", help="Collect the data and save it to a file.")
    parser.add_argument("--analyze", action="store_true", help="Plot the data.")
    parser.add_argument(
        "--show-diffs", action="store_true", help="Show the differences between the decompilers in MCC score"
    )

    args = parser.parse_args()
    if args.collect:
        decompilers_folder = Path(args.decompilers_folder)
        if not decompilers_folder.exists():
            print(f"Folder {decompilers_folder} does not exist.")
            sys.exit(1)

        data = measure_all_decompilers(decompilers_folder)
        output_path = Path(args.output).absolute() if args.output else Path("data.json").absolute()
        json.dump(data, open(output_path, "w"))
        print(f"Data saved to {output_path}.")
    if args.analyze:
        analyze_data(show_diffs=args.show_diffs)

    sys.exit(0)


if __name__ == "__main__":
    main()
