fn uu_hostname::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: Result<struct56, struct16>;  // [bp-0x318]
    let v1: u256;  // [bp-0x318], Other Possible Types: Result<struct40, struct16>
    let v2: u64;  // [bp-0x310]
    let v3: u64;  // [bp-0x2e8]
    let v4: u8;  // [bp-0x2e0]
    let v5: u64;  // [bp-0x2d8]
    let v6: u8;  // [bp-0x2c0]
    let v7: u64;  // [bp-0x2b0]
    let v9: u64;  // rdi
    let v10: u64;  // rax

    uu_hostname::uu_app(&v4);
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v4, a0, a1);
    v9 = v2;
    match v0 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        },
        Ok(_) => {
            v7 = v3;
            memcpy(&v6, &v0 as u128, 16);
            v4 = v1;
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, _ZN11uu_hostname8OPT_HOST17hfa1a143c3d8b3f66E.field_0, g_5181f0.field_0);
            v10 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_hostname8OPT_HOST17hfa1a143c3d8b3f66E.field_0, g_5181f0.field_0, &v1);
            return (!v10 ? uu_hostname::display_hostname(&v1 as u64) : <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(hostname::set(v10)));
        },
    }
}
