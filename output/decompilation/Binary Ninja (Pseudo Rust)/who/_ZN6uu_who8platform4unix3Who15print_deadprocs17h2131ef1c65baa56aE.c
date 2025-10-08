
  fn uu_who::platform::unix::Who::print_deadprocs::h2131ef1c65baa56a(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    let mut var_b8: i128;
    uucore::features::utmpx::Utmpx::terminal_suffix::h90f3d33375c1dd6b(&var_b8, arg2);
    let mut var_98: *mut i128 = &var_b8;
    let var_90: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_e8: *mut *mut c_void = &data_4fef78;
    let var_e0: i64 = 1;
    let var_c8: i64 = 0;
    let var_d8: *mut *mut i128 = &var_98;
    let var_d0: i64 = 1;
    let mut var_80: i128;
    core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_80, &var_e8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_b8);
    let mut var_68: i128 = var_80;
    let var_70: i64;
    let var_58: i64 = var_70;
    var_98 = *arg2.byte_offset(4);
    var_80 = &var_98;
    *var_80[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
    var_e8 = &data_418a60;
    let var_e0_1: i64 = 1;
    let var_c8_1: i64 = 0;
    let var_d8_1: *mut i128 = &var_80;
    let var_d0_1: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_b8, &var_e8);
    let mut var_48: i128 = var_b8;
    let var_a8: i64;
    let var_38: i64 = var_a8;
    let mut var_ec: i32 = *arg2.byte_offset(0x14c);
    var_b8 = &var_ec;
    *var_b8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i16$GT$::fmt::ha4190c1a8029117b;
    let var_a8_1: *mut c_void = &*var_ec[2];
    let var_a0: fn(arg1: *mut i16, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i16$GT$::fmt::ha4190c1a8029117b;
    var_e8 = &data_4fef88;
    let var_e0_2: i64 = 2;
    let var_c8_2: i64 = 0;
    let var_d8_2: *mut i128 = &var_b8;
    let var_d0_2: i64 = 2;
    core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_80, &var_e8);
    var_98 = var_80;
    let var_88: i64 = var_70;
    uucore::features::utmpx::Utmpx::tty_device::h164f6e4ca04cfddc(&var_b8, arg2);
    let r15: i64 = *var_b8[8];
    uu_who::platform::unix::time_string::hf7b3fb93d48ce0b2(&var_e8, arg2);
    let var_130: i64 = 0;
    uu_who::platform::unix::Who::print_line::h48873e2090b4b940(arg1, 1, 0, 0x20, r15, var_e0_2, 1, 
        var_48, var_68, var_90);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_e8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_b8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_98);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_48);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_68)
}
