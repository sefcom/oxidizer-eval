int uu_du::StatPrinter::print_stats::hfb8390c260ac772e()
{
    struct struct_0 **v3;  // [sp-0x2a0]
    struct struct_0 **v4;  // [sp-0x288]
    unsigned long long v5;  // [sp-0x280]
    struct struct_0 **v6;  // [sp-0x278]
    unsigned long long v7;  // [sp-0x270]
    struct struct_0 **v8;  // [sp-0x230]
    unsigned long long v12;  // [sp-0x1c0]
    unsigned long v13;  // [sp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x1a0]
    struct struct_0 **v15;  // [bp-0x198]
    unsigned long long v16;  // [sp-0x190]
    struct struct_0 **v17;  // [bp-0x188]
    int v48;  // ymm0
    unsigned long long v53;  // rdx
    int v60;  // ymm0
    unsigned long long v85;  // rsi
    struct struct_0 **v86;  // xmm0
    unsigned long long v88;  // rbp
    struct_4 *v89;  // r14
    struct struct_3 **v90;  // rax

    v86 = *((int128_t *)&g_53b278);
    v48 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86;
    v8 = v86;
    v4 = &v8;
    v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1fe5dc4fcc5deb5;
    v6 = &v3;
    v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h449ecb45e9eee0d6;
    v13 = &g_534a30;
    v14 = 3;
    v17 = 0;
    v15 = &v4;
    v16 = 2;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v85, v53);
    v88 = v3;
    v89 = (&v3)[1];
    if (v89->field_0)
        v90(v88);
    if (v89->field_8)
        __rust_dealloc(v88);
    v13 = v13;
    v14 = v14;
    v12 = v12;
}
