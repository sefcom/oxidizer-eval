fn uu_paste::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i192;  // [bp-0x3a0], Other Possible Types: struct64, struct24
    let v4: i64;  // [sp-0x360], Other Possible Types: struct56
    let v5: i64;  // [sp-0x358]
    let v6: struct64;  // [bp-0x328]
    let v7: i320;  // [sp-0x2e8], Other Possible Types: struct56, Result<struct40, struct16>, struct712
    let v9: i64;  // rdx
    let v13: i64;  // r14

    v7 = uu_paste::uu_app(a1, v9);
    clap_builder::builder::command::Command::try_get_matches_from(&v0, &v7, a0, a1);
    if v4 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
    }
    *(&v4.field_0 as &struct56) = struct56 {
        field_0: v10
        field_8: v11
        field_16: v1
        field_32: v2
        field_48: v3
    };
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, "delimiters");
    v13 = clap_builder::parser::error::MatchesError::unwrap("delimiters", &v7);
    if !v13 {
        core::option::unwrap_failed(); /* do not return */
    }
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "file");
    v0 = clap_builder::parser::error::MatchesError::unwrap("file", &v7);
    if v0 {
        v6 = struct64 {
            field_0: v0
            field_16: *((&v0 as &char + 16) as &i128)
            field_32: *((&v0 as &char + 32) as &i128)
            field_48: *((&v0 as &char + 48) as &i128)
        };
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v6, v9);
        v7.field_16 = (stack_base)[912] as i64;
        v7 = v0;
        return uu_paste::paste(&v7, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "serial") as i32, *((v13 + 8) as &i64), *((v13 + 16) as &i64), (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "zero-terminated") as i8 ? 0 : 10));
    }
}
