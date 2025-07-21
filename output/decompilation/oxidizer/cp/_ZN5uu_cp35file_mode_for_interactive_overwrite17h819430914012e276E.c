fn uu_cp::file_mode_for_interactive_overwrite(a1: i64, a2: i64) -> Option<struct48> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x16c]
    let v1: u64;  // [bp-0x168]
    let v2: i64;  // [bp-0x168]
    let v3: u64;  // [bp-0x160]
    let v4: u64;  // [bp-0x158]
    let v5: u64;  // [bp-0x148]
    let v6: u64;  // [bp-0x148]
    let v7: void*;  // [bp-0x138], Other Possible Types: u64
    let v8: Result<struct40, struct16>;  // [bp-0x130], Other Possible Types: u128
    let v9: void*;  // [bp-0x128]
    let v10: i64;  // [bp-0x120], Other Possible Types: u64
    let v11: u8;  // [bp-0x118]
    let v12: struct24;  // [bp-0x108], Other Possible Types: u64
    let v13: u64;  // [bp-0x100]
    let v14: i64;  // [bp-0xf8]
    let v15: u64;  // [bp-0xf0]
    let v16: i64;  // [bp-0xe8]
    let v17: u64;  // [bp-0xe0]
    let v18: u128;  // [bp-0xd8]
    let v19: u64;  // [bp-0xc8]
    let v20: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc0]
    let v22: u64;  // rbp

    v20 = std::fs::metadata(a1, a2);
    match v20 {
        Err(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Ok(_) => {
            v22 = *((&v20 as &char + 56) as &i32) as u32 as u64;
            if v22 as u8 < 0 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v0 = v22 as u32 & 3967;
            v2 = &v0;
            v3 = core::fmt::num::<impl core::fmt::Octal for i32>::fmt;
            v5 = 2;
            v5 = v6 & 0xffffffffffffffff0000000000000000 | 2;
            v7 = 0;
            v8 = 4;
            v9 = 0;
            v10 = 34359738400;
            v11 = 3;
            v12 = &g_41e7f0;
            v13 = 1;
            v16 = &v5;
            v17 = 1;
            v14 = &v2;
            v15 = 1;
            v12 = core::option::Option<T>::map_or_else(a2);
            v1 = v18;
            v4 = v19;
            v12 = uucore::features::fs::display_permissions_unix(v22 & 4294967295, 0);
            v7 = v4;
            v5 = *(&v1 as &i128);
            v8 = v12.field_0;
            v10 = v14;
            return Some(struct48 {
                field_0: v5
                field_16: v7
                field_24: v8
                field_32: 0
                field_40: v10
            });
        },
    }
}
