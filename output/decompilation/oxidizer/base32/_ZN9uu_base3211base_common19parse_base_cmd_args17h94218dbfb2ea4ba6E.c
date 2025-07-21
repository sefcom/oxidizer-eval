fn uu_base32::base_common::parse_base_cmd_args(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64) -> Result<struct42, struct24> {
    let a0: u64;  // rsi
    let v0: struct56;  // [bp-0x358]
    let v1: u64;  // [bp-0x350]
    let v2: Result<struct56, struct16>;  // [bp-0x320]
    let v3: struct56;  // [bp-0x320]
    let v4: u8;  // [bp-0x2e8]
    let v5: u64;  // rdi
    let v6: i64;  // rdi
    let v7: u64;  // rdx

    uu_base32::base_common::base_app(&v4, a2, a3, a4, a5);
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v4, a0, a1);
    match v2 {
        Ok(v0) => {
            uu_base32::base_common::Config::from(v5, &v0);
            return;
        },
        Err(_) => {
            *((v6 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
            *((v6 + 16) as &u64) = v7;
            *(v6 as &i64) = 2;
            return;
        },
    }
}
