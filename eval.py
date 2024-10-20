from eval.decompilers.ida import ida_dec
from eval.decompilers.angr import angr_dec
from eval.metrics.trivial import *


def main():
    ida_output = ida_dec("dataset/fmt-o3", func_name="_ZN6uu_fmt12process_file17h8a654c934269d682E")
    angr_output = angr_dec("dataset/fmt-o3", func_name="_ZN6uu_fmt12process_file17h8a654c934269d682E")
    print(f"{LoC(ida_output)=}")
    print(f"{num_variables_ida(ida_output)=}")
    print(f"{num_ptr_deref(ida_output)=}")
    print(f"{num_whiles(ida_output)=}")
    print(f"{num_gotos(ida_output)=}")

    print(f"{LoC(angr_output)=}")
    print(f"{num_variables_oxidizer(angr_output)=}")
    print(f"{num_ptr_deref(angr_output)=}")
    print(f"{num_whiles(angr_output)=}")
    print(f"{num_gotos(angr_output)=}")


if __name__ == "__main__":
    main()
