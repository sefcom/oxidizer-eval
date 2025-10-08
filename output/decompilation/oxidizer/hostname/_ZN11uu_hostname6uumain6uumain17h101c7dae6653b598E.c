fn uu_hostname::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x318]
    let v1: Result<struct40, struct16>;  // [bp-0x318], Other Possible Types: struct56, u64
    let v2: struct56;  // [bp-0x2e0], Other Possible Types: u8
    let v3: u64;  // [bp-0x2d8]
    let v5: u64;  // rax

    uu_hostname::uu_app(&v2);
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v2, a0, a1);
    if (((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
    }
    v2 = v1;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, _ZN11uu_hostname8OPT_HOST17h449c299a70740049E.field_0, g_4e4e08.field_0);
    v5 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_hostname8OPT_HOST17h449c299a70740049E.field_0, g_4e4e08.field_0, &v1);
    return (!v5 ? uu_hostname::display_hostname(&v1 as u64) : <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(hostname::set(v5)));
}
