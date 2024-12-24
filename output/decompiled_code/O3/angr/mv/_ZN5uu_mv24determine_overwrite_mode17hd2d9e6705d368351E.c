long long uu_mv::determine_overwrite_mode::hd2d9e6705d368351(unsigned long long a0)
{
    unsigned long long v1;  // rax

    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "no-clobber", 10))
    {
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "interactive", 11);
        return v1 | -0x100 | 2 - (char)(v1 & 4294967295);
    }
    return 0;
}
