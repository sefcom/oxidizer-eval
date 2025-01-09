long long uu_ls::extract_color::h0f500b6ec1664277(unsigned long long a0)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2[3];  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r14
    unsigned int v5;  // ebp

    if (!(char)uu_ls::is_color_compatible_term::h4d28f84ec695f678())
        return 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&v0, a0, "colorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink ", 5);
    v2 = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9("colorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink ", 5, &v0);
    if (!v2)
        return clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a0, "colorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink ", 5);
    v3 = v2[1];
    v4 = v2[2];
    v5 = vvar_38{reg 56} & 0xffffffffffffff00 | 1;
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v3, v4, 1, 0))
    {
        return v5;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v3, v4, "alwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 6))
    {
        return v5;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v3, v4, "yesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3))
    {
        return v5;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v3, v4, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5))
    {
        return v5;
    }
    else if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v3, v4, "autoBoolcodetime", 4)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v3, v4, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v3, v4, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6)))
    {
        v0 = std::io::stdio::stdout::h077da66234850927();
        v5 = std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e();
        return v5;
    }
}
