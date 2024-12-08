long long uu_join::get_and_parse_field_number::hc6b46fd6f7691137(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    unsigned long long v2[3];  // rax
    void* v3;  // rsi

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1915dae6bb9020a5(&v0, a1, a2, 1);
    v2 = clap_builder::parser::error::MatchesError::unwrap::h41070b8ae1e28aad(a2, 1, &v0);
    if (v2)
        v3 = v2[1];
    else
        v3 = 0;
    return uu_join::parse_field_number_option::h38c6c0f39b88c643(a0, v3, v2[2]);
}
