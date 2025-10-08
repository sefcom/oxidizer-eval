fn uu_unlink::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: Result<struct40, struct16>;  // [bp-0x318], Other Possible Types: struct16
    let v1: struct56;  // [bp-0x318], Other Possible Types: u64
    let v2: struct56;  // [bp-0x2e0], Other Possible Types: struct712
    let v3: u64;  // [bp-0x2d8]
    let v5: i64;  // rax

    v2 = uu_unlink::uu_app();
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v2, a0, a1);
    if (((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
    }
    v2 = v1;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, _ZN9uu_unlink8OPT_PATH17ha9557250b548e51fE.field_0, g_4dbb48.field_0);
    v5 = clap_builder::parser::error::MatchesError::unwrap(_ZN9uu_unlink8OPT_PATH17ha9557250b548e51fE.field_0, g_4dbb48.field_0, &v0);
    core::option::unwrap(v5);
    return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::remove_file(*((v5 + 8) as &i64), *((v5 + 16) as &i64)), *((v5 + 8) as &i64), *((v5 + 16) as &i64));
}
