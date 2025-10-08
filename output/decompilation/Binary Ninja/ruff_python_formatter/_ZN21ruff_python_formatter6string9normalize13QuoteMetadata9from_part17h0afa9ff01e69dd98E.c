
  uint128_t* ruff_python_formatter::string::normalize::QuoteMetadata::from_part::h0afa9ff01e69dd98(int64_t* arg1, int64_t arg2, void* arg3, int64_t* arg4, char arg5)

{
    int64_t var_70 = arg2;
    void* var_68 = arg3;
    
    if (arg2 < 2)
    {
        char* r15 = *arg4;
        int64_t rbx = arg4[1];
        int32_t rax;
        int32_t rdx;
        rax = ruff_python_ast::expression::StringLikePart::content_range::he2557f5203d115c0(arg2, 
            arg3);
        uint64_t rax_1;
        int64_t rdx_1;
        rax_1 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rax, rdx);
        void* rax_2;
        int64_t rdx_3;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_1, rdx_1, r15, rbx);
        
        if (!rax_2)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r15, rbx, rax_1, rdx_1);
            /* no return */
        }
        
        return ruff_python_formatter::string::normalize::QuoteMetadata::from_str::h18c8ad1316633cd8(
            arg1, rax_2, rdx_3, 
            ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_70), arg5);
    }
    
    int64_t* rdi_5 = &var_70;
    bool rax_6;
    char rbx_2;
    void* r15_1;
    
    if (arg2 != 2)
    {
        rbx_2 = arg5;
        void var_40;
        r15_1 = &var_40;
        ruff_python_formatter::string::normalize::QuoteMetadata::from_str::h18c8ad1316633cd8(
            &var_40, 1, 0, 
            ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(rdi_5), rbx_2);
        rax_6 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..TStringFlags$GT$$GT$::from::h278c7bfd346f0e8c(*(arg3 + 0x24));
    }
    else
    {
        rbx_2 = arg5;
        void var_50;
        r15_1 = &var_50;
        ruff_python_formatter::string::normalize::QuoteMetadata::from_str::h18c8ad1316633cd8(
            &var_50, 1, 0, 
            ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(rdi_5), rbx_2);
        rax_6 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..FStringFlags$GT$$GT$::from::hf5c3807e34bef0f1(*(arg3 + 0x24));
    }
    
    return ruff_python_formatter::string::normalize::QuoteMetadata::merge_interpolated_string_elements::h354cb7889e5fa776(arg1, r15_1, arg3, rax_6, arg4, rbx_2);
}
