
  fn alacritty::input::Processor$LT$T$C$A$GT$::sgr_mouse_report::h6feeb7c04a7ac1ed(arg1: *mut i64, arg2: i64, arg3: i32, arg4: i8, arg5: i32) -> i64

{
    let mut var_a9: i8 = arg4;
    let mut var_a8: i32 = arg5 << 5 | 0x4d;
    let mut var_a0: i64 = arg2 + 1;
    let rdx: u64 = arg3 + 1;
    let mut var_a4: i32 = rdx;
    let mut var_98: *mut i8 = &var_a9;
    let var_90: fn(arg1: *mut i8, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
    let var_88: *mut i64 = &var_a0;
    let var_80: fn(arg1: i64, arg2: *mut i64) -> i64 = _$LT$alacritty_terminal..index..Column$u20$as$u20$core..fmt..Display$GT$::fmt::h86f543d6692d8d80;
    let var_78: *mut i32 = &var_a4;
    let var_70: fn(arg1: i64, arg2: *mut i64) -> i64 = _$LT$alacritty_terminal..index..Line$u20$as$u20$core..fmt..Display$GT$::fmt::h8bdccc96f374cf92;
    let var_68: *mut i32 = &var_a8;
    let var_60: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    let mut var_58: *mut *mut [i8; 0x0] = &data_c82db0;
    let var_50: i64 = 4;
    let var_38: i64 = 0;
    let var_48: *mut *mut i8 = &var_98;
    let var_40: i64 = 4;
    let mut var_28: ();
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_28, 0, rdx, &var_58);
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::write_to_pty::h8c41aa14fceee80b(arg1, &var_28)
}
