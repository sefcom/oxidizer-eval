long long fish::wutil::wwrite_to_fd::do_write(unsigned int a0, unsigned long long *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    uint128_t v3;  // [bp-0x48]
    unsigned long long v5;  // r14
    unsigned long long v6;  // r15
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // r14
    unsigned long long v10;  // rax
    unsigned long long v11;  // rbx
    unsigned long v13;  // rax

    if (!a3)
        return v13 & 0xffffffffffffff00 | 1;
    v5 = a3;
    v6 = a2;
    v7 = *(a1);
    while (true)
    {
        v8 = v7;
        v9 = v5;
        fish::wutil::write_to_fd(&v0, v6, v9, a0);
        if (((char)v0 & 1))
            return 0;
        v10 = v1;
        v11 = v8 + v10;
        if ((char)__CFADD__(v8, v10))
            core::panicking::panic_const::panic_const_add_overflow(&g_14c1730); /* do not return */
        *(a1) = v11;
        if (v9 < v10)
        {
            v0 = &g_14c1720;
            v1 = 1;
            v2 = 8;
            v3 = 0;
            core::panicking::panic_fmt(&v0, &g_14c1748); /* do not return */
        }
        v6 += v10;
        v5 = v9 - v10;
        v7 = v11;
        if (v9 == v10)
            return v10 & 0xffffffffffffff00 | 1;
    }
}
