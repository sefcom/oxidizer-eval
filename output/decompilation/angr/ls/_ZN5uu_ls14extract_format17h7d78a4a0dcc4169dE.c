long long uu_ls::extract_format::h7d78a4a0dcc4169d(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [sp-0x50]
    unsigned long long v3;  // [sp-0x48]
    int v4;  // [sp-0x40]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // r15
    unsigned long long v8;  // r12
    unsigned long long v9;  // rax
    unsigned long long v10;  // r14

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&v1, a1, "formatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink ", 6);
    v6 = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9("formatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink ", 6, &v1);
    if (!v6)
    {
        v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, &anon.8bf1419b86641518549345aedc57e906.1.llvm.11260003342554782039, 4);
        if ((char)v9)
        {
            a0->field_0 = 1;
            a0->field_8 = &anon.8bf1419b86641518549345aedc57e906.1.llvm.11260003342554782039;
            a0->field_10 = 4;
            return v9;
        }
        v10 = "xtabsizemgonumeric-uid-giducFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs/rustc/8b";
        v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "xtabsizemgonumeric-uid-giducFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs/rustc/8b", 1);
        if ((char)v9)
        {
            a0->field_0 = 3;
        }
        else
        {
            v10 = "mgonumeric-uid-giducFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs/rustc/8bfcae730a";
            v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "mgonumeric-uid-giducFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs/rustc/8bfcae730a", 1);
            if ((char)v9)
            {
                a0->field_0 = 4;
            }
            else
            {
                v10 = "Cxtabsizemgonumeric-uid-giducFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs/rustc/8";
                v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "Cxtabsizemgonumeric-uid-giducFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs/rustc/8", 1);
                if ((char)v9)
                {
                    a0->field_0 = 0;
                }
                else
                {
                    v1 = std::io::stdio::stdout::h077da66234850927();
                    v9 = std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e();
                    if ((char)v9)
                        a0->field_0 = 0;
                    else
                        a0->field_0 = 2;
                    a0->field_8 = 0;
                    return v9;
                }
            }
        }
        a0->field_8 = v10;
        a0->field_10 = 1;
        return v9;
    }
    else
    {
        v7 = v6[1];
        v8 = v6[2];
        v9 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, &anon.8bf1419b86641518549345aedc57e906.1.llvm.11260003342554782039, 4);
        if (!(char)v9)
        {
            v9 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "verbosesingle-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 7);
            if (!(char)v9)
            {
                v9 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "single-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 13);
                if (!(char)v9)
                {
                    v9 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "columnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 7);
                    if ((char)v9 || (v9 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "verticalNovember", 8), (char)v9))
                    {
                    }
                    else
                    {
                        v9 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "acrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 6);
                        if (!(char)v9)
                        {
                            v9 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "horizontalcommasinternal error: entered unreachable code: Invalid field for --format", 10);
                            if (!(char)v9)
                            {
                                v9 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "commasinternal error: entered unreachable code: Invalid field for --format", 6);
                                if (!(char)v9)
                                {
                                    v1 = &g_612250;
                                    v2 = 1;
                                    v3 = &v0;
                                    *((uint128_t *)&v4) = 0;
                                    core::panicking::panic_fmt::he12d0d7468628bb4(&v1, &g_612260); /* do not return */
                                }
                            }
                        }
                    }
                }
            }
        }
        a0->field_0 = 1;
        a0->field_8 = "formatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink ";
        a0->field_10 = 6;
        return v9;
    }
}
