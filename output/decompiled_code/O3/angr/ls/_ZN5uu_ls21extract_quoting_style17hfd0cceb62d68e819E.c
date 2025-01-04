long long uu_ls::extract_quoting_style::hfd0cceb62d68e819(unsigned long long a0, unsigned int a1)
{
    char v0;  // [bp-0x100]
    char v1;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xf0]
    struct struct_0 **v3;  // [sp-0xe8], Other Possible Types: unsigned long, unsigned long long
    int v4;  // [bp-0xe0], Other Possible Types: unsigned long long
    void* v5;  // [sp-0xd8]
    char v6;  // [bp-0xc8]
    char v7;  // [bp-0xc0]
    char v8;  // [bp-0xb0]
    int v9;  // [sp-0xa8]
    unsigned long long v10;  // [sp-0x98]
    int v11;  // [sp-0x88]
    unsigned long long v12;  // [sp-0x78]
    char *v13;  // [bp-0x68], Other Possible Types: unsigned long
    unsigned long long v14;  // [sp-0x60]
    char *v15;  // [sp-0x58], Other Possible Types: unsigned long
    unsigned long long v16;  // [sp-0x50]
    char v17;  // [bp-0x48]
    unsigned long long v19[3];  // rax
    unsigned int v20;  // ebp
    unsigned int v23;  // ebp
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rdx
    char v27;  // al

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&v1, a0, "quoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink ", 13);
    v19 = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9("quoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink ", 13, &v1);
    if (v19)
    {
        v20 = uu_ls::match_quoting_style_name::h6db1b7024e711c4a(v19[1], v19[2], a1);
        a1 = v20 >> 16;
        if (a1 != 4)
        {
            a1 = v20 >> 8;
            return v20 | (unsigned int)(a1 * 0x100) | (unsigned int)(a1 * 0x10000);
        }
        v1 = &g_612320;
        v2 = 1;
        v3 = &v0;
        *((int128_t *)&v4) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v1); /* do not return */
    }
    else
    {
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "literalquote-name", 7))
        {
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "escapeliteralquote-name", 6))
            {
                a1 = a0 | -0x100 | 2;
                return 0 | (unsigned int)(a1 * 0x100) | (unsigned int)(a1 * 0x10000);
            }
            else if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "quote-name", 10))
            {
                a1 = a0 | -0x100 | 2;
                v20 = vvar_61{reg 56} | -0x100 | 2;
                return v20 | (unsigned int)(a1 * 0x100) | (unsigned int)(a1 * 0x10000);
            }
            else if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "diredhyperlink ", 5))
            {
                std::env::var::hc35b8d22aa896d90(&v6, "QUOTING_STYLEfile-typeslashCOLUMNS: ignoring invalid width in environment variable COLUMNS: \n", 13);
                if (!*((long long *)&v6))
                {
                    *((int128_t *)&v9) = *((int128_t *)&v7);
                    v10 = *((long long *)&v8);
                    v23 = uu_ls::match_quoting_style_name::h6db1b7024e711c4a((long long)(&v9)[8], *((long long *)&v8), a1);
                    a1 = v23 >> 16;
                    if (a1 != 4)
                    {
                        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v9);
                        a1 = v23 >> 8;
                        if (*((long long *)&v6))
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h586f11e1c15586f9(&v6);
                            return v20 | (unsigned int)(a1 * 0x100) | (unsigned int)(a1 * 0x10000);
                        }
                        return v20 | (unsigned int)(a1 * 0x100) | (unsigned int)(a1 * 0x10000);
                    }
                    std::env::args::hcc0787e3c3e9e7bb(&v17);
                    _$LT$std..env..Args$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6e31a9487ed13e72(&v13, &v17);
                    if (v13 != 0x8000000000000000)
                    {
                        v12 = v15;
                    }
                    else
                    {
                        ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&v1, "ls: Ignoring invalid value of environment variable QUOTING_STYLE: ''\nQUOTING_STYLEfile-typeslashCOLUMNS: ignoring invalid width in environment variable COLUMNS: \n", 2);
                        v12 = v3;
                    }
                    *((int128_t *)&v11) = *((int128_t *)&v13);
                    v13 = &v11;
                    v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v15 = &v9;
                    v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v1 = &g_612330;
                    v2 = 3;
                    v5 = 0;
                    v3 = &v13;
                    v4 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v25, v26);
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v11);
                    ::0x51a4a0::core::ptr::drop_in_place$LT$std..env..Args$GT$::hab4f1d7d806d6c4a(&v17);
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v9);
                    if (!*((long long *)&v6))
                    {
LABEL_51fa4e:
                        v1 = std::io::stdio::stdout::h077da66234850927();
                        v27 = std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e();
                        if (!v27)
                            a1 = 3;
                        return v20 | (unsigned int)(0 * 0x100) | (unsigned int)(a1 * 0x10000);
                    }
                }
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h586f11e1c15586f9(&v6);
                goto LABEL_51fa4e;
            }
        }
        a1 = a0 | -0x100 | 3;
        return v20 | (unsigned int)(a1 * 0x100) | (unsigned int)(a1 * 0x10000);
    }
}
