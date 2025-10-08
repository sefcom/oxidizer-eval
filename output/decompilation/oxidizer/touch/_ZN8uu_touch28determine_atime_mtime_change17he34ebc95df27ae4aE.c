fn uu_touch::determine_atime_mtime_change(a0: i64) -> u64 {
    let v0: Result<struct40, struct16>;  // [bp-0x40]
    let v2: i64;  // rax
    let v3: u8;  // bpl
    let v4: u64;  // rax
    let v5: u64;  // rax
    let v6: u8;  // bpl

    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "time") {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0);
        v2 = clap_builder::parser::error::MatchesError::unwrap(&v0);
        if !v2 {
            goto LABEL_53a6ad;
        }
        v3 = uu_touch::determine_atime_mtime_change::{{closure}}(*((v2 + 8) as &i64), *((v2 + 16) as &i64));
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "access") {
            v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "modification");
            return 0;
        }
    } else {
LABEL_53a6ad:
        v6 = 2;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "access") {
            return clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "modification") & -0x100 | 2;
        }
    }
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "modification");
    return v5 & -0x100 | 2;
}
