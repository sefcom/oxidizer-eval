
  uint32_t ruff_python_formatter::expression::CallChainLayout::from_expression::h8a81a54727e8f68f(uint64_t arg1, int32_t** arg2, int64_t arg3, int64_t arg4, char* arg5, int64_t arg6)

{
    int64_t rax;
    int64_t var_38 = rax;
    int32_t** r13 = arg2;
    uint64_t rbp = arg1;
    *var_38[4] = 0;
    uint32_t result;
    
    do
    {
        int32_t* rdi;
        
        if (rbp == 0x10)
            rdi = *r13;
        else if (rbp != 0x19)
        {
            if (rbp != 0x1a)
            {
                *var_38[4] += ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rbp, r13, arg3, arg4, arg5, arg6);
                break;
            }
            
            rdi = *r13;
        }
        else
        {
            int64_t rax_2;
            int64_t rdx_2;
            rax_2 = ruff_python_ast::expression::_$LT$impl$u20$core..convert..From$LT$$RF$alloc..boxed..Box$LT$ruff_python_ast..generated..Expr$GT$$GT$$u20$for$u20$ruff_python_ast..generated..ExprRef$GT$::from::h473989b5e34cd5c1(&r13[5]);
            
            if (ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_2, rdx_2, arg3, arg4, arg5, arg6))
            {
                *var_38[4] += 1;
                break;
            }
            
            rdi = r13[5];
            int32_t rax_3 = *rdi;
            
            if (rax_3 == 0x10 || rax_3 == 0x1a)
                *var_38[4] += 1;
        }
        
        uint64_t rax_1;
        int32_t** rdx;
        rax_1 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(rdi);
        rbp = rax_1;
        r13 = rdx;
        result = ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_1, rdx, arg3, arg4, arg5, arg6);
    } while (!result);
    
    result = *var_38[4] < 2;
    result += 1;
    return result;
}
