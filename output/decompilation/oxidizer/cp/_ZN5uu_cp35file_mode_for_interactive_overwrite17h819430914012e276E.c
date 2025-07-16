fn uu_cp::file_mode_for_interactive_overwrite(a1: i64, a2: i64) -> Option<struct48> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x16c]
    let v1: i64;  // [bp-0x168]
    let v2: u64;  // [bp-0x160]
    let v3: u64;  // [bp-0x158]
    let v4: u128;  // [bp-0x148]
    let v5: u64;  // [bp-0x148]
    let v6: void*;  // [bp-0x138], Other Possible Types: u64
    let v7: Result<struct40, struct16>;  // [bp-0x130]
    let v8: void*;  // [bp-0x128]
    let v9: u64;  // [bp-0x120], Other Possible Types: struct_0 *
    let v10: u8;  // [bp-0x118]
    let v11: struct24;  // [bp-0x108], Other Possible Types: u64
    let v12: u64;  // [bp-0x100]
    let v13: i64;  // [bp-0xf8]
    let v14: u64;  // [bp-0xf0]
    let v15: i64;  // [bp-0xe8]
    let v16: u64;  // [bp-0xe0]
    let v17: u8;  // [bp-0xd8]
    let v18: u64;  // [bp-0xc8]
    let v19: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc0]
    let v21: u64;  // rbp

    v19 = std::fs::metadata(a1, a2);
    match v19 {
        Err(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Ok(_) => {
            v21 = *((&v19 as &char + 56) as &i32) as u32 as u64;
            if v21 as u8 < 0 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v0 = v21 as u32 & 3967;
            v1 = &v0;
            v2 = core::fmt::num::<impl core::fmt::Octal for i32>::fmt;
            v5 = 2;
            v5 = v4 & 0xffffffffffffffff0000000000000000 | 2;
            v6 = 0;
            v7 = 4;
            v8 = 0;
            v9 = 34359738400;
            v10 = 3;
            v11 = &g_41e7f0;
            v12 = 1;
            v15 = &v5;
            v16 = 1;
            v13 = &v1;
            v14 = 1;
            v11 = core::option::Option<T>::map_or_else(a2);
            memcpy(&v1, &v17, 16);
            v3 = v18;
            v11 = uucore::features::fs::display_permissions_unix(v21 & 4294967295, 0);
            v6 = v3;
            memcpy(&v5, &v1, 16);
            memcpy(&v7, &v11, 16);
            v9 = v13;
            return Some(struct48 {
                field_0: v4
                field_16: v6
                field_24: v7
                field_32: 0
                field_40: v9
            });
        },
    }
}
