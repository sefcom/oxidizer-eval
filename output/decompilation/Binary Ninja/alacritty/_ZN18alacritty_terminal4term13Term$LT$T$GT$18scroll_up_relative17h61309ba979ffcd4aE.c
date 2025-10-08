
  int64_t alacritty_terminal::term::Term$LT$T$GT$::scroll_up_relative::h61309ba979ffcd4a(void* arg1, int32_t arg2, int64_t arg3)

{
    int64_t r15 = arg3;
    int32_t rbp = arg2;
    int32_t var_f4 = arg2;
    int64_t var_f0 = arg3;
    void** const var_e8;
    int32_t** var_d8;
    int64_t var_c8;
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 5)
    {
        int32_t* var_b0 = &var_f4;
        int64_t (* var_a8_1)(int64_t arg1, int64_t* arg2) = _$LT$alacritty_terminal..index..Line$u20$as$u20$core..fmt..Display$GT$::fmt::h8bdccc96f374cf92;
        int64_t* var_a0_1 = &var_f0;
        uint64_t (* var_98_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        var_e8 = &data_c77870;
        int64_t var_e0_1 = 2;
        var_c8 = 0;
        var_d8 = &var_b0;
        int64_t var_d0_1 = 2;
        int64_t rax_1 = log::__private_api::loc::h250021ea1f26630a(&data_c77890);
        char const* const var_90 = "alacritty_terminal::termScrollin…";
        int64_t var_88_1 = 0x18;
        char const* const var_80_1 = "alacritty_terminal::termScrollin…";
        int64_t var_78_1 = 0x18;
        int64_t var_70_1 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&var_e8, 5, &var_90);
        r15 = var_f0;
        rbp = var_f4;
    }
    
    int32_t r14 = *(arg1 + 0x2a4);
    int64_t rax_4 = core::cmp::Ord::min::h7c13e9bfb8ea3862(r15, r14 - *(arg1 + 0x2a0));
    var_f0 = rax_4;
    char rax_5 = *(arg1 + 0x280);
    *(arg1 + 0x280) = 2;
    char var_c0;
    
    if (rax_5 != 2)
    {
        int64_t var_48_1 = *(arg1 + 0x278);
        int128_t var_58_1 = *(arg1 + 0x268);
        int128_t var_68 = *(arg1 + 0x258);
        char var_40_1 = rax_5;
        int64_t var_3f_1 = *(arg1 + 0x281);
        var_3f_1 = *(arg1 + 0x288);
        alacritty_terminal::selection::Selection::rotate::he038f04baab7ded0(&var_e8, &var_68, 
            *(arg1 + 0xb8), *(arg1 + 0xc0), rbp, r14, rax_4);
    }
    else
        var_c0 = 2;
    
    int64_t var_b8;
    *(arg1 + 0x288) = var_b8;
    int128_t zmm0 = var_e8;
    *(arg1 + 0x278) = var_c8;
    *(arg1 + 0x280) = var_c0;
    int32_t var_bf;
    *(arg1 + 0x281) = var_bf;
    int16_t var_bb;
    *(arg1 + 0x285) = var_bb;
    char var_b9;
    *(arg1 + 0x287) = var_b9;
    *(arg1 + 0x268) = var_d8;
    *(arg1 + 0x258) = zmm0;
    int32_t result = alacritty_terminal::grid::Grid$LT$T$GT$::scroll_up::hf31756b0f8886f88(
        arg1 + 0x28, rbp, r14, rax_4);
    int32_t rsi_3 = 0 - *(arg1 + 0xc8);
    
    if (rbp)
        rsi_3 = rbp;
    
    int32_t rdi_4 = *(arg1 + 0x298);
    
    if (r14 > rdi_4 && rsi_3 <= rdi_4)
    {
        result = core::cmp::Ord::max::h3396bb7148673668(rdi_4 - var_f0, rsi_3);
        *(arg1 + 0x298) = result;
    }
    
    *(arg1 + 0x210) = 1;
    return result;
}
