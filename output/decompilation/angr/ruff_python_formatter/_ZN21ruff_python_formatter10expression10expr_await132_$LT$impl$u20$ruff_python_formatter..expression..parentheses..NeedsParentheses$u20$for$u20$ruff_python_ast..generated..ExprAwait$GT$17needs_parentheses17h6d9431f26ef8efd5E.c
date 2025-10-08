char ruff_python_formatter::expression::expr_await::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprAwait>::needs_parentheses(unsigned long long *a0, unsigned long a1, unsigned long a2, struct_2 *a3)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx

    v0 = v2;
    if (a1 == 39)
        return 1;
    v3 = *(a0).from();
    if (!(char)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v3, v4, a3->field_10->field_60->field_8, a3->field_10->field_60->field_10, a3->field_0, a3->field_8))
        return (char)*(a0).needs_parentheses();
    return 3;
}
