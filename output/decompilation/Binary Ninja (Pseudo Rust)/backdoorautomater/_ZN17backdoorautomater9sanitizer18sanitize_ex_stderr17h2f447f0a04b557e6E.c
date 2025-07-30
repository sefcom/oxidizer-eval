
  fn backdoorautomater::sanitizer::sanitize_ex_stderr::h2f447f0a04b557e6(arg1: *mut c_void) -> i64

{
    let mut var_48: *mut c_void = arg1;
    let result: i8 =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h36f93e99507e9f19(
        *arg1.byte_offset(8), *arg1.byte_offset(0x10));
    
    if result == 0
    {
        return result;
    }
    
    let mut var_40: *mut *mut c_void = &var_48;
    let var_38: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h79b96a6ad6630cec;
    let var_30: *mut *mut [i8; 0xe2] = &data_62a700;
    let var_28: i64 = 1;
    let var_10: i64 = 0;
    let var_20: *mut *mut *mut c_void = &var_40;
    let var_18: i64 = 1;
    core::panicking::panic_fmt::he7d3af46f65769b3();
    /* no return */
}
