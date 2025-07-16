import os
import sys
import multiprocessing
from tqdm import tqdm

sys.path.append(os.path.abspath("."))

from eval.utils.dwarf_parser import DwarfParser


def process_file(file):
    if file == "expr":
        return

    parser = DwarfParser()
    path = os.path.join("dataset-debug/o3", file)
    parser.parse(path)
    output_path = f"output/dwarf/{file}.json"
    parser.dump_json(output_path)


if __name__ == "__main__":
    std_dir = "dataset-debug/o3"
    files = list(os.listdir(std_dir))
    files = [f for f in files if f != "expr"]

    os.makedirs("output/dwarf", exist_ok=True)

    with multiprocessing.Pool(processes=8) as pool:
        for _ in tqdm(pool.imap_unordered(process_file, files), total=len(files)):
            pass
