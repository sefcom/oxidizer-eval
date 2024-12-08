fn uu_cp::CopyMode::from_matches(a0: i64) -> u64 {
    let v0: Result<struct40, struct16>;  // [sp-0x48], Other Possible Types: i320
    let v2: i64;  // rbp

    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "link") as i8 {
        v2 = 0;
    } else {
        v2 = vvar_15{reg 56} | -0x100 | 1;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "symbolic-link") as i8 {
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "update");
            v2 = v2 | -0x100 | 3;
            if !clap_builder::parser::error::MatchesError::unwrap("update", &v0) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "u") as i8 {
                v2 = v2 | -0x100 | 2;
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "attributes-only") as i8 {
                    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "remove-destination") as i32 | -0x100 | (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "remove-destination") as i32 ^ 1) * 2 + 2;
                }
            }
        }
    }
    return v2 & 4294967295;
}
