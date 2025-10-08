
  int64_t uu_csplit::patterns::extract_patterns::h928579bbd5018ce5(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t rax;
    int64_t rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::hb297da055ad6cb1b(arg3, 8, 0x38);
    int64_t var_118 = rax;
    int64_t var_110 = rdx;
    int64_t var_108 = 0;
    int128_t var_1d8;
    regex::regex::string::Regex::new::h830f62d081924685(&var_1d8, 
        "^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)…");
    void var_70;
    core::result::Result$LT$T$C$E$GT$::unwrap::hd43abd6e025e2b39(&var_70, &var_1d8);
    int32_t rax_1;
    rax_1 = 1;
    int32_t var_1e4 = rax_1;
    regex::regex::string::Regex::new::h830f62d081924685(&var_1d8, 
        "^\{(?P<TIMES>\d+)|\*\}$/home/34r…");
    void var_50;
    core::result::Result$LT$T$C$E$GT$::unwrap::hd43abd6e025e2b39(&var_50, &var_1d8);
    void* rax_3 = arg2 + arg3 * 0x18;
    void* var_128 = arg2;
    char rax_4 = 0;
    
    while (true)
    {
        void* var_130;
        void* r13_1 = var_130;
        int64_t var_138 = 0;
        
        if (!(rax_4 & 1))
        {
            r13_1 = var_128;
            
            if (r13_1 == rax_3)
            {
                label_520e96:
                arg1[3] = var_108;
                *(arg1 + 8) = var_118;
                *arg1 = 0xd;
                int32_t var_1e4_1 = 0;
                core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h2b486921155c886a(
                    &var_50);
                return 
                    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h2b486921155c886a(
                    &var_70);
            }
            
            var_128 = r13_1 + 0x18;
        }
        else if (!r13_1)
            goto label_520e96;
        
        void* rax_7 = *core::option::Option$LT$T$GT$::get_or_insert_with::hebf8dc8ccd364aa5(
            &var_138, &var_128);
        int64_t var_1f0_1;
        int128_t var_1c8;
        char var_190;
        int64_t var_188;
        int64_t var_180;
        int32_t var_e0;
        int128_t var_d0;
        int128_t var_c0;
        int128_t var_b0;
        int64_t var_a0;
        int64_t rbx_1;
        
        if (!rax_7)
        {
            rbx_1 = 1;
            var_1f0_1 = 1;
        }
        else
        {
            regex::regex::string::Regex::captures_at::hcab2228dfbb616d4(&var_e0, &var_50, 
                *(rax_7 + 8), *(rax_7 + 0x10));
            rbx_1 = 1;
            var_1f0_1 = 1;
            
            if (var_e0 != 2)
            {
                int128_t zmm0_2 = var_e0;
                int128_t var_1b8_1 = var_c0;
                var_1c8 = var_d0;
                var_1d8 = zmm0_2;
                bool cond:1_1 = var_138 & 1;
                var_138 = 0;
                
                if (!cond:1_1)
                {
                    void* rax_9 = var_128;
                    
                    if (rax_9 != rax_3)
                        var_128 = rax_9 + 0x18;
                }
                
                regex_automata::util::captures::Captures::get_group_by_name::h8f90aac536405334(
                    &var_190, &var_1c8);
                
                if (!(var_190 & 1))
                    var_1f0_1 = 0;
                else
                {
                    char* r14_1 = *var_b0[8];
                    void* rax_11;
                    int64_t rdx_5;
                    rax_11 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(var_188, var_180, r14_1, var_a0);
                    
                    if (!rax_11)
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(r14_1, var_a0, var_188, 
                            var_180);
                        /* no return */
                    }
                    
                    core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                        &var_190, rax_11, rdx_5);
                    rbx_1 =
                        core::result::Result$LT$T$C$E$GT$::unwrap::hf95dfc8d9c334a81(&var_190) + 1;
                    var_1f0_1 = 1;
                }
                
                core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h1a91c97dafa9aa99(
                    &var_1d8);
            }
        }
        
        regex::regex::string::Regex::captures_at::hcab2228dfbb616d4(&var_e0, &var_70, *(r13_1 + 8), 
            *(r13_1 + 0x10));
        
        if (var_e0 != 2)
        {
            int128_t zmm0_3 = var_e0;
            int128_t var_1b8_2 = var_c0;
            var_1c8 = var_d0;
            var_1d8 = zmm0_3;
            regex_automata::util::captures::Captures::get_group_by_name::h8f90aac536405334(
                &var_190, &var_1c8);
            int64_t rbp_1;
            int64_t r12_2;
            int64_t r14_2;
            char* r15_2;
            int32_t var_1f4_1;
            
            if (!(var_190 & 1))
            {
                var_1f4_1 = 0;
                label_520bda:
                regex_automata::util::captures::Captures::get_group_by_name::h8f90aac536405334(
                    &var_190, &var_1c8);
                int128_t var_178;
                int128_t var_158_1;
                int128_t var_148_1;
                int64_t var_100;
                void var_f8;
                int128_t var_f0;
                int64_t rax_21;
                
                if (var_190 != 1)
                {
                    regex_automata::util::captures::Captures::get_group_by_name::h8f90aac536405334(
                        &var_190, &var_1c8);
                    
                    if (!(var_190 & 1))
                        goto label_520e77;
                    
                    r15_2 = *var_b0[8];
                    r14_2 = var_a0;
                    rbp_1 = var_188;
                    r12_2 = var_180;
                    void* rax_20 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbp_1, r12_2, r15_2, r14_2);
                    
                    if (rax_20)
                    {
                        regex::regex::string::Regex::new::h830f62d081924685(&var_100, rax_20);
                        
                        if (!var_100)
                        {
                            uu_csplit::patterns::extract_patterns::_$u7b$$u7b$closure$u7d$$u7d$::h292cec365962b576(&var_190, r13_1, &var_f8);
                            rax_21 = var_190;
                            var_158_1 = var_188;
                            var_148_1 = var_178;
                            
                            if (rax_21 != 0xd)
                                goto label_520f12;
                        }
                        else
                        {
                            var_148_1 = var_f0;
                            var_158_1 = var_100;
                        }
                        
                        int128_t var_88_2 = var_148_1;
                        int128_t var_98_2 = var_158_1;
                        var_178 = var_148_1;
                        var_188 = var_158_1;
                        int32_t var_18c_2 = var_1f4_1;
                        int64_t var_168_2 = var_1f0_1;
                        int64_t var_160_2 = rbx_1;
                        var_190 = 2;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h4d7a41e11383ce2f(&var_118, &var_190);
                        goto label_520e77;
                    }
                }
                else
                {
                    r15_2 = *var_b0[8];
                    r14_2 = var_a0;
                    rbp_1 = var_188;
                    r12_2 = var_180;
                    void* rax_19 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbp_1, r12_2, r15_2, r14_2);
                    
                    if (rax_19)
                    {
                        regex::regex::string::Regex::new::h830f62d081924685(&var_100, rax_19);
                        
                        if (var_100)
                        {
                            var_148_1 = var_f0;
                            var_158_1 = var_100;
                            label_520d78:
                            int128_t var_88_1 = var_148_1;
                            int128_t var_98_1 = var_158_1;
                            var_178 = var_148_1;
                            var_188 = var_158_1;
                            int32_t var_18c_1 = var_1f4_1;
                            int64_t var_168_1 = var_1f0_1;
                            int64_t var_160_1 = rbx_1;
                            var_190 = 1;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h4d7a41e11383ce2f(&var_118, 
                                &var_190);
                            label_520e77:
                            core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h1a91c97dafa9aa99(&var_1d8);
                            rax_4 = var_138;
                            continue;
                        }
                        
                        uu_csplit::patterns::extract_patterns::_$u7b$$u7b$closure$u7d$$u7d$::h292cec365962b576(&var_190, r13_1, &var_f8);
                        rax_21 = var_190;
                        var_158_1 = var_188;
                        var_148_1 = var_178;
                        
                        if (rax_21 == 0xd)
                            goto label_520d78;
                        
                        label_520f12:
                        int128_t var_88_3 = var_148_1;
                        int128_t var_98_3 = var_158_1;
                        *(arg1 + 0x18) = var_148_1;
                        *(arg1 + 8) = var_158_1;
                        *arg1 = rax_21;
                        core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h1a91c97dafa9aa99(&var_1d8);
                        break;
                    }
                }
            }
            else
            {
                r15_2 = *var_b0[8];
                r14_2 = var_a0;
                rbp_1 = var_188;
                r12_2 = var_180;
                void* rax_16;
                int64_t rdx_10;
                rax_16 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbp_1, r12_2, r15_2, r14_2);
                
                if (rax_16)
                {
                    var_1f4_1 = core::result::Result$LT$T$C$E$GT$::unwrap::h542ec9408ccec41a(
                        core::num::_$LT$impl$u20$i32$GT$::from_ascii_radix::h8c416a74051ba1e6(
                        rax_16, rdx_10));
                    goto label_520bda;
                }
            }
            core::str::slice_error_fail::h1a2885084e28d077(r15_2, r14_2, rbp_1, r12_2);
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$regex..regex..string..Captures$GT$$GT$::h7e9a5be73d043bac(&var_e0);
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_e0, 
            *(r13_1 + 8), *(r13_1 + 0x10));
        
        if (var_e0 == 1)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_1d8, r13_1);
            arg1[3] = var_1c8;
            *(arg1 + 8) = var_1d8;
            *arg1 = 7;
            break;
        }
        
        int64_t var_d8;
        *var_1d8[8] = var_d8;
        var_1c8 = var_1f0_1;
        *var_1c8[8] = rbx_1;
        var_1d8 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h4d7a41e11383ce2f(&var_118, &var_1d8);
        rax_4 = var_138;
    }
    
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h2b486921155c886a(&var_50);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h2b486921155c886a(&var_70);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_csplit..patterns..Pattern$GT$$GT$::hb8a5ba762c76bd0b(&var_118);
}
