
  void alacritty_terminal::term::Term$LT$T$GT$::wrapline::ha57be38105826762(void* arg1)

{
    if (!(*(arg1 + 0x6dc) & 0x80))
        return;
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 5)
    {
        void** const var_50 = &data_c77958;
        int64_t var_48_1 = 1;
        int64_t var_40_1 = 8;
        int128_t var_38_1 = {0};
        int64_t rax_1 = log::__private_api::loc::h250021ea1f26630a(&data_c77968);
        char const* const var_78 = "alacritty_terminal::termScrollin…";
        int64_t var_70_1 = 0x18;
        char const* const var_68_1 = "alacritty_terminal::termScrollin…";
        int64_t var_60_1 = 0x18;
        int64_t var_58_1 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&var_50, 5, &var_78);
    }
    
    void* rax_2 =
        alacritty_terminal::grid::Grid$LT$T$GT$::cursor_cell::h4172fc1fd56d763c(arg1 + 0x28);
    *(rax_2 + 0x14) |= 0x10;
    int64_t rdx_2 = *(arg1 + 0x60);
    int32_t rbp = rdx_2 + 1;
    int64_t r14;
    int64_t r15;
    
    if (rbp >= *(arg1 + 0x2a4))
    {
        _$LT$alacritty_terminal..term..Term$LT$T$GT$$u20$as$u20$vte..ansi..Handler$GT$::linefeed::h4f75324882217937(arg1);
        rbp = *(arg1 + 0x60);
        r14 = *(arg1 + 0x1f0);
        r15 = *(arg1 + 0x1f8);
    }
    else
    {
        int64_t rcx_1 = *(arg1 + 0x58);
        r14 = *(arg1 + 0x1f0);
        r15 = *(arg1 + 0x1f8);
        alacritty_terminal::term::TermDamageState::damage_line::h741c479e22cc411b(r14, r15, rdx_2, 
            rcx_1, rcx_1);
        *(arg1 + 0x60) = rbp;
    }
    
    *(arg1 + 0x58) = 0;
    *(arg1 + 0x84) = 0;
    /* tailcall */
    return alacritty_terminal::term::TermDamageState::damage_line::h741c479e22cc411b(r14, r15, rbp, 
        0, 0);
}
