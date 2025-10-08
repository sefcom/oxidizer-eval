
  int64_t fd::fmt::FormatTemplate::parse::hf8dc6f2b9acbeb6e(int64_t* arg1, void* arg2, void* arg3)

{
    void* r12 = arg3;
    void* r13 = arg2;
    int64_t var_a0 = 0;
    int64_t var_98 = 8;
    int64_t result = 0;
    int64_t var_c0 = 0;
    int64_t var_b8 = 1;
    int64_t var_b0 = 0;
    void* rax = std::sync::once_lock::OnceLock$LT$T$GT$::get_or_try_init::h77d73ffcdcd8c639();
    
    while (true)
    {
        int32_t var_78;
        aho_corasick::ahocorasick::AhoCorasick::try_find::h7a5fd104737965dc(&var_78, rax, r13);
        int32_t var_50;
        core::result::Result$LT$T$C$E$GT$::expect::h853440dbf80ed5f0(&var_50, &var_78);
        
        if (var_50 != 1)
            break;
        
        void* var_48;
        void* r15_1 = var_48;
        int32_t var_38;
        void* rax_1;
        void* rdx;
        void* var_40;
        
        if (var_38 >= 2)
        {
            void* rax_4;
            int64_t rdx_7;
            rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_40, r13, r12);
            
            if (!rax_4)
            {
                core::str::slice_error_fail::h1a2885084e28d077(r13, r12, var_40, r12);
                /* no return */
            }
            
            var_78 = 0;
            char* rax_5;
            uint64_t rdx_8;
            rax_5 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x7d, &var_78);
            r12 = r12;
            
            if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf20ef8fd404ea81d(rax_4, 
                rdx_7, rax_5, rdx_8))
            {
                int64_t rax_8;
                int64_t rdx_15;
                rax_8 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15_1, r13, r12);
                
                if (!rax_8)
                    goto label_5f5bd6;
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf1e3b0a0715a4abd(&var_c0, rax_8, rdx_15 + rax_8);
                
                if (var_b0)
                {
                    int64_t var_68_1 = var_b0;
                    var_78 = var_c0;
                    var_c0 = 0;
                    int64_t var_b8_1 = 1;
                    var_b0 = 0;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hfae91a531911040a(&var_a0, &var_78);
                }
                
                fd::fmt::token_from_pattern_id::h335ee60225c838fa(&var_78, var_38);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hfae91a531911040a(&var_a0, &var_78);
                rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_40, r13, r12);
                
                if (!rax_1)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(r13, r12, var_40, r12);
                    /* no return */
                }
            }
            else
            {
                r15_1 = var_40;
                int64_t rax_7;
                int64_t rdx_11;
                rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15_1, r13, r12);
                
                if (!rax_7)
                    goto label_5f5bd6;
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf1e3b0a0715a4abd(&var_c0, rax_7, rdx_11 + rax_7);
                rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_40 + 1, r13, r12);
                
                if (!rax_1)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(r13, r12, var_40 + 1, r12);
                    /* no return */
                }
            }
        }
        else
        {
            r15_1 += 1;
            int64_t rax_3;
            int64_t rdx_3;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15_1, r13, r12);
            
            if (!rax_3)
            {
                label_5f5bd6:
                core::str::slice_error_fail::h1a2885084e28d077(r13, r12, nullptr, r15_1);
                /* no return */
            }
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf1e3b0a0715a4abd(&var_c0, rax_3, rdx_3 + rax_3);
            rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_40, r13, r12);
            
            if (!rax_1)
            {
                core::str::slice_error_fail::h1a2885084e28d077(r13, r12, var_40, r12);
                /* no return */
            }
        }
        r12 = rdx;
        r13 = rax_1;
    }
    
    if (r12)
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf1e3b0a0715a4abd(&var_c0, r13, r12 + r13);
    
    if (!result)
    {
        arg1[3] = var_b0;
        *(arg1 + 8) = var_c0;
        *arg1 = 1;
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$fd..fmt..Token$GT$$GT$::h54d3355a0c3cb965(&var_a0);
    }
    
    if (!var_b0)
    {
        arg1[3] = result;
        *(arg1 + 8) = var_a0;
        *arg1 = 0;
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6194a405d9e61c9b(&var_c0);
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::push::hfae91a531911040a(&var_a0, &var_c0);
    arg1[3] = result;
    *(arg1 + 8) = var_a0;
    *arg1 = 0;
    return result;
}
