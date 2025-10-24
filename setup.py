#!/usr/bin/env python3
import logging
import subprocess
import sys
from pathlib import Path
from urllib.parse import quote
import toml
import os
import shutil
import tempfile
from concurrent.futures import ProcessPoolExecutor, as_completed
import traceback
import resource

from eval.utils.dwarf_parser import *

l = logging.getLogger("setup")

TOOLCHAIN = "nightly-2025-05-22"  # For building ground truth parser
GROUND_TRUTH_PARSER_SRC_DIR = Path("misc/ground_truth_parser").absolute()
GROUND_TRUTH_PARSER_BIN = Path("misc/ground_truth_parser/target/release/ground_truth_parser").absolute()
TARGET_SRC_DIR = Path("targets/src").absolute()
TARGET_RELEASE_DIR = Path("targets/release").absolute()
TARGET_DEBUG_DIR = Path("targets/debug").absolute()
TARGET_GROUND_TRUTH_DIR = Path("targets/ground_truth").absolute()
TARGET_DWARF_DIR = Path("targets/dwarf").absolute()
TARGET_MERGED_GROUND_TRUTH_DIR = Path("targets/merged_ground_truth").absolute()
MISC_DIR = Path("misc").absolute()


def run(cmd: str, cwd=None) -> None:
    """Run a shell command, exit if it fails."""
    logging.info(f"[cmd] {cmd}")
    subprocess.run(cmd.split(), check=True, cwd=cwd)


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
    logging.info("Checking if ground truth parser is already built...")
    if GROUND_TRUTH_PARSER_BIN.exists():
        logging.info(f"Ground truth parser already exists at: {GROUND_TRUTH_PARSER_BIN}")
        logging.info("    Skipping build.")
        return

    logging.info("Ground truth parser not found. Setting up toolchain and building...")

    logging.info(f"    Installing toolchain {TOOLCHAIN}...")
    run(f"rustup toolchain install {TOOLCHAIN}")

    logging.info("    Adding required components (rustc-dev, llvm-tools)...")
    run(f"rustup component add rustc-dev llvm-tools --toolchain {TOOLCHAIN}")

    logging.info("    Building ground truth parser...")
    run(f"rustup run {TOOLCHAIN} cargo build --release --manifest-path {GROUND_TRUTH_PARSER_SRC_DIR / 'Cargo.toml'}")
    logging.info(f"Ground truth parser built successfully: {GROUND_TRUTH_PARSER_BIN}")


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
                    logging.warning(f"Error parsing {cargo_path}: {e}")
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
    return merged_ground_truth


def build_target(target, url, commit, output, toolchain, opt_level):
    os.environ["RUSTFLAGS"] = f"-Z inline-llvm=false"
    os.environ["VCPKG_ROOT"] = f"{os.environ['HOME']}/vcpkg"

    target_dir = Path(target).absolute()
    if not target_dir.exists():
        logging.info(f"Target {target} not found. Cloning...")
        run(f"git clone {url}")
    run("git fetch --all", cwd=target_dir)
    run(f"git checkout {commit}", cwd=target_dir)
    try:
        run("git submodule update --init --recursive", cwd=target_dir)
    except subprocess.CalledProcessError:
        logging.warning("Warning: git submodule update failed, continuing anyway...")
    tag = f"{toolchain}-O{opt_level}"
    final_target_release_dir = TARGET_RELEASE_DIR / tag
    final_target_debug_dir = TARGET_DEBUG_DIR / tag

    if (
        output
        and all(Path(final_target_release_dir / binary).exists() for binary in output)
        and all(Path(final_target_debug_dir / binary).exists() for binary in output)
    ):
        logging.info(f"All binaries for {target} ({tag}) already exist.")
    else:
        build_cmd = f"rustup run {toolchain} cargo build --release"
        build_cmd += f" --config profile.release.debug=true"
        build_cmd += f" --config profile.release.lto=false"
        build_cmd += f" --config profile.release.strip=false"
        # build_cmd += f" --config profile.release.codegen-units=1"
        if opt_level in ("s", "z"):
            build_cmd += f' --config profile.release.opt-level="{opt_level}"'
        else:
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
        if target == "meilisearch":
            build_cmd += " -p meilisearch -p meilitool"
        if target == "deno":
            build_cmd += f' --config profile.release.split-debuginfo="packed"'
            build_cmd += " -p deno"
        run(build_cmd, cwd=target_dir)
        os.makedirs(final_target_release_dir, exist_ok=True)
        os.makedirs(final_target_debug_dir, exist_ok=True)
        for binary in output:
            target_path = Path(f"{target}/target/release/{binary}")
            if target == "firecracker":
                # firecracker binary is in a subdirectory
                target_path = Path(f"{target}/build/cargo_target/release/{binary}")
            run(f"cp {target_path} {final_target_release_dir}")
            run(f"strip --strip-debug {final_target_release_dir / binary}")
            run(f"cp {target_path} {final_target_debug_dir}")


def limit_memory(max_gb: int):
    """Limit the total memory per process."""
    max_bytes = max_gb * 1024**3
    resource.setrlimit(resource.RLIMIT_AS, (max_bytes, max_bytes))


def safe_parse_binary_ground_truth(target, binary, toolchain, opt_level, edition):
    limit_memory(48)
    try:
        return parse_binary_ground_truth(target, binary, toolchain, opt_level, edition)
    except MemoryError as e:
        logging.error(f"Error in parse_binary_ground_truth for {binary}: {e}")
        logging.error(traceback.format_exc())
        return target


def parse_binary_ground_truth(target, binary, toolchain, opt_level, edition):
    tag = f"{toolchain}-O{opt_level}"
    final_target_debug_dir = TARGET_DEBUG_DIR / tag
    final_target_ground_truth_dir = TARGET_GROUND_TRUTH_DIR / toolchain
    final_target_dwarf_dir = TARGET_DWARF_DIR / tag
    final_target_merged_ground_truth_dir = TARGET_MERGED_GROUND_TRUTH_DIR / tag
    os.makedirs(final_target_ground_truth_dir, exist_ok=True)
    os.makedirs(final_target_dwarf_dir, exist_ok=True)
    os.makedirs(final_target_merged_ground_truth_dir, exist_ok=True)

    # Ground truth generation
    name = Path(binary).stem
    output_path = final_target_ground_truth_dir / (name + ".json")
    if output_path.exists():
        logging.info(f"Ground truth file already exists: {output_path}")
    else:
        logging.info(f"Generating ground truth for {name}...")
        src_path = target
        if target == "coreutils":
            src_path = Path(target) / "src" / "uu" / name
        run(f"{GROUND_TRUTH_PARSER_BIN} {src_path} {final_target_ground_truth_dir / (name + '.json')} {edition}")

    # DWARF generation
    target_path = final_target_debug_dir / binary
    output_path = final_target_dwarf_dir / (Path(binary).stem + ".json")
    if output_path.exists():
        logging.info(f"DWARF file already exists: {output_path}")
    else:
        logging.info(f"Generating DWARF for {target_path}...")
        parser = DwarfParser()
        parser.parse(target_path)
        parser.dump_json(output_path)

    # Merge source ground truth and dwarf ground truth
    name = Path(binary).stem
    gt_path = final_target_ground_truth_dir / (name + ".json")
    dwarf_path = final_target_dwarf_dir / (name + ".json")
    logging.info(f"Merging ground truth and DWARF for {name}...")
    merged_gt = merge_ground_truth_and_dwarf(gt_path, dwarf_path)
    # Write function-level ground truth files
    binary_gt_dir = final_target_merged_ground_truth_dir / name
    os.makedirs(binary_gt_dir, exist_ok=True)
    logging.info(f"Found {len(merged_gt.get('functions', {}))} functions in merged ground truth for {name}.")
    for func_name in merged_gt.get("functions", {}):
        func_gt = merged_gt["functions"][func_name]
        func_gt_path = binary_gt_dir / f"{quote(func_name)}.json"
        if len(func_gt_path.name) >= 255 or func_gt_path.exists():
            continue
        with open(func_gt_path, "w", encoding="utf-8") as fd:
            json.dump(func_gt, fd, indent=2)
    return target


def build_evaluation_targets():
    logging.info("[*] Building evaluation targets...")
    os.makedirs(TARGET_SRC_DIR, exist_ok=True)
    os.chdir(TARGET_SRC_DIR)

    opt_levels = ("0", "1", "2", "3", "s", "z")
    # opt_levels = ("0", "1")
    toolchains = (
        "nightly-2025-05-22",
        # "nightly-2023-05-22",
    )
    # opt_levels = ("0",)
    # toolchains = ("nightly-2025-05-22",)
    for toolchain in toolchains:
        # Stage-1: Build all targets
        logging.info(f"Setting up toolchain {toolchain}...")
        run(f"rustup toolchain install {toolchain}")
        eval_targets = toml.load(MISC_DIR / f"targets-{toolchain}.toml")
        for opt_level in opt_levels:
            with ProcessPoolExecutor(8) as executor:
                futures = {}
                for i, target in enumerate(eval_targets):
                    url = eval_targets[target]["url"]
                    commit = eval_targets[target]["commit"]
                    output = eval_targets[target]["output"]
                    logging.info(
                        f"Submitting build for {target} with optimization level {opt_level}... ({i+1}/{len(eval_targets)})"
                    )
                    fut = executor.submit(build_target, target, url, commit, output, toolchain, opt_level)
                    futures[fut] = (target, toolchain, opt_level)

                for i, fut in enumerate(as_completed(futures)):
                    target, toolchain, opt_level = futures[fut]
                    try:
                        fut.result()
                        logging.info(
                            f"Build finished: {target} (toolchain={toolchain}, opt={opt_level}) ({i + 1}/{len(futures)})"
                        )
                    except Exception as e:
                        logging.error(f"[!] Build failed for {target} (toolchain={toolchain}, opt={opt_level}): {e}")
                        logging.error(traceback.format_exc())

        # Stage-2: Generate ground truth and DWARF
        for opt_level in opt_levels:
            with ProcessPoolExecutor(4) as executor:
                futures = {}
                for i, target in enumerate(eval_targets):
                    output = eval_targets[target]["output"]
                    edition = find_first_edition(target)
                    for binary in output:
                        logging.info(f"Submitting ground truth and DWARF generation for {binary} ({len(futures)+1})")
                        fut = executor.submit(
                            safe_parse_binary_ground_truth, target, binary, toolchain, opt_level, edition
                        )
                        futures[fut] = (target, binary, toolchain, opt_level)

                for i, fut in enumerate(as_completed(futures)):
                    target, binary, toolchain, opt_level = futures[fut]
                    try:
                        fut.result()
                        logging.info(
                            f"Ground truth and DWARF generation finished: {binary} (target={target}, toolchain={toolchain}, opt={opt_level}) ({i + 1}/{len(futures)})"
                        )
                    except Exception as e:
                        logging.error(
                            f"Ground truth and DWARF generation failed for {binary} (target={target}, toolchain={toolchain}, opt={opt_level}): {e}"
                        )
                        logging.error(traceback.format_exc())


def init_logger():
    logger = logging.getLogger()
    logger.setLevel(logging.INFO)
    # Clear existing handlers
    logger.handlers = []
    # Create console handler
    stream_handler = logging.StreamHandler(sys.stdout)
    stream_handler.setLevel(logging.INFO)
    formatter = logging.Formatter(f"[setup] %(asctime)s - %(levelname)s - %(message)s", datefmt="%Y-%m-%d %H:%M:%S")
    stream_handler.setFormatter(formatter)
    logger.addHandler(stream_handler)
    # Create file handler
    file_handler = logging.FileHandler(f"setup.log", mode="w", encoding="utf-8")
    file_handler.setLevel(logging.INFO)
    file_handler.setFormatter(formatter)
    logger.addHandler(file_handler)


if __name__ == "__main__":
    init_logger()
    try:
        build_ground_truth_parser()
        build_evaluation_targets()
    except subprocess.CalledProcessError as e:
        logging.error(f"Command failed with exit code {e.returncode}")
        sys.exit(e.returncode)
