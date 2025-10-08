
  int64_t ruff_python_formatter::expression::binary_like::BinaryLike::flatten::hed61544ade0f7ed1(int64_t arg1, int64_t arg2, int64_t* arg3, int64_t* arg4, char* arg5, int64_t arg6)

{
    int64_t var_10 = 0;
    void var_110;
    
    if (!arg2)
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary::h026cf51245cd5d13(arg3, 4, 0, 4, 0, arg4, arg5, arg6, &var_110);
    else if (arg2 != 1)
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool::hbfd4616a4c6c4b7a(arg3, 4, 0, 4, 0, arg4, arg5, arg6, &var_110);
    else
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare::h864917a931c07552(arg3, 4, 0, 4, 0, arg4, arg5, arg6, &var_110);
    
    return memcpy(arg1, &var_110, 0x108);
}
