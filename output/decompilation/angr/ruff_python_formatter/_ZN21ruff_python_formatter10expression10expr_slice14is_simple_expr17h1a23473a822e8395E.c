char ruff_python_formatter::expression::expr_slice::is_simple_expr(struct_0 *a0)
{
    unsigned int v1;  // eax
    struct_0 *v2;  // rdi
    struct_0 *v3;  // rdi

    v1 = a0->field_0;
    if (a0->field_0 == 3)
    {
        do
        {
            v2 = a0;
            if (v2->field_1c == 1)
            {
                v1 = 3;
                break;
            }
            v3 = v2->field_8;
            v1 = v2->field_8->field_0;
            a0 = v3;
        } while (v2->field_8->field_0 == 3);
    }
    return v1 == 28 | v1 - 19 < 6;
}
