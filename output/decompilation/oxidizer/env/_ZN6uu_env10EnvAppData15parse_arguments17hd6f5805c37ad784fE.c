fn uu_env::EnvAppData::parse_arguments(a0: &struct80, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x360]
    let v1: i64;  // [sp-0x358]
    let v2: i64;  // [sp-0x350]
    let v3: i8;  // [bp-0x348]
    let v4: i8;  // [bp-0x338]
    let v5: struct24;  // [sp-0x330]
    let v6: i8;  // [bp-0x318]
    let v7: i8;  // [bp-0x308]
    let v8: iNone;  // [sp-0x2f8]
    let v9: struct712;  // [sp-0x2e0]
    let v11: i64;  // rdx
    let v12: i64;  // rcx
    let v16: i64;  // rax
    let v17: i64;  // rdi
    let v18: i64;  // rax
    let v19: i64;  // rcx
    let v20: i64;  // rax
    let v21: i64;  // rax

    core::iter::traits::iterator::Iterator::collect(&v3, v11, v12);
    v5 = uu_env::EnvAppData::process_all_string_arguments(a1, &v3);
    if v0 != 0x8000000000000000 {
        v0 = v5.field_0 as i64;
        v1 = *((&v5.field_0 as &char + 8) as &i64);
        v2 = v5.field_16;
        v9 = uu_env::uu_app();
        v8 = *(&v0 as &i192);
        clap_builder::builder::command::Command::try_get_matches_from(&v5, &v9, &v8);
        v16 = v5.field_0 as i64;
        v17 = *((&v5.field_0 as &char + 8) as &i64);
        if v16 != 0x8000000000000000 {
            v19 = v5.field_16;
            *((a0 + 64) as &i128) = *(&v7 as &i128);
            *((a0 + 48) as &i128) = *(&v6 as &i128);
            *((a0 + 16) as &i64) = *(&v4 as &i64);
            *(a0 as &i128) = *(&v3 as &i128);
            *((a0 + 24) as &unsigned long) = v16;
            *((a0 + 32) as &unsigned long) = v17;
            *((a0 + 40) as &unsigned long) = v19;
            v20 = v16;
            return v20;
        }
        v18 = uu_env::EnvAppData::parse_arguments::{{closure}}(v17);
    }
    v20 = v21;
    return v20;
}
