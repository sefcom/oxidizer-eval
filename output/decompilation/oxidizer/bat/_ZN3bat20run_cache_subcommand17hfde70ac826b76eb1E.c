fn bat::run_cache_subcommand(a0: i64, a1: u64, a2: u64, a3: u64, a4: i192, a5: i192) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x80]
    let v1: u128;  // [bp-0x70]
    let v2: u128;  // [bp-0x60]
    let v3: u128;  // [bp-0x50]
    let v5: u64;  // rax
    let v6: u64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "target");
    v5 = clap_builder::parser::error::MatchesError::unwrap("target", &v0);
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "build") {
        v6 = bat::build_assets(&v0, a1, a2, a3, a4, a5);
        if &v0 != "\r" {
            return struct80 {
                field_0: v0 as i128
                field_16: v1
                field_32: v2
                field_48: v3
                field_64: *((&v0 as &char + 64) as &i128)
            };
        }
    } else {
        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "clear");
        if v6 {
            v6 = bat::assets::clear_assets(a4, a5) as u64;
        }
    }
    return struct1 {
        field_0: 13
    };
}
