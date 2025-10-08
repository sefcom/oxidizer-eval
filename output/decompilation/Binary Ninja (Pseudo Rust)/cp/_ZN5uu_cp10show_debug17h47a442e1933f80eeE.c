
  fn uu_cp::show_debug::h47a442e1933f80ee(arg1: *mut i8) -> *mut c_void

{
    let rax_1: u64 = *arg1 << 3;
    let rax_2: i64 = *(rax_1 + &data_424f28);
    let mut var_90: i64 = *(rax_1 + &data_55ef28);
    let var_88: i64 = rax_2;
    let rax_4: u64 = arg1[1] << 3;
    let rax_5: i64 = *(rax_4 + &data_424f28);
    let mut var_80: i64 = *(rax_4 + &data_55ef28);
    let var_78: i64 = rax_5;
    let rax_6: u64 = arg1[2];
    let rax_7: i64 = *(&data_424ef8).byte_offset(rax_6 << 3);
    let mut var_70: *mut c_void = *(&data_424ee0).byte_offset(rax_6 << 2) + &data_424ee0;
    let var_68: i64 = rax_7;
    let mut var_60: *mut i64 = &var_90;
    let var_58: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
    let var_50: *mut i64 = &var_80;
    let var_48: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
    let var_40: *mut *mut c_void = &var_70;
    let var_38: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
    let mut var_30: *mut *mut [i8; 0xb3] = &data_55e858;
    let var_28: i64 = 4;
    let var_10: i64 = 0;
    let var_20: *mut *mut i64 = &var_60;
    let var_18: i64 = 3;
    std::io::stdio::_print::h5e446ff973c02de6(&var_30)
}
