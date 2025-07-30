
  fn flea::print_usage::hb3135f8e2fa442e9(arg1: i64, arg2: i64, arg3: *mut i64) -> i64

{
    let mut var_48: i64 = arg1;
    let var_40: i64 = arg2;
    let mut var_80: *mut i64 = &var_48;
    let var_78: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he53499d21221b86b;
    let mut var_b0: *mut *mut c_void = &data_af5918;
    let var_a8: i64 = 2;
    let var_90: i64 = 0;
    let var_a0: *mut *mut i64 = &var_80;
    let var_98: i64 = 1;
    let mut var_28: i128;
    core::option::Option$LT$T$GT$::map_or_else::hbd37af77d9713dc6(&var_28, &var_b0);
    let mut var_68: i128 = var_28;
    let var_18: i64;
    let var_58: i64 = var_18;
    getopts::Options::usage::h7f7fdd7b1cb03bdd(&var_80, arg3, *var_68[8]);
    let mut var_38: *mut *mut i64 = &var_80;
    let var_30: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
    var_b0 = &data_af5938;
    let var_a8_1: i64 = 2;
    let var_90_1: i64 = 0;
    let var_a0_1: *mut *mut *mut i64 = &var_38;
    let var_98_1: i64 = 1;
    std::io::stdio::_print::h17d6c2a1d6a6f99e(&var_b0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_80);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_68);
    core::ptr::drop_in_place$LT$getopts..Options$GT$::ha123b29a12c62a26(arg3)
}
