
  fn ruff_python_formatter::statement::stmt_assign::should_non_inlineable_use_best_fit::hd046a1d11dd3b34d(arg1: *mut i32) -> bool

{
    let rax: i64;
    let var_8: i64 = rax;
    let rax_1: i32 = *arg1;
    let rcx: *mut i64;
    let rdx: *mut c_void;
    let rsi: i64;
    
    if rax_1 == 0x1a
    {
        return ruff_python_formatter::expression::expr_subscript::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprSubscript$GT$::needs_parentheses::h63c76c96eb080e9a(&arg1[2], rsi, rdx, rcx) == 2;
    }
    
    if rax_1 == 0x19
    {
        return ruff_python_formatter::expression::expr_attribute::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprAttribute$GT$::needs_parentheses::h6a8a64f23923cce1(&arg1[2], rsi, rdx, rcx) == 2;
    }
    
    if rax_1 != 0x10
    {
        return 0;
    }
    
    ruff_python_formatter::expression::expr_call::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprCall$GT$::needs_parentheses::h0e45126306fa64b5(&arg1[2], rsi, rdx, rcx) == 2
}
