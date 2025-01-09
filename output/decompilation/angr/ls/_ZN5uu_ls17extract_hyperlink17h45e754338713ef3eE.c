long long uu_ls::extract_hyperlink::h45e754338713ef3e(unsigned long long a0)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x40]
    unsigned long long v3;  // [sp-0x38]
    int v4;  // [sp-0x30]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14
    unsigned int v9;  // ebp

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&v1, a0, "hyperlink ", 9);
    v6 = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9("hyperlink ", 9, &v1);
    if (!v6)
        core::option::unwrap_failed::h0e11329e76906eaa(&g_6122f0); /* do not return */
    v7 = v6[1];
    v8 = v6[2];
    v9 = vvar_31{reg 56} & 0xffffffffffffff00 | 1;
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "alwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 6))
    {
        return v9;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "yesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3))
    {
        return v9;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5))
    {
        return v9;
    }
    else
    {
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "autoBoolcodetime", 4) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6))
        {
            if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "nevernointernal error: entered unreachable code: should be handled by clap", 5) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "nointernal error: entered unreachable code: should be handled by clap", 2) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v7, v8, "nonehelpNoneshimcallSlimname", 4)))
                return 0;
            v1 = &g_6122e0;
            v2 = 1;
            v3 = &v0;
            *((uint128_t *)&v4) = 0;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v1, &g_612308); /* do not return */
        }
        v1 = std::io::stdio::stdout::h077da66234850927();
        v9 = std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e();
        return v9;
    }
}
