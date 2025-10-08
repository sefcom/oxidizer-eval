long long ruff_python_formatter::other::interpolated_string_element::needs_bracket_spacing(struct_0 *a0, struct_3 *a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    char *v3;  // rax

    if (a0->field_0 == 30 && !a0->field_2c && a0->field_18 == 1)
        return 0;
    v0 = v2;
    v3 = (unsigned long long)ruff_python_formatter::expression::left_most(a0, *((long long *)&a1->field_10->field_60->field_8), *((long long *)&a1->field_10->field_60->field_10), *((long long *)&a1->field_0), a1->field_8);
    return 1728 >> (*(v3) & 63) & 0xffffffffffffff00 | (char)(1728 >> (*(v3) & 63)) & 1;
}
