long long uu_cp::OverwriteMode::from_matches::h31b79a314168cf39(unsigned long long a0)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long v2;  // rax
    void* v3;  // rbp

    v0 = v2;
    v3 = vvar_21{reg 56} | -0x100 | 1;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "interactive", 11))
    {
LABEL_500aef:
        uu_cp::ClobberMode::from_matches::h905bd850d6e7740f(a0);
    }
    else if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "no-clobber", 10))
    {
        v3 = v3 | -0x100 | 2;
    }
    else
    {
        v3 = 0;
        goto LABEL_500aef;
    }
    return v3 & 4294967295;
}
