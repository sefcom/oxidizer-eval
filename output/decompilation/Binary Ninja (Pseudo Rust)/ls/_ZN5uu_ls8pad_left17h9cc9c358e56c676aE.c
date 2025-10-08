
  fn uu_ls::pad_left::h9cc9c358e56c676a(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64) -> *mut i128

{
    let mut var_30: i64 = arg2;
    let var_28: i64 = arg3;
    let mut var_60: *mut c_void;
    
    if arg4 > 0xffff
    {
        var_60 = &data_6864a8;
        let var_58_1: i64 = 1;
        let var_50_1: i64 = 8;
        let var_48_1: i128 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_60);
        /* no return */
    }
    
    let mut var_20: *mut i64 = &var_30;
    let var_18: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
    let var_10: i64 = 0;
    let var_8: i16 = arg4;
    var_60 = &data_4cf290;
    let var_58: i64 = 1;
    let mut var_48: i128;
    *var_48[8] = &data_4d41d0;
    let var_38: i64 = 1;
    let var_50: *mut *mut i64 = &var_20;
    var_48 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h69a0b1154707aabf(arg1, &var_60)
}
