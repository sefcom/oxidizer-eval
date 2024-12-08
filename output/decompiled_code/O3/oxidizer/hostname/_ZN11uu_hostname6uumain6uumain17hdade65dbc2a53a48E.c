fn uu_hostname::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x318], Other Possible Types: Result<struct40, struct16>
    let v4: i64;  // [sp-0x2e0], Other Possible Types: struct712, struct56
    let v8: i64;  // rax
    let v9: i64;  // rsi
    let v10: i64;  // rdx
    let v11: i64;  // rcx
    let v12: i64;  // r8

    v4 = uu_hostname::uu_app(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v0, &v4, a0, a1);
    if v4 != 0x8000000000000000 {
        v4 = struct56 {
            field_0: v6
            field_8: v7
            field_16: v1
            field_32: v2
            field_48: v3
        };
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, _ZN11uu_hostname8OPT_HOST17hcfee6ede35908551E, g_519370);
        v8 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_hostname8OPT_HOST17hcfee6ede35908551E, g_519370, &v0);
        return (!v8 ? uu_hostname::display_hostname(&v4, v9, v10, v11, v12) : <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(hostname::set(v8, v9, v10)));
    }
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4.8);
}
