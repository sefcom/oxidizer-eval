fn uu_touch::determine_atime_mtime_change(a0: i64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x48]
    let v2: u32;  // r14d
    let v3: i64;  // rax
    let v4: u64;  // rbp
    let v5: u8;  // r14b
    let v6: u32;  // r14d
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u8;  // al
    let v10: u8;  // bpl
    let v12: core::fmt::rt::Argument;  // rax

    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "time") as i8 {
        v2 = &anon.61762d8b03580ce2a8d56e8111306379.20.llvm.1735103616462635666;
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "time");
        v3 = clap_builder::parser::error::MatchesError::unwrap("time", &v0);
        if !v3 {
            goto LABEL_5c3007;
        }
        v4 = uu_touch::determine_atime_mtime_change::{{closure}}(*((v3 + 8) as &i64), *((v3 + 16) as &i64));
        if !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "access") as i8) {
            goto LABEL_5c300e;
        }
        v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "modification");
    } else {
LABEL_5c3007:
        v5 = 2;
        v6 = v2 & -0x100 | 2;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "access") as i8 {
LABEL_5c300e:
            v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "modification");
        } else {
            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "modification");
        }
    }
    return v12 & -0x100 | 2 - (!v10 & v9);
}
