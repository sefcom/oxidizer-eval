fn uu_paste::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [sp-0x3a0], Other Possible Types: struct24, struct64, Result<struct56, struct16>
    let v1: i64;  // [sp-0x360], Other Possible Types: struct56
    let v2: i64;  // [sp-0x358]
    let v3: i512;  // [bp-0x328]
    let v4: i5696;  // [sp-0x2e8], Other Possible Types: struct712, struct56, Result<struct40, struct16>
    let v6: i64;  // r8
    let v7: i64;  // r9
    let v11: i64;  // r14
    let v12: i64;  // rdx

    v4 = uu_paste::uu_app(a1, a2);
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v4, a0, a1, v6, v7);
    if v1 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
    }
    *(&v1.field_0 as &struct56) = struct56 {
        field_0: v8
        field_8: v9
        field_16: *((&v0 as &char + 16) as &i128)
        field_32: *((&v0 as &char + 32) as &i128)
        field_48: *((&v0 as &char + 48) as &i64)
    };
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v1, "delimiters");
    v11 = clap_builder::parser::error::MatchesError::unwrap("delimiters", &v4);
    if !v11 {
        core::option::unwrap_failed(); /* do not return */
    }
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, "file");
    v0 = clap_builder::parser::error::MatchesError::unwrap("file", &v4);
    if v0 {
        v3 = v0;
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v3, v12);
        v4 = v0;
        return uu_paste::paste(&v4, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "serial") as i32, *((v11 + 8) as &i64), *((v11 + 16) as &i64), (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, "zero-terminated") as i8 ? 0 : 10));
    }
}
