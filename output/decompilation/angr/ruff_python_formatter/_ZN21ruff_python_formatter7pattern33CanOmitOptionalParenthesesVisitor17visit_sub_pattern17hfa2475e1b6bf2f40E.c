long long ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_sub_pattern(struct_0 *a0, void* a1, struct_3 *a2)
{
    unsigned long long v1;  // rax

    a0->field_18 = a1;
    v1 = ruff_python_formatter::pattern::is_pattern_parenthesized(a1, a2->field_10->field_60->field_8, a2->field_10->field_60->field_10, a2->field_0, a2->field_8);
    if ((char)v1)
    {
        a0->field_20 = 1;
        if (a0->field_0)
            return v1;
    }
    else
    {
        v1 = (unsigned long long)a0.visit_pattern(a1);
        if (a0->field_0)
            return v1;
    }
    a0->field_0 = 2;
    a0->field_8 = a1;
    return v1;
}
