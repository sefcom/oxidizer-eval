long long uu_realpath::prepare_relative_options::ha960aaefa565d72c(unsigned long long a0[6], unsigned long long a1, unsigned int a2, unsigned int a3)
{
    unsigned long long v0;  // [sp-0x120]
    unsigned long long v1;  // [sp-0x118]
    unsigned long long v2;  // [sp-0x110]
    unsigned long v3;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long v4;  // [sp-0x100], Other Possible Types: unsigned long long
    unsigned long v5;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xf0]
    void* v7;  // [sp-0xe8]
    unsigned long v8;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0xd0]
    unsigned long v10;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0xc0]
    unsigned long long v12;  // [sp-0xb8]
    unsigned long long v13;  // [sp-0xb0]
    int v14;  // [sp-0xa8]
    char v15;  // [bp-0xa0]
    int v16;  // [sp-0x98]
    unsigned long long v17;  // [sp-0x88]
    char v18;  // [bp-0x78]
    char v19;  // [bp-0x70]
    char v20;  // [bp-0x68]
    char v21;  // [bp-0x58]
    unsigned long long v22;  // [sp-0x50]
    char v23;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v25[3];  // rax
    unsigned long long v26[3];  // rax
    unsigned long long v27;  // r12
    unsigned long long v28;  // rbp
    unsigned long long v29;  // r12
    unsigned long long v30;  // r13
    unsigned long long v31;  // r15

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5cbdd45563ff2dd3(&v18, a1, "relative-toDIR", 11);
    v8 = "relative-toDIR";
    v9 = 11;
    if (*((int *)&v18) != 2)
    {
        v17 = *((long long *)&v21);
        *((int128_t *)&v16) = *((int128_t *)&v20);
        *((int128_t *)&v14) = *((int128_t *)&v18);
        v10 = &v8;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf62e986378156017;
        v12 = &v14;
        v13 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v3 = &anon.e3dccfd3189561d264c0b721ac2dd36e.2.llvm.11398483313410484421;
        v4 = 2;
        v7 = 0;
        v5 = &v10;
        v6 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
    }
    v25 = *((long long *)&v19);
    if (!v25)
        v23 = 0x8000000000000000;
    else
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v23, v25[1], v25[2]);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5cbdd45563ff2dd3(&v18, a1, "relative-base", 13);
    v8 = "relative-base";
    v9 = 13;
    if (*((int *)&v18) != 2)
    {
        v17 = *((long long *)&v21);
        *((int128_t *)&v16) = *((int128_t *)&v20);
        *((int128_t *)&v14) = *((int128_t *)&v18);
        v10 = &v8;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf62e986378156017;
        v12 = &v14;
        v13 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v3 = &anon.e3dccfd3189561d264c0b721ac2dd36e.2.llvm.11398483313410484421;
        v4 = 2;
        v7 = 0;
        v5 = &v10;
        v6 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
    }
    v26 = *((long long *)&v19);
    if (!v26)
    {
        v27 = 0x8000000000000000;
    }
    else
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v3, v26[1], v26[2]);
        v2 = v4;
        v22 = v5;
    }
    uu_realpath::canonicalize_relative_option::h8a6630e34749c849(&v3, &v23, a2, a3);
    v28 = v5;
    v0 = v3;
    if (v0 != 9223372036854775809)
    {
        v1 = v4;
        v3 = v27;
        v4 = v2;
        v5 = v22;
        uu_realpath::canonicalize_relative_option::h8a6630e34749c849(&v14, &v3, a2, a3);
        v29 = (long long)v14;
        v30 = *((long long *)&v15);
        v31 = (long long)v16;
        if (v29 == 9223372036854775809)
        {
            a0[1] = v30;
            a0[2] = v31;
            a0[0] = 9223372036854775809;
            if (!v0 << 1)
                return a0;
        }
        else if (!(v0 != 0x8000000000000000) || !(v29 != 0x8000000000000000) || !(!(char)std::path::Path::_starts_with::h98ec86359c41a446(v1, v28, v30, v31)))
        {
            a0[0] = v0;
            a0[1] = v1;
            a0[2] = v28;
            a0[3] = v29;
            a0[4] = v30;
            a0[5] = v31;
            return a0;
        }
        else
        {
            a0[0] = 0x8000000000000000;
            a0[3] = 0x8000000000000000;
            if (v29)
                __rust_dealloc(v30);
            if (!v0)
                return a0;
        }
        v2 = v1;
    }
    else
    {
        a0[1] = v1;
        a0[2] = v28;
        a0[0] = 9223372036854775809;
        if (!v27 << 1)
            return a0;
        v2 = v2;
    }
    __rust_dealloc(v2);
    return a0;
}
