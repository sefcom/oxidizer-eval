long long uu_uniq::opt_parsed::hc0945d23ea6e3989(unsigned long long a0[3], unsigned long a1, unsigned long a2, unsigned long long a3)
{
    unsigned long v0;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xe0]
    unsigned long v2;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xd0]
    unsigned long long v4;  // [sp-0xc8]
    unsigned long long v5;  // [sp-0xc0]
    int v6;  // [sp-0xb8]
    int v7;  // [bp-0xa8]
    unsigned int v8;  // [sp-0xa0]
    unsigned long long v9;  // [sp-0x98]
    void* v10;  // [bp-0x88], Other Possible Types: char
    unsigned long long v11[3];  // [sp-0x80], Other Possible Types: unsigned long long
    char v12;  // [bp-0x78], Other Possible Types: unsigned long long
    char v13;  // [sp-0x70]
    char v14;  // [bp-0x68]
    unsigned long v15;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x58]
    unsigned long long v17;  // [sp-0x50]
    unsigned long long v18;  // [sp-0x48]
    void* v19;  // [sp-0x40]
    unsigned long v20;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x28]
    unsigned long long v23[3];  // rax
    int v24;  // xmm0
    unsigned long long v25;  // r15
    unsigned long long v26;  // r12
    unsigned long long v27;  // rax
    uint128_t v28[2];  // rax

    v20 = a1;
    v21 = a2;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he9607e1a2ea35c9f(&v10, a3, v0, v1);
    v0 = a1;
    v1 = a2;
    if (*((int *)&v10) != 2)
    {
        v9 = *((long long *)&v14);
        v24 = *((int128_t *)&v10);
        *((int128_t *)&v7) = *((int128_t *)&v12);
        v6 = v24;
        v2 = &v0;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::had17ade00331e9e0;
        v4 = &v6;
        v5 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v15 = &anon.91813ef2801f4d1d4cad4af8ef82e3d6.4.llvm.14928124353916811356;
        v16 = 2;
        v19 = 0;
        v17 = &v2;
        v18 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v15); /* do not return */
    }
    v23 = v11;
    if (!v23)
    {
        *((int128_t *)&a0[0]) = 0;
        return a0;
    }
    v25 = v23[1];
    v26 = v23[2];
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v0, v25, v26);
    switch ((char)v0)
    {
    case 0:
        a0[1] = 1;
        a0[2] = v1;
        goto LABEL_4890cd;
    case 2:
        a0[1] = 1;
        a0[2] = -1;
LABEL_4890cd:
        v27 = 0;
        break;
    default:
        v10 = 0;
        v11 = v25;
        v12 = v26;
        v13 = 0;
        v2 = &v20;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::had17ade00331e9e0;
        v4 = &v10;
        v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v15 = &g_4f2c28;
        v16 = 2;
        v19 = 0;
        v17 = &v2;
        v18 = 2;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v6, &v15);
        v8 = 1;
        v28 = __rust_alloc(32, 8);
        if (!v28)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v28[1] = (int128_t)v7;
        *((void*)&v28[0]) = v6;
        a0[1] = v28;
        a0[2] = &g_4f2c80;
        v27 = 1;
        break;
    }
    a0[0] = v27;
    return a0;
}
