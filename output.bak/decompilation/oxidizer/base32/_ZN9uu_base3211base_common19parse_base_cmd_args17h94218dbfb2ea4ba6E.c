fn uu_base32::base_common::parse_base_cmd_args(a0: &Result<struct34, struct16>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct56;  // [sp-0x358]
    let v1: i64;  // [sp-0x350]
    let v2: Result<struct56, struct8>;  // [sp-0x320]
    let v3: struct712;  // [sp-0x2e8], Other Possible Types: i5696
    let v4: i64;  // [bp+0x8]
    let v7: i64;  // rdx

    v3 = uu_base32::base_common::base_app(a3, a4, a5, v4);
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v3, a1, a2);
    match v2 {
        Ok(_) => {
            v0 = struct56 {
                field_0: v5
                field_8: v6
                field_16: *((&v2 as &char + 16) as &i128)
                field_32: *((&v2 as &char + 32) as &i128)
                field_48: *((&v2 as &char + 48) as &i64)
            };
            uu_base32::base_common::Config::from(a0, &v0);
            return a0;
        },
        Err(_) => {
            *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
            *((a0 + 16) as &i64) = v7;
            *(a0 as &i64) = 2;
            return a0;
        },
    }
}
