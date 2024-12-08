long long uu_join::parse_field_number::hfb19f56cd8015270(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xa8]
    char v1;  // [bp-0xa7]
    char v2;  // [bp-0xa0]
    unsigned long v3;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x90]
    void* v5;  // [sp-0x88]
    unsigned long long v6;  // [sp-0x80]
    unsigned long long v7;  // [sp-0x78]
    char v8;  // [sp-0x70]
    unsigned long v9;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x60]
    unsigned long long v11;  // [sp-0x58]
    unsigned long long v12;  // [sp-0x50]
    void* v13;  // [sp-0x48]
    char v14;  // [bp-0x38]
    unsigned int v15;  // [sp-0x20]
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax

    v17 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v0, a1, a2);
    if (!v0)
    {
        v18 = *((long long *)&v2);
        if (v18)
        {
            v17 = v18 - 1;
            a0[1] = v17;
            a0[0] = 0;
            return v17;
        }
    }
    else if (v1 == 2)
    {
        a0[1] = -1;
        a0[0] = 0;
        return v17;
    }
    v5 = 0;
    v6 = a1;
    v7 = a2;
    v8 = 1;
    v3 = &v5;
    v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v9 = &g_536050;
    v10 = 1;
    v13 = 0;
    v11 = &v3;
    v12 = 1;
    ::0x4c29f0::core::option::Option$LT$T$GT$::map_or_else::h194c0e6a97f2c7f4(&v14, &v9);
    v15 = 1;
    *((double *)&a0[0]) = alloc::boxed::Box$LT$T$GT$::new::h30919857a4b52c57(&v14);
    a0[1] = &g_535e48;
    return &g_535e48;
}
