double uu_csplit::CsplitOptions::new::h4fb345c074d4a8b7(long long a0, long long a1)
{
    char v0;  // [sp-0x15a]
    char v1;  // [sp-0x159]
    unsigned long v2;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x150]
    unsigned long long v4;  // [sp-0x148]
    unsigned long long v5;  // [sp-0x140]
    int v6;  // [sp-0x138], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v7;  // [sp-0x130]
    unsigned long long v8;  // [sp-0x128]
    int v9;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x110]
    int v11;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x100]
    void* v13;  // [sp-0xf8], Other Possible Types: unsigned long long
    int v14;  // [bp-0xe8], Other Possible Types: char
    char v15;  // [bp-0xe0]
    int v16;  // [sp-0xd8]
    unsigned long long v17;  // [sp-0xc8], Other Possible Types: unsigned long
    char v18;  // [sp-0xb8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v19;  // [sp-0xb0]
    unsigned long long v20;  // [sp-0xa8], Other Possible Types: unsigned long
    unsigned long long v21;  // [sp-0xa0]
    void* v22;  // [sp-0x98]
    char v23;  // [bp-0x90]
    char v24;  // [bp-0x88]
    char v25;  // [bp-0x78]
    char v26;  // [bp-0x68]
    char v27;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long v28;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x38]
    int v35;  // xmm0
    int v36;  // ymm0
    int v37;  // ymm0
    int v39;  // xmm0
    int v40;  // xmm0
    int v41;  // xmm0
    int v42;  // xmm0
    int v43;  // xmm1
    int v44;  // xmm2
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rsi

    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "quietelide-empty-filesprefixsuffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 5);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "elide-empty-filesprefixsuffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 17);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h11ade93b86173184(&v14, a1, "prefixsuffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6);
    v6 = "prefixsuffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created";
    v7 = 6;
    if (*((int *)&v14) != 2)
    {
        v13 = v17;
        v11 = v16;
        v9 = v14;
        v2 = &v6;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h755d27ba57abf4e8;
        v4 = &v9;
        v5 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v18 = &anon.5805961d024328d1ae6714d7116fbcce.7.llvm.2876468079995662589;
        v19 = 2;
        v22 = 0;
        v20 = &v2;
        v21 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v18); /* do not return */
    }
    if (!*((long long *)&v15))
        v27 = 0x8000000000000000;
    else
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v27, *((long long *)&v15));
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h11ade93b86173184(&v14, a1, "suffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 13);
    v6 = "suffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created";
    v7 = 13;
    if (*((int *)&v14) != 2)
    {
        v13 = v17;
        v11 = v16;
        v9 = v14;
        v2 = &v6;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h755d27ba57abf4e8;
        v4 = &v9;
        v5 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v18 = &anon.5805961d024328d1ae6714d7116fbcce.7.llvm.2876468079995662589;
        v19 = 2;
        v22 = 0;
        v20 = &v2;
        v21 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v18); /* do not return */
    }
    if (!*((long long *)&v15))
    {
        v6 = 0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v18, *((long long *)&v15));
        v8 = v20;
        v35 = *((int128_t *)&v18);
        v37 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35;
        v6 = v35;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h11ade93b86173184(&v14, a1, "digits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6);
    v28 = "digits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created";
    v29 = 6;
    if (*((int *)&v14) != 2)
    {
        v13 = v17;
        v11 = v16;
        v9 = v14;
        v2 = &v28;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h755d27ba57abf4e8;
        v4 = &v9;
        v5 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v18 = &anon.5805961d024328d1ae6714d7116fbcce.7.llvm.2876468079995662589;
        v19 = 2;
        v22 = 0;
        v20 = &v2;
        v21 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v18); /* do not return */
    }
    if (!*((long long *)&v15))
    {
        v9 = 0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v18, *((long long *)&v15));
        v11 = v20;
        v39 = *((int128_t *)&v18);
        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
        v9 = v39;
    }
    uu_csplit::split_name::SplitName::new::h3e641f7b6f8ed00f(&v18, &v27, &v6, &v9);
    if (v18 == 0x8000000000000000)
    {
        v17 = *((long long *)&v23);
        *((int128_t *)&v16) = *((int128_t *)&v21);
        *((int128_t *)&v14) = *((int128_t *)&v19);
        v2 = uucore::util_name::h359eff083fe53467();
        v3 = v45;
        v6 = &v2;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h755d27ba57abf4e8;
        v9 = &g_675b50;
        v10 = 2;
        v13 = 0;
        v11 = &v6;
        v12 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v46, v45);
        v2 = &v14;
        v3 = _$LT$uu_csplit..csplit_error..CsplitError$u20$as$u20$core..fmt..Display$GT$::fmt::h0d0d0279d9d23498;
        v9 = &g_675b70;
        v10 = 2;
        v13 = 0;
        v11 = &v2;
        v12 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v46, v45);
        std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
    }
    v40 = *((int128_t *)&v26);
    *((void*)&a0->field_50) = v40;
    v41 = *((int128_t *)&v25);
    *((void*)&a0->field_40) = v41;
    v42 = *((int128_t *)&v18);
    v43 = *((int128_t *)&v20);
    v44 = *((int128_t *)&v22);
    a0->field_30 = *((int128_t *)&v24);
    *((void*)&a0->field_20) = v44;
    *((void*)&a0->field_10) = v43;
    *((void*)&a0->field_0) = v42;
    a0->field_60 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "keep-filesquietelide-empty-filesprefixsuffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 10);
    a0->field_61 = v1;
    a0->field_62 = v0;
    a0->field_63 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "suppress-matched", 16);
    return (unsigned long long)(v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42);
}
