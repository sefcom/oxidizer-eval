fn uu_env::EnvAppData::parse_arguments(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0x360]
    let v1: i64;  // [sp-0x358]
    let v2: i64;  // [sp-0x350]
    let v3: i8;  // [bp-0x348]
    let v5: i192;  // [sp-0x330], Other Possible Types: struct24
    let v8: struct24;  // [bp-0x2f8]
    let v9: struct712;  // [sp-0x2e0], Other Possible Types: i5696
    let v12: i64;  // rax
    let v14: i64;  // rcx
    let v15: i64;  // rax
    let v16: i64;  // rdi
    let v17: i64;  // rsi
    let v18: i64;  // rdx
    let v19: i64;  // rcx

    core::iter::traits::iterator::Iterator::collect(&v3, a2, a3);
    v5 = uu_env::EnvAppData::process_all_string_arguments(a1, &v3);
    v12 = *((&v5 as &char + 8) as &i64);
    if v0 != 0x8000000000000000 {
        v0 = v5;
        v1 = v12;
        v2 = *((&v5 as &char + 16) as &i64);
        v9 = uu_env::uu_app();
        v8 = struct24 {
            field_0: v0
            field_16: v2
        };
        clap_builder::builder::command::Command::try_get_matches_from(&v5, &v9, &v8, v14);
        v15 = v5;
        v16 = *((&v5 as &char + 8) as &i64);
        if v15 != 0x8000000000000000 {
            v19 = *((&v5 as &char + 16) as &i64);
            return struct80 {
                field_0: v3
                field_16: v4
                field_24: v15
                field_32: v16
                field_40: v19
                field_48: v6
                field_64: v7
            };
        }
        v12 = uu_env::EnvAppData::parse_arguments::{{closure}}(v16, v17, v18);
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v12
        field_16: v2
    };
}
