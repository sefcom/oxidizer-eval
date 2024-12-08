fn uu_base32::base_common::parse_base_cmd_args(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct56;  // [sp-0x358], Other Possible Types: i64
    let v2: i8;  // [bp-0x320]
    let v6: struct712;  // [sp-0x2e8], Other Possible Types: i5696
    let v7: i64;  // [bp+0x8]

    v6 = uu_base32::base_common::base_app(a3, a4, a5, v7);
    clap_builder::builder::command::Command::try_get_matches_from(&v2, &v6, a1, a2);
    if v0 != 0x8000000000000000 {
        v0 = struct56 {
            field_0: v8
            field_8: v9
            field_16: v3
            field_32: v4
            field_48: v5
        };
        uu_base32::base_common::Config::from(a0, &v0);
        return struct24 {
            field_0: 2
            field_8:             uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1)
            field_16: v10
        };
    }
    return struct24 {
        field_0: 2
        field_8:         uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1)
        field_16: v10
    };
}
