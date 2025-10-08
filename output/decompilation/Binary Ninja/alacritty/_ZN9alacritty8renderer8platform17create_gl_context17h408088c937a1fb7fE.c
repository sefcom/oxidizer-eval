
  int128_t* alacritty::renderer::platform::create_gl_context::h408088c937a1fb7f(int128_t* arg1, int32_t* arg2, char* arg3, int128_t* arg4)

{
    bool cond:0 = core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4;
    int64_t var_220 = 2;
    int32_t var_210 = 0x10;
    int32_t var_1f8 = 2;
    char var_1f4 = 1;
    bool var_1f3 = cond:0;
    int16_t var_1f2 = 2;
    char var_1f0 = 4;
    int64_t rdx = 0x70;
    
    if (*arg2)
        rdx = 0x5c;
    
    if ((*(arg2 + 8))[rdx] & 1)
        *var_1f2[1] = 3;
    
    int128_t var_2a8;
    _$LT$glutin..context..ContextAttributes$u20$as$u20$core..clone..Clone$GT$::clone::he394f954a637a5dc(&var_2a8, &var_220);
    int128_t var_1a8 = var_2a8;
    int64_t var_27c;
    int64_t var_ac = var_27c;
    int32_t var_274;
    int32_t var_a4 = var_274;
    int128_t zmm0 = *arg4;
    int64_t rax_4 = arg4[1];
    _$LT$glutin..context..ContextAttributes$u20$as$u20$core..clone..Clone$GT$::clone::he394f954a637a5dc(&var_2a8, &var_220);
    int128_t var_178 = var_2a8;
    int64_t var_74 = var_27c;
    int32_t var_6c = var_274;
    int128_t var_168 = *arg4;
    int64_t rax_7 = arg4[1];
    int128_t var_148 = var_220;
    int64_t var_39 = *var_1f2[1];
    char var_1e9;
    char var_31 = var_1e9;
    int128_t var_138 = *arg4;
    int64_t rcx_2 = arg4[1];
    int64_t var_e8 = 0;
    int64_t var_e0 = 3;
    int128_t var_d8 = var_1a8;
    int128_t var_c8 = zmm0;
    int64_t var_b8 = rax_4;
    int32_t var_b0 = 0x3030100;
    int64_t var_80 = rax_7;
    int128_t var_90 = var_168;
    int128_t var_a0 = var_178;
    int32_t var_78 = 0x20101;
    int64_t var_48 = rcx_2;
    int128_t var_58 = var_138;
    int128_t var_68 = var_148;
    int32_t var_40 = 0x1020100;
    int16_t var_3c = var_1f4;
    char var_3a = 1;
    core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h211b113f5f8b0d20(&var_2a8, &var_e8);
    
    if (var_2a8 == 3)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int64_t var_1b8 = var_27c;
    int128_t var_288;
    int128_t var_1c8 = var_288;
    int128_t var_298;
    int128_t var_1d8 = var_298;
    int128_t var_1e8 = var_2a8;
    int32_t var_268;
    _$LT$glutin..display..Display$u20$as$u20$glutin..display..GlDisplay$GT$::create_context::h0aad93cc74e20072(&var_268, arg2, arg3);
    int32_t rbx_1 = var_268;
    int64_t i;
    core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h211b113f5f8b0d20(&i, &var_e8);
    int128_t var_258;
    int128_t var_248;
    int128_t var_238;
    
    if (rbx_1 != 2 && i != 3)
    {
        do
        {
            int64_t var_f0;
            int64_t var_1b8_1 = var_f0;
            int128_t var_100;
            int128_t var_1c8_1 = var_100;
            int128_t var_110;
            int128_t var_1d8_1 = var_110;
            var_1e8 = i;
            _$LT$glutin..display..Display$u20$as$u20$glutin..display..GlDisplay$GT$::create_context::h0aad93cc74e20072(&var_2a8, arg2, arg3);
            core::ptr::drop_in_place$LT$core..result..Result$LT$glutin..context..NotCurrentContext$C$glutin..error..Error$GT$$GT$::h6d158cb2c1654f91(&var_268);
            var_238 = *var_27c[4];
            var_248 = var_288;
            var_258 = var_298;
            var_268 = var_2a8;
            int32_t r12_1 = var_268;
            core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h211b113f5f8b0d20(&i, &var_e8);
            
            if (r12_1 == 2)
                break;
        } while (i != 3);
    }
    
    int128_t zmm0_3 = var_268;
    arg1[3] = var_238;
    arg1[2] = var_248;
    arg1[1] = var_258;
    *arg1 = zmm0_3;
    return arg1;
}
