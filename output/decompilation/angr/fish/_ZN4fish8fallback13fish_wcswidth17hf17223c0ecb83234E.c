long long fish::fallback::fish_wcswidth(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v4;  // r15
    unsigned int v5;  // eax
    void* v6;  // rbx
    unsigned int v8;  // ebp
    unsigned long long v9;  // cc_ndep
    void* v10;  // rbx
    unsigned int v11;  // ebp
    unsigned long long v12;  // rax
    void* v13;  // rbx

    v2 = v4;
    v0 = a0;
    v1 = a0 + a1 * 4;
    if (v0.try_fold().eq(0))
        return a1;
    v0 = a0;
    if ((int)v0.next() == 2)
        return 0;
    v6 = 0;
    while (true)
    {
        v10 = v6;
        v11 = v8;
        v5.unwrap(v11, &g_14bd1b0);
        v12 = fish::fallback::fish_wcwidth(v11);
        if (v12 < 0)
            return 18446744073709551615;
        v13 = v10 + v12;
        if ((char)_ccall(0, 4, v10, v12, v9))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d89d0); /* do not return */
        v5 = v0.next();
        v6 = v13;
        if (v5 == 2)
            return v10 + v12;
    }
}
