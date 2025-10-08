char ruff_python_formatter::expression::is_expression_huggable(struct_0 *a0, char a1)
{
    unsigned long long v0;  // [bp-0x120]
    unsigned long v2;  // rcx
    struct_0 *v3;  // rdi

    v2 = a0->field_0;
    if (v2 == 27)
    {
        do
        {
            v3 = a0->field_8;
            v2 = a0->field_8->field_0;
            a0 = v3;
        } while (v2 == 27);
    }
    v0 = 6845102143;
    if ((*((char *)&v0 + ((v2 & 63) >> 3)) >> ((char)v2 & 63 & 7) & 1))
        a1 = 0;
    return a1 & 1;
}
