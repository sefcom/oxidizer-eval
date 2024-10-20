#!/bin/bash
# rm -rf dataset-src/coreutils
# git clone https://github.com/uutils/coreutils.git dataset-src/coreutils

# Compile Rust coreutils binaries
cd dataset-src/coreutils

compile () {
    echo "Compiling uu_$1 package with O$2"
    export RUSTFLAGS="-C opt-level=$2 -C lto=false"
    cargo build --release -p uu_$1
    mv target/release/$1 -f ../../dataset/$1-o$2
}


compile fmt 0
compile fmt 3
