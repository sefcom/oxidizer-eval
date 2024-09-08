import os
import json

from eval.control_flow_simplification.call_counts import collect_call_counts_ida, collect_call_counts_source

NUM_CALLS_DIR = "output/num_calls"


def save_num_calls_result(result: dict, category):
    dir_path = os.path.join(NUM_CALLS_DIR, category)
    os.makedirs(dir_path, exist_ok=True)
    for func_name in result:
        counts = result[func_name]
        if "/" not in func_name:
            path = os.path.join(dir_path, func_name)
            try:
                with open(path, "w") as fd:
                    json.dump(counts, fd, indent=2)
            except Exception as e:
                import traceback

                traceback.print_exception(e)


def main():
    # save_num_calls_result(count_calls_source("simple-http-server"), "source")
    # save_num_calls_result(count_calls_angr("simple-http-server", rust_mode=False), "angr")
    # save_num_calls_result(count_calls_angr("simple-http-server", rust_mode=True), "oxidizer")
    # save_num_calls_result(count_calls_source("mdcat"), "source")
    # save_num_calls_result(count_calls_angr("mdcat", rust_mode=False), "angr")\
    collect_call_counts_source("simple-http-server")
    collect_call_counts_ida("simple-http-server")
    # save_num_calls_result(count_calls_angr("simple-http-server", rust_mode=True), "oxidizer")


if __name__ == "__main__":
    main()
