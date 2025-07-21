import os
import sys
import multiprocessing
from tqdm import tqdm

sys.path.append(os.path.abspath("."))

from eval.utils.dwarf_parser import *


def process_file(file):
    parser = DwarfParser()
    path = os.path.join("datasets-debug/o3", file)
    parser.parse(path)
    output_path = f"output/dwarf/{file}.json"
    parser.dump_json(output_path)


if __name__ == "__main__":
    std_dir = "datasets-debug/o3"
    files = list(os.listdir(std_dir))

    os.makedirs("output/dwarf", exist_ok=True)

    with multiprocessing.Pool(processes=8) as pool:
        for _ in tqdm(pool.imap_unordered(process_file, files), total=len(files)):
            pass
