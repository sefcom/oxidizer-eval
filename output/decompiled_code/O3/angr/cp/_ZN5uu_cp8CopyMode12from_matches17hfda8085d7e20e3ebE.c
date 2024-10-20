long long uu_cp::CopyMode::from_matches::hfda8085d7e20e3eb(unsigned long long a0)
{
    unsigned long v0;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xc8]
    unsigned long v2;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xb8]
    unsigned long long v4;  // [sp-0xb0]
    unsigned long long v5;  // [sp-0xa8]
    char v6;  // [bp-0xa0]
    char v7;  // [bp-0x98]
    char v8;  // [bp-0x90]
    char v9;  // [bp-0x80]
    unsigned long v10;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x70]
    unsigned long long v12;  // [sp-0x68]
    unsigned long long v13;  // [sp-0x60]
    void* v14;  // [sp-0x58]
    int v15;  // [sp-0x48]
    int v16;  // [sp-0x38]
    unsigned long long v17;  // [sp-0x28]
    void* v19;  // rbp

    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a0, "link", 4))
    {
        v19 = 0;
    }
    else
    {
        v19 = vvar_14{reg 56} | -0x100 | 1;
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a0, "symbolic-linkattributes-onlycopy-contents", 13))
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac011b795c475ccc(&v6, a0, "updateu", 6);
            v0 = "updateu";
            v1 = 6;
            if (*((int *)&v6) != 2)
            {
                v17 = *((long long *)&v9);
                *((int128_t *)&v16) = *((int128_t *)&v8);
                *((int128_t *)&v15) = *((int128_t *)&v6);
                v2 = &v0;
                v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5c7cfdfb3184423;
                v4 = &v15;
                v5 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                v10 = &anon.ecdb7401d275e96e4c427fca0a702ec8.2.llvm.6279117827671126663;
                v11 = 2;
                v14 = 0;
                v12 = &v2;
                v13 = 2;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v10); /* do not return */
            }
            v19 = v19 | -0x100 | 3;
            if (!*((long long *)&v7) && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a0, "u", 1))
            {
                v19 = v19 | -0x100 | 2;
                if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a0, "attributes-onlycopy-contents", 15))
                    v19 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a0, "remove-destinationremove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files.alwaysnever", 18) | -0x100 | ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a0, "remove-destinationremove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files.alwaysnever", 18) ^ 1) * 2 + 2;
            }
        }
    }
    return v19 & 4294967295;
}
