long long uu_env::debug_print_args::h58ab4100689a8d63(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x98]
    unsigned long long v3;  // [sp-0x90]
    int v4;  // [bp-0x88], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x80]
    unsigned long v6;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x68]
    unsigned long long v8;  // [sp-0x60]
    unsigned long long v9;  // [sp-0x58]
    unsigned long long v10;  // [sp-0x50]
    int v11;  // [sp-0x48]
    char v12;  // [sp-0x38]
    int v14;  // ymm0
    int v15;  // ymm0
    unsigned long long v16;  // rax
    void* v17;  // r12
    void* v18;  // rbp
    int v19;  // xmm0
    unsigned long long v20;  // rsi
    unsigned long long v21;  // rdx

    v1 = &g_50c6a0;
    v2 = 1;
    v3 = 8;
    v15 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((int128_t *)&v4) = 0;
    v16 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, a1, a2);
    if (!a1)
        return v16;
    v17 = 0;
    v18 = 0;
    do
    {
        v0 = v18;
        v18 = v0 + 1;
        v19 = *((int128_t *)(8 + a0 + (char *)v17));
        v15 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19;
        v10 = 1;
        v11 = v19;
        v12 = 1;
        v6 = &v0;
        v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v8 = &v10;
        v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v1 = &g_50c6b0;
        v2 = 3;
        v5 = 0;
        v3 = &v6;
        v4 = 2;
        v16 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v20, v21);
        v17 += 24;
    } while ((a1 << 3) + (a1 << 4) != v17);
    return v16;
}
