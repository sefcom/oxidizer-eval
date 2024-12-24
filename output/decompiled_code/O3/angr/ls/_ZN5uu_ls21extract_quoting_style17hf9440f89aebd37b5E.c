long long uu_ls::extract_quoting_style::hf9440f89aebd37b5(unsigned long long a0, unsigned int a1)
{
    char v0;  // [bp-0x100]
    char v1;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xf0]
    unsigned long v3;  // [sp-0xe8], Other Possible Types: unsigned long long
    int v4;  // [bp-0xe0], Other Possible Types: unsigned long long
    void* v5;  // [sp-0xd8]
    char v6;  // [bp-0xc8]
    char v7;  // [bp-0xc0]
    char v8;  // [bp-0xb0]
    int v9;  // [sp-0xa8]
    unsigned long long v10;  // [sp-0x98]
    int v11;  // [sp-0x88]
    unsigned long long v12;  // [sp-0x78]
    char v13;  // [bp-0x68], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v14;  // [sp-0x60]
    unsigned long v15;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x50]
    char v17;  // [bp-0x48]
    unsigned int v19;  // r15d
    unsigned long long v20[3];  // rax
    unsigned int v21;  // ebp
    unsigned int v22;  // r14d
    unsigned int v23;  // ebp
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rdx
    char v27;  // al

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb6c62c6da4772362(&v1, a0, "quoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink", 13);
    v20 = clap_builder::parser::error::MatchesError::unwrap::h46c725aee7e39242("quoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink", 13, &v1);
    if (v20)
    {
        v21 = uu_ls::match_quoting_style_name::h8c3878752213a331(v20[1], v20[2], a1);
        v22 = v21 >> 16;
        if (v22 != 4)
        {
            v19 = v21 >> 8;
            return v21 | v19 * 0x100 | v22 * 0x10000;
        }
        v1 = &g_612520;
        v2 = 1;
        v3 = &v0;
        *((int128_t *)&v4) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v1); /* do not return */
    }
    else
    {
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "literalquote-name", 7))
        {
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "escapeliteralquote-name", 6))
            {
                v22 = a0 | -0x100 | 2;
                return 0 | &anon.34cd953b2c946f74a585889e96ce9d7a.21.llvm.16853030268703478466 * 0x100 | v22 * 0x10000;
            }
            else if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "quote-name", 10))
            {
                v22 = a0 | -0x100 | 2;
                v21 = vvar_61{reg 56} | -0x100 | 2;
                return v21 | &anon.34cd953b2c946f74a585889e96ce9d7a.21.llvm.16853030268703478466 * 0x100 | v22 * 0x10000;
            }
            else if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "diredhyperlink", 5))
            {
                std::env::var::hb53068d7e3fff36b(&v6, "QUOTING_STYLEls: Ignoring invalid value of environment variable QUOTING_STYLE: ''\nfile-typeslashCOLUMNS: ignoring invalid width in environment variable COLUMNS: \n", 13);
                if (!*((long long *)&v6))
                {
                    *((int128_t *)&v9) = *((int128_t *)&v7);
                    v10 = *((long long *)&v8);
                    v23 = uu_ls::match_quoting_style_name::h8c3878752213a331((long long)(&v9)[8], *((long long *)&v8), a1);
                    v22 = v23 >> 16;
                    if (v22 != 4)
                    {
                        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v9);
                        v19 = v23 >> 8;
                        if (*((long long *)&v6))
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hfee43625aff72c46(&v6);
                            return v21 | v19 * 0x100 | v22 * 0x10000;
                        }
                        return v21 | v19 * 0x100 | v22 * 0x10000;
                    }
                    std::env::args::hcc0787e3c3e9e7bb(&v17);
                    _$LT$std..env..Args$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6e31a9487ed13e72(&v13, &v17);
                    if (v13 != 0x8000000000000000)
                    {
                        v12 = v15;
                    }
                    else
                    {
                        ::0x51d010::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h2d1b440b8b51b75c(&v1, "ls: Ignoring invalid value of environment variable QUOTING_STYLE: ''\nfile-typeslashCOLUMNS: ignoring invalid width in environment variable COLUMNS: \n", 2);
                        v12 = v3;
                    }
                    *((int128_t *)&v11) = *((int128_t *)&v13);
                    v13 = &v11;
                    v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v15 = &v9;
                    v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v1 = &g_612548;
                    v2 = 3;
                    v5 = 0;
                    v3 = &v13;
                    v4 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v11);
                    ::0x51a480::core::ptr::drop_in_place$LT$std..env..Args$GT$::hd4af9cc739084891(&v17);
                    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v9);
                    if (!*((long long *)&v6))
                    {
LABEL_51f992:
                        v1 = std::io::stdio::stdout::h077da66234850927();
                        v27 = std::sys::pal::unix::io::is_terminal::h619d02e5ebc637a8();
                        v21 = (!v27 ? 1 : a1);
                        return v21 | 0 * 0x100 | v22 * 0x10000;
                    }
                }
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hfee43625aff72c46(&v6);
                goto LABEL_51f992;
            }
        }
        v22 = a0 | -0x100 | 3;
        return v21 | &anon.34cd953b2c946f74a585889e96ce9d7a.21.llvm.16853030268703478466 * 0x100 | v22 * 0x10000;
    }
}
