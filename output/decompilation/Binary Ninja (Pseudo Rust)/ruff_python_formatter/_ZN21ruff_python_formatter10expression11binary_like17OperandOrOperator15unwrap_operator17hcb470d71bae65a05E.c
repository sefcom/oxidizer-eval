
  fn ruff_python_formatter::expression::binary_like::OperandOrOperator::unwrap_operator::hcb470d71bae65a05(arg1: *mut i32) -> *mut c_void

{
    if *arg1 == 3
    {
        return &arg1[2];
    }
    
    let mut var_48: *mut i32 = arg1;
    let mut var_40: *mut *mut i32 = &var_48;
    let var_38: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h362c31425e82c6cf;
    let mut var_30: *mut *mut [i8; 0x8f] = &data_97d6c0;
    let var_28: i64 = 2;
    let var_10: i64 = 0;
    let var_20: *mut *mut *mut i32 = &var_40;
    let var_18: i64 = 1;
    core::panicking::panic_fmt::h96f341d36638c225(&var_30);
    /* no return */
}
