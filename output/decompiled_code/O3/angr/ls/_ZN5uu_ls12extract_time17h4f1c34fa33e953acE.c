long long uu_ls::extract_time::h4f1c34fa33e953ac(unsigned long long a0)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x40]
    unsigned long long v3;  // [sp-0x38]
    int v4;  // [sp-0x30]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&v1, a0, "time", 4);
    v6 = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9("time", 4, &v1);
    if (!v6)
    {
        v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "ucFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs/rustc/8bfcae730a5db2438bbda7279617", 1);
        v11 = v10 | -0x100 | 1;
        if (!(char)v10)
        {
            v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "cFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs/rustc/8bfcae730a5db2438bbda72796175", 1);
            v11 = v13 | -0x100 | (char)v13 * 2;
            return v11;
        }
        return v11;
    }
    else
    {
        v7 = v6[1];
        v8 = v6[2];
        v9 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "ctimestatusaccessatimeusebirthinternal error: entered unreachable code: Invalid field for --time", 5);
        v11 = v9 | -0x100 | 2;
        if ((char)v9)
            return v11;
        v12 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "statusaccessatimeusebirthinternal error: entered unreachable code: Invalid field for --time", 6);
        v11 = v12 | -0x100 | 2;
        if ((char)v12)
            return v11;
        v14 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "accessatimeusebirthinternal error: entered unreachable code: Invalid field for --time", 6);
        v11 = v14 | -0x100 | 1;
        if ((char)v14)
            return v11;
        v15 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "atimeusebirthinternal error: entered unreachable code: Invalid field for --time", 5);
        if ((char)v15)
        {
            v11 = v15 | -0x100 | 1;
            return v11;
        }
        v16 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "usebirthinternal error: entered unreachable code: Invalid field for --time", 3);
        v11 = v16 | -0x100 | 1;
        if ((char)v16)
            return v11;
        v17 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "birthinternal error: entered unreachable code: Invalid field for --time", 5);
        v11 = v17 | -0x100 | 3;
        if ((char)v17)
            return v11;
        v18 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "creation*direct*@", 8);
        v11 = v18 | -0x100 | 3;
        if ((char)v18)
            return v11;
        v1 = &g_6122a0;
        v2 = 1;
        v3 = &v0;
        *((int128_t *)&v4) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v1); /* do not return */
    }
}
