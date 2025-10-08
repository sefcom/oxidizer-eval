fn uu_join::get_and_parse_field_number(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x40]
    let v2: void*;  // rax
    let v3: void*;  // rsi
    let v4: u64;  // rdx

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, a2);
    v2 = clap_builder::parser::error::MatchesError::unwrap(a2, &v0);
    return uu_join::parse_field_number_option(a0, v3, v4);
}
