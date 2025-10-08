fn uu_cp::handle_existing_dest(a0: i64, a1: u64, a2: u64, a3: u64, a4: void*, a5: i64, a6: u8, a7: u64) -> int {
    let v0: struct40;  // [bp-0x138], Other Possible Types: Option<struct8>
    let v1: core::fmt::rt::Argument;  // [bp-0x138]
    let v2: struct24;  // [bp-0x130]
    let v3: i8;  // [bp-0x118]
    let v4: i8;  // [bp-0x110]
    let v5: u64;  // [bp-0x108]
    let v6: u64;  // [bp-0x100]
    let v7: u64;  // [bp-0xf8]
    let v8: void*;  // [bp-0xf0], Other Possible Types: struct4, u64
    let v9: u8;  // [bp-0xe8]
    let v10: u64;  // [bp-0xe0]
    let v11: core::fmt::Arguments;  // [bp-0xd8], Other Possible Types: u64
    let v12: void*;  // [bp-0xd0], Other Possible Types: core::fmt::rt::Argument
    let v13: u8;  // [bp-0xc8]
    let v14: void*;  // [bp-0xc0]
    let v15: u64;  // [bp-0x98]
    let v16: u64;  // [bp-0x90]
    let v17: u64;  // [bp-0x88]
    let v18: u64;  // [bp-0x78]
    let v19: core::fmt::Arguments;  // [bp-0x70]
    let v20: struct24;  // [bp-0x68]
    let v22: u32;  // eax
    let v23: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // r12
    let v24: u64;  // rbp
    let v25: void*;  // r14
    let v26: u64;  // r15
    let v28: i64;  // r14
    let v29: u64;  // rax
    let v30: Result<struct4, struct8>;  // eax
    let v31: iNone;  // xmm0
    let v32: iNone;  // xmm1

    v19 = a6;
    if uu_cp::is_forbidden_to_copy_to_same_file(a1, a2, a3, a4, a5, a6) {
        v10 = 1;
        v11 = a1;
        v12 = a2;
        v13 = 1;
        v6 = 1;
        v7 = a3;
        v8 = a4;
        v9 = 1;
        format!("{} and {} are the same file", &v10, &v6);
        *(v14 as &i64) = 9223372036854775811;
        return;
    }
    v22 = *((a5 + 102) as &i8);
    if v22 != 1 {
        v23 = a2;
        v24 = a1;
        v25 = a4;
        v26 = a3;
        if v22 != 2 {
            v0 = uu_cp::OverwriteMode::verify(*((a5 + 84) as &i32), v26, v25, *((a5 + 95) as &i8));
            if let Some(_) = v0 {
                v31 = v0.field_8;
                v32 = *(&v0.field_24 as &i128);
                *(&v14[40] as &i128) = *(&v4 as &i128);
                v14[24] = v32;
                v14[8] = v31;
                *(v14 as &core::fmt::rt::Argument) = v1;
                return;
            }
        }
        uucore::features::backup_control::get_backup_path(&v15, *((a5 + 101) as &i8));
        if v15 != 0x8000000000000000 {
            v18 = v17;
            if uucore::features::fs::paths_refer_to_same_file(v24, v23 as u32, v16, v17, 1) {
                v10 = 1;
                v11 = v26;
                v12 = v25;
                v13 = 1;
                v6 = 1;
                v7 = v24;
                v8 = v23;
                v9 = 1;
                format!("backing up {} might destroy source;  {} not copied", &v10, &v6);
                *(&v14[24] as &i64) = *((v28 + 16) as &i64);
                *(&v14[8] as &i128) = *(v28 as &i128);
                *(v14 as &u64) = v29;
                return;
            }
            v30 = std::path::Path::is_symlink(v26, v25);
            v0 = uu_cp::backup_dest(v26, v25 as u32, v16, v18, v30);
            v20 = v2;
            if v0 as i64 != 9223372036854775820 {
                *(&v14[48] as &u64) = v5;
                *(&v14[32] as &i128) = *(&v3 as &i128);
                *(&v14[24] as &i64) = *((v28 + 16) as &i64);
                *(&v14[8] as &i128) = *(v28 as &i128);
                *(v14 as &u64) = v29;
                return;
            } else if v30 as u8 {
                *(v14 as &i64) = 9223372036854775820;
                return;
            }
        }
        v0 = uu_cp::delete_dest_if_needed_and_allowed(v24, v23, v26, v25, a5, v19 as u8, a7);
        if v1 != 9223372036854775820 {
            v31 = v0.field_8;
            v32 = *(&v0.field_24 as &i128);
            *(&v14[40] as &i128) = *(&v4 as &i128);
            v14[24] = v32;
            v14[8] = v31;
            *(v14 as &core::fmt::rt::Argument) = v1;
            return;
        }
        *(v14 as &i64) = 9223372036854775820;
        return;
    } else {
        if *((a5 + 95) as &i8) {
            v6 = 1;
            v7 = a3;
            v8 = a4;
            v9 = 1;
            println!("skipped {}", &v6);
        }
        *(v14 as &i64) = 9223372036854775815;
        *(&v14[8] as &i8) = 0;
        return;
    }
}
