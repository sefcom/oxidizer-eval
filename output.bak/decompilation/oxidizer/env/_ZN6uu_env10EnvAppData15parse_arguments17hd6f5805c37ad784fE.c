fn uu_env::EnvAppData::parse_arguments(a0: &Result<struct80, struct16>, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x360]
    let v1: i64;  // [sp-0x358]
    let v2: i64;  // [sp-0x350]
    let v3: i8;  // [bp-0x348]
    let v4: i8;  // [bp-0x338]
    let v5: i192;  // [sp-0x330], Other Possible Types: Result<struct56, struct8>, struct24
    let v6: struct24;  // [bp-0x2f8]
    let v7: struct712;  // [sp-0x2e0], Other Possible Types: i5696
    let v9: i64;  // rdx
    let v10: i64;  // rcx
    let v12: i64;  // rax
    let v14: i64;  // rax
    let v15: i64;  // rdi
    let v16: i64;  // rcx
    let v17: i64;  // rax
    let v18: i64;  // rax

    core::iter::traits::iterator::Iterator::collect(&v3, v9, v10);
    v5 = uu_env::EnvAppData::process_all_string_arguments(a1, &v3);
    v12 = *((&v5 as &char + 8) as &i64);
    if v0 != 0x8000000000000000 {
        v0 = v5;
        v1 = v12;
        v2 = *((&v5 as &char + 16) as &i64);
        v7 = uu_env::uu_app();
        v6 = struct24 {
            field_0: v0
            field_16: v2
        };
        v5 = clap_builder::builder::command::Command::try_get_matches_from(&v7, &v6);
        v14 = v5;
        v15 = *((&v5 as &char + 8) as &i64);
        match v5 {
            Ok(_) => {
                v16 = *((&v5 as &char + 16) as &i64);
                *((a0 + 64) as &i128) = *((&v5 as &char + 40) as &i128);
                *((a0 + 48) as &i128) = *((&v5 as &char + 24) as &i128);
                *((a0 + 16) as &i8) = v4;
                *(a0 as &i8) = v3;
                *((a0 + 24) as &i64) = v14;
                *((a0 + 32) as &i64) = v15;
                *((a0 + 40) as &i64) = v16;
                v17 = v14;
                return v17;
            },
            Err(_) => {
                v12 = uu_env::EnvAppData::parse_arguments::{{closure}}(v15);
            },
        }
    }
    *((a0 + 8) as &i64) = v12;
    *((a0 + 16) as &i64) = v2;
    *(a0 as &i64) = 0x8000000000000000;
    v17 = v18;
    return v17;
}
