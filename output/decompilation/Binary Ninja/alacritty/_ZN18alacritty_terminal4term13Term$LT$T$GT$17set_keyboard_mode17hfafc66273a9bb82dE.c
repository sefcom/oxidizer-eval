
  int64_t alacritty_terminal::term::Term$LT$T$GT$::set_keyboard_mode::hfafc66273a9bb82d(void* arg1, int32_t arg2, char arg3)

{
    int32_t rbp = arg2;
    int32_t rax = *(arg1 + 0x6dc);
    int32_t r14_1 = rax & 0xff83ffff;
    *(arg1 + 0x6dc) = r14_1;
    
    if (arg3)
    {
        int32_t rax_1 = rax & 0x7c0000;
        
        if (arg3 != 1)
            rbp = ~rbp & rax_1;
        else
            rbp |= rax_1;
    }
    
    int32_t var_84 = rbp;
    int64_t result = core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
    
    if (result >= 5)
    {
        int32_t* var_80 = &var_84;
        uint64_t (* var_78_1)(int64_t arg1, int64_t* arg2) = _$LT$alacritty_terminal..term..TermMode$u20$as$u20$core..fmt..Debug$GT$::fmt::h3716b30d7ccc6686;
        char const (** const var_48)[0xa9] = &data_c77848;
        int64_t var_40_1 = 1;
        int64_t var_28_1 = 0;
        int32_t** var_38_1 = &var_80;
        int64_t var_30_1 = 1;
        int64_t rax_2 = log::__private_api::loc::h250021ea1f26630a(&data_c77858);
        char const* const var_70 = "alacritty_terminal::termScrollin…";
        int64_t var_68_1 = 0x18;
        char const* const var_60_1 = "alacritty_terminal::termScrollin…";
        int64_t var_58_1 = 0x18;
        int64_t var_50_1 = rax_2;
        result = log::__private_api::log::h0b6680b994d742b1(&var_48, 5, &var_70);
        rbp = var_84;
    }
    
    *(arg1 + 0x6dc) = rbp | r14_1;
    return result;
}
