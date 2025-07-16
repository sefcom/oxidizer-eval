fn uu_env::EnvAppData::parse_arguments(a1: i64, a2: i64) -> Result<struct80, struct24> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x360]
    let v1: u64;  // [bp-0x358]
    let v2: u64;  // [bp-0x350]
    let v3: u64;  // [bp-0x348]
    let v4: u64;  // [bp-0x338]
    let v5: u64;  // [bp-0x330], Other Possible Types: Result<struct56, struct16>
    let v6: void*;  // [bp-0x328]
    let v7: u64;  // [bp-0x320]
    let v8: u128;  // [bp-0x318]
    let v9: u128;  // [bp-0x308]
    let v10: u8;  // [bp-0x2f8]
    let v11: u64;  // [bp-0x2e8]
    let v12: u8;  // [bp-0x2e0]
    let v14: u64;  // rcx
    let v15: u64;  // rax

    core::iter::traits::iterator::Iterator::collect(&v3, a2, v14);
    uu_env::EnvAppData::process_all_string_arguments(&v5, a1, &v3);
    v15 = v6;
    if v5 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v15
            field_16: v2
        };
    }
    v0 = v5;
    v1 = v15;
    v2 = v7;
    uu_env::uu_app(&v12);
    v11 = v2;
    memcpy(&v10, &v0, 16);
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v12, &v10);
    match v5 {
        Ok(_) => {
            return Ok(struct80 {
                field_0: v3
                field_16: v4
                field_24: v5 as i64
                field_32: v6
                field_40: v7
                field_48: v8
                field_64: v9
            });
        },
        Err(_) => {
            v15 = uu_env::EnvAppData::parse_arguments::{{closure}}(v6);
        },
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v15
        field_16: v2
    };
}
