
  void* ruff_python_formatter::expression::expr_bin_op::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprBinOp$GT$::needs_parentheses::ha7c217592f3ff950(int64_t* arg1, int64_t arg2, int64_t arg3, char** arg4)

{
    void* result;
    result = 1;
    
    if (arg2 != 0x27)
    {
        int32_t* rdx = *arg1;
        uint64_t rax_1 = *rdx - 0x11;
        
        if (rax_1 > 3)
            return nullptr;
        
        int64_t var_38;
        void* result_1;
        int64_t r15_1;
        
        switch (rax_1)
        {
            case 0:
            {
                var_38 = 2;
                result_1 = &rdx[2];
                r15_1 = 2;
                
                if (*(rdx + 8) == -0x7fffffffffffffff)
                    return nullptr;
                
                label_709447:
                
                if (_$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_38, arg4) &&
                    ruff_python_formatter::expression::has_parentheses::heb1fda5cfc7f167d(arg1[1], 
                    arg4) != 2)
                {
                    void* r14_2 = arg4[2];
                    
                    if (!ruff_python_formatter::comments::Comments::dangling::h377ee9ebf27dc56b(
                        r14_2))
                    {
                        int64_t var_28 = *("." + (r15_1 << 3));
                        void* result_2 = result_1;
                        
                        if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(r14_2 + 0x40, &var_28))
                        {
                            int64_t rax_10;
                            int64_t rdx_2;
                            rax_10 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(arg1[1]);
                            var_28 = rax_10;
                            int64_t var_20_1 = rdx_2;
                            int64_t rcx_1;
                            rcx_1 = !hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(r14_2 + 0x40, &var_28);
                            return rcx_1 * 3;
                        }
                    }
                }
                
                return nullptr;
                break;
            }
            case 1:
            {
                result = &rdx[2];
                var_38 = 3;
                result_1 = result;
                r15_1 = 3;
                
                if (!(0 + -(*(rdx + 8))))
                    goto label_709447;
                break;
            }
            case 2:
            {
                result = &rdx[2];
                var_38 = 0;
                result_1 = result;
                r15_1 = 0;
                
                if (0 + -(*(rdx + 8)))
                    goto label_709447;
                break;
            }
            case 3:
            {
                var_38 = 1;
                result_1 = &rdx[2];
                r15_1 = 1;
                
                if (*(rdx + 8))
                    goto label_709447;
                
                return nullptr;
                break;
            }
        }
    }
    
    return result;
}
