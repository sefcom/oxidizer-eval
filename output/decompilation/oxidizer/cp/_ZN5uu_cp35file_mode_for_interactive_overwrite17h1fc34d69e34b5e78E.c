fn uu_cp::file_mode_for_interactive_overwrite(a0: i64, a1: u64, a2: u64) -> int {
    let v0: u32;  // [bp-0x12c]
    let v1: struct16;  // [bp-0x128]
    let v2: u64;  // [bp-0x118]
    let v3: struct16;  // [bp-0x108]
    let v4: u64;  // [bp-0xf8]
    let v5: u64;  // [bp-0xf0]
    let v6: u64;  // [bp-0xe0]
    let v7: struct16;  // [bp-0xd8], Other Possible Types: struct24
    let v8: u64;  // [bp-0xc8]
    let v9: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc0]
    let v11: u64;  // rbp
    let v12: struct16;  // xmm0

    v9 = std::fs::metadata(a1, a2);
    match v9 {
        Err(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Ok(_) => {
            v11 = *((&v9 as &char + 56) as &i32) as u32 as u64;
            if v11 as u8 < 0 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v0 = v11 as u32 & 3967;
            format!("{}", &v0);
            v1 = v7;
            v2 = v8;
            v7 = uucore::features::fs::display_permissions_unix(v11 & 4294967295, 0);
            v4 = v2;
            v12 = *(&v1.field_0 as &i128);
            v3 = v12;
            v5 = v7.field_0;
            v6 = v8;
            return struct48 {
                field_0: v12
                field_16: v4
                field_24: v5
                field_32: &g_424bf8
                field_40: v6
            };
        },
    }
}
