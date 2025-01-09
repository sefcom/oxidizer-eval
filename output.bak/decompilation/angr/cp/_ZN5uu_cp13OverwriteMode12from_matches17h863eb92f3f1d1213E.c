long long uu_cp::OverwriteMode::from_matches::h863eb92f3f1d1213(unsigned long long a0)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long v2;  // rax
    unsigned long long v3;  // rbp

    v0 = v2;
    v3 = vvar_21{reg 56} | -0x100 | 1;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "interactive", 11))
    {
LABEL_50141f:
        uu_cp::ClobberMode::from_matches::h0d784cad540272bc(a0);
    }
    else if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "no-clobber", 10))
    {
        v3 = v3 | -0x100 | 2;
    }
    else
    {
        v3 = 0;
        goto LABEL_50141f;
    }
    return v3 & 4294967295;
}
