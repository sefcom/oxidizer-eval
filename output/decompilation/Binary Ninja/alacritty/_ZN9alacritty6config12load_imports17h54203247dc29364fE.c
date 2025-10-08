
  int64_t* alacritty::config::load_imports::h54203247dc29364f(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int64_t* arg5, int64_t arg6)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    int32_t var_248;
    alacritty::config::imports::he228980ef6034b5f(&var_248, arg2, arg3, arg4, arg6);
    int128_t var_240;
    int64_t var_230;
    int128_t var_218;
    int128_t* var_1d8;
    int128_t* const var_1b8;
    void* const var_140;
    
    if (var_248 == 1)
    {
        int64_t var_208_1 = var_230;
        var_218 = var_240;
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0))
        {
            var_1d8 = &var_218;
            int64_t (* var_1d0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_1b8 = &data_4e8b60;
            int64_t var_1b0_1 = 1;
            int64_t var_198_1 = 0;
            int128_t** var_1a8_1 = &var_1d8;
            int64_t var_1a0_1 = 1;
            int64_t rax_2 = log::__private_api::loc::h250021ea1f26630a(&data_c81f18);
            var_140 = "alacritty_config_derivealacritty…";
            int64_t var_138_1 = 0x17;
            char const* const var_130_1 = "alacritty::configReloading confi…";
            int64_t var_128_1 = 0x11;
            int64_t var_120_1 = rax_2;
            log::__private_api::log::h0b6680b994d742b1(&var_1b8, 1, &var_140);
        }
        
        *arg1 = 0;
        arg1[2] = 0;
        *(arg1 + 0x17) = 0;
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_218);
    }
    
    int64_t var_88_1 = var_230;
    int128_t var_98 = var_240;
    int64_t var_e8 = 0;
    int64_t var_d8_1 = 0;
    *var_d8_1[7] = 0;
    void var_78;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2441c7966b064cd0(&var_78, &var_98);
    int64_t i_1;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h48ec69800376c184(&i_1, &var_78);
    int64_t i = i_1;
    
    if (i != 2)
    {
        int64_t var_1e8_1 = arg6 - 1;
        
        do
        {
            int128_t** var_1a8;
            int64_t var_198;
            int64_t var_138;
            char const* const var_130;
            int64_t var_128;
            int64_t var_120;
            int128_t var_b0;
            uint64_t var_a0;
            
            if (!(i & 1))
            {
                uint64_t var_148_1 = var_a0;
                int128_t var_158 = var_b0;
                alacritty::config::parse_config::hb79bebbd33e5efa7(&var_140, *var_158[8], var_a0, 
                    arg5, var_1e8_1);
                void* const r15_1 = var_140;
                rbp = r15_1 == 7;
                
                if (r15_1 != 7)
                {
                    char rax_8;
                    
                    if (r15_1 == 3)
                        rax_8 = std::io::error::Error::kind::h135fe00c4e7365f3(var_138);
                    
                    if (r15_1 == 3 && !rax_8)
                    {
                        int64_t var_1e0 = var_138;
                        
                        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
                            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
                        {
                            var_218 = var_158;
                            var_1d8 = &var_218;
                            int64_t (* var_1d0_3)(int128_t* arg1, int64_t* arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Debug$GT$::fmt::h805f8819fa6944ce;
                            var_1b8 = &data_c81ea0;
                            int64_t var_1b0_3 = 1;
                            var_198 = 0;
                            var_1a8 = &var_1d8;
                            int64_t var_1a0_3 = 1;
                            int64_t rax_14 =
                                log::__private_api::loc::h250021ea1f26630a(&data_c81ed0);
                            var_248 = "alacritty_config_derivealacritty…";
                            var_240 = 0x17;
                            *var_240[8] = "alacritty::configReloading confi…";
                            int64_t var_230_2 = 0x11;
                            int64_t var_228_2 = rax_14;
                            log::__private_api::log::h0b6680b994d742b1(&var_1b8, 3, &var_248);
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3428ae91bc3bac8a(
                            &var_1e0);
                        void* const rax_15 = var_140;
                        
                        if (rax_15 != 7 && rax_15 != 3)
                            core::ptr::drop_in_place$LT$alacritty..config..Error$GT$::hc0565752af3cd056(&var_140);
                    }
                    else
                    {
                        int64_t var_f0;
                        int64_t var_168_1 = var_f0;
                        int128_t var_100;
                        int128_t var_178_1 = var_100;
                        int128_t var_110;
                        int128_t var_188_1 = var_110;
                        var_198 = var_120;
                        var_1a8 = var_130;
                        var_1b8 = var_140;
                        
                        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
                            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0))
                        {
                            var_1d8 = &var_158;
                            int64_t (* var_1d0_2)(void* arg1, int64_t* arg2) = _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                            int128_t* const* var_1c8_1 = &var_1b8;
                            int64_t (* var_1c0_1)(int64_t* arg1, int64_t* arg2) = _$LT$alacritty..config..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h8f6deb2eaa2aacd3;
                            var_248 = &data_c81eb0;
                            var_240 = 2;
                            int64_t var_228_1 = 0;
                            *var_240[8] = &var_1d8;
                            int64_t var_230_1 = 2;
                            int64_t rax_11 =
                                log::__private_api::loc::h250021ea1f26630a(&data_c81ee8);
                            var_218 = "alacritty_config_derivealacritty…";
                            *var_218[8] = 0x17;
                            char const* const var_208_2 = "alacritty::configReloading confi…";
                            int64_t var_200_1 = 0x11;
                            int64_t var_1f8_1 = rax_11;
                            log::__private_api::log::h0b6680b994d742b1(&var_248, 1, &var_218);
                        }
                        
                        int32_t* r13;
                        r13 = 1;
                        core::ptr::drop_in_place$LT$alacritty..config..Error$GT$::hc0565752af3cd056(
                            &var_1b8);
                    }
                }
                else
                {
                    int128_t var_48_1 = var_128;
                    int128_t var_58 = var_138;
                    alacritty::config::serde_utils::merge::h0b6a4a70fea81bc1(&var_1b8, &var_e8, 
                        &var_58);
                    var_d8_1 = var_1a8;
                    var_e8 = var_1b8;
                }
                
                core::mem::drop::ha42964a555fb617b(&var_158);
            }
            else
            {
                *var_240[8] = var_a0;
                var_248 = var_b0;
                
                if (core::sync::atomic::atomic_load::h45f93311b58385bb(
                    &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0))
                {
                    var_218 = &var_248;
                    *var_218[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_1b8 = &data_4e8b60;
                    int64_t var_1b0_2 = 1;
                    var_198 = 0;
                    var_1a8 = &var_218;
                    int64_t var_1a0_2 = 1;
                    int64_t rax_7 = log::__private_api::loc::h250021ea1f26630a(&data_c81f00);
                    var_140 = "alacritty_config_derivealacritty…";
                    var_138 = 0x17;
                    var_130 = "alacritty::configReloading confi…";
                    var_128 = 0x11;
                    var_120 = rax_7;
                    log::__private_api::log::h0b6680b994d742b1(&var_1b8, 1, &var_140);
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_248);
            }
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h48ec69800376c184(&i_1, &var_78);
            i = i_1;
        } while (i != 2);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$core..result..Result$LT$std..path..PathBuf$C$alloc..string..String$GT$$GT$$GT$::h43a6db806a26cc75(&var_78);
    int128_t zmm0_2 = var_e8;
    *(arg1 + 0x10) = var_d8_1;
    *arg1 = zmm0_2;
    return arg1;
}
