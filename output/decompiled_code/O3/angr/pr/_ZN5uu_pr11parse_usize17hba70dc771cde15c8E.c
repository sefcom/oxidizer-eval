long long uu_pr::parse_usize::hba70dc771cde15c8(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x58]
    char v2;  // [bp-0x50]
    unsigned long long v4;  // rax

    v0 = a2;
    v1 = a3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2d89d6edad09d565(&v2, a1, a2, a3);
    v4 = clap_builder::parser::error::MatchesError::unwrap::h7189bfe89c4d9506(a2, a3, &v2);
    if (!v4)
    {
        *(a0) = 9223372036854775814;
        return 9223372036854775814;
    }
    uu_pr::parse_usize::_$u7b$$u7b$closure$u7d$$u7d$::h07b8897fd5e4c97e(&v2, &v0, v4);
    return core::ops::function::FnOnce::call_once::hefe7ee20959eaddb(a0, &v2);
}
