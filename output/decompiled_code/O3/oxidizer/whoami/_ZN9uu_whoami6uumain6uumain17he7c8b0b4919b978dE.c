fn uu_whoami::uumain::uumain(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x370]
    let v1: i64;  // [sp-0x368]
    let v2: i64;  // [sp-0x360]
    let v3: i64;  // [sp-0x358]
    let v4: i64;  // [sp-0x350]
    let v5: i128;  // [sp-0x348]
    let v6: i128;  // [sp-0x338]
    let v7: i64;  // [sp-0x328]
    let v8: i8;  // [bp-0x320]
    let v9: i8;  // [bp-0x318]
    let v10: i8;  // [bp-0x310]
    let v11: i8;  // [bp-0x300]
    let v12: i8;  // [bp-0x2f0]
    let v13: i5696;  // [sp-0x2e8], Other Possible Types: struct712, struct24
    let v17: i64;  // rax
    let v18: i64;  // rsi
    let v19: i64;  // rdx

    v13 = uu_whoami::uu_app(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v8, &v13, a0, a1);
    if v3 == 0x8000000000000000 {
        v17 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        return v17;
    }
    v7 = v12;
    v6 = v11;
    v5 = v10;
    v3 = v8;
    v4 = v9;
    v13 = uu_whoami::whoami(v18, v19);
    v17 = *((&v13 as &char + 8) as &i64);
    if v0 != 0x8000000000000000 {
        v0 = v13;
        v1 = v17;
        v2 = *((&v13 as &char + 16) as &i64);
        v17 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v0, v18, v2));
        return v17;
    }
    return v17;
}
