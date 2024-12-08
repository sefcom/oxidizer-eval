fn uu_sleep::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x3b0], Other Possible Types: i192
    let v1: struct64;  // [bp-0x398], Other Possible Types: i8
    let v5: struct56;  // [sp-0x358], Other Possible Types: i64
    let v6: i64;  // [sp-0x350]
    let v7: i64;  // [sp-0x320], Other Possible Types: struct64
    let v8: i5696;  // [sp-0x2e0], Other Possible Types: struct56, struct712
    let v10: i64;  // rdx
    let v11: i64;  // rax

    v8 = uu_sleep::uu_app(a1, v10);
    clap_builder::builder::command::Command::try_get_matches_from(&v1, &v8, a0, a1);
    if v5 == 0x8000000000000000 {
        v11 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        return v11;
    }
    v5 = struct56 {
        field_0: v12
        field_8: v13
        field_16: v2
        field_32: v3
        field_48: v4
    };
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, "NUMBER");
    v1 = clap_builder::parser::error::MatchesError::unwrap("NUMBER", &v8);
    if v7 {
        *(&v7.field_0 as &struct64) = struct64 {
            field_0: v12
            field_8: *((&v1 as &char + 8) as &i128)
            field_24: *((&v1 as &char + 24) as &i128)
            field_40: *((&v1 as &char + 40) as &i128)
            field_56: *((&v1 as &char + 56) as &i64)
        };
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v7, v10);
        v11 = uu_sleep::sleep(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
        return v11;
    }
    v11 = uu_sleep::uumain::uumain::{{closure}}();
    return v11;
}
