fn uu_unlink::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x318]
    let v1: struct56;  // [bp-0x318]
    let v2: u64;  // [bp-0x310]
    let v3: struct56;  // [bp-0x2e0], Other Possible Types: u8
    let v4: u64;  // [bp-0x2d8]
    let v6: u64;  // rdi
    let v7: i64;  // rax

    uu_unlink::uu_app(&v3);
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v3, a0, a1);
    v6 = v2;
    match v0 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        },
        Ok(v3) => {
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v3, _ZN9uu_unlink8OPT_PATH17h6cccbb55871a7469E.field_0, g_50ac98.field_0);
            v7 = clap_builder::parser::error::MatchesError::unwrap(_ZN9uu_unlink8OPT_PATH17h6cccbb55871a7469E.field_0, g_50ac98.field_0, &v0);
            if !v7 {
                core::option::unwrap_failed(); /* do not return */
            }
            return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::remove_file(*((v7 + 8) as &i64), *((v7 + 16) as &i64)), *((v7 + 8) as &i64), *((v7 + 16) as &i64));
        },
    }
}
