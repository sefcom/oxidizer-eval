long long uu_join::get_field_number::h7f856b6d62549a04(unsigned long long a0[2], unsigned long a1, unsigned long a2, unsigned long a3, unsigned long long a4)
{
    unsigned long v0;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x80], Other Possible Types: unsigned long long
    char v2;  // [bp-0x78]
    char v3;  // [bp-0x68]
    unsigned int v4;  // [sp-0x60]
    unsigned long v5;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x50]
    unsigned long long v7;  // [sp-0x48]
    unsigned long long v8;  // [sp-0x40]
    unsigned long v9;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x30]
    unsigned long long v11;  // [sp-0x28]
    unsigned long long v12;  // [sp-0x20]
    void* v13;  // [sp-0x18]
    uint128_t v15[2];  // rax
    int v16;  // xmm0
    unsigned long long v17;  // rax

    if (a1 != 1)
    {
        a0[1] = a4;
    }
    else
    {
        if (a4 == 1 && a2 != a4)
        {
            v0 = a2 + 1;
            v1 = a4 + 1;
            v5 = &v0;
            v6 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            v7 = &v1;
            v8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            v9 = &g_4fdd70;
            v10 = 2;
            v13 = 0;
            v11 = &v5;
            v12 = 2;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v2, &v9);
            v4 = 1;
            v15 = __rust_alloc(32, 8);
            if (v15)
            {
                v16 = *((int128_t *)&v2);
                v15[1] = *((int128_t *)&v3);
                *((void*)&v15[0]) = v16;
                a0[0] = v15;
                a0[1] = &g_4fdb88;
                return &g_4fdb88;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        a0[1] = a2;
    }
    a0[0] = 0;
    return v17;
}
