
  void* ruff_python_formatter::expression::expr_compare::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprCompare$GT$::needs_parentheses::h7ec05260f764e71a(int64_t* arg1, int64_t arg2, int64_t arg3, char** arg4)

{
    void* result;
    result = 1;
    
    if (arg2 != 0x27)
    {
        int32_t* rdx = *arg1;
        uint64_t rax_1 = *rdx - 0x11;
        
        if (rax_1 > 3)
            return nullptr;
        
        int64_t var_30;
        void* result_1;
        int64_t rax_6;
        char** rbx_1;
        void* rdi_1;
        int64_t* r14_1;
        
        switch (rax_1)
        {
            case 0:
            {
                var_30 = 2;
                result_1 = &rdx[2];
                
                if (*(rdx + 8) == -0x7fffffffffffffff)
                    return nullptr;
                
                r14_1 = arg1;
                rbx_1 = arg4;
                
                if (!_$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_30, arg4))
                    return nullptr;
                
                rdi_1 = rbx_1[2];
                rax_6 = 0x2c;
                label_709c0c:
                int64_t var_20 = rax_6;
                void* result_2 = result_1;
                
                if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(
                        rdi_1 + 0x40, &var_20) || !r14_1[4])
                    return nullptr;
                
                int64_t rcx_1;
                rcx_1 = ruff_python_formatter::expression::expr_compare::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprCompare$GT$::needs_parentheses::_$u7b$$u7b$closure$u7d$$u7d$::had80a468163ea522(rbx_1, r14_1[3]);
                return rcx_1 * 3;
                break;
            }
            case 1:
            {
                result = &rdx[2];
                var_30 = 3;
                result_1 = result;
                
                if (!(0 + -(*(rdx + 8))))
                {
                    r14_1 = arg1;
                    rbx_1 = arg4;
                    
                    if (!_$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_30, arg4))
                        return nullptr;
                    
                    rdi_1 = rbx_1[2];
                    rax_6 = 0x2d;
                    goto label_709c0c;
                }
                break;
            }
            case 2:
            {
                result = &rdx[2];
                var_30 = 0;
                result_1 = result;
                
                if (0 + -(*(rdx + 8)))
                {
                    r14_1 = arg1;
                    rbx_1 = arg4;
                    
                    if (!_$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_30, arg4))
                        return nullptr;
                    
                    rdi_1 = rbx_1[2];
                    rax_6 = 0x2e;
                    goto label_709c0c;
                }
                break;
            }
            case 3:
            {
                var_30 = 1;
                result_1 = &rdx[2];
                
                if (!*(rdx + 8))
                    return nullptr;
                
                r14_1 = arg1;
                rbx_1 = arg4;
                
                if (!_$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_30, arg4))
                    return nullptr;
                
                rdi_1 = rbx_1[2];
                rax_6 = 0x2f;
                goto label_709c0c;
            }
        }
    }
    
    return result;
}
