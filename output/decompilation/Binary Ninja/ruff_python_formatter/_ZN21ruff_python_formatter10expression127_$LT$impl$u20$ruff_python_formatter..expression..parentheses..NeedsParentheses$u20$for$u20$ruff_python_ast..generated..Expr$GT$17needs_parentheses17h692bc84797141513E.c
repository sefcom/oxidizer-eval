
  void* ruff_python_formatter::expression::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..Expr$GT$::needs_parentheses::h692bc84797141513(int32_t* arg1, int64_t arg2)

{
    void* result;
    int64_t* rcx;
    void* rdx;
    
    switch (*arg1)
    {
        case 0:
        case 4:
        case 5:
        {
            result = arg2 == 0x27;
            return result;
            break;
        }
        case 1:
        {
            /* tailcall */
            return ruff_python_formatter::expression::expr_named::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprNamed$GT$::needs_parentheses::h3febabd6f23785fc(arg2);
        }
        case 2:
        {
            /* tailcall */
            return ruff_python_formatter::expression::expr_bin_op::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprBinOp$GT$::needs_parentheses::ha7c217592f3ff950(&arg1[2], arg2, rdx, rcx);
        }
        case 3:
        {
            /* tailcall */
            return ruff_python_formatter::expression::expr_unary_op::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprUnaryOp$GT$::needs_parentheses::hdbcb4e9954953328(&arg1[2], arg2, rdx, rcx);
        }
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xa:
        case 0x1d:
        case 0x1e:
        case 0x20:
        {
            result = 3;
            return result;
            break;
        }
        case 0xb:
        {
            result = arg2 != 0x27;
            result *= 2;
            result += 1;
            return result;
            break;
        }
        case 0xc:
        {
            /* tailcall */
            return ruff_python_formatter::expression::expr_await::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprAwait$GT$::needs_parentheses::h6d9431f26ef8efd5(&arg1[2], arg2, rdx, rcx);
        }
        case 0xd:
        {
            /* tailcall */
            return ruff_python_formatter::expression::expr_yield::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprYield$GT$::needs_parentheses::hf3e085f5add774e8();
        }
        case 0xe:
        {
            /* tailcall */
            return ruff_python_formatter::expression::expr_yield_from::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprYieldFrom$GT$::needs_parentheses::h64262fc480a2c15e();
        }
        case 0xf:
        {
            /* tailcall */
            return ruff_python_formatter::expression::expr_compare::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprCompare$GT$::needs_parentheses::h7ec05260f764e71a(&arg1[2], arg2, rdx, rcx);
        }
        case 0x10:
        {
            /* tailcall */
            return ruff_python_formatter::expression::expr_call::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprCall$GT$::needs_parentheses::h0e45126306fa64b5(&arg1[2], arg2, rdx, rcx);
        }
        case 0x11:
        {
            /* tailcall */
            return ruff_python_formatter::expression::expr_f_string::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprFString$GT$::needs_parentheses::hacd5263d47a01197(&arg1[2], arg2, rdx, rcx);
        }
        case 0x12:
        {
            /* tailcall */
            return ruff_python_formatter::expression::expr_t_string::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprTString$GT$::needs_parentheses::hf9e0e3daeb3d28c4(&arg1[2], arg2, rdx, rcx);
        }
        case 0x13:
        {
            /* tailcall */
            return ruff_python_formatter::expression::expr_string_literal::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprStringLiteral$GT$::needs_parentheses::ha7a960908cc0ce8d(&arg1[2], arg2, rdx, rcx);
        }
        case 0x14:
        {
            /* tailcall */
            return ruff_python_formatter::expression::expr_bytes_literal::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprBytesLiteral$GT$::needs_parentheses::h6cf3018f5b50a126(&arg1[2], arg2, rdx, rcx);
        }
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x1c:
        {
            result = 2;
            return result;
            break;
        }
        case 0x19:
        {
            /* tailcall */
            return ruff_python_formatter::expression::expr_attribute::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprAttribute$GT$::needs_parentheses::h6a8a64f23923cce1(&arg1[2], arg2, rdx, rcx);
        }
        case 0x1a:
        {
            /* tailcall */
            return ruff_python_formatter::expression::expr_subscript::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprSubscript$GT$::needs_parentheses::h63c76c96eb080e9a(&arg1[2], arg2, rdx, rcx);
        }
        case 0x1b:
        case 0x1f:
        {
            return 0;
            break;
        }
    }
}
