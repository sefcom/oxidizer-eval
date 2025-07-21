fn uu_hostname::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: Result<struct56, struct16>;  // [bp-0x318]
    let v1: Result<struct40, struct16>;  // [bp-0x318], Other Possible Types: struct56
    let v2: u64;  // [bp-0x310]
    let v3: struct56;  // [bp-0x2e0], Other Possible Types: u8
    let v4: u64;  // [bp-0x2d8]
    let v6: u64;  // rdi
    let v7: u64;  // rax

    uu_hostname::uu_app(&v3);
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v3, a0, a1);
    v6 = v2;
    match v0 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        },
        Ok(v3) => {
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v3, _ZN11uu_hostname8OPT_HOST17hfa1a143c3d8b3f66E.field_0, g_5181f0.field_0);
            v7 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_hostname8OPT_HOST17hfa1a143c3d8b3f66E.field_0, g_5181f0.field_0, &v1);
            return (!v7 ? uu_hostname::display_hostname(&v1 as u64) : <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(hostname::set(v7)));
        },
    }
}
