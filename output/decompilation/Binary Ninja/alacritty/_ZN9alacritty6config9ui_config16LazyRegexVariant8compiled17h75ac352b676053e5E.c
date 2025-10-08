
  int64_t alacritty::config::ui_config::LazyRegexVariant::compiled::h75ac352b676053e5(int64_t* arg1)

{
    int64_t var_1020 = 0;
    int64_t var_2020 = 0;
    int64_t rcx = *arg1;
    int64_t rax = rcx - 0x7fffffffffffffff;
    int64_t result = 0;
    
    if (rcx >= -0x7ffffffffffffffe)
        rax = 0;
    
    if (!rax)
        return arg1[3];
    
    if (rax == 1)
    {
        int64_t rax_1 = arg1[3];
        int128_t zmm0 = *(arg1 + 8);
        arg1[1] = 0;
        arg1[2] = 1;
        arg1[3] = 0;
        char var_2228[0x10];
        alacritty_terminal::term::search::RegexSearch::new::he62c7dc0d18da29a(&var_2228, *zmm0[8], 
            rax_1);
        
        if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2228, data_4e8640)) == 0xffff)
        {
            int64_t* var_2218;
            int64_t* var_22b0 = var_2218;
            
            if (core::sync::atomic::atomic_load::h45f93311b58385bb(
                &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0))
            {
                int64_t* var_2290 = &var_22b0;
                int64_t (* var_2288_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf018bb3e98c684f0;
                void** const var_2258 = &data_c81b40;
                int64_t var_2250_1 = 1;
                int64_t var_2238_1 = 0;
                int64_t** var_2248_1 = &var_2290;
                int64_t var_2240_1 = 1;
                int64_t rax_5 = log::__private_api::loc::h250021ea1f26630a(&data_c81b68);
                void* const var_2280 = "alacritty::config::ui_config(ipf…";
                int64_t var_2278_1 = 0x1c;
                void* const var_2270_1 = "alacritty::config::ui_config(ipf…";
                int64_t var_2268_1 = 0x1c;
                int64_t var_2260_1 = rax_5;
                log::__private_api::log::h0b6680b994d742b1(&var_2258, 1, &var_2280);
            }
            
            core::ptr::drop_in_place$LT$alacritty..config..ui_config..LazyRegexVariant$GT$::he7d1beec7e24c0bc(arg1);
            *arg1 = -0x7fffffffffffffff;
            arg1[3] = rax_1;
            *(arg1 + 8) = zmm0;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$regex_automata..hybrid..error..BuildError$GT$$GT$::hfe56c3e1d4cc11da(var_22b0);
            return 0;
        }
        
        void var_1128;
        memcpy(&var_1128, &var_2228, 0x1100);
        result = alloc::boxed::Box$LT$T$GT$::new::h5bdfb2470c6173f5(&var_1128);
        core::ptr::drop_in_place$LT$alacritty..config..ui_config..LazyRegexVariant$GT$::he7d1beec7e24c0bc(arg1);
        *arg1 = zmm0;
        arg1[2] = rax_1;
        arg1[3] = result;
        
        if (*arg1 <= -0x7fffffffffffffff)
        {
            core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
            /* no return */
        }
    }
    
    return result;
}
