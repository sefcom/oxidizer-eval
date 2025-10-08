
  fn ruff_python_formatter::expression::binary_like::BinaryLike::flatten::hed61544ade0f7ed1(arg1: i64, arg2: i64, arg3: *mut i64, arg4: *mut i64, arg5: *mut i8, arg6: i64) -> i64

{
    let var_10: i64 = 0;
    let mut var_110: ();
    
    if arg2 == 0
    {
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary::h026cf51245cd5d13(arg3, 4, 0, 4, 0, arg4, arg5, arg6, &var_110);
    }
    else if arg2 != 1
    {
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool::hbfd4616a4c6c4b7a(arg3, 4, 0, 4, 0, arg4, arg5, arg6, &var_110);
    }
    else
    {
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare::h864917a931c07552(arg3, 4, 0, 4, 0, arg4, arg5, arg6, &var_110);
    }
    
    memcpy(arg1, &var_110, 0x108)
}
