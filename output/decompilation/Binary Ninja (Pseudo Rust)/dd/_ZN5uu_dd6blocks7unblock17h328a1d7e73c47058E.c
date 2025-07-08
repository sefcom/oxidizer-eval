
  fn uu_dd::blocks::unblock::h328a1d7e73c47058(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_48: *mut *mut c_void;
    
    if arg4 == 0
    {
        var_48 = &data_561910;
        let var_40_1: i64 = 1;
        let var_38_1: i64 = 8;
        let var_30: i128 = {0};
        core::panicking::panic_fmt::he12d0d7468628bb4(&var_48);
        /* no return */
    }
    
    let mut var_18: i64 = arg2;
    let var_10: i64 = arg3;
    let var_8: i64 = arg4;
    var_48 = nullptr;
    let var_40: i64 = 1;
    let var_38: i64 = 0;
    core::iter::traits::iterator::Iterator::fold::h2b84e305e1d72edf(arg1, &var_18, &var_48)
}
