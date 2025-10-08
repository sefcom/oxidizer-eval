
  fn alacritty::input::Processor$LT$T$C$A$GT$::cursor_state::hd11ac0475868ceff(arg1: *mut c_void) -> u64

{
    let rbx: *mut c_void = *arg1.byte_offset(8);
    let r12: i32 = *rbx.byte_offset(0xc8);
    let r13: *mut c_void = *arg1.byte_offset(0x18);
    let r15: *mut c_void = *arg1.byte_offset(0x30);
    let mut var_58: i64;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_58, r15);
    let mut rax: i64;
    let mut rdx_1: i32;
    rax = alacritty::event::Mouse::point::h7553a37268becc3a(*r13.byte_offset(0x20), 
        *r13.byte_offset(0x28), &var_58, r12);
    let mut var_68: i64 = rax;
    let var_60: i32 = rdx_1;
    let rax_1: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(rbx.byte_offset(0x28), rdx_1);
    let rsi_3: i64 = *rax_1.byte_offset(0x10);
    
    if rax >= rsi_3
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rax, rsi_3);
        /* no return */
    }
    
    var_58 = alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(
        *(*rax_1.byte_offset(8) + rax * 0x18));
    let rax_4: i32 =
        alacritty::input::Processor$LT$T$C$A$GT$::message_bar_cursor_state::h1057cdc0852c0ab1(arg1);
    let mut rbp_1: i32 = rax_4;
    
    if rax_4 == 0x24
    {
        let mut rax_5: i8;
        
        if *r15.byte_offset(0x758) != 2
        {
            rax_5 = core::ops::function::FnOnce::call_once::hfee6073f4ce7fd70(&var_68, &var_58, 
                r15.byte_offset(0x728));
            rbp_1 = 3;
        }
        
        if *r15.byte_offset(0x758) == 2 || rax_5 == 0
        {
            let r14_1: *mut i8 = *arg1.byte_offset(0x28);
            let mut rax_6: i8;
            
            if (*r14_1 & 4) == 0
            {
                rax_6 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::mouse_mode::h5645ae47cef353d4(rbx);
            }
            
            if (*r14_1 & 4) != 0 || rax_6 == 0
            {
                rbp_1 = 8;
            }
            else
            {
                rbp_1 = 0;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..term..cell..Hyperlink$GT$$GT$::h8fb20e530ce7d2cb(&var_58);
    rbp_1
}
