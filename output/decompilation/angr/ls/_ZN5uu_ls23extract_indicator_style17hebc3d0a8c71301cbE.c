long long uu_ls::extract_indicator_style::hebc3d0a8c71301cb(unsigned long long a0)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2[3];  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r14
    unsigned long long v5[3];  // rax
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&v0, a0, "indicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink ", 15);
    v2 = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9("indicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink ", 15, &v0);
    if (v2)
    {
        v3 = v2[1];
        v4 = v2[2];
        if (!(!(_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v3, v4, "nonehelpNoneshimcallSlimname", 4) & 255 & 255 & 255)))
            goto LABEL_51fdf7;
        v6 = vvar_37{reg 56} & 0xffffffffffffff00 | 2;
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v3, v4, "file-typeslashCOLUMNS: ignoring invalid width in environment variable COLUMNS: \n", 9))
        {
            v6 = v6 & 0xffffffffffffff00 | 3;
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v3, v4, "classify", 8))
                v6 = (unsigned int)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v3, v4, "slashCOLUMNS: ignoring invalid width in environment variable COLUMNS: \n", 5);
        }
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&v0, a0, "classify", 8);
        v5 = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9("classify", 8, &v0);
        if (!v5)
        {
            v6 = vvar_37{reg 56} & 0xffffffffffffff00 | 1;
            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "pfile-type/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/sort/unstable/heapsort.rs", 1))
            {
                v6 = (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "file-type/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/sort/unstable/heapsort.rs", 9) & 0xffffffffffffff00 | (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "file-type/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/sort/unstable/heapsort.rs", 9) * 2;
                return v6 & 4294967295;
            }
        }
        else
        {
            v7 = v5[1];
            v8 = v5[2];
            if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "nevernointernal error: entered unreachable code: should be handled by clap", 5)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "nointernal error: entered unreachable code: should be handled by clap", 2)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "nonehelpNoneshimcallSlimname", 4)))
            {
LABEL_51fdf7:
                v6 = 0;
            }
            else
            {
                v6 = vvar_37{reg 56} & 0xffffffffffffff00 | 3;
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "alwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 6))
                    return v6 & 4294967295;
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "yesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5))
                {
                    if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "autoBoolcodetime", 4)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6)))
                    {
                        v0 = std::io::stdio::stdout::h077da66234850927();
                        v6 = (std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e()) * 3 & 4294967295;
                        return v6 & 4294967295;
                    }
                    goto LABEL_51fdf7;
                }
            }
        }
    }
    return v6 & 4294967295;
}
