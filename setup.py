#!/usr/bin/env python3
import subprocess
import sys
from pathlib import Path
import toml
import os
import shutil
import tempfile
from concurrent.futures import ProcessPoolExecutor, as_completed
import traceback

from eval.utils.dwarf_parser import *

TOOLCHAIN = "nightly-2025-05-22"
GROUND_TRUTH_PARSER_SRC_DIR = Path("misc/ground_truth_parser").absolute()
GROUND_TRUTH_PARSER_BIN = Path("misc/ground_truth_parser/target/release/ground_truth_parser").absolute()
TARGET_SRC_DIR = Path("targets/src").absolute()
TARGET_RELEASE_DIR = Path("targets/release").absolute()
TARGET_DEBUG_DIR = Path("targets/debug").absolute()
TARGET_GROUND_TRUTH_DIR = Path("targets/ground_truth").absolute()
TARGET_DWARF_DIR = Path("targets/dwarf").absolute()
TARGET_MERGED_GROUND_TRUTH_DIR = Path("targets/merged_ground_truth").absolute()


def run(cmd: str) -> None:
    """Run a shell command, exit if it fails."""
    print(f"[cmd] {cmd}")
    subprocess.run(cmd.split(), check=True)


def extract_single_o_from_rlib(rlib_path: str) -> str:
    """
    Extract the single .o file from a .rlib archive, assert there is exactly one .o,
    copy it to the same folder as the .rlib, rename it to match the .rlib base name
    (replace .rlib with .o), and return the absolute path to the .o.

    Messages and comments are in English, as requested.
    """
    rlib = Path(rlib_path).resolve()
    if not rlib.exists():
        raise FileNotFoundError(f".rlib not found: {rlib}")

    if rlib.suffix.lower() != ".rlib":
        raise ValueError(f"Input file does not have .rlib extension: {rlib}")

    # Ensure 'ar' is available
    if shutil.which("ar") is None:
        raise RuntimeError("System 'ar' tool not found. Please install binutils (or ask for a pure-Python fallback).")

    # Create a temporary directory for extraction
    with tempfile.TemporaryDirectory(prefix="rlib_extract_") as tmpdir:
        tmp = Path(tmpdir)

        # Extract the archive contents using 'ar x'
        subprocess.run(["ar", "x", str(rlib)], cwd=tmp, check=True)

        # Find .o files
        o_files = list(tmp.glob("*.o"))
        assert len(o_files) == 1, (
            f"Expected exactly one .o inside {rlib.name}, found {len(o_files)}: " f"{[p.name for p in o_files]}"
        )

        single_o = o_files[0]

        # Destination: same directory as the .rlib, filename matches .rlib base name but with .o
        dest_dir = rlib.parent
        dest_name = rlib.with_suffix(".o").name  # replace .rlib with .o
        dest_path = dest_dir / dest_name

        # Copy (overwrite if exists)
        shutil.copyfile(single_o, dest_path)

        return str(dest_path.resolve())


def build_ground_truth_parser():
    print("[*] Checking if ground truth parser is already built...")
    if GROUND_TRUTH_PARSER_BIN.exists():
        print(f"[+] Ground truth parser already exists at: {GROUND_TRUTH_PARSER_BIN}")
        print("    Skipping build.")
        return

    print("[-] Ground truth parser not found. Setting up toolchain and building...")

    print(f"    Installing toolchain {TOOLCHAIN}...")
    run(f"rustup toolchain install {TOOLCHAIN}")

    print("    Adding required components (rustc-dev, llvm-tools)...")
    run(f"rustup component add rustc-dev llvm-tools --toolchain {TOOLCHAIN}")

    print("    Building ground truth parser...")
    run(f"rustup run {TOOLCHAIN} cargo build --release --manifest-path {GROUND_TRUTH_PARSER_SRC_DIR / 'Cargo.toml'}")
    print(f"[+] Ground truth parser built successfully: {GROUND_TRUTH_PARSER_BIN}")


def find_first_edition(project_root: str) -> str:
    """
    Walk through the project_root, look for Cargo.toml files,
    and return the first edition found (defaulting to "2015" if none is set).
    """
    for dirpath, _, filenames in os.walk(project_root):
        if "Cargo.toml" in filenames:
            cargo_path = os.path.join(dirpath, "Cargo.toml")
            with open(cargo_path, "r") as f:
                try:
                    data = toml.load(f)
                except Exception as e:
                    print(f"Error parsing {cargo_path}: {e}")
                    continue

            edition = data.get("workspace", {}).get("package", {}).get("edition") or data.get("package", {}).get(
                "edition"
            )
            if edition:
                return edition

    raise RuntimeError(f"No Cargo.toml with edition found in {project_root}")


def merge_ground_truth_and_dwarf(ground_truth_path: Path, dwarf_path: Path) -> str:
    with open(ground_truth_path, "r", encoding="utf-8") as f:
        ground_truth = json.load(f)
    with open(dwarf_path, "r", encoding="utf-8") as f:
        dwarf = json.load(f)
    decl_path_to_func_name = dwarf["decl_path_to_func_name"]
    merged_ground_truth = {"functions": {}, "structs": dwarf.get("structs", {})}
    for decl_path in ground_truth:
        if decl_path not in decl_path_to_func_name:
            continue
        func_name = decl_path_to_func_name[decl_path]
        func_ground_truth = ground_truth[decl_path]
        variables = dwarf.get("variables", {}).get(func_name, [])
        prototype = dwarf.get("prototypes", {}).get(func_name, None)
        func_ground_truth["variables"] = variables
        func_ground_truth["prototype"] = prototype
        merged_ground_truth["functions"][func_name] = func_ground_truth
    return json.dumps(merged_ground_truth, indent=2)


def build_target(target, url, commit, output, opt_level):
    os.environ["RUSTFLAGS"] = f"-Z inline-llvm=false"
    os.environ["VCPKG_ROOT"] = f"{os.environ['HOME']}/vcpkg"
    prev_dir = os.getcwd()
    if not Path(target).exists():
        print(f"[-] Target {target} not found. Cloning...")
        run(f"git clone {url}")
        os.chdir(target)
        run("git fetch --all")
        run(f"git checkout {commit}")
        try:
            run("git submodule update --init --recursive")
        except subprocess.CalledProcessError:
            print("[!] Warning: git submodule update failed, continuing anyway...")
    else:
        os.chdir(target)
    final_target_release_dir = TARGET_RELEASE_DIR / f"O{opt_level}"
    final_target_debug_dir = TARGET_DEBUG_DIR / f"O{opt_level}"
    final_target_ground_truth_dir = TARGET_GROUND_TRUTH_DIR
    final_target_dwarf_dir = TARGET_DWARF_DIR / f"O{opt_level}"

    if (
        output
        and all(Path(final_target_release_dir / binary).exists() for binary in output)
        and all(Path(final_target_debug_dir / binary).exists() for binary in output)
    ):
        print(f"[+] All binaries for {target} (O{opt_level}) already exist.")
        os.chdir(prev_dir)
    else:
        build_cmd = f"rustup run {TOOLCHAIN} cargo build --release"
        build_cmd += f" --config profile.release.debug=true"
        build_cmd += f" --config profile.release.lto=false"
        build_cmd += f" --config profile.release.strip=false"
        build_cmd += f" --config profile.release.codegen-units=1"
        build_cmd += f" --config profile.release.opt-level={opt_level}"
        # Special case for vaultwarden to enable sqlite feature
        if target == "vaultwarden":
            build_cmd += " --features sqlite"
        # Special case for dioxus to build the dioxus-cli binary
        if target == "dioxus":
            build_cmd += " -p dioxus-cli"
        # Special case for coreutils to build all binaries
        if target == "coreutils":
            build_cmd += " -p uu_*"
        if target == "typst":
            build_cmd += ' --config profile.release.package."typst-cli".strip=false'
        run(build_cmd)
        os.chdir(prev_dir)
        os.makedirs(final_target_release_dir, exist_ok=True)
        os.makedirs(final_target_debug_dir, exist_ok=True)
        for binary in output:
            # if binary.endswith(".o"):
            #     extract_single_o_from_rlib(f"{target}/target/release/{binary[:-1] + 'rlib'}")
            target_path = Path(f"{target}/target/release/{binary}")
            if target == "firecracker":
                # firecracker binary is in a subdirectory
                target_path = Path(f"{target}/build/cargo_target/release/{binary}")
            run(f"cp {target_path} {final_target_release_dir}")
            run(f"strip --strip-debug {final_target_release_dir / binary}")
            run(f"cp {target_path} {final_target_debug_dir}")

    # Ground truth generation (only for O3)
    if opt_level == 3:
        os.makedirs(final_target_ground_truth_dir, exist_ok=True)
        edition = find_first_edition(target)
        for binary in output:
            name = Path(binary).stem
            output_path = final_target_ground_truth_dir / (name + ".json")
            if output_path.exists():
                print(f"[+] Ground truth file already exists: {output_path}")
                continue
            print(f"[-] Generating ground truth for {name}...")
            src_path = target
            if target == "coreutils":
                src_path = Path(target) / "src" / "uu" / name
            run(f"{GROUND_TRUTH_PARSER_BIN} {src_path} {final_target_ground_truth_dir / (name + '.json')} {edition}")

    # DWARF generation
    os.makedirs(final_target_dwarf_dir, exist_ok=True)
    for binary in output:
        target_path = final_target_debug_dir / binary
        output_path = final_target_dwarf_dir / (Path(binary).stem + ".json")
        if output_path.exists():
            print(f"[+] DWARF file already exists: {output_path}")
            continue
        print(f"[-] Generating DWARF for {target_path}...")
        parser = DwarfParser()
        parser.parse(target_path)
        parser.dump_json(output_path)

    final_target_merged_ground_truth_dir = TARGET_MERGED_GROUND_TRUTH_DIR / f"O{opt_level}"
    os.makedirs(final_target_merged_ground_truth_dir, exist_ok=True)

    # Merge source ground truth and dwarf ground truth
    for binary in output:
        name = Path(binary).stem
        gt_path = final_target_ground_truth_dir / (name + ".json")
        dwarf_path = final_target_dwarf_dir / (name + ".json")
        merged_output_path = final_target_merged_ground_truth_dir / (name + ".json")
        if merged_output_path.exists():
            print(f"[+] Merged ground truth already exists: {merged_output_path}")
            continue
        print(f"[-] Merging ground truth and DWARF for {name}...")
        merged_gt = merge_ground_truth_and_dwarf(gt_path, dwarf_path)
        with open(merged_output_path, "w", encoding="utf-8") as f:
            f.write(merged_gt)
    return target


def build_evaluation_targets():
    print("[*] Building evaluation targets...")
    eval_targets = toml.load("misc/targets.toml")
    os.chdir(TARGET_SRC_DIR)

    opt_levels = (3,)

    with ProcessPoolExecutor(8) as executor:
        futures = {}
        for opt_level in opt_levels:
            for i, target in enumerate(eval_targets):
                url = eval_targets[target]["url"]
                commit = eval_targets[target]["commit"]
                output = eval_targets[target]["output"]
                print(
                    f"[*] Submitting build for {target} with optimization level {opt_level}... ({i+1}/{len(eval_targets)})"
                )
                fut = executor.submit(build_target, target, url, commit, output, opt_level)
                futures[fut] = (target, opt_level)

        for i, fut in enumerate(as_completed(futures)):
            target, opt_level = futures[fut]
            try:
                result = fut.result()
                print(f"[+] Build finished: {result} ({i + 1}/{len(futures)})")
            except Exception as e:
                print(f"[!] Build failed for {target} (opt={opt_level}): {e}")
                traceback.print_exc()


if __name__ == "__main__":
    try:
        build_ground_truth_parser()
        build_evaluation_targets()
    except subprocess.CalledProcessError as e:
        print(f"[!] Command failed with exit code {e.returncode}", file=sys.stderr)
        sys.exit(e.returncode)
