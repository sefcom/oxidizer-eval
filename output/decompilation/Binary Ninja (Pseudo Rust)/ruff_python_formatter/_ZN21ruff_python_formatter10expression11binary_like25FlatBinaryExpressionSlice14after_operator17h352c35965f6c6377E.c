
  fn ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::after_operator::h352c35965f6c6377(arg1: i64, arg2: i64, arg3: i64) -> i64

{
    if arg2 >= arg3 + 1
    {
        return arg1 + ((arg3 + 1) << 5);
    }
    
    let rax: i64;
    let var_8: i64 = rax;
    core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(arg3 + 1, arg2);
    /* no return */
}
