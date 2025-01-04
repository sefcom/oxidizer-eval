fn uu_cp::handle_existing_dest(a0: &struct_0, a1: u64, a2: u64, a3: u64, a4: u64, a5: &struct_1) -> u64 {
    let v0: u8;  // [bp-0x148]
    let v1: u8;  // [sp-0x129]
    let v2: u128;  // [sp-0x128]
    let v3: u64;  // [sp-0x120]
    let v4: u64;  // [sp-0x118]
    let v5: u8;  // [sp-0x110]
    let v6: Option<Result<struct8, struct32>>;  // [sp-0x108], Other Possible Types: u64
    let v7: u8;  // [bp-0x100]
    let v8: u64;  // [sp-0xf0]
    let v9: u8;  // [bp-0xe8]
    let v13: u64;  // [sp-0xc8]
    let v14: u64;  // [sp-0xc0]
    let v15: u64;  // [sp-0xb8]
    let v16: u8;  // [sp-0xb0]
    let v17: u128;  // [sp-0xa8]
    let v18: u64;  // [sp-0x98]
    let v19: u64;  // [sp-0x68]
    let v20: u8;  // [bp-0x60]
    let v21: u8;  // [bp-0x50]
    let v22: i192;  // [sp-0x48]
    let v23: u64;  // [bp+0x8]
    let v24: u8;  // [bp+0x10]
    let v25: u64;  // rax
    let v26: u64;  // rax
    let v27: u128;  // xmm0
    let v28: u128;  // xmm0
    let v29: u128;  // xmm1

    v19 = v23;
    if uu_cp::is_forbidden_to_copy_to_same_file(a1, a2, a3, a4, a5, v23) as i8 {
        v13 = 1;
        v14 = a1;
        v15 = a2;
        v16 = 1;
        v2 = 1;
        v3 = a3;
        v4 = a4;
        v5 = 1;
        v25 = format!("{:?} and {:?} are the same file", &v13, &v2);
        a0->field_0 = 4;
        return v25;
    }
    if *((&a5->field_4c as &char + 1) as &i8) != 2 {
        v6 = uu_cp::OverwriteMode::verify(a5->field_3c, a3, a4, a5->field_47);
        v25 = v6;
        if v25 != 13 {
            v28 = *((&v6 as &char + 8) as &i128);
            v29 = *(&v8 as &i128);
            return struct64 {
                field_0: v25
                field_8: v28
                field_24: v29
                field_40: *(&v10 as &i128)
                field_56: *(&v12 as &i64)
            };
        }
    }
    uucore::features::backup_control::get_backup_path(&v20, a5->field_4c);
    if *(&v20 as &i64) != 0x8000000000000000 {
        v17 = *(&v20 as &i128);
        v18 = *(&v21 as &i64);
        if uucore::features::fs::paths_refer_to_same_file(a1, a2, *((&v17 as &char + 8) as &i64), *(&v21 as &i64), 1) as i8 {
            v13 = 1;
            v14 = a3;
            v15 = a4;
            v16 = 1;
            v2 = 1;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v22 = format!("backing up {:?} might destroy source;  {:?} not copied", &v13, &v2);
            *((&a0->field_8 as &char + 8) as &i64) = *((&v22 as &char + 16) as &i64);
            *(&(&a0->field_0)[1] as &i192) = v22;
            a0->field_0 = 4;
            return v25;
        }
        v1 = std::path::Path::is_symlink(a3, a4) as i8;
        v6 = uu_cp::backup_dest(a3, a4, *((&v17 as &char + 8) as &i64), v18, v1);
        v26 = v6;
        v2 = *(&v7 as &i128);
        v4 = v8;
        if v26 != 13 {
            v27 = *(&v9 as &i128);
            return struct64 {
                field_0: v26
                field_8: v2
                field_24: v4
                field_32: v27
                field_48: *(&v11 as &i128)
            };
        }
        v13 = v2;
        v15 = v4;
        if v1 {
            return struct8 {
                field_0: 13
            };
        }
    }
    v6 = uu_cp::delete_dest_if_needed_and_allowed(a1, a2, a3, a4, a5, v0, *(&v24 as &i64));
    v25 = v6;
    if v25 != 13 {
        vvar_421{reg 224} = *((&v6 as &char + 8) as &i128);
        vvar_422{reg 256} = *(&v8 as &i128);
        return struct64 {
            field_0: v25
            field_8: v28
            field_24: v29
            field_40: *(&v10 as &i128)
            field_56: *(&v12 as &i64)
        };
    }
    return struct8 {
        field_0: 13
    };
}
