fn uu_base32::base_common::parse_base_cmd_args(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64) -> Result<struct42, struct24> {
    let a0: u64;  // rsi
    let v0: u256;  // [bp-0x358]
    let v1: u64;  // [bp-0x350]
    let v2: u8;  // [bp-0x338]
    let v3: u64;  // [bp-0x328]
    let v4: Result<struct56, struct16>;  // [bp-0x320]
    let v5: u256;  // [bp-0x320]
    let v6: u64;  // [bp-0x2f0]
    let v7: u8;  // [bp-0x2e8]
    let v8: u64;  // rdi
    let v9: i64;  // rdi
    let v10: u64;  // rdx

    uu_base32::base_common::base_app(&v7, a2, a3, a4, a5);
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v7, a0, a1);
    match v4 {
        Ok(_) => {
            v3 = v6;
            memcpy(&v2, &v4 as u128, 16);
            v0 = v5;
            uu_base32::base_common::Config::from(v8, &v0);
            return;
        },
        Err(_) => {
            *((v9 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
            *((v9 + 16) as &u64) = v10;
            *(v9 as &i64) = 2;
            return;
        },
    }
}
