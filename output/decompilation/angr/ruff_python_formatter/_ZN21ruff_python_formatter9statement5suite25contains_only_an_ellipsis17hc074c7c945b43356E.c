long long ruff_python_formatter::statement::suite::contains_only_an_ellipsis(struct_0 *a0, unsigned long a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp-0x8]
    unsigned long long v6;  // r15
    unsigned long long v7;  // r14
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax

    if (a1 != 1)
    {
        return 0;
    }
    else if (a0->field_0 == 9223372036854775827)
    {
        v4 = v6;
        v3 = v7;
        v2 = v8;
        if (a0->field_8->field_0 != 24)
            return 0;
        v0 = (unsigned long long)a0.from();
        v1 = v9;
        a2 + 16.leading(&v0);
        if (!v9)
        {
            v10 = a2.has_trailing_own_line(a0);
            return v10 & 0xffffffffffffff00 | (char)v10 ^ 1;
        }
        return 0;
    }
    else
    {
        return 0;
    }
}
