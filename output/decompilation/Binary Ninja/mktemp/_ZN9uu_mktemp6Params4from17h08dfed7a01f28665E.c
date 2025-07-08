
  int64_t* uu_mktemp::Params::from::h08dfed7a01f28665(int64_t* arg1, int128_t* arg2)

{
    void* r14;
    void* var_18 = r14;
    int64_t r12;
    int64_t var_28 = r12;
    int32_t var_178;
    char rax_2;
    
    if (arg2[3] != -0x8000000000000000)
    {
        r14 = *(arg2 + 8);
        r12 = arg2[1];
        var_178 = 0;
        int64_t rax_1;
        uint64_t rdx_1;
        rax_1 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x58, &var_178);
        rax_2 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h133ed96069defad3(r14, r12, 
            rax_1, rdx_1);
    }
    
    if (arg2[3] != -0x8000000000000000 && !rax_2)
    {
        arg1[3] = arg2[1];
        *(arg1 + 8) = *arg2;
        arg1[4] = -0x7fffffffffffffff;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(arg2 + 0x18);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::habc7c620b4b38486(&arg2[3]);
    }
    else
    {
        int64_t var_128;
        uu_mktemp::find_last_contiguous_block_of_xs::h8856c2687abea15a(&var_128, *(arg2 + 8), 
            arg2[1]);
        int128_t var_198;
        int64_t var_188;
        
        if (!var_128)
        {
            if (arg2[3] != -0x8000000000000000)
            {
                int64_t rax_9 = *(arg2 + 8);
                int64_t rcx_2 = arg2[1];
                var_178 = rax_9;
                int64_t var_170_1 = rax_9 + rcx_2;
                int64_t var_168_1 = rcx_2;
                _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h880836f94e14e84d(&var_198, &var_178);
                r14 = 1;
            }
            else
            {
                var_188 = arg2[1];
                var_198 = *arg2;
                r14 = nullptr;
            }
            
            arg1[3] = var_188;
            *(arg1 + 8) = var_198;
            arg1[4] = -0x7ffffffffffffffe;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(arg2 + 0x18);
            goto label_4bf6a0;
        }
        
        int64_t var_b8_1 = *(arg2 + 0x28);
        int128_t var_c8 = *(arg2 + 0x18);
        int64_t var_170;
        int64_t var_f8;
        int64_t var_f0;
        size_t var_e8;
        
        if (var_c8 == -0x8000000000000000)
        {
            label_4bf163:
            var_f8 = 0;
            var_f0 = 1;
            var_e8 = 0;
        }
        else
        {
            r12 = 1;
            r14 = 1;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0e8a4977c3ae2c93(&var_178, &var_c8);
            int64_t rax_5 = var_178;
            var_198 = var_170;
            
            if (rax_5 == -0x8000000000000000)
                goto label_4bf163;
            
            var_f0 = var_198;
            var_f8 = rax_5;
        }
        
        char* rbp_1 = *(arg2 + 8);
        void* var_120;
        
        if (var_120)
        {
            void* rsi_5 = arg2[1];
            
            if (var_120 >= rsi_5)
            {
                if (var_120 != rsi_5)
                {
                    label_4bf269:
                    r12 = 1;
                    r14 = 1;
                    core::str::slice_error_fail::h5dbb61534404fe7e(rbp_1, rsi_5, nullptr, var_120);
                    /* no return */
                }
            }
            else if (*(rbp_1 + var_120) <= 0xbf)
                goto label_4bf269;
        }
        
        r12 = 1;
        r14 = 1;
        std::path::Path::join::hac25b276bfec4f36(&var_178, var_f0, var_e8, rbp_1);
        var_198 = var_170;
        int128_t var_e0;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb2b1bff17e4619f7(&var_e0, 
            &var_198);
        int64_t rax_12;
        rax_12 = 1;
        int64_t var_108_1 = rax_12;
        r12 = 1;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&var_178);
        char rax_13;
        
        if (*(arg2 + 0x4b))
        {
            r12 = 1;
            rax_13 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(rbp_1, var_120);
        }
        
        int64_t rax_14;
        
        if (!*(arg2 + 0x4b) || !rax_13)
        {
            if (var_c8 != -0x8000000000000000)
            {
                r12 = 1;
                
                if (std::path::Path::is_absolute::h3431a23d91045560(rbp_1, var_120))
                {
                    rax_14 = -0x7ffffffffffffffb;
                    goto label_4bf345;
                }
            }
            
            var_178 = 0;
            r12 = 1;
            int64_t rax_16;
            uint64_t rdx_5;
            rax_16 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2f, &var_178);
            r12 = 1;
            int64_t var_d8;
            int64_t var_d0;
            char rax_17 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h133ed96069defad3(
                var_d8, var_d0, rax_16, rdx_5);
            int64_t var_168_2;
            int64_t rax_19;
            int64_t rcx_7;
            uint64_t rdx_7;
            
            if (!rax_17)
            {
                r12 = 1;
                char* rax_20;
                int64_t rdx_8;
                rax_20 = std::path::Path::parent::h65c9a340a6266f2d(var_d8, var_d0);
                
                if (!rax_20)
                {
                    var_198 = 0;
                    *var_198[8] = 1;
                    var_188 = 0;
                }
                else
                {
                    var_178 = rax_20;
                    var_170 = rdx_8;
                    r12 = 1;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb2b1bff17e4619f7(
                        &var_198, &var_178);
                }
                
                char* rax_21;
                int64_t rdx_9;
                rax_21 = std::path::Path::file_name::h79ecbb7850a9c7f3(var_d8, var_d0);
                
                if (!rax_21)
                {
                    rax_19 = 1;
                    rcx_7 = 0;
                    rdx_7 = 0;
                }
                else
                {
                    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_178, rax_21, rdx_9);
                    
                    if (var_178)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    uint64_t var_168;
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf2364d4dece97e39(
                        &var_178, var_170, var_168);
                    rcx_7 = var_178;
                    rax_19 = var_170;
                    rdx_7 = var_168;
                }
                
                var_168_2 = var_188;
                var_178 = var_198;
                int64_t rsi_17;
                rsi_17 = 1;
                int64_t var_108_3 = rsi_17;
            }
            else
            {
                var_168_2 = var_d0;
                var_178 = var_e0;
                rax_19 = 1;
                int64_t var_108_2 = 0;
                rcx_7 = 0;
                rdx_7 = 0;
            }
            
            int128_t var_78 = var_178;
            int64_t var_90 = rcx_7;
            int64_t var_88_1 = rax_19;
            int64_t rax_23 = arg2[3];
            
            if (rax_23 != -0x8000000000000000)
                int128_t var_a0_1 = *(arg2 + 0x38);
            else
            {
                int128_t var_a0;
                var_a0 = 1;
                *var_a0[8] = 0;
                rax_23 = 0;
            }
            
            int64_t var_a8 = rax_23;
            char* rbp_4 = *(arg2 + 8);
            r14 = arg2[1];
            void* var_118;
            void* rax_24;
            int64_t rdx_12;
            rax_24 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(var_118, rbp_4, r14);
            
            if (!rax_24)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(rbp_4, r14, var_118, r14);
                /* no return */
            }
            
            void* var_58 = rax_24;
            int64_t var_50_1 = rdx_12;
            var_198 = &var_58;
            *var_198[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
            int64_t* var_188_1 = &var_a8;
            int64_t (* var_180_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_41a7a8;
            int64_t var_170_2 = 2;
            int64_t var_158_1 = 0;
            int128_t* var_168_3 = &var_198;
            int64_t var_160_1 = 2;
            int128_t var_48;
            core::option::Option$LT$T$GT$::map_or_else::hcc2932731f604033(&var_48, &var_178);
            var_128 = var_48;
            void* var_38;
            
            if (_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(var_120, var_38))
            {
                arg1[3] = var_38;
                *(arg1 + 8) = var_128;
                arg1[4] = -0x7ffffffffffffffc;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_a8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_90);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_78);
                r14 = 1;
                r12 = 0;
                
                if (rax_17)
                    goto label_4bf684;
                
                goto label_4bf677;
            }
            
            int128_t zmm0_7 = var_78;
            var_178 = zmm0_7;
            var_160_1 = var_90;
            void* var_138_1 = var_38;
            int128_t zmm1_1 = var_128;
            int128_t var_148_1 = zmm1_1;
            arg1[8] = var_38;
            *(arg1 + 0x30) = zmm1_1;
            *arg1 = zmm0_7;
            arg1[4] = var_158_1;
            arg1[5] = rdx_7;
            *(arg1 + 0x10) = var_168_2;
            arg1[9] = var_118 - var_120;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_a8);
            
            if (!rax_17)
            {
                r14 = 1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_e0);
            }
            
            r14 = 1;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&var_f8);
            r14 = 1;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(&var_c8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(arg2);
        }
        else
        {
            rax_14 = -0x7ffffffffffffffd;
            label_4bf345:
            arg1[3] = arg2[1];
            *(arg1 + 8) = *arg2;
            arg1[4] = rax_14;
            *arg1 = -0x8000000000000000;
            r12 = 1;
            r14 = nullptr;
            label_4bf677:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_e0);
            label_4bf684:
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&var_f8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(&var_c8);
            
            if (r12)
            {
                label_4bf6a0:
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::habc7c620b4b38486(&arg2[3]);
            }
            
            if (r14)
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(arg2);
        }
    }
    
    return arg1;
}
