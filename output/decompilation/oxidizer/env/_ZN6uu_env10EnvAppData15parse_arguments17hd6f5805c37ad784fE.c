fn uu_env::EnvAppData::parse_arguments(a0: &struct80, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x360]
    let v1: i64;  // [sp-0x358]
    let v2: i64;  // [sp-0x350]
    let v3: i8;  // [bp-0x348]
    let v4: i8;  // [bp-0x338]
    let v5: i8;  // [bp-0x330]
    let v6: i8;  // [bp-0x328]
    let v7: i8;  // [bp-0x320]
    let v8: i8;  // [bp-0x318]
    let v9: i8;  // [bp-0x308]
    let v10: i192;  // [sp-0x2f8]
    let v11: struct712;  // [sp-0x2e0], Other Possible Types: i5696
    let v13: i64;  // rdx
    let v14: i64;  // rcx
    let v18: i64;  // rax
    let v19: i64;  // rdi
    let v20: i64;  // rax
    let v21: i64;  // rcx
    let v22: i64;  // rax
    let v23: i64;  // rax

    core::iter::traits::iterator::Iterator::collect(&v3, v13, v14);
    uu_env::EnvAppData::process_all_string_arguments(&v5, a1, &v3);
    if v0 != 0x8000000000000000 {
        v0 = v5;
        v1 = v6;
        v2 = v7;
        v11 = uu_env::uu_app();
        v10 = v0;
        clap_builder::builder::command::Command::try_get_matches_from(&v5, &v11, &v10);
        v18 = v5;
        v19 = v6;
        if v18 != 0x8000000000000000 {
            v21 = v7;
            *((a0 + 64) as &i8) = v9;
            *((a0 + 48) as &i8) = v8;
            *((a0 + 16) as &i8) = v4;
            *(a0 as &i8) = v3;
            *((a0 + 24) as &i64) = v18;
            *((a0 + 32) as &i64) = v19;
            *((a0 + 40) as &i64) = v21;
            v22 = v18;
            return v22;
        }
        v20 = uu_env::EnvAppData::parse_arguments::{{closure}}(v19);
    }
    v22 = v23;
    return v22;
}
