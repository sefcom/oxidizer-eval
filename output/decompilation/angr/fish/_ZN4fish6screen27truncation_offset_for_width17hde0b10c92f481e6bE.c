long long fish::screen::truncation_offset_for_width(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbp
    void* v4;  // r13
    void* v5;  // r13
    unsigned long long v6;  // rbp
    unsigned long v7;  // r12
    unsigned long long v8;  // rax
    void* v9;  // r13

    v0 = v2;
    if (!a1)
        core::panicking::panic_const::panic_const_sub_overflow(&g_14e2090); /* do not return */
    v3 = 18446744073709551615;
    v4 = 0;
    while (true)
    {
        v5 = v4;
        v6 = v3;
        v7 = v6 + 1;
        v8 = fish::screen::wcwidth_rendered_min_0((unsigned int)a0.char_at(a1, v7));
        v9 = v5 + v8;
        if ((char)__CFADD__(v5, v8))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e20a8); /* do not return */
        if (v6 + 2 >= a1)
            break;
        v3 = v7;
        v4 = v9;
        if (v4 > a2)
            break;
    }
    return v7;
}
