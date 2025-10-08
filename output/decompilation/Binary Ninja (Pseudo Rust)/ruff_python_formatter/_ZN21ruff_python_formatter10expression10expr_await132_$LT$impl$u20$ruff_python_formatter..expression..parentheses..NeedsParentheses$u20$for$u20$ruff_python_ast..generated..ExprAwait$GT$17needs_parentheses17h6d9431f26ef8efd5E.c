
  fn ruff_python_formatter::expression::expr_await::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprAwait$GT$::needs_parentheses::h6d9431f26ef8efd5(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i64) -> i64

{
    let mut result: i64;
    let result_1: i64 = result;
    result = 1;
    
    if arg2 != 0x27
    {
        let mut rax: u64;
        let mut rdx: i64;
        rax = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(*arg1);
        let rcx_1: *mut c_void = *(arg4[2] + 0x60);
        result = 3;
        
        if ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax, rdx, *rcx_1.byte_offset(8), *rcx_1.byte_offset(0x10), *arg4, arg4[1]) == 0
        {
            /* tailcall */
            return ruff_python_formatter::expression::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..Expr$GT$::needs_parentheses::h692bc84797141513(*arg1, 0x27);
        }
    }
    
    result
}
