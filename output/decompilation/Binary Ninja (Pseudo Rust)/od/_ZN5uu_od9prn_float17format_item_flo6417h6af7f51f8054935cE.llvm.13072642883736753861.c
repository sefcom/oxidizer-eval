
  fn uu_od::prn_float::format_item_flo64::h6af7f51f8054935c.llvm.13072642883736753861() -> *mut i128

{
    let mut var_28: ();
    let zmm0: [u64; 0x2];
    uu_od::prn_float::format_flo64::h9324c3c6da2cf7ce(&var_28, zmm0);
    let mut var_80: *mut c_void = &var_28;
    let var_78: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    let mut var_58: *mut *mut [i8; 0x89] = &data_542038;
    let var_50: i64 = 1;
    let var_38: i64 = 0;
    let var_48: *mut *mut c_void = &var_80;
    let var_40: i64 = 1;
    let mut var_70: i128;
    core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(&var_70, &var_58);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&var_28);
    let var_60: i64;
    let result: *mut i128;
    result[1] = var_60;
    *result = var_70;
    result
}
