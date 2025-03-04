double uu_csplit::CsplitOptions::new::h18a4d0e2255fb53b(long long a0, long long a1)
{
    char v0;  // [sp-0x11b]
    char v1;  // [sp-0x11a]
    char v2;  // [sp-0x119]
    int v3;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long v4;  // [sp-0x118]
    unsigned long long v5;  // [sp-0x110]
    struct struct_0 **v6;  // [sp-0x108], Other Possible Types: struct struct_1 **, unsigned long long
    unsigned long long v7;  // [sp-0x100]
    void* v8;  // [sp-0xf8]
    char *v9;  // [sp-0xe0]
    char *v10;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0xd8]
    char v12;  // [bp-0xc8]
    char v13;  // [bp-0xb8]
    char v14;  // [bp-0xb0]
    char v15;  // [bp-0xa8]
    char v16;  // [bp-0xa0]
    char v17;  // [bp-0x98]
    char v18;  // [bp-0x88]
    char v19;  // [bp-0x78]
    int v20;  // [bp-0x68]
    int v21;  // [bp-0x68], Other Possible Types: unsigned long long
    int v22;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x48]
    struct struct_0 **v24;  // [sp-0x40]
    unsigned long long v25;  // [sp-0x38]
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    int v30;  // xmm0
    int v31;  // ymm0
    int v32;  // ymm0
    unsigned long long v33;  // rax
    int v34;  // xmm0
    int v35;  // xmm0
    int v36;  // xmm0
    int v37;  // xmm0
    int v38;  // xmm1
    int v39;  // xmm2
    int v40;  // xmm0
    unsigned long v41;  // rdx

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "keep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 10);
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "quietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 5);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "elide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 17);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf15a83bd2d124092(&v12, a1, "prefixsuffix-formatdigits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6);
    v28 = clap_builder::parser::error::MatchesError::unwrap::hd942431c9d8b51dc("prefixsuffix-formatdigits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6, &v12);
    if (!v28)
        v10 = 0x8000000000000000;
    else
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v10, v28);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf15a83bd2d124092(&v12, a1, "suffix-formatdigits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 13);
    v29 = clap_builder::parser::error::MatchesError::unwrap::hd942431c9d8b51dc("suffix-formatdigits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 13, &v12);
    if (!v29)
    {
        v21 = 0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v12, v29);
        v22 = *((long long *)&v13);
        v30 = *((int128_t *)&v12);
        v32 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
        v21 = v30;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf15a83bd2d124092(&v12, a1, "digits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6);
    v33 = clap_builder::parser::error::MatchesError::unwrap::hd942431c9d8b51dc("digits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6, &v12);
    if (!v33)
    {
        v3 = 0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v12, v33);
        v6 = *((long long *)&v13);
        v34 = *((int128_t *)&v12);
        v32 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
        v3 = v34;
    }
    uu_csplit::split_name::SplitName::new::h3397569db94b2c64(&v12, &v10, &v21, &v3);
    if (*((long long *)&v12) == 0x8000000000000000)
    {
        v23 = *((long long *)&v16);
        v40 = *((int128_t *)&(&v12)[8]);
        *((int128_t *)&v22) = *((int128_t *)&v14);
        v20 = v40;
        v9 = uucore::util_name::h60d842bf27b05e82();
        v11 = v41;
        v24 = &v10;
        v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2dda48c026ef89eb;
        v4 = &g_6e1d78;
        v5 = 2;
        v8 = 0;
        v6 = &v24;
        v7 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
        v9 = &v21;
        v11 = _$LT$uu_csplit..csplit_error..CsplitError$u20$as$u20$core..fmt..Display$GT$::fmt::hf6930a6d48bf4e10;
        v4 = &g_6e1d98;
        v5 = 2;
        v8 = 0;
        v6 = &v10;
        v7 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
        std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
    }
    v35 = *((int128_t *)&v19);
    *((void*)&a0->field_50) = v35;
    v36 = *((int128_t *)&v18);
    *((void*)&a0->field_40) = v36;
    v37 = *((int128_t *)&v12);
    v38 = *((int128_t *)&v13);
    v39 = *((int128_t *)&v15);
    a0->field_30 = *((int128_t *)&v17);
    *((void*)&a0->field_20) = v39;
    *((void*)&a0->field_10) = v38;
    *((void*)&a0->field_0) = v37;
    a0->field_60 = v2;
    a0->field_61 = v1;
    a0->field_62 = v0;
    a0->field_63 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "suppress-matched", 16);
    return (unsigned long long)(((v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37);
}
