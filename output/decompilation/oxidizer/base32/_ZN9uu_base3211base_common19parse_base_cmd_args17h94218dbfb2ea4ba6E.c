fn uu_base32::base_common::parse_base_cmd_args(a0: &Result<struct34, struct16>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x358], Other Possible Types: struct56
    let v1: i64;  // [sp-0x350]
    let v2: i8;  // [bp-0x320]
    let v7: struct712;  // [sp-0x2e8], Other Possible Types: i5696
    let v8: i64;  // [bp+0x8]
    let v11: i64;  // rdx

    v7 = uu_base32::base_common::base_app(a3, a4, a5, v8);
    clap_builder::builder::command::Command::try_get_matches_from(&v2, &v7, a1, a2);
    if v0 != 0x8000000000000000 {
        v0 = struct56 {
            field_0: v9
            field_8: v10
            field_16: v4
            field_32: v5
            field_48: v6
        };
        uu_base32::base_common::Config::from(a0, &v0);
        return a0;
    }
    *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
    *((a0 + 16) as &i64) = v11;
    *(a0 as &i64) = 2;
    return a0;
}
