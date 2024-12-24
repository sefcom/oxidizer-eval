long long uu_env::debug_print_args::hd3db9b945e2eb806(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xb0]
    unsigned long long v3;  // [sp-0xa8]
    int v4;  // [bp-0xa0], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x98]
    unsigned long v6;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x80]
    void* v8;  // [sp-0x78]
    unsigned long v9;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x68]
    unsigned long long v11;  // [sp-0x60]
    unsigned long long v12;  // [sp-0x58]
    unsigned long long v13;  // [sp-0x50]
    int v14;  // [sp-0x48]
    char v15;  // [sp-0x38]
    int v17;  // ymm0
    int v18;  // ymm0
    unsigned long long v19;  // rax
    struct_0 *v20;  // rdx
    struct_0 *v21;  // rdx
    int v22;  // xmm0
    unsigned long long v23;  // rsi

    v1 = &g_5491a8;
    v2 = 1;
    v3 = 8;
    v18 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((int128_t *)&v4) = 0;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, a1, a2);
    v6 = a0;
    v7 = a0 + a1 * 24;
    v8 = 0;
    v19 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h588f0f0774a96702(&v6);
    if (!v20)
        return v19;
    do
    {
        v0 = v19;
        v22 = *((int128_t *)&(&v21->padding_0)[1]);
        v18 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22;
        v13 = 1;
        v14 = v22;
        v15 = 1;
        v9 = &v0;
        v10 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v11 = &v13;
        v12 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v1 = &g_5491b8;
        v2 = 3;
        v5 = 0;
        v3 = &v9;
        v4 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v23, v21);
        v19 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h588f0f0774a96702(&v6);
    } while (v20);
    return v19;
}
