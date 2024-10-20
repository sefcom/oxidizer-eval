double _ZN5uu_od9prn_float17format_item_flo6417h665ecaaabbb46015E.llvm.4719287278224745771(long long a0)
{
    char v0;  // [bp-0x80]
    char v1;  // [bp-0x78]
    unsigned long v2;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x60]
    char v4;  // [bp-0x58]
    char v5;  // [bp-0x48]
    unsigned long v6;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x38]
    unsigned long long v8;  // [sp-0x30]
    unsigned long long v9;  // [sp-0x28]
    void* v10;  // [sp-0x20]
    int v12;  // xmm0
    int v13;  // ymm0

    uu_od::prn_float::format_float::h98787d2b0c8c6111(&v0, 24, 17);
    v2 = &v0;
    v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v6 = &g_504c40;
    v7 = 1;
    v10 = 0;
    v8 = &v2;
    v9 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v4, &v6);
    if (*((long long *)&v0))
        __rust_dealloc(*((long long *)&v1));
    a0->field_10 = *((long long *)&v5);
    v12 = *((int128_t *)&v4);
    *((void*)&a0->field_0) = v12;
    return (unsigned long long)(v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v12);
}
