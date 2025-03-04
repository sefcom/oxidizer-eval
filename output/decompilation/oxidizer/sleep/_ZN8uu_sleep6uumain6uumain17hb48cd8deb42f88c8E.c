fn uu_sleep::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x3b0]
    let v1: i8;  // [sp-0x398], Other Possible Types: struct64
    let v6: i64;  // [sp-0x358], Other Possible Types: struct56
    let v7: i64;  // [sp-0x350]
    let v8: i64;  // [sp-0x320], Other Possible Types: struct64
    let v9: struct712;  // [sp-0x2e0], Other Possible Types: struct56
    let v13: i64;  // rbx

    v9 = uu_sleep::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v1, &v9, a0, a1);
    if v6 == 0x8000000000000000 {
        v13 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
        return v13;
    }
    v6 = struct56 {
        field_0: v11
        field_8: v12
        field_16: *(&v3 as &i128)
        field_32: *(&v4 as &i128)
        field_48: *(&v5 as &i64)
    };
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, "NUMBER");
    v1 = clap_builder::parser::error::MatchesError::unwrap("NUMBER", &v9);
    if !v8 {
        return v13;
    }
    *(&v8.field_0 as &struct64) = struct64 {
        field_0: v14
        field_8: *((&v1.field_0 as &char + 8) as &i128)
        field_24: *((&v1.field_16 as &char + 8) as &i128)
        field_40: *((&v1.field_32 as &char + 8) as &i128)
        field_56: *((&v1.field_48 as &char + 8) as &i64)
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v8);
    return v13;
}
