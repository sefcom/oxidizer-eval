fn uu_cp::handle_existing_dest(a0: &struct_0, a1: u64, a2: u64, a3: u64, a4: u64, a5: &struct_1) -> u64 {
    let v0: u8;  // [bp-0x148]
    let v1: u8;  // [sp-0x129]
    let v2: u64;  // [sp-0x128]
    let v3: u64;  // [sp-0x120]
    let v4: u64;  // [sp-0x118]
    let v5: u8;  // [sp-0x110]
    let v6: u256;  // [bp-0x108], Other Possible Types: Option<struct8>
    let v7: u8;  // [bp-0x100]
    let v8: u8;  // [bp-0xf8]
    let v9: u64;  // [sp-0xf0]
    let v10: u8;  // [bp-0xe8]
    let v14: u64;  // [sp-0xc8]
    let v15: u64;  // [sp-0xc0]
    let v16: u64;  // [sp-0xb8]
    let v17: u8;  // [sp-0xb0]
    let v18: u128;  // [sp-0xa8]
    let v19: u64;  // [sp-0x98]
    let v20: u64;  // [sp-0x68]
    let v21: u8;  // [bp-0x60]
    let v22: u8;  // [bp-0x50]
    let v23: i192;  // [sp-0x48]
    let v24: u64;  // [bp+0x8]
    let v25: u8;  // [bp+0x10]
    let v26: u64;  // rax
    let v27: Option<struct1>;  // rax
    let v28: u128;  // xmm0
    let v29: u128;  // xmm1
    let v30: u128;  // xmm2
    let v31: u64;  // rax
    let v32: u128;  // xmm0
    let v34: u128;  // xmm0
    let v35: u128;  // xmm1

    v20 = v24;
    if uu_cp::is_forbidden_to_copy_to_same_file(a1, a2, a3, a4, a5, v24) as i8 {
        v14 = 1;
        v15 = a1;
        v16 = a2;
        v17 = 1;
        v2 = 1;
        v3 = a3;
        v4 = a4;
        v5 = 1;
        v26 = format!("{:?} and {:?} are the same file", &v14, &v2);
        a0->field_0 = 4;
        return v26;
    }
    if *((&a5->field_4c as &char + 1) as &i8) != 2 {
        v27 = uu_cp::OverwriteMode::verify(a5->field_3c, a3, a4, a5->field_47);
        if *(&v6 as &i32) != 13 {
            v28 = *(&v6 as &i128);
            v29 = *(&v8 as &i128);
            v30 = *(&v10 as &i128);
            return struct64 {
                field_0: v28
                field_16: v29
                field_32: v30
                field_48: *(&v12 as &i128)
            };
        }
    }
    uucore::features::backup_control::get_backup_path(&v21, a5->field_4c);
    if *(&v21 as &i64) != 0x8000000000000000 {
        v18 = *(&v21 as &i128);
        v19 = *(&v22 as &i64);
        if uucore::features::fs::paths_refer_to_same_file(a1, a2, *((&v18 as &char + 8) as &i64), *(&v22 as &i64), 1) as i8 {
            v14 = 1;
            v15 = a3;
            v16 = a4;
            v17 = 1;
            v2 = 1;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v23 = format!("backing up {:?} might destroy source;  {:?} not copied", &v14, &v2);
            *((&a0->field_8 as &char + 8) as &i64) = *((&v23 as &char + 16) as &i64);
            *(&(&a0->field_0)[1] as &i192) = v23;
            a0->field_0 = 4;
            return v26;
        }
        v1 = std::path::Path::is_symlink(a3, a4) as i8;
        v6 = uu_cp::backup_dest(a3, a4, *((&v18 as &char + 8) as &i64), v19, v1);
        v31 = v6;
        v2 = *(&v7 as &i128);
        v4 = v9;
        if v31 != 13 {
            v32 = *(&v10 as &i128);
            return struct64 {
                field_0: v31
                field_8: v2
                field_24: v4
                field_32: v32
                field_48: *(&v12 as &i128)
            };
        }
        v14 = v2;
        v16 = v4;
        if v1 {
            return struct8 {
                field_0: 13
            };
        }
    }
    v6 = uu_cp::delete_dest_if_needed_and_allowed(a1, a2, a3, a4, a5, v0, *(&v25 as &i64));
    v26 = v6;
    if v26 != 13 {
        v34 = *((&v6 as &char + 8) as &i128);
        v35 = *(&v9 as &i128);
        return struct64 {
            field_0: v26
            field_8: v34
            field_24: v35
            field_40: *(&v11 as &i128)
            field_56: *(&v13 as &i64)
        };
    }
    return struct8 {
        field_0: 13
    };
}
