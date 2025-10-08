
  int64_t* uu_mktemp::Params::from::h79f2486a494e973a(int64_t* arg1, int128_t* arg2)

{
    int64_t rax_1 = arg2[3];
    char* rbp = *(arg2 + 8);
    int64_t rdx = arg2[1];
    int32_t var_178;
    bool cond:0_1;
    
    if (-(rax_1) != -0x8000000000000000)
    {
        var_178 = 0;
        cond:0_1 = !core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hce4324c85153fc81(rbp, 
            rdx, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x58, &var_178));
    }
    
    if (-(rax_1) != -0x8000000000000000 && cond:0_1)
    {
        arg1[1] = -0x7fffffffffffffff;
        *(arg1 + 0x10) = *arg2;
        arg1[4] = arg2[1];
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h92010b458ccdc0ce(arg2 + 0x18);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::he610de4c4ff4ed65(&arg2[3]);
    }
    else
    {
        int32_t var_58;
        uu_mktemp::find_last_contiguous_block_of_xs::h8d96f8bfdfc9b9d5(&var_58, rbp, rdx);
        int128_t var_1a8;
        int64_t var_198;
        
        if (var_58 != 1)
        {
            if (rax_1 != -0x8000000000000000)
            {
                var_178 = rbp;
                void* var_170_1 = &rbp[rdx];
                int64_t var_168_1 = rdx;
                core::iter::traits::iterator::Iterator::collect::h4f4da201e1fe28f0(&var_1a8, 
                    &var_178);
            }
            else
            {
                var_198 = arg2[1];
                var_1a8 = *arg2;
            }
            
            arg1[4] = var_198;
            *(arg1 + 0x10) = var_1a8;
            arg1[1] = -0x7ffffffffffffffe;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h92010b458ccdc0ce(arg2 + 0x18);
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::he610de4c4ff4ed65(&arg2[3]);
            
            if (rax_1 != -0x8000000000000000)
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(arg2);
        }
        else
        {
            uint64_t rax_6 = *(arg2 + 0x28);
            int128_t var_f8 = *(arg2 + 0x18);
            int64_t r13_1 = var_f8;
            int64_t var_170;
            int64_t rax_7;
            
            if (r13_1 != -0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h5e9a9c3d89a1dce2(&var_178, *var_f8[8], rax_6);
                rax_7 = var_178;
                var_1a8 = var_170;
            }
            
            int64_t var_118;
            int64_t var_110;
            uint64_t var_108;
            
            if (r13_1 != -0x8000000000000000 && rax_7 != -0x8000000000000000)
            {
                var_110 = var_1a8;
                var_118 = rax_7;
            }
            else
            {
                var_118 = 0;
                var_110 = 1;
                var_108 = 0;
            }
            
            int64_t var_50;
            char* rax_12;
            void* rdx_4;
            rax_12 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(var_50, rbp, rdx);
            
            if (!rax_12)
            {
                core::str::slice_error_fail::h1a2885084e28d077(rbp, rdx, 0, var_50);
                /* no return */
            }
            
            std::path::Path::join::h54ca0a2412d4ea69(&var_178, var_110, var_108, rax_12);
            var_1a8 = var_170;
            int128_t var_a0;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hbac688a0c4ef4a45(
                &var_a0, &var_1a8);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h4af838b51e1cae1b(&var_178);
            char rax_13;
            
            if (*(arg2 + 0x4b))
                rax_13 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(rax_12, rdx_4);
            
            int64_t rax_14;
            void* r14_3;
            
            if (!*(arg2 + 0x4b) || !rax_13)
            {
                char rax_15;
                
                if (r13_1 != -0x8000000000000000)
                    rax_15 = std::path::Path::is_absolute::hf2dacc49683e82ac(rax_12, rdx_4);
                
                if (r13_1 != -0x8000000000000000 && rax_15)
                {
                    rax_14 = -0x7ffffffffffffffb;
                    goto label_464f1b;
                }
                
                var_178 = 0;
                int64_t var_98;
                int64_t var_90;
                char rax_18 =
                    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hce4324c85153fc81(
                    var_98, var_90, 
                    core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2f, &var_178));
                int128_t var_b8;
                int64_t var_a8_1;
                int64_t rax_20;
                int64_t rcx_2;
                uint64_t rdx_7;
                
                if (!rax_18)
                {
                    char* rax_21;
                    int64_t rdx_8;
                    rax_21 = std::path::Path::parent::hef287f60afa56900(var_98, var_90);
                    
                    if (!rax_21)
                    {
                        var_1a8 = 0;
                        *var_1a8[8] = 1;
                        var_198 = 0;
                    }
                    else
                    {
                        var_178 = rax_21;
                        var_170 = rdx_8;
                        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hbac688a0c4ef4a45(&var_1a8, &var_178);
                    }
                    
                    char* rax_22;
                    int64_t rdx_9;
                    rax_22 = std::path::Path::file_name::h6d40d88bf3fb287a(var_98, var_90);
                    
                    if (!rax_22)
                    {
                        rax_20 = 1;
                        rcx_2 = 0;
                        rdx_7 = 0;
                    }
                    else
                    {
                        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_178, rax_22, rdx_9);
                        
                        if (var_178 & 1)
                        {
                            core::option::unwrap_failed::h893f57cb7db71cb7();
                            /* no return */
                        }
                        
                        uint64_t var_168;
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3c498dae33407f89(&var_178, var_170, var_168);
                        rcx_2 = var_178;
                        rax_20 = var_170;
                        rdx_7 = var_168;
                    }
                    
                    var_a8_1 = var_198;
                    var_b8 = var_1a8;
                }
                else
                {
                    var_a8_1 = var_90;
                    var_b8 = var_a0;
                    rax_20 = 1;
                    rcx_2 = 0;
                    rdx_7 = 0;
                }
                
                int64_t var_70 = rcx_2;
                int64_t var_68_1 = rax_20;
                int64_t rax_23;
                
                if (rax_1 != -0x8000000000000000)
                {
                    rax_23 = rax_1;
                    int128_t var_80_1 = *(arg2 + 0x38);
                }
                else
                {
                    int128_t var_80;
                    var_80 = 1;
                    *var_80[8] = 0;
                    rax_23 = 0;
                }
                
                int64_t var_88 = rax_23;
                void* var_48;
                void* rax_24;
                int64_t rdx_12;
                rax_24 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_48, rbp, rdx);
                
                if (!rax_24)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(rbp, rdx, var_48, rdx);
                    /* no return */
                }
                
                void* var_40 = rax_24;
                int64_t var_38_1 = rdx_12;
                var_1a8 = &var_40;
                *var_1a8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6e4bdad1b13e5d00;
                int64_t* var_198_1 = &var_88;
                int64_t (* var_190_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_178 = &data_41b210;
                int64_t var_170_2 = 2;
                int64_t var_158_1 = 0;
                int128_t* var_168_2 = &var_1a8;
                int64_t var_160_1 = 2;
                core::option::Option$LT$T$GT$::map_or_else::h00d6975f0c0267a7(&var_58, &var_178);
                int128_t zmm0_7 = var_58;
                
                if (_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(*zmm0_7[8], var_48))
                {
                    arg1[4] = var_48;
                    *(arg1 + 0x10) = zmm0_7;
                    arg1[1] = -0x7ffffffffffffffc;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(
                        &var_88);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(
                        &var_70);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(
                        &var_b8);
                    rbp = 1;
                    r14_3 = nullptr;
                    
                    if (rax_18)
                        goto label_46520a;
                    
                    goto label_4651fd;
                }
                
                int128_t zmm0_8 = var_b8;
                var_178 = zmm0_8;
                var_160_1 = var_70;
                void* var_138_1 = var_48;
                int128_t var_148_1 = zmm0_7;
                arg1[8] = var_48;
                *(arg1 + 0x30) = zmm0_7;
                *arg1 = zmm0_8;
                arg1[4] = var_158_1;
                arg1[5] = rdx_7;
                *(arg1 + 0x10) = var_a8_1;
                arg1[9] = var_48 - var_50;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(&var_88);
                
                if (!rax_18)
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(
                        &var_a0);
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h4af838b51e1cae1b(&var_118);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h92010b458ccdc0ce(&var_f8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(arg2);
            }
            else
            {
                rax_14 = -0x7ffffffffffffffd;
                label_464f1b:
                arg1[1] = rax_14;
                *(arg1 + 0x10) = *arg2;
                arg1[4] = arg2[1];
                *arg1 = -0x8000000000000000;
                r14_3 = 1;
                rbp = nullptr;
                label_4651fd:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(&var_a0);
                label_46520a:
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h4af838b51e1cae1b(&var_118);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h92010b458ccdc0ce(&var_f8);
                
                if (r14_3)
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::he610de4c4ff4ed65(&arg2[3]);
                
                if (rbp)
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(arg2);
            }
        }
    }
    
    return arg1;
}
