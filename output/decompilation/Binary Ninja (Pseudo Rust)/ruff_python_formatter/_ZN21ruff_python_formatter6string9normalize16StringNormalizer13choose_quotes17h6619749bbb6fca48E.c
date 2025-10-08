
  fn ruff_python_formatter::string::normalize::StringNormalizer::choose_quotes::h6619749bbb6fca48(arg1: *mut u64, arg2: *mut i64, arg3: i32, arg4: i64, arg5: *mut c_void) -> *mut u64

{
    let mut var_68: i64 = arg4;
    let r14: *mut i8 = *arg2;
    let r12: i64 = arg2[1];
    let mut rax: i32;
    let mut rdx: i32;
    rax = ruff_python_ast::expression::StringLikePart::content_range::he2557f5203d115c0(arg4, arg5);
    let mut rax_1: u64;
    let mut rdx_1: i64;
    rax_1 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rax, rdx);
    let mut rax_2: *mut c_void;
    let mut rdx_3: i64;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_1, rdx_1, r14, r12);
    
    if rax_2 == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(r14, r12, rax_1, rdx_1);
        /* no return */
    }
    
    let mut var_58: *mut c_void = rax_2;
    let var_50: *mut c_void = rax_2.byte_offset(rdx_3);
    let mut var_38: i64 = 0;
    let mut rax_4: i32;
    let mut rdx_4: i64;
    rax_4 = core::iter::traits::iterator::Iterator::try_fold::hf02c8f78cfc17381(&var_58, &var_38);
    let mut rbp_1: i8 =
        ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_68);
    let mut rax_6: i8 = ruff_python_formatter::string::normalize::StringNormalizer::preferred_quote_style::h4147ade4e9a8fab6(arg2, arg3, arg4, arg5);
    
    if rax_6 != 2
    {
        if (rax_4 & 1) != 0
        {
            let rsi_5: i64 = var_68;
            let rbx_1: u32 = rax_6;
            
            if rsi_5 >= 2
            {
                ruff_python_formatter::string::normalize::QuoteMetadata::from_part::h0afa9ff01e69dd98(&var_58, rsi_5, arg5, arg2, rbx_1);
            }
            else
            {
                let mut rax_7: *mut c_void;
                let mut rdx_7: i64;
                rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rdx_4, rax_2, rdx_3);
                let mut var_70: i32;
                var_70 = rdx_7;
                
                if rax_7 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(rax_2, rdx_3, rdx_4, rdx_3);
                    /* no return */
                }
                
                ruff_python_formatter::string::normalize::QuoteMetadata::from_str::h18c8ad1316633cd8(&var_58, rax_7, var_70, 
                    ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_68), 
                    rbx_1);
            }
            
            rax_6 =
                ruff_python_formatter::string::normalize::QuoteMetadata::choose::hb1a9d58975495a88(
                &var_58, rbx_1);
        }
        
        rbp_1 = (rbp_1 & 0xfe) | rax_6;
    }
    
    arg1[2] = rbp_1;
    *arg1 = rax_4 & 1;
    arg1[1] = rdx_4;
    arg1
}
