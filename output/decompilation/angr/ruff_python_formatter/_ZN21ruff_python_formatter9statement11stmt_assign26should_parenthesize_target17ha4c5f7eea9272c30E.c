long long ruff_python_formatter::statement::stmt_assign::should_parenthesize_target(unsigned int *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    if (!ruff_python_formatter::statement::stmt_assign::has_target_own_parentheses(a0, a1->field_10))
    {
        v3 = ruff_python_formatter::statement::stmt_assign::is_attribute_with_parenthesized_value(a0, a1);
        return v3 & 0xffffffffffffff00 | (char)v3 ^ 1;
    }
    return 0;
}
