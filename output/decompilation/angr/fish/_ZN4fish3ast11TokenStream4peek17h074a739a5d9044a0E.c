long long fish::ast::TokenStream::peek(unsigned long long a0[19], unsigned long a1)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    uint128_t v3;  // [bp-0x38]
    unsigned long v5;  // rax
    unsigned long long v6;  // cc_ndep
    unsigned long long v7;  // cc_ndep
    unsigned long v8;  // rcx
    unsigned long v9;  // rdx
    unsigned int v10;  // edx
    unsigned long long v11;  // cc_ndep
    unsigned long v12;  // rcx

    if (a1 > 1)
    {
        v0 = &g_14c5028;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14c5038); /* do not return */
    }
    if (a1 < a0[18])
    {
        v5 = a0[17];
    }
    else
    {
        do
        {
            v7 = v6;
            v0.next_from_tok(a0);
            v5 = a0[17];
            v8 = a0[18];
            v9 = v5;
            if ((char)__CFADD__(v9, v8))
                core::panicking::panic_const::panic_const_add_overflow(&g_14c5068); /* do not return */
            v10 = (unsigned int)v9 + (unsigned int)v8 & 1;
            *((int128_t *)&a0[3 + 2 * v10]) = *((int128_t *)&v0);
            v11 = _ccall(31, (unsigned long long)v10 * 16, (unsigned long long)v10 * 8, v7);
            v12 = v8 + 1;
            if ((char)_ccall(4, 24, v8 + 1, 0, _ccall(31, (unsigned long long)v10 * 16, (unsigned long long)v10 * 8, v7)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14c5080); /* do not return */
            a0[18] = v12;
            v6 = v11;
        } while (a1 >= v12);
    }
    if ((char)__CFADD__(v5, a1))
        core::panicking::panic_const::panic_const_add_overflow(&g_14c5050); /* do not return */
    return &a0[2 * ((unsigned int)v5 + (unsigned int)a1 & 1) + 3];
}
