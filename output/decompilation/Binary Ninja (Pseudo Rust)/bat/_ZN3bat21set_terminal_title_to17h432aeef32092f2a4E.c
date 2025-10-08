
  fn bat::set_terminal_title_to::h432aeef32092f2a4(arg1: *mut i64) -> i64

{
    let mut var_90: *const i8 = "\x1b]0;rule";
    let var_88: i64 = 4;
    let mut var_80: *mut c_void = &data_489078;
    let var_78: i64 = 1;
    let mut var_70: *const *const i8 = &var_90;
    let var_68: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
    let var_60: *mut i64 = arg1;
    let var_58: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_50: *const *mut c_void = &var_80;
    let var_48: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
    let mut var_40: *mut c_void = &data_489048;
    let var_38: i64 = 3;
    let var_20: i64 = 0;
    let var_30: *mut *const *const i8 = &var_70;
    let var_28: i64 = 3;
    std::io::stdio::_print::h5e446ff973c02de6(&var_40);
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    var_70 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    core::result::Result$LT$T$C$E$GT$::unwrap::h39cf630814389a44(
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(
        &var_70));
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(arg1)
}
