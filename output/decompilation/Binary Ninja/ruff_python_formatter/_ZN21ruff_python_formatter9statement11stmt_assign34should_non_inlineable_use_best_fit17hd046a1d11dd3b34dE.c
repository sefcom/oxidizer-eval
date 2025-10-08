
  bool ruff_python_formatter::statement::stmt_assign::should_non_inlineable_use_best_fit::hd046a1d11dd3b34d(int32_t* arg1)

{
    int64_t rax;
    int64_t var_8 = rax;
    int32_t rax_1 = *arg1;
    int64_t* rcx;
    void* rdx;
    int64_t rsi;
    
    if (rax_1 == 0x1a)
        return ruff_python_formatter::expression::expr_subscript::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprSubscript$GT$::needs_parentheses::h63c76c96eb080e9a(&arg1[2], rsi, rdx, rcx) == 2;
    
    if (rax_1 == 0x19)
        return ruff_python_formatter::expression::expr_attribute::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprAttribute$GT$::needs_parentheses::h6a8a64f23923cce1(&arg1[2], rsi, rdx, rcx) == 2;
    
    if (rax_1 != 0x10)
        return 0;
    
    return ruff_python_formatter::expression::expr_call::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprCall$GT$::needs_parentheses::h0e45126306fa64b5(&arg1[2], rsi, rdx, rcx) == 2;
}
