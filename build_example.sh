#!/bin/bash

cd example

compile () {
    echo "Compiling example with O$1"
    export RUSTFLAGS="-C opt-level=$1"
    cargo build --release
    mv target/release/example -f ./example-o$1
}


compile 0
compile 3
