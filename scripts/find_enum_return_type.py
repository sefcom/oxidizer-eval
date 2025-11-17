from pathlib import Path
import json

# for json_file in Path("/home/ubuntu/workspace/oxidizer-eval/targets/merged_ground_truth/nightly-2025-05-22-O3").glob(
#     "**/*.json"
# ):
#     with open(json_file, "r") as f:
#         data = json.load(f)
#         returnty = data["prototype"]["returnty"]
#         if (
#             returnty["kind"] == "Enumeration"
#             and not returnty["name"].startswith("Result")
#             and not returnty["name"].startswith("Option")
#         ):
#             print(f"{json_file}: {returnty}")

COREUTILS_MODULES = [
    "df",
    "mv",
    "kill",
    "touch",
    "base64",
    "unlink",
    "vdir",
    "rmdir",
    "nice",
    "ln",
    "install",
    "split",
    "printenv",
    "factor",
    "printf",
    "groups",
    "uname",
    "expr",
    "false",
    "pwd",
    "base32",
    "fold",
    "uniq",
    "fmt",
    "yes",
    "cat",
    "nohup",
    "uptime",
    "true",
    "chcon",
    "mkdir",
    "echo",
    "ls",
    "who",
    "pinky",
    "comm",
    "readlink",
    "nproc",
    "csplit",
    "sync",
    "du",
    "tail",
    "numfmt",
    "dirname",
    "cksum",
    "hostid",
    "basename",
    "users",
    "chroot",
    "runcon",
    "stty",
    # "sort",
    "unexpand",
    "wc",
    "shred",
    "test",
    "dircolors",
    "tr",
    "tac",
    "tsort",
    "chmod",
    "stat",
    "mktemp",
    "cp",
    "seq",
    "hashsum",
    "cut",
    "paste",
    "ptx",
    "shuf",
    "sum",
    "stdbuf",
    "id",
    "timeout",
    "tee",
    "realpath",
    "od",
    "join",
    "pathchk",
    "mknod",
    "mkfifo",
    "link",
    "head",
    "date",
    "rm",
    "more",
    "hostname",
    "truncate",
    "chown",
    "dd",
    "nl",
    "pr",
    "dir",
    "sleep",
    "basenc",
    "expand",
    "env",
    "chgrp",
    "tty",
    "whoami",
    "logname",
    "arch",
]


for json_file in Path("/home/ubuntu/workspace/oxidizer-eval/targets/merged_ground_truth/nightly-2025-05-22-O0").glob(
    "**/*.json"
):
    if json_file.parent.name not in COREUTILS_MODULES:
        continue
    with open(json_file, "r") as f:
        data = json.load(f)
        returnty = data["prototype"]["returnty"]
        if (
            returnty["kind"] == "Enumeration"
            and (returnty["name"].startswith("Result") or returnty["name"].startswith("Option"))
            and returnty["size"] > 16
        ):
            print(f"{json_file}: {returnty}")
