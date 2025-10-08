
  int64_t uu_stat::group_num::hf49c8796a9e1a06a(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t rbx = arg3;
    void* r14 = arg2;
    int32_t var_50 = 0;
    char* rax;
    uint64_t rdx;
    rax = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_50);
    char rax_1 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::he427642b66178077(r14, 
        rbx, rax, rdx);
    
    if (!rax_1)
    {
        var_50 = r14;
        void* var_48_1 = r14 + rbx;
        int64_t var_40_1 = 1;
        
        if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::heb96e2ce1b42c0f3(_$LT$core..iter..adapters..take..Take$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h58722b60cf20048e(&var_50)))
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: is_negative ||…");
            /* no return */
        }
    }
    
    var_50 = r14;
    void* var_48_2 = r14 + rbx;
    int64_t var_40_2 = 1;
    int64_t result = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::heb96e2ce1b42c0f3(_$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hbbb272a2f22a6199(&var_50));
    
    if (!result)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: s.chars().skip…");
        /* no return */
    }
    
    if (rbx >= 4)
    {
        int64_t r13_1 = rbx - 1;
        int64_t rax_9;
        int64_t rdx_3;
        rax_9 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h64b6c31f147b6cd7(
            r13_1 / 3, 1, 1);
        var_50 = rax_9;
        int64_t var_48_3 = rdx_3;
        int64_t result_1 = 0;
        
        if (!rax_1)
            goto label_473943;
        
        alloc::string::String::push::h0ede46164189e411(&var_50, 0x2d);
        int64_t r13_2 = 1;
        void* rax_10;
        int64_t rdx_5;
        rax_10 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, r14, rbx);
        int64_t r12_2;
        
        if (!rax_10)
        {
            r12_2 = rbx;
            label_473a2e:
            core::str::slice_error_fail::h1a2885084e28d077(r14, rbx, r13_2, r12_2);
            /* no return */
        }
        
        r13_1 = rdx_5 - 1;
        rbx = rdx_5;
        r14 = rax_10;
        label_473943:
        r12_2 = -((r13_1 / 3 * 3)) + r13_1 + 1;
        int64_t rax_15;
        int64_t rdx_9;
        rax_15 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r12_2, r14, rbx);
        
        if (!rax_15)
        {
            r13_2 = 0;
            goto label_473a2e;
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hbc4458354b3c4ae2(&var_50, rax_15, rdx_9 + rax_15);
        r12_2 = -((r13_1 / 3 * 3)) + r13_1 + 4;
        
        while (1 - rbx + r12_2 != 4)
        {
            alloc::string::String::push::h0ede46164189e411(&var_50, 0x2c);
            r13_2 = r12_2 - 3;
            void* rax_21;
            void* rdx_14;
            rax_21 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r13_2, r12_2, r14, rbx);
            
            if (!rax_21)
                goto label_473a2e;
            
            r12_2 += 3;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hbc4458354b3c4ae2(&var_50, rax_21, rdx_14 + rax_21);
        }
        
        result = result_1;
        arg1[2] = result;
        *arg1 = var_50;
    }
    else
    {
        arg1[1] = r14;
        arg1[2] = rbx;
        *arg1 = -0x8000000000000000;
    }
    
    return result;
}
