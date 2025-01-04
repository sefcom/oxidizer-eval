fn uu_sleep::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x3b0], Other Possible Types: i192
    let v1: struct64;  // [sp-0x398], Other Possible Types: Result<struct56, struct16>
    let v2: struct56;  // [sp-0x358]
    let v3: i64;  // [sp-0x350]
    let v4: i64;  // [sp-0x320], Other Possible Types: struct64
    let v5: i5696;  // [sp-0x2e0], Other Possible Types: struct56, struct712
    let v7: i64;  // r8
    let v8: i64;  // r9
    let v9: i64;  // rax
    let v12: i64;  // rdx

    v5 = uu_sleep::uu_app(a1, a2);
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v5, a0, a1, v7, v8);
    match v1 {
        Err(_) => {
            v9 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
            return v9;
        },
        Ok(_) => {
            v2 = struct56 {
                field_0: v10
                field_8: v11
                field_16: *((&v1 as &char + 16) as &i128)
                field_32: *((&v1 as &char + 32) as &i128)
                field_48: *((&v1 as &char + 48) as &i64)
            };
            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "NUMBER");
            v1 = clap_builder::parser::error::MatchesError::unwrap("NUMBER", &v5);
            if v4 {
                *(&v4.field_0 as &struct64) = struct64 {
                    field_0: v10
                    field_8: *((&v1 as &char + 8) as &i128)
                    field_24: *((&v1 as &char + 24) as &i128)
                    field_40: *((&v1 as &char + 40) as &i128)
                    field_56: *((&v1 as &char + 56) as &i64)
                };
                v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v4, v12);
                v9 = uu_sleep::sleep(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
                return v9;
            }
            v9 = uu_sleep::uumain::uumain::{{closure}}();
            return v9;
        },
    }
}
