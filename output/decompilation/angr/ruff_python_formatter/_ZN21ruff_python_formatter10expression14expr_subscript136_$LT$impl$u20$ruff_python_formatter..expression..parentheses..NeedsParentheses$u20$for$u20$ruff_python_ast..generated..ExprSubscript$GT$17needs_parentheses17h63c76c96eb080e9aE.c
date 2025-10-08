long long ruff_python_formatter::expression::expr_subscript::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprSubscript>::needs_parentheses(unsigned long long *a0, unsigned long a1, unsigned long long a2[15], struct_2 *a3)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x38]
    struct_0 *v3;  // rbx
    unsigned long long v4;  // rbp
    unsigned long long v5;  // rbp
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rax

    v3 = a3->field_10;
    v4 = a3->field_0;
    if (26.from_expression(a0, v3->field_60->field_8, v3->field_60->field_10, v4, a3->field_8) == 1)
    {
        v5 = 0;
    }
    else
    {
        v6 = *(a0).from();
        v5 = v4 & 0xffffffffffffff00 | 3;
        if (!(char)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v6, v7, v3->field_60->field_8, v3->field_60->field_10, v4, a3->field_8))
        {
            v8 = (unsigned long long)*(a0).needs_parentheses();
            v5 = v8 & 4294967295;
            if ((char)v8 == 2)
            {
                v5 = v5 & 0xffffffffffffff00 | 2;
                if (a1 == 2 && a2[14] && (char)a2[14].from().ptr_eq(v7, 53, a0))
                {
                    v5 = v5 & 0xffffffffffffff00 | 3;
                    if ((char)a2[11].is_empty())
                    {
                        v0 = 79;
                        v1 = a2[11];
                        v5 = (v3->padding_0[64].get_inner(&v0)) * 3;
                    }
                }
            }
        }
    }
    return v5 & 4294967295;
}
