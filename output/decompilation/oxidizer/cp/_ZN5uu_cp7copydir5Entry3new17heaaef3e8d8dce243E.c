fn uu_cp::copydir::Entry::new(a1: i64, a2: i64, a3: i64, a4: i32) -> Option<struct73> {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0xe8]
    let v1: u32;  // [bp-0xe0]
    let v2: u64;  // [bp-0xd8]
    let v3: u64;  // [bp-0xd0]
    let v4: u128;  // [bp-0xc8]
    let v5: u64;  // [bp-0xb8]
    let v6: u64;  // [bp-0xb0]
    let v7: u64;  // [bp-0xa8]
    let v8: u64;  // [bp-0xa0]
    let v9: u128;  // [bp-0x98]
    let v10: u64;  // [bp-0x88]
    let v11: std::path::PathBuf;  // [bp-0x78]
    let v12: u64;  // [bp-0x70]
    let v13: u32;  // [bp-0x68]
    let v14: u64;  // [bp-0x50]
    let v15: u8;  // [bp-0x48]
    let v16: i8;  // [bp-0x38]
    let v18: u32;  // r9d
    let v19: u8;  // al
    let v20: u64;  // r14
    let v21: Result<struct40, struct16>;  // r15
    let v22: u64;  // rax
    let v23: u64;  // rax
    let v24: u64;  // rax
    let v25: u128;  // xmm0
    let v26: std::path::PathBuf;  // [bp-0x60]

    std::sys::pal::unix::os::split_paths::bytes_to_path(a2);
    v11 = std::path::Path::join(*((a1 + 8) as &i64), *((a1 + 16) as &i64), &v15, a4);
    uu_cp::copydir::get_local_to_root_parent(v12, v13, (*((a1 + 24) as &i64) == 0x8000000000000000 ? 0 : *((a1 + 32) as &i64)), *((a1 + 40) as &i64), v18);
    if v4 == 0x8000000000000000 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v2 = v5;
    v0 = *(&v4 as &i128);
    if a4 {
        v19 = std::path::Path::is_dir(a2, a3);
        v20 = *((a1 + 48) as &i64);
        v21 = *((a1 + 56) as &i64);
        if (uucore::features::fs::path_ends_with_terminator(v20, v21) as i8 & v19) {
            v22 = std::fs::create_dir_all(v20, v21 as u32);
            if v22 {
                v3 = v22;
                eprintln!("Failed to create directory: {}", &v3);
            }
        } else {
            v23 = std::path::Path::strip_prefix(v1, v2, *((a1 + 64) as &i64), *((a1 + 72) as &i64));
            if !v23 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            std::sys::pal::unix::os::split_paths::bytes_to_path(v23);
            v2 = v5;
            memcpy(&v0, &v4, 16);
        }
    }
    v5 = v2;
    memcpy(&v4, &v0, 16);
    v26 = std::path::Path::join(v20, v21, &v4, a4);
    v24 = std::path::Path::is_file(v20, v21);
    v5 = v13;
    v25 = *(&v11.inner.inner.inner.buf.cap as &i128);
    v4 = v25;
    v8 = *(&v16 as &i64);
    memcpy(&v6, &v15, 16);
    v10 = v14;
    memcpy(&v9, &v26, 16);
    return Some(struct74 {
        field_0: v25
        field_16: *(&v5 as &i128)
        field_32: v7
        field_40: v8
        field_48: v9
        field_64: v14
        field_72: v24 as u8
    });
}
