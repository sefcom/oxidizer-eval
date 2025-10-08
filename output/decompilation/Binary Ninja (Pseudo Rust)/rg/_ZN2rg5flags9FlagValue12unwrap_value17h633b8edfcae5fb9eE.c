
  fn rg::flags::FlagValue::unwrap_value::h633b8edfcae5fb9e(arg1: *mut i128, arg2: *mut i64) -> i64

{
    if !(0 + -(*arg2))
    {
        let result: i64 = arg2[2];
        arg1[1] = result;
        *arg1 = *arg2;
        return result;
    }
    
    let mut var_30: *mut *mut [i8; 0xac] = &data_7eb6f0;
    let var_28: i64 = 1;
    let mut var_38: ();
    let var_20: *mut c_void = &var_38;
    let var_18: i128 = {0};
    core::panicking::panic_fmt::h96f341d36638c225(&var_30);
    /* no return */
}
