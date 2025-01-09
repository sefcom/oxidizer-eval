fn uu_cp::handle_existing_dest(a0: &struct64, a1: u32, a2: u32, a3: u32, a4: u32, a5: void*) -> u64 {
    let v0: i8;  // [bp-0x148]
    let v1: i64;  // [sp-0x140]
    let v2: i8;  // [sp-0x129]
    let v3: i64;  // [sp-0x128]
    let v4: i64;  // [sp-0x120]
    let v5: i64;  // [sp-0x118]
    let v6: i8;  // [sp-0x110]
    let v7: i64;  // [sp-0x108], Other Possible Types: Option<struct1>
    let v8: i64;  // [sp-0x100]
    let v9: i64;  // [sp-0xf8]
    let v10: i64;  // [sp-0xf0]
    let v11: i64;  // [sp-0xe8]
    let v15: i64;  // [sp-0xc8]
    let v16: i64;  // [sp-0xc0]
    let v17: i64;  // [sp-0xb8]
    let v18: i8;  // [sp-0xb0]
    let v19: i128;  // [sp-0xa8]
    let v20: i64;  // [sp-0x98]
    let v21: i64;  // [sp-0x88]
    let v22: i64;  // [sp-0x80]
    let v23: i64;  // [sp-0x78]
    let v24: i64;  // [sp-0x70]
    let v25: i64;  // [sp-0x68]
    let v26: i8;  // [bp-0x60]
    let v27: i8;  // [bp-0x50]
    let v30: i64;  // [bp+0x8]
    let v31: i8;  // [bp+0x10]

    v25 = v30;
    if uu_cp::is_forbidden_to_copy_to_same_file(a1, a2, a3, a4, a5, v30) as i8 {
        v15 = 1;
        v16 = a1;
        v17 = a2;
        v18 = 1;
        v3 = 1;
        v4 = a3;
        v5 = a4;
        v6 = 1;
        v21 = &v15;
        v22 = <os_display::Quoted as core::fmt::Display>::fmt;
        v23 = &v3;
        v24 = <os_display::Quoted as core::fmt::Display>::fmt;
        v7 = &g_5b5ea8;
        v8 = 3;
        v11 = 0;
        v9 = &v21;
        v10 = 2;
        core::option::Option<T>::map_or_else();
        return struct8 {
            field_0: 4
        };
    }
    if !(*((a5 + 77) as &i8) == 2 || (v7 = uu_cp::OverwriteMode::verify(*((a5 + 60) as &i32) as u32 as u64, a3, a4, *((a5 + 71) as &i8) as u8 as u64), v7 == 13)) {
        return struct64 {
            field_0: v32
            field_8: v35
            field_24: v36
            field_40: v12
            field_56: v14
        };
    }
    uucore::features::backup_control::get_backup_path(&v26, *((a5 + 76) as &i32));
    if v26 != 0x8000000000000000 {
        v19 = v26;
        v20 = v27;
        if uucore::features::fs::paths_refer_to_same_file(a1, a2, *((&v19 as &char + 8) as &i64), v27, 1) as i8 {
            v15 = 1;
            v16 = a3;
            v17 = a4;
            v18 = 1;
            v3 = 1;
            v4 = a1;
            v5 = a2;
            v6 = 1;
            v21 = &v15;
            v22 = <os_display::Quoted as core::fmt::Display>::fmt;
            v23 = &v3;
            v24 = <os_display::Quoted as core::fmt::Display>::fmt;
            v7 = "backing up ";
            v8 = 3;
            v11 = 0;
            v9 = &v21;
            v10 = 2;
            core::option::Option<T>::map_or_else();
            return struct32 {
                field_0: 4
                field_8: v28
                field_24: v29
            };
        }
        v2 = std::path::Path::is_symlink(a3, a4) as i8;
        v7 = uu_cp::backup_dest(a3, a4, *((&v19 as &char + 8) as &i64), v20, v2);
        v3 = v8;
        v5 = v10;
        if v7 != 13 {
            return struct64 {
                field_0: v33
                field_8: v3
                field_24: v5
                field_32: v34
                field_48: v13
            };
        }
        v15 = v3;
        v17 = v5;
        return struct8 {
            field_0: 13
        };
    }
    v1 = v31;
    v7 = uu_cp::delete_dest_if_needed_and_allowed(a1, a2, a3, a4, a5, v0);
}
