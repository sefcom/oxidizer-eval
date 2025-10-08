fn uu_hostid::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x350]
    let v1: u64;  // [bp-0x348]
    let v2: iNone;  // [bp-0x340]
    let v3: iNone;  // [bp-0x330]
    let v4: u64;  // [bp-0x320]
    let v5: struct16;  // [bp-0x318]
    let v6: u64;  // [bp-0x318]
    let v7: u64;  // [bp-0x310]
    let v8: iNone;  // [bp-0x308]
    let v9: iNone;  // [bp-0x2f8]
    let v10: u64;  // [bp-0x2e8]
    let v11: struct700;  // [bp-0x2e0]

    v11 = uu_hostid::uu_app();
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v11, a0, a1);
    if (((0 ^ v5.field_0) & (0 ^ -(v6))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
    }
    v4 = v10;
    v3 = v9;
    v2 = v8;
    v0 = v5.field_0;
    v1 = v7;
    uu_hostid::hostid();
    return 0;
}
