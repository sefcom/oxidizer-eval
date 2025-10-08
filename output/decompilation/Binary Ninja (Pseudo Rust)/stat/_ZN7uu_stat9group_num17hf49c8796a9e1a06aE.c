
  fn uu_stat::group_num::hf49c8796a9e1a06a(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut rbx: i64 = arg3;
    let mut r14: *mut c_void = arg2;
    let mut var_50: i32 = 0;
    let mut rax: *mut i8;
    let mut rdx: u64;
    rax = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_50);
    let rax_1: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::he427642b66178077(r14, 
        rbx, rax, rdx);
    
    if rax_1 == 0
    {
        var_50 = r14;
        let var_48_1: *mut c_void = r14.byte_offset(rbx);
        let var_40_1: i64 = 1;
        
        if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::heb96e2ce1b42c0f3(_$LT$core..iter..adapters..take..Take$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h58722b60cf20048e(&var_50)) == 0
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: is_negative ||…");
            /* no return */
        }
    }
    
    var_50 = r14;
    let var_48_2: *mut c_void = r14.byte_offset(rbx);
    let var_40_2: i64 = 1;
    let mut result: i64 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::heb96e2ce1b42c0f3(_$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hbbb272a2f22a6199(&var_50));
    
    if result == 0
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: s.chars().skip…");
        /* no return */
    }
    
    if rbx >= 4
    {
        let mut r13_1: i64 = rbx - 1;
        let mut rax_9: i64;
        let mut rdx_3: i64;
        rax_9 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h64b6c31f147b6cd7(
            r13_1 / 3, 1, 1);
        var_50 = rax_9;
        let var_48_3: i64 = rdx_3;
        let result_1: i64 = 0;
        
        if rax_1 == 0
        {
            goto 'label_473943;
        }
        
        alloc::string::String::push::h0ede46164189e411(&var_50, 0x2d);
        let mut r13_2: i64 = 1;
        let mut rax_10: *mut c_void;
        let mut rdx_5: i64;
        rax_10 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, r14, rbx);
        let mut r12_2: i64;
        
        if rax_10 == 0
        {
            r12_2 = rbx;
            'label_473a2e:
            core::str::slice_error_fail::h1a2885084e28d077(r14, rbx, r13_2, r12_2);
            /* no return */
        }
        
        r13_1 = rdx_5 - 1;
        rbx = rdx_5;
        r14 = rax_10;
        'label_473943:
        r12_2 = -((r13_1 / 3 * 3)) + r13_1 + 1;
        let mut rax_15: i64;
        let mut rdx_9: i64;
        rax_15 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r12_2, r14, rbx);
        
        if rax_15 == 0
        {
            r13_2 = 0;
            goto 'label_473a2e;
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hbc4458354b3c4ae2(&var_50, rax_15, rdx_9 + rax_15);
        r12_2 = -((r13_1 / 3 * 3)) + r13_1 + 4;
        
        while 1 - rbx + r12_2 != 4
        {
            alloc::string::String::push::h0ede46164189e411(&var_50, 0x2c);
            r13_2 = r12_2 - 3;
            let mut rax_21: *mut c_void;
            let mut rdx_14: *mut c_void;
            rax_21 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r13_2, r12_2, r14, rbx);
            
            if rax_21 == 0
            {
                goto 'label_473a2e;
            }
            
            r12_2 += 3;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hbc4458354b3c4ae2(&var_50, rax_21, rdx_14.byte_offset(rax_21));
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
    
    result
}
