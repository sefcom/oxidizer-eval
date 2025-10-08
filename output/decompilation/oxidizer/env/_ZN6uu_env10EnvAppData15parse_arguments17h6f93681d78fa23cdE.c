fn uu_env::EnvAppData::parse_arguments(a0: i64, a1: void*, a2: u64) -> int {
    let v0: u64;  // [bp-0x348]
    let v1: u64;  // [bp-0x338]
    let v2: u64;  // [bp-0x330]
    let v3: void*;  // [bp-0x328]
    let v4: u64;  // [bp-0x320]
    let v5: struct16;  // [bp-0x318], Other Possible Types: u8
    let v6: void*;  // [bp-0x310]
    let v7: u64;  // [bp-0x308]
    let v8: u128;  // [bp-0x300]
    let v9: u128;  // [bp-0x2f0]
    let v10: struct712;  // [bp-0x2e0]
    let v12: u64;  // rcx
    let v13: void*;  // rax

    core::iter::traits::iterator::Iterator::collect(&v0, a2, v12);
    uu_env::EnvAppData::process_all_string_arguments(&v5, a1, &v0);
    v13 = v6;
    if !((((0 ^ v5) & (0 ^ -(v5))) >> 63) as char) {
        v2 = v5;
        v3 = v13;
        v4 = v7;
        v10 = uu_env::uu_app();
        v5 = clap_builder::builder::command::Command::try_get_matches_from(&v10, &v2);
        if v5.field_0 != 0x8000000000000000 {
            return struct80 {
                field_0: v0
                field_16: v1
                field_24: v5.field_0
                field_32: v6
                field_40: v7
                field_48: v8
                field_64: v9
            };
        }
        v13 = uu_env::EnvAppData::parse_arguments::{{closure}}(v6);
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v13
        field_16: v4
    };
}
