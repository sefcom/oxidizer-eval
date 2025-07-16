fn uu_cp::CopyMode::from_matches(a0: i64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x48]
    let v2: u64;  // rbp
    let v3: u32;  // eax

    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "link") as i8 {
        v2 = vvar_16{reg 56} & -0x100 | 1;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "symbolic-link") as i8 {
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "update");
            v2 = v2 & -0x100 | 3;
            if !clap_builder::parser::error::MatchesError::unwrap("update", &v0) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "u") as i8 {
                v2 = v2 & -0x100 | 2;
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "attributes-only") as i8 {
                    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "remove-destination") as i32;
                }
            }
        }
    }
    return v2 & 4294967295;
}
