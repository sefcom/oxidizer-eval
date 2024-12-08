long long uu_seq::write_value_float::h353224deef300b19(unsigned long long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    unsigned long v0;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xd0]
    unsigned long long v2;  // [sp-0xc8]
    unsigned long long v3;  // [sp-0xc0]
    void* v4;  // [sp-0xb8]
    unsigned long long v5;  // [sp-0xb0]
    char v6;  // [sp-0xa8]
    unsigned long v7;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long v8;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x90]
    unsigned long long v10;  // [sp-0x88]
    void* v11;  // [sp-0x80]
    unsigned long long v12;  // [sp-0x78]
    void* v13;  // [sp-0x70]
    unsigned long v14;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x60]
    unsigned long long v16;  // [sp-0x58]
    unsigned long long v17;  // [sp-0x50]
    unsigned long long v18;  // [sp-0x48]
    unsigned long long v19;  // [sp-0x40]
    char v20;  // [bp-0x38]
    unsigned long long v22;  // r12

    v22 = a1;
    v7 = a1;
    if ((char)_$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..cmp..PartialEq$GT$::eq::h161a3b079a7ca339(v22) || (char)_$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..cmp..PartialEq$GT$::eq::h161a3b079a7ca339(v22))
    {
        v8 = &v7;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf76b524088e66247;
        v10 = a3;
        v11 = 0;
        v12 = a2;
        v13 = 0;
        v0 = 1;
        v1 = 1;
        v2 = 1;
        v3 = 2;
        v4 = 0;
        v5 = 32;
    }
    else
    {
        v8 = &v7;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf76b524088e66247;
        v10 = a3;
        v11 = 0;
        v12 = a2;
        v13 = 0;
        v0 = 1;
        v1 = 1;
        v2 = 1;
        v3 = 2;
        v4 = 0;
        v5 = 34359738400;
    }
    v6 = 1;
    v14 = &g_417bc0;
    v15 = 1;
    v18 = &v0;
    v19 = 1;
    v16 = &v8;
    v17 = 3;
    ::0x4c8070::core::option::Option$LT$T$GT$::map_or_else::hd0493e25d730a6ce(&v20, &v14);
    v8 = &v20;
    v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v0 = &g_417bc0;
    v1 = 1;
    v4 = 0;
    v2 = &v8;
    v3 = 1;
    ::0x4c74f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h58559877abe05bd8(&v20);
    return std::io::Write::write_fmt::h40f9e24fb8281084(a0, &v0);
}
