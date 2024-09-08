import subprocess
import os


def ida_dec(binary_path, script_path):
    assert os.path.exists(binary_path)
    assert os.path.exists(script_path)

    bin_name = os.path.basename(binary_path)
    ida_path = os.path.join("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/idapro-9.0", "idat64")
    cmd = f"{ida_path} -A -Ohexrays:ida_{bin_name}:main {os.path.abspath(binary_path)}"
    subprocess.run(cmd.split())
    if not os.path.exists(os.path.join(os.path.dirname(binary_path), bin_name + ".idb")):
        cmd = f"{ida_path} -A -Ohexrays:ida_{bin_name}:main -S{os.path.abspath(script_path)} {os.path.abspath(binary_path)}"
        subprocess.run(cmd.split())
        decompiled_file = os.path.join(os.path.dirname(binary_path), f"ida_{bin_name}.c")
        if os.path.isfile(decompiled_file):
            os.remove(decompiled_file)
    else:
        print(f"Error: IDA failed to decompile {binary_path}")
