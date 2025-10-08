
  void* ruff_python_formatter::expression::expr_unary_op::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprUnaryOp$GT$::needs_parentheses::hdbcb4e9954953328(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    void* result;
    result = 1;
    
    if (arg2 != 0x27)
    {
        uint64_t rax;
        int64_t rdx;
        rax = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(*arg1);
        void* r15_1 = arg4[2];
        void* rcx = *(r15_1 + 0x60);
        result = 3;
        
        if (!ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax, rdx, *(rcx + 8), *(rcx + 0x10), *arg4, arg4[1]))
        {
            int64_t rax_1;
            int64_t rdx_2;
            rax_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*arg1);
            int64_t var_28 = rax_1;
            int64_t var_20_1 = rdx_2;
            result = 1;
            
            if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(
                    r15_1 + 0x40, &var_28))
                return ruff_python_formatter::expression::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..Expr$GT$::needs_parentheses::h692bc84797141513(*arg1, 0x1e);
        }
    }
    
    return result;
}
