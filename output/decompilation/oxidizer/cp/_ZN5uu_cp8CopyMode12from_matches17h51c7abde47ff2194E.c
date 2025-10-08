fn uu_cp::CopyMode::from_matches(a0: u64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x50]
    let v2: u64;  // rbp
    let v3: u32;  // eax

    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "link") {
        v2 = vvar_17{reg 56} & -0x100 | 1;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "symbolic-link") {
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, _ZN6uucore8features14update_control9arguments10OPT_UPDATE17hebbbf4cdadb38e0fE.field_0, g_560aa0.field_0);
            v2 = v2 & -0x100 | 3;
            if !clap_builder::parser::error::MatchesError::unwrap(_ZN6uucore8features14update_control9arguments10OPT_UPDATE17hebbbf4cdadb38e0fE.field_0, g_560aa0.field_0, &v0) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, _ZN6uucore8features14update_control9arguments17OPT_UPDATE_NO_ARG17h3487f3d89cd8344fE.field_0, g_560ab0.field_0) {
                v2 = v2 & -0x100 | 2;
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "attributes-only") {
                    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "remove-destination");
                }
            }
        }
    }
    return v2 & 4294967295;
}
