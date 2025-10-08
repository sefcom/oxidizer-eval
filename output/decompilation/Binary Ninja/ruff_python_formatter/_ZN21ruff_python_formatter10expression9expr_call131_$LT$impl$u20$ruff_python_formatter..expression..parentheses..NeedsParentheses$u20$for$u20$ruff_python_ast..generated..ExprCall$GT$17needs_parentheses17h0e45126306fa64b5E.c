
  int64_t ruff_python_formatter::expression::expr_call::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprCall$GT$::needs_parentheses::h0e45126306fa64b5(int32_t** arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    void* r13 = arg4[2];
    void* rax = *(r13 + 0x60);
    char* r15 = *arg4;
    int64_t r12 = arg4[1];
    
    if (ruff_python_formatter::expression::CallChainLayout::from_expression::h8a81a54727e8f68f(
            0x10, arg1, *(rax + 8), *(rax + 0x10), r15, r12) == 1)
        return 0;
    
    char result = 1;
    
    if (!ruff_python_formatter::comments::Comments::dangling::h99e566aaa48a6315(r13))
    {
        uint64_t rax_2;
        int64_t rdx_2;
        rax_2 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(*arg1);
        void* rcx_1 = *(r13 + 0x60);
        result = 3;
        
        if (!ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_2, rdx_2, *(rcx_1 + 8), *(rcx_1 + 0x10), r15, r12))
            /* tailcall */
            return ruff_python_formatter::expression::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..Expr$GT$::needs_parentheses::h692bc84797141513(*arg1, 0x2b);
    }
    
    return result;
}
