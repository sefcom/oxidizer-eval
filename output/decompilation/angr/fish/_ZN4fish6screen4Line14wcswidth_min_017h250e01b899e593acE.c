long long fish::screen::Line::wcswidth_min_0(unsigned long long a0[3], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long v5;  // rdx
    void* v6;  // r15
    void* v7;  // rax
    void* v8;  // r12
    unsigned long long v9;  // rax

    v0 = v2;
    v3 = a1.min(a0[2]);
    v4 = v3.index(a0[1], a0[2]);
    if (!v5)
        return 0;
    v6 = 0;
    v7 = 0;
    while (true)
    {
        v8 = v7;
        v9 = fish::screen::wcwidth_rendered_min_0(*((int *)(16 + v4 + (char *)v6)));
        v7 = v9 + v8;
        if ((char)__CFADD__(v9, v8))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e1630); /* do not return */
        v6 += 24;
        if (v5 * 24 == v6)
            return v9 + v8;
    }
}
