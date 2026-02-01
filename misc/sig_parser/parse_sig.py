import os
import re
import subprocess
from pathlib import Path
import sys


IDA_DIR = Path(os.environ.get("IDA_DIR", None))
if not IDA_DIR:
    raise EnvironmentError("IDA_DIR environment variable not set.")

IDA_PATH = Path(IDA_DIR) / "idat64"
if not IDA_PATH.exists():
    raise FileNotFoundError(f"IDA executable not found at {IDA_PATH}")

SIGMAKE_PATH = Path(IDA_DIR) / "sigmake"
if not SIGMAKE_PATH.exists():
    raise FileNotFoundError(f"sigmake tool not found at {SIGMAKE_PATH}")

IDB2PAT_PATH = Path(__file__).parent / "idb2pat.py"


def fix_exc_file(exc_path: Path) -> None:
    with open(exc_path, "r") as fd:
        new_lines = [line for line in fd.readlines() if not line.startswith(";")]
    with open(exc_path, "w") as fd:
        fd.writelines(new_lines)


def fix_pat_file(pat_path: Path, err_message):
    # Capture line number from error message
    line_number = re.search(r"\((\d+)\)", err_message)
    if line_number:
        line_number = int(line_number.group(1))
        with open(pat_path, "r") as fd:
            lines = fd.readlines()
        # Remove the problematic line
        if 0 < line_number <= len(lines):
            del lines[line_number - 1]
            with open(pat_path, "w") as fd:
                fd.writelines(lines)
            return True
    return False


def run_ida_with_script(binary_path: Path, script_path: Path, sig_path) -> None:
    binary_path = Path(binary_path).absolute()
    for unwanted_ext in [".id0", ".id1", ".id2", ".nam", ".til"]:
        unwanted_path = binary_path.with_suffix(unwanted_ext)
        unwanted_path.unlink(missing_ok=True)
    cmd = f"{IDA_PATH} -A -S{script_path.absolute()} {binary_path}"
    subprocess.run(cmd.split())
    pat_path = binary_path.with_suffix(".pat")
    if not pat_path.exists():
        raise FileNotFoundError(f"Pattern file not created at {pat_path}")
    sigmake_cmd = f"{SIGMAKE_PATH} {pat_path} {sig_path}"
    result = subprocess.run(sigmake_cmd.split(), capture_output=True, text=True)
    err_message = result.stderr
    while err_message and "FATAL" in err_message:
        if fix_pat_file(pat_path, err_message):
            result = subprocess.run(sigmake_cmd.split(), capture_output=True, text=True)
            err_message = result.stderr
        else:
            raise RuntimeError(f"Could not fix pattern file: {err_message}")
    exc_path = binary_path.with_suffix(".exc")
    if not sig_path.exists() and exc_path.exists():
        fix_exc_file(exc_path)
        subprocess.run(sigmake_cmd.split(), capture_output=True, text=True)
    # Clean up
    pat_path.unlink(missing_ok=True)
    exc_path.unlink(missing_ok=True)


def parse_sig(binary_path: Path, sig_path: Path) -> bool:
    run_ida_with_script(binary_path, IDB2PAT_PATH, sig_path)
    return sig_path.exists()


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} <binary_path>")
        sys.exit(1)

    binary_path = sys.argv[1]
    sig_path = binary_path.with_suffix(".sig")
    if parse_sig(Path(binary_path), sig_path):
        print(f"Signature file created at {sig_path}")
    else:
        print("Failed to create signature file.")
