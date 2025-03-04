long long uu_pr::print_error::hae74ddad01a055bb(unsigned long long a0, unsigned long a1)
{
    unsigned long v0;  // [sp-0x48]
    char *v1;  // [sp-0x40]
    unsigned long long v2;  // [sp-0x38]
    unsigned long v3;  // [sp-0x30]
    unsigned long long v4;  // [sp-0x28]
    struct struct_0 **v5;  // [sp-0x20]
    unsigned long long v6;  // [sp-0x18]
    void* v7;  // [sp-0x10]
    unsigned long long v9;  // rax

    v0 = a1;
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "no-file-warningsArgumentConflictidsunaryoperator", 16);
    if (!(char)v9)
    {
        v1 = &v0;
        v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0e2d6c98197517eb;
        v3 = &g_709200;
        v4 = 2;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        v9 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
        return v9;
    }
    return v9;
}
