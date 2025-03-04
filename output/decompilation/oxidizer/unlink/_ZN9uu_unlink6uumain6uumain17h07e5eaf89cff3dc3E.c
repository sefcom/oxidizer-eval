fn uu_unlink::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x318], Other Possible Types: Result<struct40, struct8>
    let v1: i8;  // [bp-0x310]
    let v5: struct56;  // [sp-0x2e0], Other Possible Types: unsigned long, struct712
    let v6: i64;  // [sp-0x2d8]
    let v8: i64;  // rax
    let v9: i64;  // rdi
    let v10: i64;  // rax
    let v11: i64;  // rbx
    let v12: i64;  // r14

    v5 = uu_unlink::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v0, &v5, a0, a1);
    v8 = *(&v0 as &i64);
    v9 = *(&v1 as &i64);
    if v5 != 0x8000000000000000 {
        v5 = struct56 {
            field_0: v8
            field_8: v9
            field_16: *(&v2 as &i128)
            field_32: *(&v3 as &i128)
            field_48: *(&v4 as &i64)
        };
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN9uu_unlink8OPT_PATH17h6cccbb55871a7469E, g_50ac98);
        v10 = clap_builder::parser::error::MatchesError::unwrap(_ZN9uu_unlink8OPT_PATH17h6cccbb55871a7469E, g_50ac98, &v0);
        v11 = core::option::unwrap(v10);
        v12 = *((v10 + 16) as &i64);
        return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::remove_file(v11, v12), v11, v12);
    }
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
}
