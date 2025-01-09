fn uu_join::get_and_parse_field_number(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i328;  // [sp-0x40], Other Possible Types: Result<struct40, struct8>
    let v2: i64;  // rax
    let v3: i64;  // rsi

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, a2, 1);
    v2 = clap_builder::parser::error::MatchesError::unwrap(a2, 1, &v0);
    if v2 {
        v3 = *((v2 + 8) as &i64);
    } else {
        v3 = 0;
    }
    return uu_join::parse_field_number_option(a0, v3, *((v2 + 16) as &i64));
}
