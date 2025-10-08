
  uint64_t* ruff_python_formatter::string::normalize::StringNormalizer::choose_quotes::h6619749bbb6fca48(uint64_t* arg1, int64_t* arg2, int32_t arg3, int64_t arg4, void* arg5)

{
    int64_t var_68 = arg4;
    char* r14 = *arg2;
    int64_t r12 = arg2[1];
    int32_t rax;
    int32_t rdx;
    rax = ruff_python_ast::expression::StringLikePart::content_range::he2557f5203d115c0(arg4, arg5);
    uint64_t rax_1;
    int64_t rdx_1;
    rax_1 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rax, rdx);
    void* rax_2;
    int64_t rdx_3;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_1, rdx_1, r14, r12);
    
    if (!rax_2)
    {
        core::str::slice_error_fail::h1a2885084e28d077(r14, r12, rax_1, rdx_1);
        /* no return */
    }
    
    void* var_58 = rax_2;
    void* var_50 = rax_2 + rdx_3;
    int64_t var_38 = 0;
    int32_t rax_4;
    int64_t rdx_4;
    rax_4 = core::iter::traits::iterator::Iterator::try_fold::hf02c8f78cfc17381(&var_58, &var_38);
    char rbp_1 = ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_68);
    char rax_6 = ruff_python_formatter::string::normalize::StringNormalizer::preferred_quote_style::h4147ade4e9a8fab6(arg2, arg3, arg4, arg5);
    
    if (rax_6 != 2)
    {
        if (rax_4 & 1)
        {
            int64_t rsi_5 = var_68;
            uint32_t rbx_1 = rax_6;
            
            if (rsi_5 >= 2)
                ruff_python_formatter::string::normalize::QuoteMetadata::from_part::h0afa9ff01e69dd98(&var_58, rsi_5, arg5, arg2, rbx_1);
            else
            {
                void* rax_7;
                int64_t rdx_7;
                rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rdx_4, rax_2, rdx_3);
                int32_t var_70;
                var_70 = rdx_7;
                
                if (!rax_7)
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
    return arg1;
}
