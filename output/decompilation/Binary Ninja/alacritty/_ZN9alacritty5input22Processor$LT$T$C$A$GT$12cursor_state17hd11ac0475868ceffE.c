
  uint64_t alacritty::input::Processor$LT$T$C$A$GT$::cursor_state::hd11ac0475868ceff(void* arg1)

{
    void* rbx = *(arg1 + 8);
    int32_t r12 = *(rbx + 0xc8);
    void* r13 = *(arg1 + 0x18);
    void* r15 = *(arg1 + 0x30);
    int64_t var_58;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_58, r15);
    int64_t rax;
    int32_t rdx_1;
    rax = alacritty::event::Mouse::point::h7553a37268becc3a(*(r13 + 0x20), *(r13 + 0x28), &var_58, 
        r12);
    int64_t var_68 = rax;
    int32_t var_60 = rdx_1;
    void* rax_1 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(rbx + 0x28, rdx_1);
    int64_t rsi_3 = *(rax_1 + 0x10);
    
    if (rax >= rsi_3)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rax, rsi_3);
        /* no return */
    }
    
    var_58 = alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(
        *(*(rax_1 + 8) + rax * 0x18));
    int32_t rax_4 =
        alacritty::input::Processor$LT$T$C$A$GT$::message_bar_cursor_state::h1057cdc0852c0ab1(arg1);
    int32_t rbp_1 = rax_4;
    
    if (rax_4 == 0x24)
    {
        char rax_5;
        
        if (*(r15 + 0x758) != 2)
        {
            rax_5 = core::ops::function::FnOnce::call_once::hfee6073f4ce7fd70(&var_68, &var_58, 
                r15 + 0x728);
            rbp_1 = 3;
        }
        
        if (*(r15 + 0x758) == 2 || !rax_5)
        {
            char* r14_1 = *(arg1 + 0x28);
            char rax_6;
            
            if (!(*r14_1 & 4))
                rax_6 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::mouse_mode::h5645ae47cef353d4(rbx);
            
            if (*r14_1 & 4 || !rax_6)
                rbp_1 = 8;
            else
                rbp_1 = 0;
        }
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..term..cell..Hyperlink$GT$$GT$::h8fb20e530ce7d2cb(&var_58);
    return rbp_1;
}
