
  fn ruff_python_formatter::expression::expr_compare::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprCompare$GT$::needs_parentheses::h7ec05260f764e71a(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i64) -> *mut c_void

{
    let mut result: *mut c_void;
    result = 1;
    
    if arg2 != 0x27
    {
        let rdx: *mut i32 = *arg1;
        let rax_1: u64 = *rdx - 0x11;
        
        if rax_1 > 3
        {
            return nullptr;
        }
        
        let mut var_30: i64;
        let mut result_1: *mut c_void;
        let mut rax_6: i64;
        let mut rbx_1: *mut i64;
        let mut rdi_1: *mut c_void;
        let mut r14_1: *mut i64;
        
        match rax_1
        {
            0 =>
            {
                var_30 = 2;
                result_1 = &rdx[2];
                
                if *rdx.byte_offset(8) == -0x7fffffffffffffff
                {
                    return nullptr;
                }
                
                r14_1 = arg1;
                rbx_1 = arg4;
                
                if _$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_30, arg4) == 0
                {
                    return nullptr;
                }
                
                rdi_1 = rbx_1[2];
                rax_6 = 0x2c;
                'label_709c0c:
                let mut var_20: i64 = rax_6;
                let result_2: *mut c_void = result_1;
                
                if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(
                    rdi_1.byte_offset(0x40), &var_20) != 0 || r14_1[4] == 0
                {
                    return nullptr;
                }
                
                let mut rcx_1: i64;
                rcx_1 = ruff_python_formatter::expression::expr_compare::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprCompare$GT$::needs_parentheses::_$u7b$$u7b$closure$u7d$$u7d$::had80a468163ea522(rbx_1, r14_1[3]) != 0;
                return rcx_1 * 3;
            }
            1 =>
            {
                result = &rdx[2];
                var_30 = 3;
                result_1 = result;
                
                if !(0 + -(*rdx.byte_offset(8)))
                {
                    r14_1 = arg1;
                    rbx_1 = arg4;
                    
                    if _$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_30, arg4) == 0
                    {
                        return nullptr;
                    }
                    
                    rdi_1 = rbx_1[2];
                    rax_6 = 0x2d;
                    goto 'label_709c0c;
                }
            }
            2 =>
            {
                result = &rdx[2];
                var_30 = 0;
                result_1 = result;
                
                if 0 + -(*rdx.byte_offset(8))
                {
                    r14_1 = arg1;
                    rbx_1 = arg4;
                    
                    if _$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_30, arg4) == 0
                    {
                        return nullptr;
                    }
                    
                    rdi_1 = rbx_1[2];
                    rax_6 = 0x2e;
                    goto 'label_709c0c;
                }
            }
            3 =>
            {
                var_30 = 1;
                result_1 = &rdx[2];
                
                if *rdx.byte_offset(8) == 0
                {
                    return nullptr;
                }
                
                r14_1 = arg1;
                rbx_1 = arg4;
                
                if _$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_30, arg4) == 0
                {
                    return nullptr;
                }
                
                rdi_1 = rbx_1[2];
                rax_6 = 0x2f;
                goto 'label_709c0c;
            }
        }
    }
    
    result
}
