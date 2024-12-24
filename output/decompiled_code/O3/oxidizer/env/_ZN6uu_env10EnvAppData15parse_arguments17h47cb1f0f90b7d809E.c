fn uu_env::EnvAppData::parse_arguments(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0x360]
    let v1: i64;  // [sp-0x358]
    let v2: i64;  // [sp-0x350]
    let v3: i8;  // [bp-0x348]
    let v5: i448;  // [sp-0x330], Other Possible Types: struct24, Result<struct56, struct16>
    let v6: i192;  // [bp-0x2f8]
    let v7: struct712;  // [sp-0x2e0], Other Possible Types: i5696
    let v10: i64;  // rax
    let v12: i64;  // rcx
    let v13: i64;  // rax
    let v14: i64;  // rdi
    let v15: i64;  // rsi
    let v16: i64;  // rdx
    let v17: i64;  // rcx

    core::iter::traits::iterator::Iterator::collect(&v3, a2, a3);
    v5 = uu_env::EnvAppData::process_all_string_arguments(a1, &v3);
    v10 = *((&v5 as &char + 8) as &i64);
    if v0 != 0x8000000000000000 {
        v0 = v5;
        v1 = v10;
        v2 = *((&v5 as &char + 16) as &i64);
        v7 = uu_env::uu_app();
        v6 = v0;
        v5 = clap_builder::builder::command::Command::try_get_matches_from(&v7, &v6, v12);
        v13 = v5;
        v14 = *((&v5 as &char + 8) as &i64);
        match v5 {
            Ok(_) => {
                v17 = *((&v5 as &char + 16) as &i64);
                return struct80 {
                    field_0: v3
                    field_16: v4
                    field_24: v13
                    field_32: v14
                    field_40: v17
                    field_48: *((&v5 as &char + 24) as &i128)
                    field_64: *((&v5 as &char + 40) as &i128)
                };
            },
            Err(_) => {
                v10 = uu_env::EnvAppData::parse_arguments::{{closure}}(v14, v15, v16);
            },
        }
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v10
        field_16: v2
    };
}
