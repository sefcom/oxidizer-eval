fn uu_cp::handle_existing_dest(a0: &struct64, a1: u32, a2: u32, a3: u32, a4: u32, a5: void*, a6: u8, a7: u32) -> u64 {
    let v0: i8;  // [bp-0x148]
    let v1: i64;  // [sp-0x140]
    let v2: i8;  // [sp-0x129]
    let v3: i64;  // [sp-0x128], Other Possible Types: int
    let v4: i64;  // [sp-0x120]
    let v5: i64;  // [sp-0x118]
    let v6: i8;  // [sp-0x110]
    let v7: Option<struct1>;  // [sp-0x108]
    let v8: i64;  // [sp-0x108], Other Possible Types: Option<struct8>
    let v9: i64;  // [sp-0xf0]
    let v14: i64;  // [sp-0xc8]
    let v15: i64;  // [sp-0xc0]
    let v16: i64;  // [sp-0xb8]
    let v17: i8;  // [sp-0xb0]
    let v18: iNone;  // [sp-0xa8]
    let v19: i64;  // [sp-0x98]
    let v20: i64;  // [sp-0x68]
    let v21: i8;  // [bp-0x60]
    let v22: i8;  // [bp-0x50]
    let v23: String;  // [sp-0x48]

    v20 = a6;
    if uu_cp::is_forbidden_to_copy_to_same_file(a1, a2, a3, a4, a5, a6) as i8 {
        v14 = 1;
        v15 = a1;
        v16 = a2;
        v17 = 1;
        v3 = 1;
        v4 = a3;
        v5 = a4;
        v6 = 1;
        return struct8 {
            field_0: 4
        };
    }
    if !(*((a5 + 77) as &i8) == 2 || (v7 = uu_cp::OverwriteMode::verify(*((a5 + 60) as &i32) as u32 as u64, a3, a4, *((a5 + 71) as &i8) as u8 as u64), v8 == 13)) {
        return struct64 {
            field_0: v24
            field_8: v27
            field_24: v28
            field_40: *(&v11 as &i128)
            field_56: *(&v13 as &i64)
        };
    }
    uucore::features::backup_control::get_backup_path(&v21, *((a5 + 76) as &i32));
    if *(&v21 as &i64) != 0x8000000000000000 {
        v18 = *(&v21 as &i128);
        v19 = *(&v22 as &i64);
        if uucore::features::fs::paths_refer_to_same_file(a1, a2, (&v18)[8] as i64, *(&v22 as &i64), 1) as i8 {
            v14 = 1;
            v15 = a3;
            v16 = a4;
            v17 = 1;
            v3 = 1;
            v4 = a1;
            v5 = a2;
            v6 = 1;
            v23 = format!("backing up {} might destroy source;  {} not copied", &v14, &v3);
            return struct32 {
                field_0: 4
                field_8: *(&v23.ptr as &i128)
                field_24: v23.len
            };
        }
        v2 = std::path::Path::is_symlink(a3, a4) as i8;
        v8 = uu_cp::backup_dest(a3, a4, (&v18)[8] as i64, v19, v2);
        *(&v3 as &i128) = *(&v7 as &i128);
        v5 = v9;
        if v8 != 13 {
            return struct64 {
                field_0: v25
                field_8: v3 as i128
                field_24: v5
                field_32: v26
                field_48: *(&v12 as &i128)
            };
        } else if v2 {
            return struct8 {
                field_0: 13
            };
        }
    }
    v1 = a7;
    v7 = uu_cp::delete_dest_if_needed_and_allowed(a1, a2, a3, a4, a5, v0);
    if v8 == 13 {
        return struct8 {
            field_0: 13
        };
    }
}
