
  fn check_docs::check_validity_of_anchor_pair::hd8345c0881509e49(arg1: *mut c_void, arg2: *mut c_void) -> u64

{
    let mut var_60: *mut c_void = arg1;
    let mut var_58: *mut c_void = arg2;
    
    if *arg1.byte_offset(0x30) <= *arg2.byte_offset(0x30)
    {
        return 0;
    }
    
    let mut var_50: *mut *mut c_void = &var_58;
    let var_48: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h2ac00105f5211f10;
    let var_40: *mut i64 = &var_60;
    let var_38: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h2ac00105f5211f10;
    let mut var_30: *mut *mut [i8; 0xc7] = &data_5d3568;
    let var_28: i64 = 2;
    let var_10: i64 = 0;
    let var_20: *mut *mut *mut c_void = &var_50;
    let var_18: i64 = 2;
    anyhow::__private::format_err::hd87f3faee3401bd9(&var_30)
}
