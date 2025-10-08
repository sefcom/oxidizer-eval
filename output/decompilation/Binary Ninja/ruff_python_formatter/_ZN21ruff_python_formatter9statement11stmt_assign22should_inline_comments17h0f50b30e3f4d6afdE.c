
  int64_t ruff_python_formatter::statement::stmt_assign::should_inline_comments::h0f50b30e3f4d6afd(int32_t* arg1)

{
    int64_t rax;
    int64_t var_8 = rax;
    int64_t result = 0;
    uint64_t rdx_1 = *arg1 - 0x11;
    
    if (rdx_1 <= 0xb)
    {
        void* rdx_3 = jump_table_487a98[rdx_1] + &jump_table_487a98;
        int64_t* rcx;
        
        switch (rdx_3)
        {
            case 0x71c77d:
            {
                result = 1;
                break;
            }
            case 0x71c781:
            {
                return ruff_python_formatter::expression::expr_bytes_literal::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprBytesLiteral$GT$::needs_parentheses::h6cf3018f5b50a126(&arg1[2], &jump_table_487a98, rdx_3, rcx) == 2;
                break;
            }
            case 0x71c792:
            {
                return ruff_python_formatter::expression::expr_string_literal::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprStringLiteral$GT$::needs_parentheses::ha7a960908cc0ce8d(&arg1[2], &jump_table_487a98, rdx_3, rcx) == 2;
                break;
            }
            case 0x71c7a3:
            {
                return ruff_python_formatter::expression::expr_t_string::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprTString$GT$::needs_parentheses::hf9e0e3daeb3d28c4(&arg1[2], &jump_table_487a98, rdx_3, rcx) == 2;
                break;
            }
            case 0x71c7b4:
            {
                return ruff_python_formatter::expression::expr_f_string::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprFString$GT$::needs_parentheses::hacd5263d47a01197(&arg1[2], &jump_table_487a98, rdx_3, rcx) == 2;
                break;
            }
        }
    }
    
    return result;
}
