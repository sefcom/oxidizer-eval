
  uint64_t ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary::h026cf51245cd5d13(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t* arg6, char* arg7, int64_t arg8, int64_t* arg9)

{
    int64_t var_48 = *arg1;
    int64_t var_40 = arg2;
    int64_t var_38 = arg3;
    int64_t var_50 = 0;
    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(
        &var_50, arg6, arg7, arg8, arg9);
    char r15 = *(arg1 + 0x1c);
    int64_t rax_1;
    int64_t rdx_1;
    rax_1 = ruff_python_formatter::comments::Comments::dangling::h377ee9ebf27dc56b(*arg6);
    int64_t var_48_1 = rax_1;
    int64_t var_40_1 = rdx_1;
    var_38 = 0;
    *var_38[1] = r15;
    var_50 = 3;
    smallvec::SmallVec$LT$A$GT$::push::h1d2aed1a79494331(arg9, &var_50);
    int64_t var_48_2 = arg1[1];
    int64_t var_40_2 = arg4;
    int64_t var_38_1 = arg5;
    var_50 = 2;
    return 
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(
        &var_50, arg6, arg7, arg8, arg9);
}
