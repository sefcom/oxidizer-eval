long long ruff_python_formatter::string::normalize::StringNormalizer::choose_quotes(unsigned long a0, unsigned long long a1[2], unsigned int a2, unsigned long long a3, void* a4)
{
    unsigned long v0;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned int v2;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    struct_0 *v7;  // [bp-0x40]
    void* v8;  // [bp-0x38]
    unsigned int v10;  // edx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v13;  // r12
    char v14;  // al
    unsigned long long v15;  // rax
    unsigned int v16;  // ebx
    unsigned long long v17;  // rax
    char v19;  // bpl

    v2 = a2;
    v3 = a3;
    v6 = (unsigned int)a3.content_range(a4).from(v10);
    v0 = a1[0];
    v1 = a1[1];
    v12 = v6.get(v11, a1[0], a1[1]);
    if (!v12)
        core::str::slice_error_fail(v0, v1, v6, v11, &g_97f688); /* do not return */
    v1 = v11;
    v4 = v12;
    v5 = v12 + v11;
    v8 = 0;
    v13 = v4.try_fold(&v8);
    v0 = v11;
    v14 = (unsigned int)v3.flags();
    v15 = a1.preferred_quote_style((char)v2, a3, a4);
    if ((char)v15 != 2)
    {
        if (((char)v13 & 1))
        {
            v16 = v15;
            if (v3 < 2)
            {
                v17 = v0.get(v4, v1);
                v2 = v11;
                if (!v17)
                    core::str::slice_error_fail(v4, v1, v0, v1, &g_97f6a0); /* do not return */
                v4.from_str(v17, v2, (unsigned int)v3.flags(), v16);
            }
            else
            {
                v4.from_part(v3, a4, a1, v16);
            }
            v15 = v4.choose(v16);
        }
        v19 = v14 & 254 | (char)v15;
    }
    v7->field_10 = v19;
    v7->field_0 = (unsigned int)v13 & 1;
    v7->field_8 = v0;
    return v7;
}
