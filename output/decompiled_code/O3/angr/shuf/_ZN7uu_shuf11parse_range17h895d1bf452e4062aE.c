long long uu_shuf::parse_range::h895d1bf452e4062a(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xb8], Other Possible Types: char
    unsigned long v1;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xa8]
    char v3;  // [sp-0xa0]
    unsigned long long v4;  // [bp-0x98], Other Possible Types: unsigned long
    char v5;  // [bp-0x90], Other Possible Types: unsigned long, unsigned long long
    char *v6;  // [sp-0x88]
    unsigned long long v7;  // [sp-0x80]
    void* v8;  // [sp-0x78]
    unsigned long long v9;  // [sp-0x68]
    char *v10;  // [sp-0x60], Other Possible Types: unsigned long
    unsigned long long v11;  // [sp-0x58]
    char v12;  // [bp-0x50]
    char v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x38]
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13
    unsigned long long v19;  // rbp
    unsigned long long v20;  // r13
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    int v23;  // xmm0

    core::str::_$LT$impl$u20$str$GT$::split_once::h8f190cd472d8d64b(&v12, a1, a2);
    v17 = *((long long *)&v12);
    if (!v17)
    {
        v0 = 0;
        v1 = a1;
        v2 = a2;
        v3 = 1;
        v10 = &v0;
        vvar_258{stack -88} = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        vvar_259{stack -152} = &g_537d38;
        vvar_260{stack -144} = 1;
        vvar_261{stack -120} = 0;
        vvar_262{stack -136} = &v10;
        vvar_263{stack -128} = 1;
        ::0x4c0370::core::option::Option$LT$T$GT$::map_or_else::h7c94a57f03ee0317(&a0[1], &v4);
        a0[0] = 1;
        return a0;
    }
    v18 = *((long long *)&v13);
    v9 = *((long long *)&v14);
    v19 = *((long long *)&v15);
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v0, v17, v18);
    if (v0)
    {
        uu_shuf::parse_range::_$u7b$$u7b$closure$u7d$$u7d$::h12498d1826f58d1e(&v4, v17, v18);
        vvar_255{reg 224} = *((int128_t *)&v5);
        a0[1] = v22;
        *((void*)&a0[2]) = v23;
        a0[0] = 1;
        return a0;
    }
    v20 = v1;
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v0, v9, v19);
    if (!v0)
    {
        v21 = v1;
        if (v20 <= v21)
        {
            a0[1] = v20;
            a0[2] = v21;
            *((char *)&a0[1]) = 0;
            a0[0] = 0;
            return a0;
        }
    }
    else
    {
        uu_shuf::parse_range::_$u7b$$u7b$closure$u7d$$u7d$::ha46b1477c8a092d1(&v4, v9, v19);
        v22 = v4;
        if (v22 != 0x8000000000000000)
        {
            v23 = *((int128_t *)&v5);
            a0[1] = v22;
            *((void*)&a0[2]) = v23;
            a0[0] = 1;
            return a0;
        }
        v21 = v5;
        if (v20 <= v21)
        {
            a0[1] = v20;
            a0[2] = v21;
            *((char *)&a0[1]) = 0;
            a0[0] = 0;
            return a0;
        }
    }
    if (v20 != v21 + 1)
    {
        v0 = 0;
        v1 = a1;
        v2 = a2;
        v3 = 1;
        v10 = &v0;
        v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v4 = &g_537d38;
        v5 = 1;
        v8 = 0;
        v6 = &v10;
        v7 = 1;
        ::0x4c0370::core::option::Option$LT$T$GT$::map_or_else::h7c94a57f03ee0317(&a0[1], &v4);
        a0[0] = 1;
        return a0;
    }
    a0[1] = v20;
    a0[2] = v21;
    *((char *)&a0[1]) = 0;
    a0[0] = 0;
    return a0;
}
