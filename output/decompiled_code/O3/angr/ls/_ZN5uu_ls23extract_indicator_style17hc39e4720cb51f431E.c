long long uu_ls::extract_indicator_style::hc39e4720cb51f431(unsigned long long a0)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2[3];  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r14
    unsigned long long v5[3];  // rax
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb6c62c6da4772362(&v0, a0, "indicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink", 15);
    v2 = clap_builder::parser::error::MatchesError::unwrap::h46c725aee7e39242("indicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink", 15, &v0);
    if (v2)
    {
        v3 = v2[1];
        v4 = v2[2];
        if (!(!(_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v3, v4, "nonehelpNoneshimcallSlimname", 4) & 255 & 255 & 255)))
            goto LABEL_51fd57;
        v6 = vvar_38{reg 56} | -0x100 | 2;
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v3, v4, "file-typeslashCOLUMNS: ignoring invalid width in environment variable COLUMNS: \n", 9))
        {
            v6 = v6 | -0x100 | 3;
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v3, v4, "classify", 8))
                v6 = (unsigned int)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v3, v4, "slashCOLUMNS: ignoring invalid width in environment variable COLUMNS: \n", 5);
        }
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb6c62c6da4772362(&v0, a0, "classify", 8);
        v5 = clap_builder::parser::error::MatchesError::unwrap::h46c725aee7e39242("classify", 8, &v0);
        if (!v5)
        {
            v6 = vvar_38{reg 56} | -0x100 | 1;
            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "pfile-type", 1))
            {
                v6 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "file-type", 9) | -0x100 | (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "file-type", 9) * 2;
                return v6 & 4294967295;
            }
        }
        else
        {
            v7 = v5[1];
            v8 = v5[2];
            if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "nevernointernal error: entered unreachable code: should be handled by clap", 5)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "nointernal error: entered unreachable code: should be handled by clap", 2)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "nonehelpNoneshimcallSlimname", 4)))
            {
LABEL_51fd57:
                v6 = 0;
            }
            else
            {
                v6 = vvar_38{reg 56} | -0x100 | 3;
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "alwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 6))
                    return v6 & 4294967295;
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "yesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5))
                {
                    if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "autoBoolcodetime", 4)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c7bfcefa99095d7(v7, v8, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6)))
                    {
                        v0 = std::io::stdio::stdout::h077da66234850927();
                        v6 = (-0x100 | (char)std::sys::pal::unix::io::is_terminal::h619d02e5ebc637a8()) * 3 & 4294967295;
                        return v6 & 4294967295;
                    }
                    goto LABEL_51fd57;
                }
            }
        }
    }
    return v6 & 4294967295;
}
