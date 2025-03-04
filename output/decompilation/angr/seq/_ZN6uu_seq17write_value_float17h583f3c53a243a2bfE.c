long long uu_seq::write_value_float::h583f3c53a243a2bf(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    unsigned long v0;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0xd8]
    unsigned long long v2;  // [sp-0xd0]
    struct struct_0 **v3;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xc0]
    void* v5;  // [sp-0xb8]
    unsigned long long v6;  // [sp-0xb0]
    char v7;  // [sp-0xa8]
    unsigned long v8;  // [sp-0xa0]
    char *v9;  // [sp-0x98]
    char *v10;  // [sp-0x98]
    unsigned long long v11;  // [sp-0x90]
    unsigned long long v12;  // [sp-0x88]
    void* v13;  // [sp-0x80]
    unsigned long long v14;  // [sp-0x78]
    void* v15;  // [sp-0x70]
    unsigned long v16;  // [sp-0x68]
    unsigned long long v17;  // [sp-0x60]
    struct struct_0 **v18;  // [sp-0x58]
    unsigned long long v19;  // [sp-0x50]
    char *v20;  // [sp-0x48]
    unsigned long long v21;  // [sp-0x40]
    char v22;  // [bp-0x38]

    v8 = a1;
    if ((char)_$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..cmp..PartialEq$GT$::eq::h03c6b2bee9905bee(a1) || (char)_$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..cmp..PartialEq$GT$::eq::h03c6b2bee9905bee(a1))
    {
        v9 = &v8;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2233a37d2c19bdda;
        v12 = a3;
        v13 = 0;
        v14 = a2;
        v15 = 0;
        v0 = 1;
        v2 = 1;
        v3 = 1;
        v4 = 2;
        v5 = 0;
        v6 = 32;
    }
    else
    {
        v9 = &v8;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2233a37d2c19bdda;
        v12 = a3;
        v13 = 0;
        v14 = a2;
        v15 = 0;
        v0 = 1;
        v2 = 1;
        v3 = 1;
        v4 = 2;
        v5 = 0;
        v6 = 34359738400;
    }
    v7 = 1;
    v16 = &g_4176c0;
    v17 = 1;
    v20 = &v0;
    v21 = 1;
    v18 = &v9;
    v19 = 3;
    ::0x4c6f70::core::option::Option$LT$T$GT$::map_or_else::h91a2236e2fc5d115(&v22, &v16);
    v10 = &v22;
    v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v1 = &g_4176c0;
    v2 = 1;
    v5 = 0;
    v3 = &v9;
    v4 = 1;
    ::0x4c6240::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf11645ab5eda60b(&v22);
    return std::io::Write::write_fmt::ha89a837e03ebc8db(a0, &v0);
}
