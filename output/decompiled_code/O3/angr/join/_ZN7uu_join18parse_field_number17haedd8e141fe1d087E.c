long long uu_join::parse_field_number::haedd8e141fe1d087(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xa8]
    char v1;  // [bp-0xa7]
    char v2;  // [bp-0xa0]
    unsigned long v3;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x90]
    char v5;  // [bp-0x88]
    char v6;  // [bp-0x78]
    unsigned int v7;  // [sp-0x70]
    void* v8;  // [sp-0x68]
    unsigned long long v9;  // [sp-0x60]
    unsigned long long v10;  // [sp-0x58]
    char v11;  // [sp-0x50]
    unsigned long v12;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x40]
    unsigned long long v14;  // [sp-0x38]
    unsigned long long v15;  // [sp-0x30]
    void* v16;  // [sp-0x28]
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    uint128_t v20[2];  // rax
    int v21;  // xmm0

    v18 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v0, a1, a2);
    if (!v0)
    {
        v19 = *((long long *)&v2);
        if (v19)
        {
            v18 = v19 - 1;
            a0[1] = v18;
            a0[0] = 0;
            return v18;
        }
    }
    else if (v1 == 2)
    {
        a0[1] = -1;
        a0[0] = 0;
        return v18;
    }
    v8 = 0;
    v9 = a1;
    v10 = a2;
    v11 = 1;
    v3 = &v8;
    v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v12 = &g_4fdd90;
    v13 = 1;
    v16 = 0;
    v14 = &v3;
    v15 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v5, &v12);
    v7 = 1;
    v20 = __rust_alloc(32, 8);
    if (v20)
    {
        v21 = *((int128_t *)&v5);
        v20[1] = *((int128_t *)&v6);
        *((void*)&v20[0]) = v21;
        a0[0] = v20;
        a0[1] = &g_4fdb88;
        return &g_4fdb88;
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
