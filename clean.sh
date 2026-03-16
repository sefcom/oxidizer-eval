#!/usr/bin/env bash
# Clean .adb files and angr rtdb directories from targets/stripped/
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
STRIPPED_DIR="$SCRIPT_DIR/targets/stripped"

if [ ! -d "$STRIPPED_DIR" ]; then
    echo "targets/stripped/ not found"
    exit 1
fi

# Remove all .adb files
find "$STRIPPED_DIR" -name "*.adb" -type f -delete -print

# Remove all angr rtdb directories
find "$STRIPPED_DIR" -name "*_angr_rtdb*" -type d -exec rm -rf {} + -print
