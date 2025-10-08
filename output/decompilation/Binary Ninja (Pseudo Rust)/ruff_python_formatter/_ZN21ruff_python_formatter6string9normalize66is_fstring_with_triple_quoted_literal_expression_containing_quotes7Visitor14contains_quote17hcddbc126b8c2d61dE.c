
  fn ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::contains_quote::hcddbc126b8c2d61d(arg1: *mut i64, arg2: i32, arg3: i32, arg4: i8) -> i64

{
    let r14: *mut i8 = *arg1;
    let r15: i64 = arg1[1];
    let mut rax: u64;
    let mut rdx: i64;
    rax = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(arg2, arg3);
    let mut rax_1: *mut c_void;
    let mut rdx_2: *mut c_void;
    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax, rdx, r14, r15);
    
    if rax_1 != 0
    {
        let mut rcx_1: i64;
        rcx_1 = (arg4 & 1) == 0;
        /* tailcall */
        return _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(rcx_1 * 5 + 0x22, rax_1, rdx_2);
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(r14, r15, rax, rdx);
    /* no return */
}
