
  fn ruff_python_formatter::string::normalize::StringNormalizer::normalize::h1f11748c3c51b9f8(arg1: *mut i128, arg2: *mut i64, arg3: i8, arg4: i64, arg5: *mut c_void) -> i64

{
    let rbp: *mut i8 = *arg2;
    let r13: i64 = arg2[1];
    let mut rax: i32;
    let mut rdx: i32;
    rax = ruff_python_ast::expression::StringLikePart::content_range::he2557f5203d115c0(arg4, arg5);
    let mut rax_1: u64;
    let mut rdx_1: i64;
    rax_1 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rax, rdx);
    let mut rax_2: *mut c_void;
    let mut rdx_3: i64;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_1, rdx_1, rbp, r13);
    
    if rax_2 == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(rbp, r13, rax_1, rdx_1);
        /* no return */
    }
    
    let mut var_48: i8;
    ruff_python_formatter::string::normalize::StringNormalizer::choose_quotes::h6619749bbb6fca48(
        &var_48, arg2, arg3, arg4, arg5);
    let mut var_80: i64;
    let mut var_70: i64;
    let mut r14_1: i8;
    let var_38: i8;
    
    if (var_48 & 1) == 0
    {
        let var_78_1: *mut c_void = rax_2;
        var_70 = rdx_3;
        var_80 = -0x8000000000000000;
        r14_1 = var_38;
    }
    else
    {
        r14_1 = var_38;
        let var_40: i64;
        ruff_python_formatter::string::normalize::normalize_string::hc4cd811eeabf866f(&var_80, 
            rax_2, rdx_3, var_40, r14_1, 0);
    }
    let mut result: i32;
    let mut rdx_6: i32;
    result =
        ruff_python_ast::expression::StringLikePart::content_range::he2557f5203d115c0(arg4, arg5);
    arg1[1] = var_70;
    *arg1 = var_80;
    arg1[2] = r14_1;
    *arg1.byte_offset(0x18) = result;
    *arg1.byte_offset(0x1c) = rdx_6;
    result
}
