fn uu_whoami::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x370]
    let v1: u64;  // [bp-0x358]
    let v2: u64;  // [bp-0x350]
    let v3: u128;  // [bp-0x348]
    let v4: u128;  // [bp-0x338]
    let v5: u64;  // [bp-0x328]
    let v6: Result<struct56, struct16>;  // [bp-0x320]
    let v7: u64;  // [bp-0x318]
    let v8: u128;  // [bp-0x310]
    let v9: u128;  // [bp-0x300]
    let v10: u64;  // [bp-0x2f0]
    let v11: struct24;  // [bp-0x2e8], Other Possible Types: struct700
    let v12: struct24;  // [bp-0x2e8]
    let v13: u64;  // [bp-0x2e0]

    v11 = uu_whoami::uu_app();
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v11, a0, a1);
    match v6 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
        },
        Ok(_) => {
            v5 = v10;
            v4 = v9;
            v3 = v8;
            v1 = v6 as i64;
            v2 = v7;
            v11 = uu_whoami::whoami();
            if v11.field_0 as i64 == 0x8000000000000000 {
                return v13;
            }
            v0 = v12;
            return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v0));
        },
    }
}
