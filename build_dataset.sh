#!/bin/bash
# rm -rf dataset-src/coreutils
# git clone https://github.com/uutils/coreutils.git dataset-src/coreutils

# Compile Rust coreutils binaries
coreutils_packages=(
  "base32"
  "base64"
  "basename"
  "basenc"
  "cat"
  "cksum"
  "comm"
  "cp"
  "csplit"
  "cut"
  "date"
  "df"
  "dir"
  "dircolors"
  "dirname"
  "dd"
  "du"
  "echo"
  "env"
  "expand"
  "expr"
  "factor"
  "false"
  "fmt"
  "fold"
  "hashsum"
  "head"
  "join"
  "link"
  "ln"
  "ls"
  "mkdir"
  "mktemp"
  "more"
  "mv"
  "nl"
  "numfmt"
  "od"
  "paste"
  "pr"
  "printenv"
  "printf"
  "ptx"
  "pwd"
  "readlink"
  "realpath"
  "rm"
  "rmdir"
  "seq"
  "shred"
  "shuf"
  "sleep"
  "sort"
  "split"
  "sum"
  "tac"
  "tail"
  "tee"
  "test"
  "tr"
  "true"
  "truncate"
  "tsort"
  "touch"
  "unexpand"
  "uniq"
  "unlink"
  "vdir"
  "wc"
  "yes"
  "arch"
  "hostname"
  "nproc"
  "sync"
  "touch"
  "uname"
  "whoami"
)

cd dataset-src/coreutils

compile () {
    echo "Compiling coreutils packages with O$1"
    export RUSTFLAGS="-C opt-level=$1 -C lto=false"
    cargo build --release -p uu_*
    for item in "${coreutils_packages[@]}"; do
        mv target/release/$item -f ../../dataset/o$1/$item
    done
}


compile 0
compile 3
