long long ruff_python_formatter::statement::clause::ClauseHeader::range(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4)
{
    unsigned int v0;  // [bp-0x58]
    char v1;  // [bp-0x50], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0x4c]
    unsigned int v3;  // [bp-0x48]
    unsigned long v4;  // [bp-0x44]
    char v5;  // [bp-0x3c]
    unsigned int v6;  // [bp-0x34]
    unsigned long v8;  // rax
    unsigned long long v9;  // r13

    v1.first_keyword_range(a1);
    v8 = v1;
    if ((unsigned int)v8 != 4)
    {
        *((int *)((char *)&a0->field_c + 4)) = *((int *)&v5);
        *((unsigned long *)&(&a0->field_8)[1]) = v4;
        a0->field_0 = v8;
        a0->field_4 = v2;
        a0->field_8 = v3;
        return v8;
    }
    v6 = v2;
    v0 = 0;
    a1.visit(a2, &v0);
    v9 = a1 - 3;
    if (v9 >= 12)
        v9 = 12;
    goto (long long)(g_487978[v9] + (char *)&g_487978[0]);
}
