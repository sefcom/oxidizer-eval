
  fn alacritty_terminal::term::RenderableCursor::new::h18d857dbc051652b(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let r12: i32 = *arg2.byte_offset(0x6dc);
    let mut rax_1: *mut c_void = arg2.byte_offset(0x290);
    let mut rsi: *mut c_void = arg2.byte_offset(0x60);
    let temp0: i32 = r12 & 0x10000;
    
    if temp0 == 0
    {
        rax_1 = arg2.byte_offset(0x58);
    }
    
    if temp0 != 0
    {
        rsi = arg2.byte_offset(0x298);
    }
    
    let rbp: i32 = *rsi;
    let rbx: i64 = *rax_1;
    let rax_2: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg2.byte_offset(0x28), rbp);
    let rsi_2: i64 = *rax_2.byte_offset(0x10);
    
    if rbx >= rsi_2
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rbx, rsi_2);
        /* no return */
    }
    
    let r13: u32 = *(*rax_2.byte_offset(8) + rbx * 0x18 + 0x14);
    let mut rdx_1: i8;
    
    if (r12 & 0x10001) == 0
    {
        rdx_1 = 4;
    }
    else
    {
        rdx_1 = alacritty_terminal::term::Term$LT$T$GT$::cursor_style::hbc8727fad33b6b36(arg2);
    }
    
    let result: i64 = r13 << 9 >> 0xf;
    arg1[2] = rdx_1;
    *arg1 = rbx + result;
    arg1[1] = rbp;
    result
}
