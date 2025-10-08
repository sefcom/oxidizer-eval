
  fn ruff_python_formatter::string::normalize::StringNormalizer::preferred_quote_style::h4147ade4e9a8fab6(arg1: *mut *mut i8, arg2: u32, arg3: i64, arg4: *mut c_void) -> u64

{
    let mut rbp: u32 = arg2;
    let mut var_38: i64 = arg3;
    let mut cond:0: bool;
    
    if rbp != 3
    {
        let temp1_1: i8 = *arg1.byte_offset(0x2c);
        cond:0 = temp1_1 >= 3;
        
        if temp1_1 == 3
        {
            goto 'label_727c70;
        }
        
        goto 'label_727c56;
    }
    
    rbp = *arg1.byte_offset(0x35);
    let temp0_1: i8 = *arg1.byte_offset(0x2c);
    cond:0 = temp0_1 >= 3;
    let mut r12: i64;
    
    if temp0_1 == 3
    {
        'label_727c70:
        r12 = *arg1.byte_offset(0x2d) >= 0xc;
        
        if *arg1.byte_offset(0x2a) == 2
        {
            goto 'label_727c92;
        }
        
        goto 'label_727c7a;
    }
    
    'label_727c56:
    r12 = cond:0;
    let mut r14: u64;
    
    if *arg1.byte_offset(0x2a) != 2
    {
        'label_727c7a:
        let mut r15_1: u32 = *arg1.byte_offset(0x2b);
        let mut rax: bool;
        
        if (r15_1 & 2) != 0
        {
            rax = ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_38);
        }
        
        if (r15_1 & 2) != 0 && (rax & 2) == 0
        {
            goto 'label_727c92;
        }
        
        r14 = 2;
        
        if (rbp == 2 & r12) == 0
        {
            r15_1 = !r15_1;
            r15_1 &= 1;
            r14 = r15_1;
        }
    }
    else
    {
        'label_727c92:
        r14 = 2;
        
        if rbp != 2
        {
            let rax_1: i64 = var_38;
            let mut rax_2: i8;
            let mut r15_2: *mut c_void;
            
            if rax_1 == 3
            {
                r15_2 = arg4;
                rax_2 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..TStringFlags$GT$$GT$::from::h278c7bfd346f0e8c(*r15_2.byte_offset(0x24));
                'label_727d00:
                
                if ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug::h75d1bb52bcbb9979(*r15_2.byte_offset(8), *r15_2.byte_offset(0x10), rax_2, arg1) == 0
                {
                    goto 'label_727d0c;
                }
            }
            else if rax_1 != 2
            {
                'label_727d0c:
                r14 = rbp;
                
                if (ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_38)
                    & 2) != 0
                {
                    let rax_5: i8 = *arg1.byte_offset(0x3c);
                    r14 = 1;
                    
                    if rax_5 != 2
                    {
                        r14 = rax_5 ^ 1;
                    }
                }
            }
            else
            {
                r15_2 = arg4;
                
                if r12 != 0
                {
                    rax_2 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..FStringFlags$GT$$GT$::from::hf5c3807e34bef0f1(*r15_2.byte_offset(0x24));
                    goto 'label_727d00;
                }
                
                if ruff_python_formatter::string::normalize::is_fstring_with_quoted_debug_expression::h3c23dfe7f06b780a(r15_2, arg1) == 0 && ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::h3e8a5c5d3145f36a(*r15_2.byte_offset(8), *r15_2.byte_offset(0x10), arg1) == 0
                {
                    rax_2 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..FStringFlags$GT$$GT$::from::hf5c3807e34bef0f1(*r15_2.byte_offset(0x24));
                    goto 'label_727d00;
                }
            }
        }
    }
    
    r14
}
