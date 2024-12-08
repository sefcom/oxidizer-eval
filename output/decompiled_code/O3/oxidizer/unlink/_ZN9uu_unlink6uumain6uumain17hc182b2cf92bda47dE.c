fn uu_unlink::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i320;  // [bp-0x318], Other Possible Types: Result<struct40, struct16>
    let v4: i5696;  // [sp-0x2e0], Other Possible Types: struct712, struct56
    let v6: i64;  // rdx
    let v9: i64;  // rax
    let v10: i64;  // rbx

    v4 = uu_unlink::uu_app(a1, v6);
    clap_builder::builder::command::Command::try_get_matches_from(&v0, &v4, a0, a1);
    if v4 != 0x8000000000000000 {
        v4 = struct56 {
            field_0: v7
            field_8: v8
            field_16: v1
            field_32: v2
            field_48: v3
        };
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, _ZN9uu_unlink8OPT_PATH17h07f8b005cd9cf2edE, g_50c670);
        v9 = clap_builder::parser::error::MatchesError::unwrap(_ZN9uu_unlink8OPT_PATH17h07f8b005cd9cf2edE, g_50c670, &v0);
        v10 = core::option::unwrap(v9);
        return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::remove_file(v10, *((v9 + 16) as &i64), v6), v10);
    }
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4.8);
}
