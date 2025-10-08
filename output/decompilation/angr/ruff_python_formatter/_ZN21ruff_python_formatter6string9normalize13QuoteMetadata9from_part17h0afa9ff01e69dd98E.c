long long ruff_python_formatter::string::normalize::QuoteMetadata::from_part(unsigned long long a0, unsigned long long a1, struct_0 *a2, unsigned long long a3[2], char a4)
{
    unsigned long long v0;  // [bp-0x70]
    struct_0 *v1;  // [bp-0x68]
    unsigned long v2;  // [bp-0x60]
    char v3;  // [bp-0x50]
    char v4;  // [bp-0x40]
    unsigned int v6;  // edx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax
    char *v10;  // rdi
    char v12;  // bl
    char *v13;  // r15
    char v14;  // al

    v0 = a1;
    v1 = a2;
    if (a1 < 2)
    {
        v7 = (unsigned int)a1.content_range(a2).from(v6);
        v2 = a3[1];
        v9 = v7.get(v8, a3[0], a3[1]);
        if (!v9)
            core::str::slice_error_fail(a3[0], v2, v7, v8, &g_97f6d0); /* do not return */
        return a0.from_str(v9, v8, (unsigned int)v0.flags(), a4);
    }
    else
    {
        v10 = &v0;
        if (a1 == 2)
        {
            v12 = a4;
            v13 = &v3;
            v3.from_str(1, 0, (unsigned int)v10.flags(), v12);
            v14 = a2->field_24.from();
        }
        else
        {
            v12 = a4;
            v13 = &v4;
            v4.from_str(1, 0, (unsigned int)v10.flags(), v12);
            v14 = a2->field_24.from();
        }
        return a0.merge_interpolated_string_elements(v13, a2, v14, a3, v12);
    }
}
