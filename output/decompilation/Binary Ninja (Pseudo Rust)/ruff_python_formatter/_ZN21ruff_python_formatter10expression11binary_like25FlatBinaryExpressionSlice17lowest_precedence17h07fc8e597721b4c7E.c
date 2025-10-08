
  fn ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::lowest_precedence::h07fc8e597721b4c7(arg1: i64, arg2: i64) -> u64

{
    let mut var_18: i64 = arg1;
    let var_10: i64 = (arg2 << 5) + arg1;
    let var_8: i64 = 0;
    let rax: i8 = core::iter::traits::iterator::Iterator::reduce::hcd7e6498fd24ff9a(&var_18);
    
    if rax == 0xd
    {
        return 0;
    }
    
    rax
}
