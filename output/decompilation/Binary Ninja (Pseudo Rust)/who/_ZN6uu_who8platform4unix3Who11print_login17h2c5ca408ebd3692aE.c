
  fn uu_who::platform::unix::Who::print_login::h2c5ca408ebd3692a(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    let mut var_90: i128;
    uucore::features::utmpx::Utmpx::terminal_suffix::h90f3d33375c1dd6b(&var_90, arg2);
    let mut var_78: *mut i128 = &var_90;
    let var_70: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_58: *mut *mut c_void = &data_4fef78;
    let var_50: i64 = 1;
    let var_38: i64 = 0;
    let var_48: *mut *mut i128 = &var_78;
    let var_40: i64 = 1;
    let mut var_a8: i128;
    core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_a8, &var_58);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_90);
    var_78 = var_a8;
    let mut var_ac: i32 = *arg2.byte_offset(4);
    var_a8 = &var_ac;
    *var_a8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
    var_58 = &data_418a60;
    let var_50_1: i64 = 1;
    let var_38_1: i64 = 0;
    let var_48_1: *mut i128 = &var_a8;
    let var_40_1: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_90, &var_58);
    var_a8 = var_90;
    uucore::features::utmpx::Utmpx::tty_device::h164f6e4ca04cfddc(&var_90, arg2);
    let r12: i64 = *var_90[8];
    uu_who::platform::unix::time_string::hf7b3fb93d48ce0b2(&var_58, arg2);
    let var_98: i64;
    let var_d0: i64 = var_98;
    let var_80: i64;
    let var_e0: i64 = var_80;
    let var_c0: i64 = 0;
    let var_f0: i64 = 0;
    uu_who::platform::unix::Who::print_line::h48873e2090b4b940(arg1, 
        "LOGINterm= exit=system boot  ?()…", 5, 0x20, r12, var_50_1, 1, *var_a8[8], var_70, 1);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_58);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_90);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_78)
}
