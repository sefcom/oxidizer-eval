fn uu_cp::copydir::Entry::new(a1: i64, a2: i64, a3: i64, a4: i32) -> Option<struct73> {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0xe8]
    let v1: u32;  // [bp-0xe0]
    let v2: u64;  // [bp-0xd8]
    let v3: &std::path::Path;  // [bp-0xd0]
    let v4: u128;  // [bp-0xc8]
    let v5: u64;  // [bp-0xb8]
    let v6: u64;  // [bp-0xa8]
    let v7: u64;  // [bp-0xa0]
    let v8: u128;  // [bp-0x98]
    let v9: u64;  // [bp-0x88]
    let v10: std::path::PathBuf;  // [bp-0x78]
    let v11: u64;  // [bp-0x70]
    let v12: u32;  // [bp-0x68]
    let v13: u64;  // [bp-0x50]
    let v14: u128;  // [bp-0x48]
    let v15: i8;  // [bp-0x38]
    let v17: u32;  // r9d
    let v18: u8;  // al
    let v19: core::option::Option<&std::path::Path>;  // r14
    let v20: Result<struct40, struct16>;  // r15
    let v21: u64;  // rax
    let v22: struct24;  // rax
    let v23: u64;  // rax
    let v24: u128;  // xmm0
    let v25: u128;  // [bp-0xb0]
    let v26: std::path::PathBuf;  // [bp-0x60]

    std::sys::pal::unix::os::split_paths::bytes_to_path(a2);
    v10 = std::path::Path::join(*((a1 + 8) as &i64), *((a1 + 16) as &i64), &v14, a4);
    uu_cp::copydir::get_local_to_root_parent(v11, v12, (*((a1 + 24) as &i64) == 0x8000000000000000 ? 0 : *((a1 + 32) as &i64)), *((a1 + 40) as &i64), v17);
    if v4 == 0x8000000000000000 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v2 = v5;
    v0 = *(&v4 as &i128);
    if a4 {
        v18 = std::path::Path::is_dir(a2, a3);
        v19 = *((a1 + 48) as &i64);
        v20 = *((a1 + 56) as &i64);
        if (uucore::features::fs::path_ends_with_terminator(v19, v20) as i8 & v18) {
            v21 = std::fs::create_dir_all(v19 as u32, v20 as u32);
            if v21 {
                v3 = v21;
                eprintln!("Failed to create directory: {}", &v3);
            }
        } else {
            v22 = std::path::Path::strip_prefix(v1, v2, *((a1 + 64) as &i64), *((a1 + 72) as &i64));
            if !v22 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            std::sys::pal::unix::os::split_paths::bytes_to_path(v22);
            v2 = v5;
            v0 = *(&v4 as &i128);
        }
    }
    v5 = v2;
    v4 = v0;
    v26 = std::path::Path::join(v19, v20, &v4, a4);
    v23 = std::path::Path::is_file(v19, v20);
    v5 = v12;
    v24 = *(&v10.inner.inner.inner.buf.cap as &i128);
    v4 = v24;
    v7 = *(&v15 as &i64);
    v25 = v14;
    v9 = v13;
    v8 = *(&v26.inner.inner.inner.buf.cap as &i128);
    return Some(struct80 {
        field_0: v24
        field_16: *(&v5 as &i128)
        field_32: v6
        field_40: v7
        field_48: v8
        field_64: v13
        field_72: v23 as u8
    });
}
