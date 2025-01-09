long long uu_mv::determine_overwrite_mode::h2a7c21ee43665632(unsigned long long a0)
{
    unsigned long long v1;  // rax

    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "no-clobber", 10))
    {
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "interactive", 11);
        return v1 & 0xffffffffffffff00 | 2 - (char)(v1 & 4294967295);
    }
    return 0;
}
