long long uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    unsigned long long v2[3];  // rax
    void* v3;  // rsi

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc8975813854a9a38(&v0, a1, a2, 1);
    v2 = clap_builder::parser::error::MatchesError::unwrap::he70031129adfbfcb(a2, 1, &v0);
    if (v2)
        v3 = v2[1];
    else
        v3 = 0;
    return uu_join::parse_field_number_option::h48fa1297dd47f55b(a0, v3, v2[2]);
}
