"""Check for duplicate output names in targets.toml, and clean stale binaries."""

from collections import Counter
from pathlib import Path
import toml

# ---------- Read config and collect outputs ----------
config_path = Path(__file__).parent.parent / "misc" / "targets.toml"

with open(config_path, "r", encoding="utf-8") as f:
    _ = f.read()  # keep original read behavior (not strictly needed here)

config = toml.load(config_path)

outputs = []
for key, value in config.items():
    if isinstance(value, dict) and "output" in value:
        items = [x.strip().strip('"') for x in value["output"] if str(x).strip()]
        outputs.extend(items)

# Count duplicates
counter = Counter(outputs)
dupes = [name for name, count in counter.items() if count > 1]
if dupes:
    print("Duplicate output names found:")
    for d in dupes:
        print(f"- {d} ({counter[d]} times)")
else:
    print("No duplicate outputs found ✅ (total outputs: {})".format(len(outputs)))


# ---------- Clean stale binaries ----------
def clean_stale_binaries(allowed_names: set[str]) -> None:
    """
    Remove files in targets/<profile>/O0..O3 that are not in allowed_names.
    Only removes regular files, skips directories/symlinks.
    """
    total_deleted = 0
    for profile in ["debug", "release", "dwarf"]:
        base = Path(__file__).parent.parent / "targets" / profile
        opt_levels = ["O0", "O1", "O2", "O3"]

        for opt in opt_levels:
            dir_path = base / opt
            if not dir_path.exists():
                print(f"[skip] {dir_path} does not exist")
                continue
            if not dir_path.is_dir():
                print(f"[skip] {dir_path} is not a directory")
                continue

            deleted_in_dir = 0
            for p in dir_path.iterdir():
                # Compare using file name; if outputs contains bare names without extension, use p.stem
                name = p.name
                if p.is_file() and name not in allowed_names:
                    try:
                        p.unlink()
                        print(f"[deleted] {opt}: {name}")
                        deleted_in_dir += 1
                    except Exception as e:
                        print(f"[error] Failed to delete {p}: {e}")

            print(f"[summary] {dir_path}: deleted {deleted_in_dir} stale files")
            total_deleted += deleted_in_dir

    print(f"[done] Total deleted stale binaries: {total_deleted}")


allowed_names = set(outputs)
for name in set(outputs):
    allowed_names.add(f"{name}.adb")
    allowed_names.add(f"{name}.json")
    allowed_names.add(f"{name}.i64")

# Run cleanup using the outputs list
clean_stale_binaries(allowed_names)
