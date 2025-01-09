fn uu_echo::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x370]
    let v1: i8;  // [bp-0x368]
    let v2: i512;  // [sp-0x330], Other Possible Types: struct64
    let v3: i64;  // [sp-0x2f0], Other Possible Types: struct712, struct56
    let v5: i8;  // bl
    let v7: i64;  // rax
    let v8: i64;  // rax

    v3 = uu_echo::uu_app();
    clap_builder::builder::command::Command::get_matches_from(&v1, &v3, a0, a1);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "no_newline") as i32;
    v3 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v3);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, "STRING");
    v2 = clap_builder::parser::error::MatchesError::unwrap(&v3);
    if !v2 {
        if !(!v5) || !((v7 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, "\n"), v7)) {
            return 0;
        }
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
    } else if !uu_echo::execute(&v0, v5 ^ 1, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "enable_backslash_escape") as i32, &v2) {
        return 0;
    }
    return v8;
}
