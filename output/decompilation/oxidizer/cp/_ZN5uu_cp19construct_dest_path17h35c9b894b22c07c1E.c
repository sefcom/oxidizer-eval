fn uu_cp::construct_dest_path(a1: i64, a2: i64, a3: &std::path::Path, a4: i8, a5: i8, a6: i8) -> : struct56 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0xb0]
    let v1: u64;  // [bp-0xa8]
    let v2: u64;  // [bp-0xa0]
    let v3: u64;  // [bp-0x98]
    let v4: u8;  // [bp-0x90]
    let v5: u128;  // [bp-0x88]
    let v6: struct24;  // [bp-0x88]
    let v7: u64;  // [bp-0x78]
    let v8: struct20;  // [bp-0x70]
    let v9: u64;  // [bp-0x70]
    let v10: u64;  // [bp-0x58]
    let v11: i8;  // [bp-0x50]
    let v12: i8;  // [bp-0x40]
    let v13: u8;  // [bp-0x36]
    let v14: u64;  // rcx
    let v15: u64;  // r8
    let v18: std::path::PathBuf;  // rsi
    let v19: u8;  // dl
    let v21: u64;  // rcx
    let v22: u64;  // rax
    let v23: u64;  // rax
    let v24: u64;  // rax
    let v25: u64;  // rax

    if (a5 & 1) && std::path::Path::is_dir(a3) {
        v1 = 1;
        v2 = v14;
        v3 = v15;
        v4 = 1;
        format!("cannot overwrite directory {} with non-directory", &v1);
    }
    if (a6 & 1) {
        if !std::path::Path::is_dir(a3) {
            <uu_cp::Error as core::convert::From<&str>>::from(a0, "with --parents, the destination must be a directory");
            return;
        }
        if a4 {
            goto LABEL_4a0d02;
        }
        v8 = std::path::Path::components(a1, v0);
        if v13 {
            v18 = &g_424bf6;
            goto LABEL_4a0d5d;
        } else {
            v19 = v8.field_16 < 5;
            v18 = (v8.field_16 < 5 ? &g_424bf6 : 1);
            goto LABEL_4a0d5d;
        }
    } else {
        if a4 {
LABEL_4a0d02:
            v6 = std::sys::pal::unix::os::split_paths::bytes_to_path(v21);
        } else {
            v22 = std::path::Path::parent(a1, a2);
            if !v22 {
                v18 = a1;
            } else {
                v18 = v22;
            }
LABEL_4a0d5d:
            uu_cp::localize_to_target(&v9, v18, v19, a1, a2, a3);
            v23 = v9;
            v1 = *(&v8.field_8 as &i128);
            v3 = v10;
            if v9 != 9223372036854775820 {
                return struct56 {
                    field_0: v25
                    field_8: v1
                    field_24: v3
                    field_32: *(&v11 as &i128)
                    field_48: *(&v12 as &i64)
                };
            }
            v5 = v1;
            v7 = v3;
        }
        *((a0 + 24) as &u64) = v7;
        *((a0 + 8) as &i128) = *(&v6.field_0 as &i128);
        v24 = 9223372036854775820;
    }
}
