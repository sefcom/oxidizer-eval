#!/bin/bash

# find datasets/malware -type f -name "*.i64" -exec rm -v {} \;

clean () {
    rm -rf "$1"
    mkdir -p "$1"
}

# clean output/result/oxidizer
# clean output/result/angr
# clean output/result/ida
# clean output/decompilation/ida
# clean output/result/ghidra
# clean output/decompilation/ghidra
# clean output/result/ghidra
clean "output/decompilation/Binary Ninja"
clean "output/result/Binary Ninja"
clean "output/decompilation/Binary Ninja (Pseudo Rust)"
clean "output/result/Binary Ninja (Pseudo Rust)"