
  int64_t alacritty_terminal::term::Term$LT$T$GT$::resize::h536793f9ff690001(void* arg1, int64_t arg2, int64_t arg3)

{
    int64_t r13 = arg3;
    int64_t rbp = arg2;
    int64_t r14 = *(arg1 + 0xb8);
    int64_t r15 = *(arg1 + 0xc0);
    int64_t var_108 = arg3;
    int64_t var_100 = arg2;
    int64_t result = core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
    void** const var_f8;
    char const* const var_c0;
    
    if (!((r15 ^ arg2) | (r14 ^ arg3)))
    {
        if (result <= 3)
            return result;
        
        var_f8 = &data_c778e0;
        int64_t var_f0_1 = 1;
        int64_t var_e8_1 = 8;
        int64_t var_e0;
        var_e0 = {0};
        int64_t rax = log::__private_api::loc::h250021ea1f26630a(&data_c77940);
        var_c0 = "alacritty_terminal::termScrollin…";
        int64_t var_b8_1 = 0x18;
        char const* const var_b0_1 = "alacritty_terminal::termScrollin…";
        int64_t var_a8_1 = 0x18;
        int64_t var_a0_1 = rax;
        return log::__private_api::log::h0b6680b994d742b1(&var_f8, 4, &var_c0);
    }
    
    int64_t** var_e8;
    int64_t var_d8;
    
    if (result > 3)
    {
        int64_t* var_88 = &var_108;
        uint64_t (* var_80_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        int64_t* var_78_1 = &var_100;
        uint64_t (* var_70_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        var_f8 = &data_c778f0;
        int64_t var_f0_2 = 2;
        var_d8 = 0;
        var_e8 = &var_88;
        int64_t var_e0_1 = 2;
        int64_t rax_1 = log::__private_api::loc::h250021ea1f26630a(&data_c77910);
        var_c0 = "alacritty_terminal::termScrollin…";
        int64_t var_b8_2 = 0x18;
        char const* const var_b0_2 = "alacritty_terminal::termScrollin…";
        int64_t var_a8_2 = 0x18;
        int64_t var_a0_2 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&var_f8, 4, &var_c0);
        rbp = var_100;
        r13 = var_108;
    }
    
    int64_t rax_2 = *(arg1 + 0x50);
    int32_t r12_3 = 0;
    
    if (rax_2 >= r15)
        r12_3 = rax_2 - r15;
    
    int32_t rax_6 = core::cmp::Ord::min::h3552534d3430b892(
        core::cmp::Ord::max::h485505c56320f468(rbp - r15, 
            core::cmp::Ord::min::h3552534d3430b892(0, ~*(arg1 + 0x60) + rbp)), 
        r12_3);
    *(arg1 + 0x298) += rax_6;
    int32_t rax_7 = 0x1000 & *(arg1 + 0x6dc);
    alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::resize::h2fe81c4df8ec6262(arg1 + 0x28, !rax_7, rbp, r13);
    alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::resize::h2fe81c4df8ec6262(arg1 + 0xd8, rax_7 >> 0xc, var_100, var_108);
    int64_t rsi_7 = var_108;
    int64_t r13_1 = r14;
    
    if (r13_1 != rsi_7)
    {
        *(arg1 + 0x280) = 2;
        var_f8 = *(arg1 + 0x198);
        alloc::vec::Vec$LT$T$C$A$GT$::resize_with::h138e0d9f2b39608f(arg1 + 0x188, rsi_7, &var_f8);
        r13_1 = var_108;
    }
    else
    {
        char rax_8 = *(arg1 + 0x280);
        *(arg1 + 0x280) = 2;
        
        if (rax_8 != 2)
        {
            int64_t var_48_1 = *(arg1 + 0x278);
            int128_t var_58_1 = *(arg1 + 0x268);
            int128_t var_68 = *(arg1 + 0x258);
            char var_40_1 = rax_8;
            int64_t var_3f_1 = *(arg1 + 0x281);
            var_3f_1 = *(arg1 + 0x288);
            int32_t rax_10 = core::cmp::Ord::max::h20b6d33cbe488162(var_100, r15);
            alacritty_terminal::selection::Selection::rotate::he038f04baab7ded0(&var_f8, &var_68, 
                *(arg1 + 0xb8), *(arg1 + 0xc0), 0, rax_10, -(rax_6));
            int64_t var_c8;
            *(arg1 + 0x288) = var_c8;
            int128_t zmm0_2 = var_f8;
            *(arg1 + 0x278) = var_d8;
            *(arg1 + 0x268) = var_e8;
            *(arg1 + 0x258) = zmm0_2;
        }
    }
    
    int64_t r14_4 = *(arg1 + 0x290);
    int32_t r15_1 = *(arg1 + 0xc0);
    int32_t rbp_1 = *(arg1 + 0xc8);
    *(arg1 + 0x298) = core::cmp::Ord::max::h3396bb7148673668(
        core::cmp::Ord::min::h08e004ced85b11eb(*(arg1 + 0x298), ~rbp_1 + r15_1), -(rbp_1));
    *(arg1 + 0x290) = core::cmp::Ord::min::hffab314b5e6491b1(r14_4, *(arg1 + 0xb8) - 1);
    *(arg1 + 0x2a0) = 0;
    *(arg1 + 0x2a4) = r15_1;
    return alacritty_terminal::term::TermDamageState::resize::h700b97a1b27587df(arg1 + 0x1e8, 
        r13_1, var_100);
}
