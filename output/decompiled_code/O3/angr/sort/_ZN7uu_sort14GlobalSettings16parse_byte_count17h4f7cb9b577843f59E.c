long long uu_sort::GlobalSettings::parse_byte_count::h4f7cb9b577843f59(unsigned long long a0[4], unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x70]
    unsigned long long v2;  // [sp-0x68]
    unsigned long long v3;  // [sp-0x60]
    void* v4;  // [sp-0x58], Other Possible Types: unsigned short
    char v5;  // [sp-0x56]
    char v6;  // [bp-0x48], Other Possible Types: unsigned long, unsigned long long
    char v7;  // [bp-0x40], Other Possible Types: unsigned long long
    char v8;  // [bp-0x38]
    char v9;  // [bp-0x30]
    unsigned long long v10;  // [sp-0x28]
    unsigned long long v11;  // [sp-0x20]
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax
    int v15;  // xmm0
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rax

    v4 = 0;
    v0 = &g_5fec60;
    v1 = 13;
    v2 = "KmMgGtTPEZYBuffer size  does not fit in address spaceoptions '-' are incompatiblesrc/uu/sort/src/sort.rs";
    v3 = 1;
    v5 = 1;
    uucore::parser::parse_size::Parser::parse::hf9f4658bba8478f5(&v6, &v0, core::str::_$LT$impl$u20$str$GT$::trim_matches::he29caa9cef101389(a1, a2), v13);
    v14 = v6;
    if (v14 != 3)
    {
        v15 = *((int128_t *)&v7);
        v16 = *((long long *)&v9);
        a0[0] = v14;
        *((void*)&a0[1]) = v15;
        a0[3] = v16;
        return a0;
    }
    v11 = *((long long *)&v9);
    v10 = *((long long *)&v8);
    if (!v11)
    {
        a0[1] = v10;
        v17 = 3;
    }
    else
    {
        v6 = &v10;
        v7 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
        v0 = &g_5fed30;
        v1 = 2;
        v4 = 0;
        v2 = &v6;
        v3 = 1;
        ::0x51b950::core::option::Option$LT$T$GT$::map_or_else::hf7c47f284adcb320(&a0[1], &v0);
        v17 = 2;
    }
    a0[0] = v17;
    return a0;
}
