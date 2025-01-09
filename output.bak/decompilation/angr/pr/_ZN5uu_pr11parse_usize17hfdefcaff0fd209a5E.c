long long uu_pr::parse_usize::hfdefcaff0fd209a5(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x88]
    char v2;  // [bp-0x80], Other Possible Types: unsigned long long
    int v3;  // [sp-0x78]
    int v4;  // [sp-0x68]
    unsigned long long v5;  // [sp-0x58]
    char v6;  // [bp-0x50]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x38]
    char v9;  // [bp-0x28]
    unsigned long long v11;  // rax

    v0 = a2;
    v1 = a3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf528812c919d4af6(&v2, a1, a2, a3);
    v11 = clap_builder::parser::error::MatchesError::unwrap::hf38d98c9afef2728(a2, a3, &v2);
    if (!v11)
    {
        *(a0) = 9223372036854775814;
        return 9223372036854775814;
    }
    uu_pr::parse_usize::_$u7b$$u7b$closure$u7d$$u7d$::h92e0561d74ff38eb(&v6, &v0, v11);
    v5 = *((long long *)&v9);
    *((int128_t *)&v4) = *((int128_t *)&v8);
    *((int128_t *)&v3) = *((int128_t *)&v7);
    v2 = *((long long *)&v6);
    return core::ops::function::FnOnce::call_once::hc0c7aacdfde921b9(a0, &v2);
}
