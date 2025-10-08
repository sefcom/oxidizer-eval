fn bat::build_assets(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x58]
    let v2: i64;  // rax
    let v3: u8;  // al

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "source");
    v2 = clap_builder::parser::error::MatchesError::unwrap("source", &v0);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "blank");
    return bat::assets::build_assets::build(a0, a2, a3, v3 ^ 1, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "acknowledgements"), a4, a5, "0.25.0");
}
