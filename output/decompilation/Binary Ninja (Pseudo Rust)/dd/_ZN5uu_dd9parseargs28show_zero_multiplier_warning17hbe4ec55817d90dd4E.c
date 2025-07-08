
  fn uu_dd::parseargs::show_zero_multiplier_warning::hbe4ec55817d90dd4() -> *mut c_void

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = uucore::util_name::h60d842bf27b05e82();
    let mut var_58: i64 = rax;
    let var_50: i64 = rdx;
    let mut var_78: *mut i64 = &var_58;
    let var_70: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
    let mut var_a8: *mut c_void = &data_560e98;
    let var_a0: i64 = 2;
    let var_88: i64 = 0;
    let var_98: *mut *mut i64 = &var_78;
    let var_90: i64 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a8);
    var_78 = nullptr;
    let var_70_1: *mut c_void = "0x00x is a zero multiplier; use …";
    let var_68: i64 = 2;
    let var_60: i8 = 1;
    var_58 = 0;
    let var_50_1: *mut c_void = "00x is a zero multiplier; use  i…";
    let var_48: i64 = 3;
    let var_40: i8 = 1;
    let mut var_38: *mut *mut i64 = &var_78;
    let var_30: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    let var_28: *mut i64 = &var_58;
    let var_20: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    var_a8 = &data_560eb8;
    let var_a0_1: i64 = 3;
    let var_88_1: i64 = 0;
    let var_98_1: *mut *mut *mut i64 = &var_38;
    let var_90_1: i64 = 2;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a8)
}
