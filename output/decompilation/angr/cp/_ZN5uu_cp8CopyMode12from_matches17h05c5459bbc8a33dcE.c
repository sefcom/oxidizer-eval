long long uu_cp::CopyMode::from_matches::h05c5459bbc8a33dc(unsigned long long a0)
{
    char v0;  // [bp-0x48]
    unsigned long long v2;  // rbp

    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "link", 4))
    {
        v2 = 0;
    }
    else
    {
        v2 = vvar_14{reg 56} & 0xffffffffffffff00 | 1;
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "symbolic-link", 13))
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h83269f7c9d3ca029(&v0, a0, "update", 6);
            v2 = v2 & 0xffffffffffffff00 | 3;
            if (!clap_builder::parser::error::MatchesError::unwrap::h30948932dbd3ab55("update", 6, &v0) && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "u", 1))
            {
                v2 = v2 & 0xffffffffffffff00 | 2;
                if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "attributes-only", 15))
                    v2 = (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "remove-destination", 18) & 0xffffffffffffff00 | ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "remove-destination", 18) ^ 1) * 2 + 2;
            }
        }
    }
    return v2 & 4294967295;
}
