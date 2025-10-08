
  fn alacritty::input::Processor$LT$T$C$A$GT$::on_focus_change::h97bba9d0774047a7(arg1: *mut i64, arg2: *mut c_void, arg3: u64) -> i64

{
    let result: i64 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::terminal_mut::ha68c2ba7b3d97983(arg2);
    
    if (*arg2.byte_offset(0x6dd) & 8) == 0
    {
        return result;
    }
    
    let mut rcx_1: *mut c_void = "OI[X]ALACRITTY_SOCKET=; export A…";
    
    if arg3 != 0
    {
        rcx_1 = "I[X]ALACRITTY_SOCKET=; export AL…";
    }
    
    let mut var_80: *mut c_void = rcx_1;
    let var_78_1: i64 = 1;
    let mut var_70: *const *mut c_void = &var_80;
    let var_68_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
    let mut var_60: *mut *mut c_void = &data_c82c60;
    let var_58_1: i64 = 1;
    let var_40_1: i64 = 0;
    let var_50_1: *mut *const *mut c_void = &var_70;
    let var_48_1: i64 = 1;
    let mut var_30: ();
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_30, 0, arg3, &var_60);
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::write_to_pty::h8c41aa14fceee80b(arg1, &var_30)
}
