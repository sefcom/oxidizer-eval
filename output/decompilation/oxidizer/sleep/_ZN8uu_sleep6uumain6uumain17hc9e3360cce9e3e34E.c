fn uu_sleep::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x3b0]
    let v1: u64;  // [bp-0x3a8]
    let v2: u32;  // [bp-0x3a0]
    let v3: struct16;  // [bp-0x398], Other Possible Types: struct64
    let v4: struct56;  // [bp-0x398], Other Possible Types: struct64, u64
    let v5: struct56;  // [bp-0x358]
    let v6: u64;  // [bp-0x350]
    let v7: struct64;  // [bp-0x320]
    let v8: struct56;  // [bp-0x2e0], Other Possible Types: struct712

    v8 = uu_sleep::uu_app();
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v8, a0, a1);
    if (((0 ^ v3.field_0) & (0 ^ -(v4))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    }
    v5 = v4;
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5);
    v3 = clap_builder::parser::error::MatchesError::unwrap(&v8);
    if !v3.field_0 as i64 {
        return uu_sleep::uumain::uumain::{{closure}}();
    }
    v7 = v4;
    core::iter::traits::iterator::Iterator::collect(&v0, &v7);
    return uu_sleep::sleep(v1, v2);
}
