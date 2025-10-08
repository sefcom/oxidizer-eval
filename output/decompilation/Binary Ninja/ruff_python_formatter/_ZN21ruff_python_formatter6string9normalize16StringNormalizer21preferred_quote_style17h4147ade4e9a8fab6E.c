
  uint64_t ruff_python_formatter::string::normalize::StringNormalizer::preferred_quote_style::h4147ade4e9a8fab6(int64_t* arg1, uint32_t arg2, int64_t arg3, void* arg4)

{
    uint32_t rbp = arg2;
    int64_t var_38 = arg3;
    bool cond:0;
    
    if (rbp != 3)
    {
        char temp1_1 = *(arg1 + 0x2c);
        cond:0 = temp1_1 >= 3;
        
        if (temp1_1 == 3)
            goto label_727c70;
        
        goto label_727c56;
    }
    
    rbp = *(arg1 + 0x35);
    char temp0_1 = *(arg1 + 0x2c);
    cond:0 = temp0_1 >= 3;
    int64_t r12;
    
    if (temp0_1 == 3)
    {
        label_727c70:
        r12 = *(arg1 + 0x2d) >= 0xc;
        
        if (*(arg1 + 0x2a) == 2)
            goto label_727c92;
        
        goto label_727c7a;
    }
    
    label_727c56:
    r12 = cond:0;
    uint64_t r14;
    
    if (*(arg1 + 0x2a) != 2)
    {
        label_727c7a:
        uint32_t r15_1 = *(arg1 + 0x2b);
        bool rax;
        
        if (r15_1 & 2)
            rax = ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_38);
        
        if (r15_1 & 2 && !(rax & 2))
            goto label_727c92;
        
        r14 = 2;
        
        if (!(rbp == 2 & r12))
        {
            r15_1 = ~r15_1;
            r15_1 &= 1;
            r14 = r15_1;
        }
    }
    else
    {
        label_727c92:
        r14 = 2;
        
        if (rbp != 2)
        {
            int64_t rax_1 = var_38;
            char rax_2;
            void* r15_2;
            
            if (rax_1 == 3)
            {
                r15_2 = arg4;
                rax_2 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..TStringFlags$GT$$GT$::from::h278c7bfd346f0e8c(*(r15_2 + 0x24));
                label_727d00:
                
                if (!ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug::h75d1bb52bcbb9979(*(r15_2 + 8), *(r15_2 + 0x10), rax_2, arg1))
                    goto label_727d0c;
            }
            else if (rax_1 != 2)
            {
                label_727d0c:
                r14 = rbp;
                
                if (ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_38)
                    & 2)
                {
                    char rax_5 = *(arg1 + 0x3c);
                    r14 = 1;
                    
                    if (rax_5 != 2)
                        r14 = rax_5 ^ 1;
                }
            }
            else
            {
                r15_2 = arg4;
                
                if (r12)
                {
                    rax_2 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..FStringFlags$GT$$GT$::from::hf5c3807e34bef0f1(*(r15_2 + 0x24));
                    goto label_727d00;
                }
                
                if (!ruff_python_formatter::string::normalize::is_fstring_with_quoted_debug_expression::h3c23dfe7f06b780a(r15_2, arg1) && !ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::h3e8a5c5d3145f36a(*(r15_2 + 8), *(r15_2 + 0x10), arg1))
                {
                    rax_2 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..FStringFlags$GT$$GT$::from::hf5c3807e34bef0f1(*(r15_2 + 0x24));
                    goto label_727d00;
                }
            }
        }
    }
    
    return r14;
}
