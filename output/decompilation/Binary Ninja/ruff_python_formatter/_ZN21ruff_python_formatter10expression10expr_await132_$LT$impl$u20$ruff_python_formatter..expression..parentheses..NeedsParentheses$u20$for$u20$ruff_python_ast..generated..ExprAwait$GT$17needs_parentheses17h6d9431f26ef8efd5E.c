
  int64_t ruff_python_formatter::expression::expr_await::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprAwait$GT$::needs_parentheses::h6d9431f26ef8efd5(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    int64_t result;
    int64_t result_1 = result;
    result = 1;
    
    if (arg2 != 0x27)
    {
        uint64_t rax;
        int64_t rdx;
        rax = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(*arg1);
        void* rcx_1 = *(arg4[2] + 0x60);
        result = 3;
        
        if (!ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax, rdx, *(rcx_1 + 8), *(rcx_1 + 0x10), *arg4, arg4[1]))
            /* tailcall */
            return ruff_python_formatter::expression::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..Expr$GT$::needs_parentheses::h692bc84797141513(*arg1, 0x27);
    }
    
    return result;
}
