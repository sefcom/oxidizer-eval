
  int64_t ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::contains_quote::hcddbc126b8c2d61d(int64_t* arg1, int32_t arg2, int32_t arg3, char arg4)

{
    char* r14 = *arg1;
    int64_t r15 = arg1[1];
    uint64_t rax;
    int64_t rdx;
    rax = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(arg2, arg3);
    void* rax_1;
    void* rdx_2;
    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax, rdx, r14, r15);
    
    if (rax_1)
    {
        int64_t rcx_1;
        rcx_1 = !(arg4 & 1);
        /* tailcall */
        return _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(rcx_1 * 5 + 0x22, rax_1, rdx_2);
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(r14, r15, rax, rdx);
    /* no return */
}
