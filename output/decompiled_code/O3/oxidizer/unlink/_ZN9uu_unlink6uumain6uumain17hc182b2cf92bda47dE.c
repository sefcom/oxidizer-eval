fn uu_unlink::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: Result<struct56, struct16>;  // [sp-0x318], Other Possible Types: i320
    let v1: i5696;  // [sp-0x2e0], Other Possible Types: struct56, struct712
    let v3: i64;  // rdx
    let v6: i64;  // rax
    let v7: i64;  // rbx

    v1 = uu_unlink::uu_app(a1, v3);
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v1, a0, a1);
    if v1 != 0x8000000000000000 {
        v1 = struct56 {
            field_0: v4
            field_8: v5
            field_16: *((&v0 as &char + 16) as &i128)
            field_32: *((&v0 as &char + 32) as &i128)
            field_48: *((&v0 as &char + 48) as &i64)
        };
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v1, _ZN9uu_unlink8OPT_PATH17h07f8b005cd9cf2edE, g_50c670);
        v6 = clap_builder::parser::error::MatchesError::unwrap(_ZN9uu_unlink8OPT_PATH17h07f8b005cd9cf2edE, g_50c670, &v0);
        v7 = core::option::unwrap(v6);
        return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::remove_file(v7, *((v6 + 16) as &i64), v3), v7);
    }
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1.8);
}
