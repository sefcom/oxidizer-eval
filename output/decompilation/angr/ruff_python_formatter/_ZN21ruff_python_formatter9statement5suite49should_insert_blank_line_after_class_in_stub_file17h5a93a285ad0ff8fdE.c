long long ruff_python_formatter::statement::suite::should_insert_blank_line_after_class_in_stub_file(unsigned long long a0, unsigned long long a1[6], unsigned long long a2, unsigned long long a3[6], struct_0 *a4)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long v3;  // [bp-0x30]
    char v4;  // [bp-0x28]
    unsigned long v6;  // r8
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx

    v0 = a0;
    if (a2 == 94)
    {
        return 0;
    }
    else if (a4->field_33 == 1)
    {
        v6 = &a4->field_10;
        if (a0 != 3)
        {
            v1 = v0.last_child_in_body();
            v2 = v11;
            v4 = 0;
            v3 = v6;
            return v1.try_fold().eq(1);
        }
        v7 = *((long long *)v6);
        if (!(char)ruff_python_formatter::statement::suite::contains_only_an_ellipsis(a1[4], a1[5], v7))
        {
            v10 = v7.has_trailing_own_line(3, a1);
            return v10 & 0xffffffffffffff00 | (char)v10 ^ 1;
        }
        if (a2 == 3)
        {
            v8 = ruff_python_formatter::statement::suite::contains_only_an_ellipsis(a3[4], a3[5], v7);
            v9 = v8 & 0xffffffffffffff00 | 1;
            if (!(char)v8)
                return v8 & 0xffffffffffffff00 | 1;
            a2 = 3;
            if (a1[2] || a3[2])
                return v8 & 0xffffffffffffff00 | 1;
        }
        else
        {
            v9 = a1 & 0xffffffffffffff00 | 1;
            if (a1[2])
                return a1 & 0xffffffffffffff00 | 1;
        }
        return v9 & 0xffffffffffffff00 | a2 == 2;
    }
    else
    {
        return 0;
    }
}
