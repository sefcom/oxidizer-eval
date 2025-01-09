fn uu_hostname::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i320;  // [bp-0x318], Other Possible Types: Result<struct40, struct8>
    let v1: i8;  // [bp-0x310]
    let v5: i5696;  // [sp-0x2e0], Other Possible Types: struct56, struct712
    let v6: i64;  // [sp-0x2d8]
    let v8: i64;  // rax
    let v9: i64;  // rdi
    let v10: i64;  // rax
    let v11: i64;  // rax
    let v12: i64;  // rax

    v5 = uu_hostname::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v0, &v5, a0, a1);
    v8 = v0;
    v9 = v1;
    if v5 != 0x8000000000000000 {
        v5 = struct56 {
            field_0: v8
            field_8: v9
            field_16: v2
            field_32: v3
            field_48: v4
        };
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN11uu_hostname8OPT_HOST17hfa1a143c3d8b3f66E, g_5181f0);
        v10 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_hostname8OPT_HOST17hfa1a143c3d8b3f66E, g_5181f0, &v0);
        v11 = (!v10 ? uu_hostname::display_hostname(&v5) : <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(hostname::set(v10)));
        return v12;
    }
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
}
