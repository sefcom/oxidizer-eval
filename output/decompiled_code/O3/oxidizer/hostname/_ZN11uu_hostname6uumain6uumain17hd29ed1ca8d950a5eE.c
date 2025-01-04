fn uu_hostname::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: Result<struct56, struct16>;  // [sp-0x318], Other Possible Types: i320
    let v1: i5696;  // [sp-0x2e0], Other Possible Types: struct712, struct56
    let v2: i64;  // [sp-0x2d8]
    let v4: i64;  // r8
    let v5: i64;  // r9
    let v8: i64;  // rax
    let v9: i64;  // rsi
    let v10: i64;  // rdx
    let v11: i64;  // rcx

    v1 = uu_hostname::uu_app(a1, a2);
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v1, a0, a1, v4, v5);
    if v1 != 0x8000000000000000 {
        v1 = struct56 {
            field_0: v6
            field_8: v7
            field_16: *((&v0 as &char + 16) as &i128)
            field_32: *((&v0 as &char + 32) as &i128)
            field_48: *((&v0 as &char + 48) as &i64)
        };
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v1, _ZN11uu_hostname8OPT_HOST17hfa1a143c3d8b3f66E, g_5181f0);
        v8 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_hostname8OPT_HOST17hfa1a143c3d8b3f66E, g_5181f0, &v0);
        return (!v8 ? uu_hostname::display_hostname(&v1, v9, v10, v11, v4) : <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(hostname::set(v8, v9, v10)));
    }
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
}
