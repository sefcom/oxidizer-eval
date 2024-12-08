fn uu_cp::file_mode_for_interactive_overwrite(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i32;  // [sp-0x16c]
    let v1: i64;  // [sp-0x168]
    let v2: i64;  // [sp-0x160]
    let v3: i64;  // [sp-0x158]
    let v4: i64;  // [bp-0x148]
    let v5: i64;  // [sp-0x138]
    let v6: i128;  // [sp-0x130]
    let v7: i64;  // [sp-0x128]
    let v8: i64;  // [sp-0x120]
    let v9: i8;  // [sp-0x118]
    let v10: i192;  // [sp-0x108], Other Possible Types: struct24
    let v11: i64;  // [sp-0x100]
    let v12: i64;  // [sp-0xf8]
    let v13: i64;  // [sp-0xf0]
    let v14: i64;  // [sp-0xe8]
    let v15: i64;  // [sp-0xe0]
    let v16: i192;  // [sp-0xd8], Other Possible Types: struct24
    let v17: Result<struct176, struct16>;  // [sp-0xc0], Other Possible Types: i1408
    let v19: i64;  // rbp
    let v20: i64;  // rax
    let v21: i128;  // xmm0

    v17 = std::fs::metadata(a1, a2);
    match v17 {
        Err(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Ok(_) => {
            v19 = *((&v17 as &char + 56) as &i32) as u32 as u64;
            if v19 as i8 < 0 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v0 = v19 as i32 & 3967;
            v1 = &v0;
            v2 = core::fmt::num::<impl core::fmt::Octal for i32>::fmt;
            v4 = 2;
            v5 = 0;
            v6 = 4;
            v7 = 0;
            v8 = 34359738400;
            v9 = 3;
            v10 = &g_41e8a0;
            v11 = 1;
            v14 = &v4;
            v15 = 1;
            v12 = &v1;
            v13 = 1;
            v16 = core::option::Option<T>::map_or_else(&v10);
            v1 = v16;
            v3 = *((&v16 as &char + 16) as &i64);
            v10 = uucore::features::fs::display_permissions_unix(v19 & 4294967295, 0);
            v5 = v3;
            v21 = v1;
            v4 = v21;
            v6 = v10;
            v8 = v10.field_16;
            *((a0 + 32) as &i64) = v7;
            *((a0 + 40) as &i64) = v8;
            *((a0 + 16) as &i64) = v5;
            v20 = v6;
            *((a0 + 24) as &i64) = v20;
            *(a0 as &i128) = v21;
            return v20;
        },
    }
}
