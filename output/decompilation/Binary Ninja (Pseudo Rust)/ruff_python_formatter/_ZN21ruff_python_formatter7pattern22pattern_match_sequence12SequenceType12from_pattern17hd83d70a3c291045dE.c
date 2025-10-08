
  fn ruff_python_formatter::pattern::pattern_match_sequence::SequenceType::from_pattern::hd83d70a3c291045d(arg1: *mut c_void, arg2: *mut i8, arg3: i64) -> i64

{
    let rbp: i32 = *arg1.byte_offset(0x18);
    let mut r13: *mut c_void = arg1.byte_offset(0x1c);
    let r12: i64 = *arg1.byte_offset(0x10);
    let mut rax: *mut c_void = r13;
    
    if r12 != 0
    {
        let rax_1: *mut i64 = *arg1.byte_offset(8);
        let rcx_2: i64 = *rax_1 ^ 0x8000000000000000;
        let mut rdx: i64 = 3;
        
        if rcx_2 < 8
        {
            rdx = rcx_2;
        }
        
        match rdx
        {
            0 =>
            {
                rax = &rax_1[2];
            }
            1 | 5 | 6 =>
            {
                rax = &rax_1[1];
            }
            2 | 7 =>
            {
                rax = &rax_1[4];
            }
            3 =>
            {
                rax = &rax_1[0xb];
            }
            4 =>
            {
                rax = &rax_1[0xa];
            }
        }
    }
    
    let rsi: i32 = *rax;
    
    if rbp > rsi
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    let mut rax_2: u64;
    let mut rdx_3: i64;
    rax_2 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rbp, rsi);
    let mut rax_3: *mut c_void;
    let mut rdx_5: i64;
    rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_2, rdx_3, arg2, arg3);
    
    if rax_3 == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, rax_2, rdx_3);
        /* no return */
    }
    
    if r12 != 0
    {
        let r13_1: *mut i64 = *arg1.byte_offset(8);
        let rax_5: i64 = *r13_1 ^ 0x8000000000000000;
        let mut rcx_4: i64 = 3;
        
        if rax_5 < 8
        {
            rcx_4 = rax_5;
        }
        
        match rcx_4
        {
            0 =>
            {
                r13 = r13_1.byte_offset(0x14);
            }
            1 | 5 | 6 =>
            {
                r13 = r13_1.byte_offset(0xc);
            }
            2 | 7 =>
            {
                r13 = r13_1.byte_offset(0x24);
            }
            3 =>
            {
                r13 = r13_1.byte_offset(0x5c);
            }
            4 =>
            {
                r13 = r13_1.byte_offset(0x54);
            }
        }
    }
    
    let rsi_2: i32 = *r13;
    
    if rbp > rsi_2
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    let mut rax_6: u64;
    let mut rdx_6: i64;
    rax_6 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rbp, rsi_2);
    let mut rax_7: *mut c_void;
    let mut rdx_8: i64;
    rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_6, rdx_6, arg2, arg3);
    
    if rax_7 == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, rax_6, rdx_6);
        /* no return */
    }
    
    let mut var_bc: i32 = 0;
    let mut rax_8: *mut i8;
    let mut rdx_9: u64;
    rax_8 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x5b, &var_bc);
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(rax_3, rdx_5, 
        rax_8, rdx_9) != 0
    {
        var_bc = 0;
        let mut rax_10: *mut i8;
        let mut rdx_11: u64;
        rax_10 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2c, &var_bc);
        
        if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h74aadde88527fc22(rax_7, rdx_8, 
            rax_10, rdx_11) == 0
        {
            return 0;
        }
    }
    
    var_bc = 0;
    let mut rax_12: *mut i8;
    let mut rdx_13: u64;
    rax_12 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x28, &var_bc);
    let mut result: i64;
    result = 2;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(rax_3, rdx_5, 
        rax_12, rdx_13) != 0
    {
        if *arg1.byte_offset(0x10) == 0
        {
            result = 1;
        }
        else
        {
            let r14_3: *mut i64 = *arg1.byte_offset(8);
            let rcx_12: i32 = *arg1.byte_offset(0x18);
            let mut rax_14: i64 = *r14_3 ^ 0x8000000000000000;
            let mut r15_1: i64 = 3;
            
            if rax_14 >= 8
            {
                rax_14 = 3;
            }
            
            let r8_1: i32 = *r14_3.byte_offset(*(&data_48d5d0).byte_offset(rax_14 << 3));
            
            if rcx_12 > r8_1
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            let mut var_60: ();
            ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg2, 
                arg3, rcx_12, r8_1);
            let rax_16: i64 =
                core::iter::traits::iterator::Iterator::fold::h84b128d4ad72991a(&var_60);
            let r12_2: i64 = -0x8000000000000000 ^ *r14_3;
            
            if r12_2 < 8
            {
                r15_1 = r12_2;
            }
            
            let rcx_13: i32 = *r14_3.byte_offset(*(&data_48d590).byte_offset(r15_1 << 3));
            let mut var_98: ();
            ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_98, arg2, 
                arg3, rcx_13, rcx_13);
            let var_68_1: i8 = 0;
            result = 2;
            result = 2 - 0;
        }
    }
    
    result
}
