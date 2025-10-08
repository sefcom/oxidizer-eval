
  fn uu_od::prn_float::format_item_flo32::h5b40e5b77c896172(arg1: *mut i128, arg2: i128 @ zmm0) -> *mut i128

{
    arg2 = arg2;
    uu_od::prn_float::format_flo32::hb158b5d92d44987e(arg2);
    let mut var_28: ();
    let mut var_68: *mut c_void = &var_28;
    let var_60: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_58: *mut *mut [i8; 0x1e] = &data_503838;
    let var_50: i64 = 1;
    let var_38: i64 = 0;
    let var_48: *mut *mut c_void = &var_68;
    let var_40: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(arg1, &var_58);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(&var_28);
    arg1
}
