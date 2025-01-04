long long uu_env::print_env::h67417add1e73f63a(char a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [sp-0x159]
    unsigned long v1;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0x150], Other Possible Types: unsigned long long
    int v3;  // [sp-0x148]
    unsigned long long v4;  // [sp-0x138]
    int v5;  // [sp-0x128]
    unsigned long long v6;  // [sp-0x118]
    int v7;  // [sp-0x108]
    int v8;  // [sp-0xf8]
    char *v9;  // [sp-0xe0]
    unsigned long long v10;  // [sp-0xd8]
    char *v11;  // [sp-0xd0]
    unsigned long long v12;  // [sp-0xc8]
    char *v13;  // [sp-0xc0]
    unsigned long long v14;  // [sp-0xb8]
    unsigned long v15;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0xa8]
    struct struct_0 **v17;  // [sp-0xa0]
    unsigned long long v18;  // [sp-0x98]
    void* v19;  // [sp-0x90]
    char v20;  // [bp-0x80]
    char v21;  // [bp-0x70]
    char v22;  // [bp-0x68]
    char v23;  // [bp-0x58]
    char v24;  // [bp-0x50]
    char v25;  // [bp-0x40]
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdx
    int v29;  // xmm0
    int v30;  // ymm0
    int v31;  // ymm0
    int v32;  // xmm0
    int v33;  // xmm0

    v0 = a0;
    v2 = std::io::stdio::stdout::h077da66234850927();
    v1 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v2, v27, v28);
    std::env::vars::h104f59bf3851ffdb(&v24);
    v29 = *((int128_t *)&v24);
    v31 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29;
    *((int128_t *)&v8) = *((int128_t *)&v25);
    v7 = v29;
    while (true)
    {
        _$LT$std..env..Vars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0b476a668b5d347e(&v20, &v7);
        if (*((long long *)&v20) == 0x8000000000000000)
            break;
        v4 = *((long long *)&v21);
        v32 = *((int128_t *)&v20);
        v3 = v32;
        v6 = *((long long *)&v23);
        v33 = *((int128_t *)&v22);
        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33;
        v5 = v33;
        v9 = &v3;
        v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v11 = &v5;
        v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v13 = &v0;
        v14 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        v15 = &g_5487c0;
        v16 = 3;
        v19 = 0;
        v17 = &v9;
        v18 = 3;
        core::result::Result$LT$T$C$E$GT$::unwrap::h06c9544b27cec57d(std::io::Write::write_fmt::hca08ab08a7c7b592(&v1, &v15));
        ::0x4ca240::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc60ce05406126818(&v5);
        ::0x4ca240::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc60ce05406126818(&v3);
    }
    core::ptr::drop_in_place$LT$std..env..Vars$GT$::hec98998f7d042e09(&v7);
    return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h80708a336f9a43e5(v1);
}
