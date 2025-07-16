fn uu_join::get_and_parse_field_number(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: Result<struct40, struct16>;  // [bp-0x40]
    let v2: i64;  // rax
    let v3: void*;  // rsi
    let v4: u64;  // rdx

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, a2, 1);
    v2 = clap_builder::parser::error::MatchesError::unwrap(a2, 1, &v0);
    return uu_join::parse_field_number_option(a0, v3, v4) as u64;
}
