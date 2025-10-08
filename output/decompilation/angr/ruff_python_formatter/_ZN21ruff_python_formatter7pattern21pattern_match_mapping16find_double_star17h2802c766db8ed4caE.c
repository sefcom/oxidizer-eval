long long ruff_python_formatter::pattern::pattern_match_mapping::find_double_star(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x58]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    if (a1->field_4f != 218)
    {
        v2.starts_at((unsigned int)(!a1->field_28 ? 0 : a1->field_20 + a1->field_28 * 104 - 104).map_or(a1->field_58), a2, a3);
        v5 = v0.try_fold(&v2);
        if (v1 != 90)
        {
            *((unsigned long *)&(&a0->field_0)[1]) = v0;
            v6 = a1->field_30;
            *((unsigned long long *)((char *)&a0->field_4 + 4)) = v6;
            a0->field_0 = 1;
            return v6;
        }
    }
    a0->field_0 = 0;
    return v5;
}
