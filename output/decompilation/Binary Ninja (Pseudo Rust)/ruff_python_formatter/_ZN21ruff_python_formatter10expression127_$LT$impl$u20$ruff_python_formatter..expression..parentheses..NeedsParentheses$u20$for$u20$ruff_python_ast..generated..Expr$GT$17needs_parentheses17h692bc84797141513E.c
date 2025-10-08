
  fn ruff_python_formatter::expression::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..Expr$GT$::needs_parentheses::h692bc84797141513(arg1: *mut i32, arg2: i64) -> *mut c_void

{
    let mut result: *mut c_void;
    let rcx: *mut i64;
    let rdx: *mut c_void;
    
    match *arg1
    {
        0 | 4 | 5 =>
        {
            result = arg2 == 0x27;
            result
        }
        1 =>
        {
            /* tailcall */
            ruff_python_formatter::expression::expr_named::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprNamed$GT$::needs_parentheses::h3febabd6f23785fc(arg2)
        }
        2 =>
        {
            /* tailcall */
            ruff_python_formatter::expression::expr_bin_op::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprBinOp$GT$::needs_parentheses::ha7c217592f3ff950(&arg1[2], arg2, rdx, rcx)
        }
        3 =>
        {
            /* tailcall */
            ruff_python_formatter::expression::expr_unary_op::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprUnaryOp$GT$::needs_parentheses::hdbcb4e9954953328(&arg1[2], arg2, rdx, rcx)
        }
        6 | 7 | 8 | 9 | 0xa | 0x1d | 0x1e | 0x20 =>
        {
            result = 3;
            result
        }
        0xb =>
        {
            result = arg2 != 0x27;
            result *= 2;
            result += 1;
            result
        }
        0xc =>
        {
            /* tailcall */
            ruff_python_formatter::expression::expr_await::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprAwait$GT$::needs_parentheses::h6d9431f26ef8efd5(&arg1[2], arg2, rdx, rcx)
        }
        0xd =>
        {
            /* tailcall */
            ruff_python_formatter::expression::expr_yield::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprYield$GT$::needs_parentheses::hf3e085f5add774e8()
        }
        0xe =>
        {
            /* tailcall */
            ruff_python_formatter::expression::expr_yield_from::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprYieldFrom$GT$::needs_parentheses::h64262fc480a2c15e()
        }
        0xf =>
        {
            /* tailcall */
            ruff_python_formatter::expression::expr_compare::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprCompare$GT$::needs_parentheses::h7ec05260f764e71a(&arg1[2], arg2, rdx, rcx)
        }
        0x10 =>
        {
            /* tailcall */
            ruff_python_formatter::expression::expr_call::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprCall$GT$::needs_parentheses::h0e45126306fa64b5(&arg1[2], arg2, rdx, rcx)
        }
        0x11 =>
        {
            /* tailcall */
            ruff_python_formatter::expression::expr_f_string::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprFString$GT$::needs_parentheses::hacd5263d47a01197(&arg1[2], arg2, rdx, rcx)
        }
        0x12 =>
        {
            /* tailcall */
            ruff_python_formatter::expression::expr_t_string::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprTString$GT$::needs_parentheses::hf9e0e3daeb3d28c4(&arg1[2], arg2, rdx, rcx)
        }
        0x13 =>
        {
            /* tailcall */
            ruff_python_formatter::expression::expr_string_literal::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprStringLiteral$GT$::needs_parentheses::ha7a960908cc0ce8d(&arg1[2], arg2, rdx, rcx)
        }
        0x14 =>
        {
            /* tailcall */
            ruff_python_formatter::expression::expr_bytes_literal::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprBytesLiteral$GT$::needs_parentheses::h6cf3018f5b50a126(&arg1[2], arg2, rdx, rcx)
        }
        0x15 | 0x16 | 0x17 | 0x18 | 0x1c =>
        {
            result = 2;
            result
        }
        0x19 =>
        {
            /* tailcall */
            ruff_python_formatter::expression::expr_attribute::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprAttribute$GT$::needs_parentheses::h6a8a64f23923cce1(&arg1[2], arg2, rdx, rcx)
        }
        0x1a =>
        {
            /* tailcall */
            ruff_python_formatter::expression::expr_subscript::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprSubscript$GT$::needs_parentheses::h63c76c96eb080e9a(&arg1[2], arg2, rdx, rcx)
        }
        0x1b | 0x1f =>
        {
            0
        }
    }
}
