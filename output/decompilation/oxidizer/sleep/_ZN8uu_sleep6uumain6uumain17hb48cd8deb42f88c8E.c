fn uu_sleep::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x3b0]
    let v1: u64;  // [bp-0x3a8]
    let v2: u32;  // [bp-0x3a0]
    let v3: Result<struct56, struct16>;  // [bp-0x398], Other Possible Types: struct64
    let v4: struct64;  // [bp-0x398]
    let v5: u64;  // [bp-0x390]
    let v6: u64;  // [bp-0x368]
    let v7: u64;  // [bp-0x358]
    let v8: u64;  // [bp-0x350]
    let v9: u128;  // [bp-0x348]
    let v10: u128;  // [bp-0x338]
    let v11: u64;  // [bp-0x328]
    let v12: struct64;  // [bp-0x320]
    let v13: struct56;  // [bp-0x2e0], Other Possible Types: u8

    uu_sleep::uu_app(&v13);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v13, a0, a1);
    match v3 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
        },
        Ok(_) => {
            v11 = v6;
            v10 = *((&v3 as &char + 32) as &i128);
            v9 = *((&v3 as &char + 16) as &i128);
            v7 = v3 as i64;
            v8 = v5;
            v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v7, "NUMBER");
            v3 = clap_builder::parser::error::MatchesError::unwrap("NUMBER", &v13);
            if !v3.field_0 as i64 {
                return uu_sleep::uumain::uumain::{{closure}}();
            }
            v12 = v4;
            v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v12);
            return uu_sleep::sleep(v1, v2);
        },
    }
}
