fn uu_cp::handle_existing_dest(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8, a7: i64) -> : struct64 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x138]
    let v1: u8;  // [bp-0x129]
    let v2: u64;  // [bp-0x128]
    let v3: u64;  // [bp-0x120]
    let v4: u64;  // [bp-0x118]
    let v5: u8;  // [bp-0x110]
    let v6: u64;  // [bp-0x108], Other Possible Types: struct24, struct40
    let v7: struct24;  // [bp-0x108]
    let v8: u64;  // [bp-0x100]
    let v9: i64;  // [bp-0xf8]
    let v10: u64;  // [bp-0xf0]
    let v11: void*;  // [bp-0xe8]
    let v12: i8;  // [bp-0xe0]
    let v13: i8;  // [bp-0xd8]
    let v14: struct8;  // [bp-0xd0]
    let v15: u64;  // [bp-0xc8]
    let v16: u64;  // [bp-0xc0]
    let v17: u64;  // [bp-0xb8]
    let v18: u8;  // [bp-0xb0]
    let v19: u8;  // [bp-0xa8]
    let v20: u64;  // [bp-0xa0]
    let v21: u64;  // [bp-0x98]
    let v22: i64;  // [bp-0x88]
    let v23: u64;  // [bp-0x80]
    let v24: i64;  // [bp-0x78]
    let v25: u64;  // [bp-0x70]
    let v26: u64;  // [bp-0x68]
    let v27: u8;  // [bp-0x60]
    let v28: u32;  // [bp-0x50]
    let v29: u128;  // [bp-0x48]
    let v30: i8;  // [bp-0x38]

    v26 = a6;
    if uu_cp::is_forbidden_to_copy_to_same_file(a2, a3, a4, a5, a6, v0) as u8 {
        v15 = 1;
        v16 = a1;
        v17 = a2;
        v18 = 1;
        v2 = 1;
        v3 = a3;
        v4 = a4;
        v5 = 1;
        v22 = &v15;
        v23 = <os_display::Quoted as core::fmt::Display>::fmt;
        v24 = &v2;
        v25 = <os_display::Quoted as core::fmt::Display>::fmt;
        v6 = &g_5b5ea8;
        v8 = 3;
        v11 = 0;
        v9 = &v22;
        v10 = 2;
        v6 = core::option::Option<T>::map_or_else(a2);
        return struct8 {
            field_0: 4
        };
    }
    if *((a5 + 77) as &i8) != 2 {
        uu_cp::OverwriteMode::verify(*((a5 + 60) as &i32), a3, a4, *((a5 + 71) as &i8), a5 as u8);
        if v6 != 13 {
            return struct72 {
                field_0: v6
                field_8: <UNKNOWN>
                field_24: <UNKNOWN>
                field_40: <UNKNOWN>
                field_56: <UNKNOWN>
            };
        }
    }
    uucore::features::backup_control::get_backup_path(&v27, *((a5 + 76) as &i32));
    if *(&v27 as &i64) != 0x8000000000000000 {
        memcpy(&v19, &v27, 16);
        v21 = v28;
        if uucore::features::fs::paths_refer_to_same_file(a2, v20, v28, 1, a5 as u32) as u8 {
            v15 = 1;
            v16 = a3;
            v17 = a4;
            v18 = 1;
            v2 = 1;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v22 = &v15;
            v23 = <os_display::Quoted as core::fmt::Display>::fmt;
            v24 = &v2;
            v25 = <os_display::Quoted as core::fmt::Display>::fmt;
            v6 = "backing up ";
            v8 = 3;
            v11 = 0;
            v9 = &v22;
            v10 = 2;
            v7 = core::option::Option<T>::map_or_else(a2);
            return struct40 {
                field_0: 4
                field_8: <UNKNOWN>
                field_24: <UNKNOWN>
            };
        }
        v1 = std::path::Path::is_symlink();
        uu_cp::backup_dest(a3, a4, v20, v21, v1, *(&v0 as &i32));
        memcpy(&v2, &v7 as u8, 16);
        v4 = v10;
        if v6 != 13 {
            return struct80 {
                field_0: v6
                field_8: <UNKNOWN>
                field_24: *(&v11 as &i128)
                field_32: *(&v13 as &i128)
                field_48: <UNKNOWN>
            };
        }
        *(&v15 as &i128) = *(&v2 as &i128);
        v17 = v4;
        if v1 {
            return struct8 {
                field_0: 13
            };
        }
    }
    v6 = uu_cp::delete_dest_if_needed_and_allowed(a1, a2, a3, a4, a5, v26, a7);
    if v6 != 13 {
        return struct72 {
            field_0: v6
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
            field_40: <UNKNOWN>
            field_56: <UNKNOWN>
        };
    }
    return struct8 {
        field_0: 13
    };
}
