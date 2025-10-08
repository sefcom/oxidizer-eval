char ruff_python_formatter::expression::expr_unary_op::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprUnaryOp>::needs_parentheses(unsigned long long *a0, unsigned long a1, unsigned long a2, struct_2 *a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp-0x8]
    unsigned long long v6;  // r15
    unsigned long long v7;  // r14
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rax
    char v10;  // al
    unsigned long long v11;  // rdx

    if (a1 == 39)
        return 1;
    v4 = v6;
    v3 = v7;
    v2 = v8;
    v9 = *(a0).from();
    v10 = 3;
    if (!(char)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v9, v11, a3->field_10->field_60->field_8, a3->field_10->field_60->field_10, a3->field_0, a3->field_8))
    {
        v0 = *(a0).from();
        v1 = v11;
        v10 = 1;
        if (!a3->field_10->padding_0[64].get_inner(&v0))
            *(a0).needs_parentheses();
    }
    return v10;
}
