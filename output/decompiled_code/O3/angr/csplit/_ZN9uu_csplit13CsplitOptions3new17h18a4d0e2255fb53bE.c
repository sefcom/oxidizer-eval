double uu_csplit::CsplitOptions::new::h18a4d0e2255fb53b(long long a0, long long a1)
{
    char v0;  // [sp-0x11b]
    char v1;  // [sp-0x11a]
    char v2;  // [sp-0x119]
    int v3;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x110]
    struct struct_0 **v5;  // [sp-0x108], Other Possible Types: struct struct_1 **, unsigned long long
    unsigned long long v6;  // [sp-0x100]
    void* v7;  // [sp-0xf8]
    char *v8;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0xd8]
    char v10;  // [bp-0xc8]
    char v11;  // [bp-0xb8]
    char v12;  // [bp-0xb0]
    char v13;  // [bp-0xa8]
    char v14;  // [bp-0xa0]
    char v15;  // [bp-0x98]
    char v16;  // [bp-0x88]
    char v17;  // [bp-0x78]
    int v18;  // [bp-0x68], Other Possible Types: unsigned long long
    int v19;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x48]
    struct struct_0 **v21;  // [sp-0x40]
    unsigned long long v22;  // [sp-0x38]
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    int v27;  // xmm0
    int v28;  // ymm0
    int v29;  // ymm0
    unsigned long long v30;  // rax
    int v31;  // xmm0
    int v32;  // xmm0
    int v33;  // xmm0
    int v34;  // xmm0
    int v35;  // xmm1
    int v36;  // xmm2
    int v37;  // xmm0
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rsi

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "keep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 10);
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "quietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 5);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "elide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 17);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf15a83bd2d124092(&v10, a1, "prefixsuffix-formatdigits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6);
    v25 = clap_builder::parser::error::MatchesError::unwrap::hd942431c9d8b51dc("prefixsuffix-formatdigits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6, &v10);
    if (!v25)
        v8 = 0x8000000000000000;
    else
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v8, v25);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf15a83bd2d124092(&v10, a1, "suffix-formatdigits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 13);
    v26 = clap_builder::parser::error::MatchesError::unwrap::hd942431c9d8b51dc("suffix-formatdigits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 13, &v10);
    if (!v26)
    {
        v18 = 0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v10, v26);
        v19 = *((long long *)&v11);
        v27 = *((int128_t *)&v10);
        v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27;
        v18 = v27;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf15a83bd2d124092(&v10, a1, "digits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6);
    v30 = clap_builder::parser::error::MatchesError::unwrap::hd942431c9d8b51dc("digits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6, &v10);
    if (!v30)
    {
        v3 = 0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v10, v30);
        v5 = *((long long *)&v11);
        v31 = *((int128_t *)&v10);
        v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
        v3 = v31;
    }
    uu_csplit::split_name::SplitName::new::h3397569db94b2c64(&v10, &v8, &v18, &v3);
    if (*((long long *)&v10) == 0x8000000000000000)
    {
        v20 = *((long long *)&v14);
        v37 = *((int128_t *)&(&v10)[8]);
        *((int128_t *)&v19) = *((int128_t *)&v12);
        v18 = v37;
        v8 = uucore::util_name::h60d842bf27b05e82();
        v9 = v38;
        v21 = &v8;
        v22 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2dda48c026ef89eb;
        v3 = &g_6e1d78;
        v4 = 2;
        v7 = 0;
        v5 = &v21;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v39, v38);
        v8 = &v18;
        v9 = _$LT$uu_csplit..csplit_error..CsplitError$u20$as$u20$core..fmt..Display$GT$::fmt::hf6930a6d48bf4e10;
        v3 = &g_6e1d98;
        v4 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v39, v38);
        std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
    }
    v32 = *((int128_t *)&v17);
    *((void*)&a0->field_50) = v32;
    v33 = *((int128_t *)&v16);
    *((void*)&a0->field_40) = v33;
    v34 = *((int128_t *)&v10);
    v35 = *((int128_t *)&v11);
    v36 = *((int128_t *)&v13);
    a0->field_30 = *((int128_t *)&v15);
    *((void*)&a0->field_20) = v36;
    *((void*)&a0->field_10) = v35;
    *((void*)&a0->field_0) = v34;
    a0->field_60 = v2;
    a0->field_61 = v1;
    a0->field_62 = v0;
    a0->field_63 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "suppress-matched", 16);
    return (unsigned long long)(v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34);
}
