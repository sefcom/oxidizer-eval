fn uu_echo::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: std::io::stdio::StderrLock;  // [bp-0x370]
    let v1: struct56;  // [bp-0x368]
    let v2: struct64;  // [bp-0x330]
    let v3: std::io::stdio::Stdout;  // [bp-0x2f0], Other Possible Types: struct56, u8
    let v5: u8;  // bl
    let v6: u32;  // eax
    let v7: u64;  // rax
    let v8: core::result::Result<(), std::io::error::Error>;  // rax

    uu_echo::uu_app(&v3);
    v1 = clap_builder::builder::command::Command::get_matches_from(&v3, a0, a1);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "no_newline") as i32;
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "enable_backslash_escape") as i32;
    v3 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v3);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, "STRING");
    v2 = clap_builder::parser::error::MatchesError::unwrap(&v3);
    if v2.field_0 as i64 {
        v7 = uu_echo::execute(&v0, v5 ^ 1, v6, &v2);
    } else if !v5 {
        v8 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, "\n");
        if let Err(_) = v8 {
            v7 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
            return v7;
        }
    }
    return 0;
}
