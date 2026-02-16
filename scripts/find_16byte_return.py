#!/usr/bin/env python3
"""Find coreutils functions that return a 16-byte struct/Option/Result."""

from pathlib import Path
import json
import sys

COREUTILS_MODULES = [
    "arch", "base32", "base64", "basename", "basenc", "cat", "chcon", "chgrp",
    "chmod", "chown", "chroot", "cksum", "comm", "cp", "csplit", "cut", "date",
    "dd", "df", "dir", "dircolors", "dirname", "du", "echo", "env", "expand",
    "expr", "factor", "false", "fmt", "fold", "groups", "hashsum", "head",
    "hostid", "hostname", "id", "install", "join", "kill", "link", "ln",
    "logname", "ls", "mkdir", "mkfifo", "mknod", "mktemp", "more", "mv",
    "nice", "nl", "nohup", "nproc", "numfmt", "od", "paste", "pathchk",
    "pinky", "pr", "printenv", "printf", "ptx", "pwd", "readlink", "realpath",
    "rm", "rmdir", "runcon", "seq", "shred", "shuf", "sleep", "sort", "split",
    "stat", "stdbuf", "stty", "sum", "sync", "tac", "tail", "tee", "test",
    "timeout", "touch", "tr", "true", "truncate", "tsort", "tty", "uname",
    "unexpand", "uniq", "unlink", "uptime", "users", "vdir", "wc", "who",
    "whoami", "yes",
]

GT_DIR = Path(__file__).resolve().parent.parent / "targets" / "merged_ground_truth" / "nightly-2025-05-22-O3"


def main():
    target_size = int(sys.argv[1]) if len(sys.argv) > 1 else 16
    target_kinds = {"Struct", "Enumeration"}

    results = []
    for json_file in sorted(GT_DIR.glob("**/*.json")):
        module = json_file.parent.name
        if module not in COREUTILS_MODULES:
            continue
        with open(json_file) as f:
            data = json.load(f)
        returnty = data["prototype"]["returnty"]
        if returnty["kind"] in target_kinds and returnty.get("size") == target_size:
            results.append((module, data["name"], returnty["kind"], returnty["name"], json_file.name))

    print(f"Found {len(results)} coreutils functions returning {target_size}-byte struct/enum:\n")
    for module, name, kind, ty_name, fname in results:
        print(f"  [{module}/{fname}] {name}")
        print(f"    -> {kind}: {ty_name}\n")


if __name__ == "__main__":
    main()
