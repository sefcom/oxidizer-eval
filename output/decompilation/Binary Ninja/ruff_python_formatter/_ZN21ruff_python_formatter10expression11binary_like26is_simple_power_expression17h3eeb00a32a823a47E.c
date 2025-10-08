
  int64_t ruff_python_formatter::expression::binary_like::is_simple_power_expression::h3eeb00a32a823a47(int32_t* arg1, int32_t* arg2, int64_t arg3, int64_t arg4, char* arg5, int64_t arg6)

{
    int64_t rax;
    int64_t var_38 = rax;
    
    if (ruff_python_formatter::expression::binary_like::is_simple_power_operand::h106dbb259fc1f4c9(
        arg1) &&
        ruff_python_formatter::expression::binary_like::is_simple_power_operand::h106dbb259fc1f4c9(
        arg2))
    {
        uint64_t rax_3;
        int64_t rdx;
        rax_3 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(arg1);
        
        if (!ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_3, rdx, arg3, arg4, arg5, arg6))
        {
            uint64_t rax_6;
            int64_t rdx_2;
            rax_6 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(arg2);
            return ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_6, rdx_2, arg3, arg4, arg5, arg6) ^ 1;
        }
    }
    
    return 0;
}
