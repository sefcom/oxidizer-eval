fn uu_expand::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: iNone;  // [sp-0x3a8], Other Possible Types: char
    let v1: iNone;  // [sp-0x398]
    let v2: iNone;  // [sp-0x388]
    let v3: i64;  // [sp-0x378]
    let v4: i64;  // [sp-0x370]
    let v5: iNone;  // [sp-0x368]
    let v6: iNone;  // [sp-0x358]
    let v7: i64;  // [sp-0x348]
    let v8: i64;  // [sp-0x340], Other Possible Types: char
    let v9: i8;  // [sp-0x338], Other Possible Types: int
    let v10: i8;  // [bp-0x330]
    let v11: iNone;  // [sp-0x328]
    let v12: i8;  // [bp-0x320]
    let v13: iNone;  // [sp-0x318]
    let v14: i8;  // [bp-0x310]
    let v15: iNone;  // [sp-0x308]
    let v16: i64;  // [sp-0x2f8]
    let v17: struct24;  // [sp-0x2f0]
    let v18: iNone;  // [sp-0x2d8], Other Possible Types: struct712
    let v19: iNone;  // [sp-0x2c8]
    let v20: iNone;  // [sp-0x2b8]
    let v23: i64;  // rbx

    v18 = uu_expand::uu_app();
    core::iter::traits::iterator::Iterator::collect(&v0, a0, a1);
    v17 = uu_expand::expand_shortcuts(&v0);
    clap_builder::builder::command::Command::try_get_matches_from(&v8, &v18, &v17);
    if v3 == 0x8000000000000000 {
        v23 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        return v23;
    }
    v7 = *(&v14 as &i64);
    v6 = *(&v12 as &i128);
    v5 = *(&v10 as &i128);
    v3 = v8;
    v4 = *(&v9 as &i64);
    uu_expand::Options::new(&v18, &v3);
    v0 = *((&v18.field_0 as &char + 8) as &i128);
    v1 = *((&v18.field_0 as &char + 24) as &i128);
    v2 = *((&v18.field_0 as &char + 40) as &i128);
    if v8 == 0x8000000000000000 {
        v20 = v2;
        v19 = v1;
        v18 = v0;
        return v23;
    }
    v16 = *((&v18.field_0 as &char + 72) as &i64);
    v15 = *((&v18.field_0 as &char + 56) as &i128);
    v9 = v0;
    v11 = v1;
    v13 = v2;
    v8 = v18.field_0 as i64;
    return v23;
}
