
  fn uu_od::prn_char::format_item_a::ha01fe40f42e6a034(arg1: *mut i128, arg2: i32) -> *mut i128

{
    let mut var_50: *mut c_void =
        (&uu_od::prn_char::A_CHARS::h9f16ee689789fd1a).byte_offset((arg2 & 0x7f) << 4);
    let mut var_48: *mut *mut c_void = &var_50;
    let var_40: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1b019627656d27e4;
    let mut var_38: *mut c_void = &data_41a940;
    let var_30: i64 = 1;
    let var_18: *mut c_void = &data_41d150;
    let var_10: i64 = 1;
    let var_28: *mut *mut *mut c_void = &var_48;
    let var_20: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(arg1, &var_38);
    arg1
}
