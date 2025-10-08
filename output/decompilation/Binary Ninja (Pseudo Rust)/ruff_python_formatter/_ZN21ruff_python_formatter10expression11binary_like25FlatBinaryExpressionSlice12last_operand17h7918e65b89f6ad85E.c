
  fn ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::last_operand::h7918e65b89f6ad85(arg1: i64, arg2: i64) -> i64

{
    if arg2 != 0
    {
        let rsi: i64 = arg2 << 5;
        
        if *(arg1 + rsi - 0x20) != 3
        {
            return arg1 + rsi - 0x20;
        }
    }
    
    let mut var_30: *mut *mut [i8; 0xf1] = &data_97d630;
    let var_28: i64 = 1;
    let mut var_38: ();
    let var_20: *mut c_void = &var_38;
    let var_18: i128 = {0};
    core::panicking::panic_fmt::h96f341d36638c225(&var_30);
    /* no return */
}
