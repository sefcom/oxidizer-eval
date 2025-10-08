
  fn alacritty_terminal::term::Term$LT$T$GT$::wrapline::ha57be38105826762(arg1: *mut c_void)

{
    if (*arg1.byte_offset(0x6dc) & 0x80) == 0
    {
        return;
    }
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 5
    {
        let mut var_50: *mut *mut c_void = &data_c77958;
        let var_48_1: i64 = 1;
        let var_40_1: i64 = 8;
        let var_38_1: i128 = {0};
        let rax_1: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c77968);
        let mut var_78: *const i8 = "alacritty_terminal::termScrollin…";
        let var_70_1: i64 = 0x18;
        let var_68_1: *const i8 = "alacritty_terminal::termScrollin…";
        let var_60_1: i64 = 0x18;
        let var_58_1: i64 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&var_50, 5, &var_78);
    }
    
    let rax_2: *mut c_void =
        alacritty_terminal::grid::Grid$LT$T$GT$::cursor_cell::h4172fc1fd56d763c(arg1.
        byte_offset(0x28));
    *rax_2.byte_offset(0x14) |= 0x10;
    let rdx_2: i64 = *arg1.byte_offset(0x60);
    let mut rbp: i32 = rdx_2 + 1;
    let mut r14: i64;
    let mut r15: i64;
    
    if rbp >= *arg1.byte_offset(0x2a4)
    {
        _$LT$alacritty_terminal..term..Term$LT$T$GT$$u20$as$u20$vte..ansi..Handler$GT$::linefeed::h4f75324882217937(arg1);
        rbp = *arg1.byte_offset(0x60);
        r14 = *arg1.byte_offset(0x1f0);
        r15 = *arg1.byte_offset(0x1f8);
    }
    else
    {
        let rcx_1: i64 = *arg1.byte_offset(0x58);
        r14 = *arg1.byte_offset(0x1f0);
        r15 = *arg1.byte_offset(0x1f8);
        alacritty_terminal::term::TermDamageState::damage_line::h741c479e22cc411b(r14, r15, rdx_2, 
            rcx_1, rcx_1);
        *arg1.byte_offset(0x60) = rbp;
    }
    
    *arg1.byte_offset(0x58) = 0;
    *arg1.byte_offset(0x84) = 0;
    /* tailcall */
    alacritty_terminal::term::TermDamageState::damage_line::h741c479e22cc411b(r14, r15, rbp, 0, 0)
}
