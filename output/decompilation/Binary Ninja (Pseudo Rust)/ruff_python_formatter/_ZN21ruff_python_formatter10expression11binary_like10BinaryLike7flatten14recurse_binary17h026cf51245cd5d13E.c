
  fn ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary::h026cf51245cd5d13(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: *mut i64, arg7: *mut i8, arg8: i64, arg9: *mut i64) -> u64

{
    let var_48: i64 = *arg1;
    let var_40: i64 = arg2;
    let mut var_38: i64 = arg3;
    let mut var_50: i64 = 0;
    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(
        &var_50, arg6, arg7, arg8, arg9);
    let r15: i8 = *arg1.byte_offset(0x1c);
    let mut rax_1: i64;
    let mut rdx_1: i64;
    rax_1 = ruff_python_formatter::comments::Comments::dangling::h377ee9ebf27dc56b(*arg6);
    let var_48_1: i64 = rax_1;
    let var_40_1: i64 = rdx_1;
    var_38 = 0;
    *var_38[1] = r15;
    var_50 = 3;
    smallvec::SmallVec$LT$A$GT$::push::h1d2aed1a79494331(arg9, &var_50);
    let var_48_2: i64 = arg1[1];
    let var_40_2: i64 = arg4;
    let var_38_1: i64 = arg5;
    var_50 = 2;
    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(
        &var_50, arg6, arg7, arg8, arg9)
}
