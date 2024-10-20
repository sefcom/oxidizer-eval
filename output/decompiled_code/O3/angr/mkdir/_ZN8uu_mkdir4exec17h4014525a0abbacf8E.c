long long uu_mkdir::exec::h4014525a0abbacf8(struct_1 *a0, unsigned long long a1, unsigned int a2, unsigned int a3)
{
    unsigned long long v1;  // [sp-0xe0]
    unsigned long v3;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xb8]
    unsigned long v5;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xa8]
    unsigned long long v7;  // [sp-0xa0]
    unsigned long long v8;  // [sp-0x98]
    void* v9;  // [sp-0x90]
    unsigned long long v11;  // [sp-0x78]
    unsigned long v14;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x58]
    unsigned long long v16;  // [sp-0x50]
    unsigned long long v17;  // [sp-0x48]
    int v18;  // [sp-0x40]
    int v28;  // ymm0
    struct_3 *v36;  // rdx
    unsigned long long v37;  // rsi
    int v38;  // xmm0
    unsigned long long v39;  // rbx
    struct struct_0 **v40;  // rax

    v38 = g_4e9fb0;
    v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
    v18 = v38;
    v14 = &v18;
    v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd506080ec407e424;
    v16 = &v3;
    v17 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h81693998ad10d0be;
    v5 = &g_4e50e8;
    v6 = 3;
    v9 = 0;
    v7 = &v14;
    v8 = 2;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v5, v37, v36);
    v39 = v3;
    if (v36->field_0)
        v40(v39);
    if (v36->field_8)
        __rust_dealloc(v39);
    v11 = v11;
    if (!v1)
        continue;
    __rust_dealloc(v4);
    v11 = v11;
}
