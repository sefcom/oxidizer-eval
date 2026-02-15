#!/usr/bin/env bash
set -euo pipefail

TARGET_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)/targets/stripped/nightly-2025-05-22-O3"

find "$TARGET_DIR" -type f -name "*.adb" -print -delete
find "$TARGET_DIR" -type d -name "*_rtdb_*" -print -exec rm -rf {} +
