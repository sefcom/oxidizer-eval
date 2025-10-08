
  int64_t ruff_python_formatter::string::normalize::StringNormalizer::normalize::h1f11748c3c51b9f8(int128_t* arg1, int64_t* arg2, char arg3, int64_t arg4, void* arg5)

{
    char* rbp = *arg2;
    int64_t r13 = arg2[1];
    int32_t rax;
    int32_t rdx;
    rax = ruff_python_ast::expression::StringLikePart::content_range::he2557f5203d115c0(arg4, arg5);
    uint64_t rax_1;
    int64_t rdx_1;
    rax_1 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rax, rdx);
    void* rax_2;
    int64_t rdx_3;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_1, rdx_1, rbp, r13);
    
    if (!rax_2)
    {
        core::str::slice_error_fail::h1a2885084e28d077(rbp, r13, rax_1, rdx_1);
        /* no return */
    }
    
    char var_48;
    ruff_python_formatter::string::normalize::StringNormalizer::choose_quotes::h6619749bbb6fca48(
        &var_48, arg2, arg3, arg4, arg5);
    int64_t var_80;
    int64_t var_70;
    char r14_1;
    char var_38;
    
    if (!(var_48 & 1))
    {
        void* var_78_1 = rax_2;
        var_70 = rdx_3;
        var_80 = -0x8000000000000000;
        r14_1 = var_38;
    }
    else
    {
        r14_1 = var_38;
        int64_t var_40;
        ruff_python_formatter::string::normalize::normalize_string::hc4cd811eeabf866f(&var_80, 
            rax_2, rdx_3, var_40, r14_1, 0);
    }
    int32_t result;
    int32_t rdx_6;
    result =
        ruff_python_ast::expression::StringLikePart::content_range::he2557f5203d115c0(arg4, arg5);
    arg1[1] = var_70;
    *arg1 = var_80;
    arg1[2] = r14_1;
    *(arg1 + 0x18) = result;
    *(arg1 + 0x1c) = rdx_6;
    return result;
}
