#!/bin/bash
# remove_adb_files.sh
# This script removes all .adb files under targets/release/O3

DIR="targets/release/O3"

if [ -d "$DIR" ]; then
    echo "Removing all .adb files in $DIR..."
    find "$DIR" -type f -name "*.adb" -exec rm -f {} +
    echo "Done."
else
    echo "Directory $DIR does not exist."
    exit 1
fi
