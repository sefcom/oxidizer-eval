long long uu_whoami::whoami::ha4b83fef2fa2e8a3(unsigned long long a0[3])
{
    unsigned long long v0;  // [sp-0xd0]
    unsigned long long v1;  // [sp-0xc8]
    unsigned long long v2;  // [sp-0xc0]
    unsigned long long v3;  // [sp-0xb8]
    char v4;  // [bp-0xb0], Other Possible Types: unsigned long, unsigned long long
    uint128_t *v5;  // [sp-0xa8], Other Possible Types: unsigned long
    unsigned long v6;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long v7;  // [sp-0x98], Other Possible Types: unsigned long long
    char v8;  // [bp-0x90]
    char v9;  // [bp-0x80]
    char v10;  // [bp-0x78]
    char v11;  // [bp-0x68]
    char v12;  // [bp-0x60]
    char v13;  // [bp-0x50]
    char v14;  // [bp-0x48]
    unsigned long long v16;  // rbp
    unsigned long long v17;  // r14
    uint128_t *v18;  // rax
    uint128_t v23[2];  // rax
    int v24;  // xmm0

    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h530d40ac55e53641(&v4, geteuid());
    v16 = v4;
    v17 = v5;
    if (v16 != 0x8000000000000000)
    {
        v3 = v6;
        v1 = *((long long *)&v12);
        v2 = *((long long *)&v14);
        if (v7 << 1)
        {
            v0 = *((long long *)&v10);
            __rust_dealloc(*((long long *)&v8));
        }
        if (*((long long *)&v9) << 1)
            __rust_dealloc(v0);
        if (*((long long *)&v11) << 1)
            __rust_dealloc(v1);
        if (*((long long *)&v13) << 1)
            __rust_dealloc(v2);
        a0[0] = v16;
        a0[1] = v17;
        a0[2] = v3;
        return a0;
    }
    else
    {
        v18 = __rust_alloc(22, 1);
        if (!v18)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        *(v18) = 153469376506670727247652608416930160998;
        *((long long *)((char *)v18 + 14)) = 7308604897285731189;
        v4 = 22;
        v5 = v18;
        v6 = 22;
        v7 = v17;
        v23 = __rust_alloc(32, 8);
        if (v23)
        {
            v24 = *((int128_t *)&v4);
            v23[1] = *((int128_t *)&v6);
            *((void*)&v23[0]) = v24;
            a0[1] = v23;
            a0[2] = &g_4d71d8;
            a0[0] = 0x8000000000000000;
            return a0;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
}
