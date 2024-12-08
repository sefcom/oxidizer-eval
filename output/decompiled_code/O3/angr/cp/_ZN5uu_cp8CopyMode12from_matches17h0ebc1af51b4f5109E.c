long long uu_cp::CopyMode::from_matches::h0ebc1af51b4f5109(unsigned long long a0)
{
    char v0;  // [bp-0x48]
    void* v2;  // rbp

    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "link", 4))
    {
        v2 = 0;
    }
    else
    {
        v2 = vvar_15{reg 56} | -0x100 | 1;
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "symbolic-link", 13))
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::ha2b8c5229f88383f(&v0, a0, "update", 6);
            v2 = v2 | -0x100 | 3;
            if (!clap_builder::parser::error::MatchesError::unwrap::h80e197f3f1f5ecc9("update", 6, &v0) && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "u", 1))
            {
                v2 = v2 | -0x100 | 2;
                if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "attributes-only", 15))
                    v2 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "remove-destination", 18) | -0x100 | ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "remove-destination", 18) ^ 1) * 2 + 2;
            }
        }
    }
    return v2 & 4294967295;
}
