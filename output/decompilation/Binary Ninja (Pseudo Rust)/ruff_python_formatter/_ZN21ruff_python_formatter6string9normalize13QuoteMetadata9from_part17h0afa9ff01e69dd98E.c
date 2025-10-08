
  fn ruff_python_formatter::string::normalize::QuoteMetadata::from_part::h0afa9ff01e69dd98(arg1: *mut i64, arg2: i64, arg3: *mut c_void, arg4: *mut i64, arg5: i8) -> *mut u128

{
    let mut var_70: i64 = arg2;
    let var_68: *mut c_void = arg3;
    
    if arg2 < 2
    {
        let r15: *mut i8 = *arg4;
        let rbx: i64 = arg4[1];
        let mut rax: i32;
        let mut rdx: i32;
        rax = ruff_python_ast::expression::StringLikePart::content_range::he2557f5203d115c0(arg2, 
            arg3);
        let mut rax_1: u64;
        let mut rdx_1: i64;
        rax_1 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rax, rdx);
        let mut rax_2: *mut c_void;
        let mut rdx_3: i64;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_1, rdx_1, r15, rbx);
        
        if rax_2 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(r15, rbx, rax_1, rdx_1);
            /* no return */
        }
        
        return ruff_python_formatter::string::normalize::QuoteMetadata::from_str::h18c8ad1316633cd8(
            arg1, rax_2, rdx_3, 
            ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_70), arg5);
    }
    
    let rdi_5: *mut i64 = &var_70;
    let mut rax_6: bool;
    let mut rbx_2: i8;
    let mut r15_1: *mut c_void;
    
    if arg2 != 2
    {
        rbx_2 = arg5;
        let mut var_40: ();
        r15_1 = &var_40;
        ruff_python_formatter::string::normalize::QuoteMetadata::from_str::h18c8ad1316633cd8(
            &var_40, 1, 0, 
            ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(rdi_5), rbx_2);
        rax_6 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..TStringFlags$GT$$GT$::from::h278c7bfd346f0e8c(*arg3.byte_offset(0x24));
    }
    else
    {
        rbx_2 = arg5;
        let mut var_50: ();
        r15_1 = &var_50;
        ruff_python_formatter::string::normalize::QuoteMetadata::from_str::h18c8ad1316633cd8(
            &var_50, 1, 0, 
            ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(rdi_5), rbx_2);
        rax_6 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..FStringFlags$GT$$GT$::from::hf5c3807e34bef0f1(*arg3.byte_offset(0x24));
    }
    
    ruff_python_formatter::string::normalize::QuoteMetadata::merge_interpolated_string_elements::h354cb7889e5fa776(arg1, r15_1, arg3, rax_6, arg4, rbx_2)
}
