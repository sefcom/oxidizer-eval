#!/usr/bin/env bash
set -euo pipefail

TARGET_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)/targets"

find "$TARGET_DIR" -type f -name "*.adb" -print -delete
find "$TARGET_DIR" -type d -name "*_rtdb" -print -exec rm -rf {} +
