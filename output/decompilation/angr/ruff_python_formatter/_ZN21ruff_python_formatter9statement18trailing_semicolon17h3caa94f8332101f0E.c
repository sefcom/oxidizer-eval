long long ruff_python_formatter::statement::trailing_semicolon(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long
    char v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    char v4;  // [bp-0x58]
    char v5;  // [bp-0x28]
    unsigned int v7;  // edx
    unsigned long long v8;  // rax

    v2 = a1;
    v3 = a2;
    v2.range();
    v4.starts_at(v7, a3, a4);
    v5 = 0;
    v0.try_fold(&v4);
    v8 = 0;
    if (v1 == 13)
    {
        *((unsigned long *)&(&a0->field_0)[1]) = v0;
        v8 = 1;
    }
    a0->field_0 = v8;
    return v8;
}
