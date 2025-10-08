fn uu_uptime::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x318]
    let v1: Result<struct40, struct16>;  // [bp-0x318], Other Possible Types: struct56, u64
    let v2: u64;  // [bp-0x310]
    let v3: struct56;  // [bp-0x2e0], Other Possible Types: struct712
    let v4: u64;  // [bp-0x2d8]
    let v6: u64;  // rdi
    let v7: u64;  // rbx

    v3 = uu_uptime::uu_app();
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v3, a0, a1);
    v6 = v2;
    if (((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
    }
    v3 = v1;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v3, _ZN9uu_uptime7options4PATH17h8432a602c5a8eb25E.field_0, g_508250.field_0);
    v7 = clap_builder::parser::error::MatchesError::unwrap(_ZN9uu_uptime7options4PATH17h8432a602c5a8eb25E.field_0, g_508250.field_0, &v1);
    return (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1 as u64, _ZN9uu_uptime7options5SINCE17h188f5410e8c83d61E.field_0, g_508240.field_0) ? (!v7 ? uu_uptime::default_uptime() : uu_uptime::uptime_with_file(v7)) : uu_uptime::uptime_since());
}
