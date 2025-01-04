fn uu_echo::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x370]
    let v1: struct56;  // [sp-0x368], Other Possible Types: i448
    let v2: struct64;  // [sp-0x330], Other Possible Types: i512
    let v3: i5696;  // [sp-0x2f0], Other Possible Types: struct712, struct56
    let v5: i64;  // r8
    let v6: i64;  // r9
    let v7: i8;  // bl
    let v9: i64;  // rsi
    let v10: i64;  // rdx
    let v11: i64;  // rax
    let v12: i64;  // rax

    v3 = uu_echo::uu_app(a1, a2);
    v1 = clap_builder::builder::command::Command::get_matches_from(&v3, a0, a1, v5, v6);
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "no_newline") as i32;
    v3 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v3, v9, v10);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, "STRING");
    v2 = clap_builder::parser::error::MatchesError::unwrap(&v3);
    if !v2 {
        if !(!v7) || !((v12 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, &g_412f52, 1), v12)) {
            return 0;
        }
        v11 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
    } else {
        v11 = uu_echo::execute(&v0, v7 ^ 1, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "enable_backslash_escape") as i32, &v2);
        if !v11 {
            return 0;
        }
    }
    return v11;
}
