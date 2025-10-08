from pathlib import Path

import angr
from angr.angrdb import AngrDB


def main():
    path = Path(__file__).parent.parent / "targets" / "release" / "O3" / "denort"
    db_path = Path(f"{path.name}.adb")
    if db_path.exists():
        print(f"Loading existing CFG from {db_path}...")
        proj = AngrDB().load(db_path)
        cfg = proj.kb.cfgs.get_most_accurate()
    else:
        print("Generating CFG with angr...")
        proj = angr.Project(path, auto_load_libs=False)
        cfg = proj.analyses.CFGFast(normalize=True)
        AngrDB(proj).dump("test.adb")
    print("CFG generated, now recovering calling conventions...")
    proj.analyses.CompleteCallingConventions(recover_variables=True, cfg=cfg)
    print("Calling conventions recovered.")
    print("Done!")


if __name__ == "__main__":
    main()
