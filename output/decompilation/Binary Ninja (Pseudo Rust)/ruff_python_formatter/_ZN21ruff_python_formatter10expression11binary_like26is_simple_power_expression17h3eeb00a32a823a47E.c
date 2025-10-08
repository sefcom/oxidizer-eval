
  fn ruff_python_formatter::expression::binary_like::is_simple_power_expression::h3eeb00a32a823a47(arg1: *mut i32, arg2: *mut i32, arg3: i64, arg4: i64, arg5: *mut i8, arg6: i64) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    
    if ruff_python_formatter::expression::binary_like::is_simple_power_operand::h106dbb259fc1f4c9(
        arg1) != 0 &&
        ruff_python_formatter::expression::binary_like::is_simple_power_operand::h106dbb259fc1f4c9(
        arg2) != 0
    {
        let mut rax_3: u64;
        let mut rdx: i64;
        rax_3 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(arg1);
        
        if ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_3, rdx, arg3, arg4, arg5, arg6) == 0
        {
            let mut rax_6: u64;
            let mut rdx_2: i64;
            rax_6 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(arg2);
            return ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_6, rdx_2, arg3, arg4, arg5, arg6) ^ 1;
        }
    }
    
    0
}
