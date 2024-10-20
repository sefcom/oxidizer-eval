double _ZN5uu_od9prn_float17format_item_flo3217haf4d4dd51a044ba9E.llvm.4719287278224745771(long long a0)
{
    unsigned int v0;  // [sp-0xac]
    char v1;  // [bp-0xa8]
    char v2;  // [bp-0xa0]
    unsigned long v3;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x88]
    unsigned long long v5;  // [sp-0x80]
    void* v6;  // [sp-0x78]
    unsigned long long v7;  // [sp-0x70]
    unsigned long long v8;  // [sp-0x68]
    unsigned long long v9;  // [sp-0x60]
    unsigned long long v10;  // [sp-0x58]
    void* v11;  // [sp-0x50]
    unsigned long long v12;  // [sp-0x48]
    char v13;  // [sp-0x40]
    unsigned long v14;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x30]
    unsigned long long v16;  // [sp-0x28]
    unsigned long long v17;  // [sp-0x20]
    unsigned long long v18;  // [sp-0x18]
    unsigned long long v19;  // [sp-0x10]
    int v21;  // ymm0
    unsigned int v22;  // ymm0
    int v23;  // ymm1
    int v26;  // xmm0

    v22 = (unsigned int)v21;
    v0 = v22;
    if (((char)((CmpF((unsigned long long)(v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103 & (uint128_t)v21), 0x7f800000) & 69) >> 6) & 1) == 1 || !(unsigned int)(v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103 & (uint128_t)v21) || (v0 & 0x7f800000))
    {
        uu_od::prn_float::format_float::h98787d2b0c8c6111(&v1, 14, 8);
    }
    else
    {
        v3 = &v0;
        v4 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f32$GT$::fmt::h814b1cab8d475c50;
        v5 = 14;
        v6 = 0;
        v7 = 2;
        v9 = 1;
        v10 = 1;
        v11 = 0;
        v12 = 32;
        v13 = 3;
        v14 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v15 = 1;
        v18 = &v7;
        v19 = 1;
        v16 = &v3;
        v17 = 2;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v1, &v14);
    }
    v3 = &v1;
    v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v7 = &g_504c40;
    v8 = 1;
    v11 = 0;
    v9 = &v3;
    v10 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v14, &v7);
    if (*((long long *)&v1))
        __rust_dealloc(*((long long *)&v2));
    a0->field_10 = v16;
    v26 = *((int128_t *)&v14);
    *((void*)&a0->field_0) = v26;
    return (unsigned long long)(v21 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26);
}
