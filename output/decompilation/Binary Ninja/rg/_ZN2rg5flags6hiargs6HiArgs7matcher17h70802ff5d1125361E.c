
  int64_t rg::flags::hiargs::HiArgs::matcher::h70802ff5d1125361(uint64_t* arg1, int32_t* arg2)

{
    uint32_t rax = arg2[0xe5];
    int64_t rax_9;
    int128_t zmm0_1;
    int128_t zmm1_1;
    int128_t zmm2_1;
    int128_t zmm3_1;
    char const* const var_218;
    char const (** const var_1c8)[0xb5];
    
    if (!rax)
    {
        int128_t var_160;
        rg::flags::hiargs::HiArgs::matcher_rust::h9492ce990c54230d(&var_160, arg2);
        char var_fd;
        
        if (var_fd == 2)
        {
            var_218 = var_160;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::had387940787aa39e(
                &var_1c8, &var_218);
            void var_28;
            rg::flags::hiargs::suggest_other_engine::h832cee4eee69fa39(&var_28, &var_1c8);
            *arg1 = anyhow::kind::Adhoc::new::h108351ff8f5d4b99(&var_28);
            *(arg1 + 0x63) = 2;
            return core::ptr::drop_in_place$LT$anyhow..Error$GT$::h25f51841f1014f37();
        }
        
        int64_t var_100;
        rax_9 = var_100;
        arg1[0xc] = rax_9;
        int128_t var_110;
        *(arg1 + 0x50) = var_110;
        int128_t var_120;
        *(arg1 + 0x40) = var_120;
        zmm0_1 = var_160;
        int128_t var_150;
        zmm1_1 = var_150;
        int128_t var_140;
        zmm2_1 = var_140;
        int128_t var_130;
        zmm3_1 = var_130;
    }
    else
    {
        int128_t var_1c0;
        int128_t var_1b0;
        int128_t var_1a0;
        
        if (rax != 1)
        {
            rg::flags::hiargs::HiArgs::matcher_pcre2::h790a55aab6c20aab(&var_1c8);
            uint64_t rcx = var_1c8;
            char var_165;
            
            if (var_165 == 2)
            {
                *arg1 = rcx;
                *(arg1 + 0x63) = 2;
                return var_165;
            }
            
            int128_t var_175;
            *(arg1 + 0x53) = var_175;
            int128_t var_180;
            *(arg1 + 0x48) = var_180;
            int128_t var_190;
            *(arg1 + 0x38) = var_190;
            *(arg1 + 0x28) = var_1a0;
            *(arg1 + 0x18) = var_1b0;
            *(arg1 + 8) = var_1c0;
            *arg1 = rcx;
            *(arg1 + 0x63) = var_165;
            int32_t var_164;
            *(arg1 + 0x64) = var_164;
            return var_165;
        }
        
        int128_t var_f8;
        rg::flags::hiargs::HiArgs::matcher_rust::h9492ce990c54230d(&var_f8, arg2);
        char var_95;
        
        if (var_95 == 2)
        {
            int64_t var_228 = var_f8;
            int64_t* var_1e8;
            
            if (core::sync::atomic::atomic_load::headb9992cbbd027a(
                &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
            {
                var_1e8 = &var_228;
                int64_t (* var_1e0_1)(int64_t* arg1, int64_t* arg2) = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::he8862a1212ccbd86;
                var_1c8 = &data_7eae40;
                var_1c0 = 1;
                *var_1b0[8] = 0;
                *var_1c0[8] = &var_1e8;
                var_1b0 = 1;
                int64_t rax_3 = log::__private_api::loc::h53b04f6fd0066707(&data_7eae50);
                var_218 = "rg::flags::hiargserror building …";
                int64_t var_210_1 = 0x11;
                char const* const var_208_1 = "rg::flags::hiargserror building …";
                int64_t var_200_1 = 0x11;
                int64_t var_1f8_1 = rax_3;
                log::__private_api::log::h124fdfc9e9ed7585(&var_1c8, 4, &var_218);
            }
            
            int128_t var_90;
            rg::flags::hiargs::HiArgs::matcher_pcre2::h790a55aab6c20aab(&var_90);
            char var_2d;
            
            if (var_2d != 2)
            {
                int64_t var_30;
                arg1[0xc] = var_30;
                int128_t var_40;
                *(arg1 + 0x50) = var_40;
                int128_t var_50;
                *(arg1 + 0x40) = var_50;
                int128_t zmm0_2 = var_90;
                int128_t var_60;
                *(arg1 + 0x30) = var_60;
                int128_t var_70;
                *(arg1 + 0x20) = var_70;
                int128_t var_80;
                *(arg1 + 0x10) = var_80;
                *arg1 = zmm0_2;
            }
            else
            {
                int64_t var_220 = var_90;
                alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h6004d655c3feac73(&var_1c8, 
                    "~regex could not be compiled wit…", 0x4f);
                int64_t var_1d8_1 = *var_1c0[8];
                var_1e8 = var_1c8;
                var_1c8 = &var_1e8;
                var_1c0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                *var_1c0[8] = &var_228;
                var_1b0 = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::he8862a1212ccbd86;
                *var_1b0[8] = &var_220;
                var_1a0 = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::he8862a1212ccbd86;
                var_218 = &data_7eae68;
                int64_t var_210_2 = 4;
                void* const var_1f8_2 = &data_487618;
                int64_t var_1f0_1 = 4;
                char const (** const* var_208_2)[0xb5] = &var_1c8;
                int64_t var_200_2 = 3;
                *arg1 = anyhow::__private::format_err::hd87f3faee3401bd9(&var_218);
                *(arg1 + 0x63) = 2;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_1e8);
                core::ptr::drop_in_place$LT$anyhow..Error$GT$::h25f51841f1014f37();
            }
            
            return core::ptr::drop_in_place$LT$anyhow..Error$GT$::h25f51841f1014f37();
        }
        
        int64_t var_98;
        rax_9 = var_98;
        arg1[0xc] = rax_9;
        int128_t var_a8;
        *(arg1 + 0x50) = var_a8;
        int128_t var_b8;
        *(arg1 + 0x40) = var_b8;
        zmm0_1 = var_f8;
        int128_t var_e8;
        zmm1_1 = var_e8;
        int128_t var_d8;
        zmm2_1 = var_d8;
        int128_t var_c8;
        zmm3_1 = var_c8;
    }
    *(arg1 + 0x30) = zmm3_1;
    *(arg1 + 0x20) = zmm2_1;
    *(arg1 + 0x10) = zmm1_1;
    *arg1 = zmm0_1;
    return rax_9;
}
