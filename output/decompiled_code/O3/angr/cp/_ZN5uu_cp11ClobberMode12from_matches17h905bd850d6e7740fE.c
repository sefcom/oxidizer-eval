long long uu_cp::ClobberMode::from_matches::h905bd850d6e7740f(unsigned long long a0)
{
    unsigned long long v1;  // rax

    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "force", 5))
    {
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "remove-destination", 18);
        return v1 | -0x100 | 2 - (char)(v1 & 4294967295);
    }
    return 0;
}
