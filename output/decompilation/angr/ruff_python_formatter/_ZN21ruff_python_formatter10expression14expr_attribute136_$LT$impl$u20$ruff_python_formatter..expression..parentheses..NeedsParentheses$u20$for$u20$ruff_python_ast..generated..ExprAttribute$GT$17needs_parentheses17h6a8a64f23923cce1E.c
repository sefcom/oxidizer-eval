long long ruff_python_formatter::expression::expr_attribute::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprAttribute>::needs_parentheses(struct_3 *a0, unsigned long a1, unsigned long a2, struct_2 *a3)
{
    struct_0 *v1;  // r13
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v1 = a3->field_10;
    if (25.from_expression(a0, v1->field_60->field_8, v1->field_60->field_10, a3->field_0, a3->field_8) == 1)
        return 0;
    v2 = v1.dangling(a0) & 0xffffffffffffff00 | 1;
    if (v3)
        return v2;
    v4 = a0->field_28.from();
    v5 = ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v4, v3, v1->field_60->field_8, v1->field_60->field_10, a3->field_0, a3->field_8);
    if (!(char)v5)
        return (unsigned long long)a0->field_28.needs_parentheses();
    return v5 & 0xffffffffffffff00 | 3;
}
