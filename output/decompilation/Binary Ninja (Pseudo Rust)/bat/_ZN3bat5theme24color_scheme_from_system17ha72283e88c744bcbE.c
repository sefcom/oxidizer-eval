
  fn bat::theme::color_scheme_from_system::ha72283e88c744bcb() -> i64

{
    let var_18: i8 = 0;
    let var_20: i64 = 0;
    let var_17: i64 = 0x1500000006;
    let mut var_50: i64 = -0x8000000000000000;
    let var_48: *const i8 = "[bat warning]Theme '' is depreca…";
    let var_40: i64 = 0xd;
    let var_38: i64 = -0x7ffffffffffffffe;
    let mut var_b8: *mut *mut [i8; 0x52] = &data_acecf0;
    let var_b0: i64 = 1;
    let var_a8: i64 = 8;
    let mut var_a0: i128 = {0};
    let mut var_88: i128;
    core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_88, 
        "Theme 'auto:system' is only supp…", 0x3e, &var_b8);
    let mut var_68: i128 = var_88;
    let var_78: i64;
    let var_58: i64 = var_78;
    var_88 = &var_50;
    *var_88[8] = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
    let var_78_1: *mut i128 = &var_68;
    let var_70: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_b8 = &data_ace198;
    let var_b0_1: i64 = 3;
    *var_a0[8] = 0;
    let var_a8_1: *mut i128 = &var_88;
    var_a0 = 2;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_b8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_68);
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_50)
}
