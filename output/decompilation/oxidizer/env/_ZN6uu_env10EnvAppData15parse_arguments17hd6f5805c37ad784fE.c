fn uu_env::EnvAppData::parse_arguments(a1: i64, a2: i64) -> Result<struct80, struct24> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x360]
    let v1: u64;  // [bp-0x360]
    let v2: u64;  // [bp-0x358]
    let v3: u64;  // [bp-0x350]
    let v4: u64;  // [bp-0x348]
    let v5: u64;  // [bp-0x338]
    let v6: Result<struct56, struct16>;  // [bp-0x330], Other Possible Types: u8
    let v7: void*;  // [bp-0x328]
    let v8: u64;  // [bp-0x320]
    let v9: u128;  // [bp-0x318]
    let v10: u128;  // [bp-0x308]
    let v11: struct24;  // [bp-0x2f8]
    let v12: u8;  // [bp-0x2e0]
    let v14: u64;  // rcx
    let v15: u64;  // rax

    core::iter::traits::iterator::Iterator::collect(&v4, a2, v14);
    uu_env::EnvAppData::process_all_string_arguments(&v6, a1, &v4);
    v15 = v7;
    if v6 != 0x8000000000000000 {
        v1 = v6;
        v2 = v15;
        v3 = v8;
        uu_env::uu_app(&v12);
        v11 = v0;
        v6 = clap_builder::builder::command::Command::try_get_matches_from(&v12, &v11);
        match v6 {
            Ok(_) => {
                return Ok(struct80 {
                    field_0: v4
                    field_16: v5
                    field_24: v6 as i64
                    field_32: v7
                    field_40: v8
                    field_48: v9
                    field_64: v10
                });
            },
            Err(_) => {
                v15 = uu_env::EnvAppData::parse_arguments::{{closure}}(v7);
            },
        }
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v15
        field_16: v3
    };
}
