double ruff_python_formatter::string::normalize::StringNormalizer::normalize(long long a0, long long a1, long long a2, long long a3, long long a4)
{
    unsigned int v0;  // [bp-0x84]
    unsigned long long v1;  // [bp-0x80]
    char v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x60]
    unsigned long v6;  // [bp-0x58]
    unsigned long v7;  // [bp-0x50]
    char v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    char v10;  // [bp-0x38]
    unsigned int v12;  // edx
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rbp
    char v16;  // r14b
    unsigned int v17;  // eax
    int v18;  // xmm0

    v0 = a2;
    v5 = (unsigned int)a3.content_range(a4).from(v12);
    v7 = a1[0];
    v6 = a1[1];
    v14 = v5.get(v13, a1[0], a1[1]);
    if (!v14)
        core::str::slice_error_fail(v7, v6, v5, v13, &g_97f6b8); /* do not return */
    v15 = v14;
    v8.choose_quotes(a1, (char)v0, a3, a4);
    if ((v8 & 1))
    {
        v16 = v10;
        ruff_python_formatter::string::normalize::normalize_string(&v2, v15, v13, v9, v10, 0);
    }
    else
    {
        v3 = v15;
        v4 = v13;
        v1 = 0x8000000000000000;
        v16 = v10;
    }
    v17 = a3.content_range(a4);
    a0->field_10 = v4;
    v18 = *((int128_t *)&v1);
    *((void*)&a0->field_0) = v18;
    a0->field_20 = v16;
    a0->field_18 = v17;
    a0->field_1c = v13;
    return (unsigned long long)v18;
}
