long long uu_fmt::linebreak::slice_if_fresh(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, char a6, char a7, char a8)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    void* v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rdx
    void* v8;  // rdi
    unsigned long long v9;  // rdi
    unsigned long long v11;  // rsi

    v0 = v1;
    if (a1)
    {
        v2 = a4.get(a2, a3);
        if (!v2)
            core::str::slice_error_fail(a2, a3, a4, a3, &g_583f98); /* do not return */
        v3 = 0;
        v4 = v2;
        v5 = v2;
        v7 = v6;
    }
    else
    {
        v4 = a6;
        v8 = (a8 & (char)v4 | a7) + 1;
        if ((char)v4)
            v9 = v8;
        else
            v9 = 0;
        v11 = v9;
        if (a5)
        {
            v3 = v8;
            v5 = a2;
            v7 = a3;
        }
        else
        {
            v3 = v11;
            v5 = a2;
            v7 = a3;
        }
    }
    a0->field_0 = v3;
    a0->field_8 = v5;
    a0->field_10 = v7;
    return v4;
}
