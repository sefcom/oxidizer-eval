fn uu_cp::copydir::Context::new(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: u64;  // [bp-0x128]
    let v1: u64;  // [bp-0x120]
    let v2: u64;  // [bp-0x118]
    let v3: struct24;  // [bp-0x110]
    let v4: &u8;  // [bp-0x108]
    let v5: u64;  // [bp-0x100]
    let v6: iNone;  // [bp-0xf8]
    let v7: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0xe0]
    let v8: std::path::PathBuf;  // [bp-0xe0]
    let v9: u64;  // [bp-0xe0]
    let v10: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v11: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xe0]
    let v12: u64;  // [bp-0xd8]
    let v14: u64;  // rbp
    let v15: u64;  // rax
    let v16: u64;  // rbp

    v14 = 0x8000000000000000;
    v7 = std::env::current_dir();
    if (((0 ^ v7 as i64) & (0 ^ -(v9))) >> 63) as char {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v12
        };
    }
    v0 = v7 as i64;
    v1 = v12;
    v2 = *((&v7 as &char + 16) as &i64);
    v3 = std::path::Path::join(v12, *((&v7 as &char + 16) as &i64), a1, a2);
    v10 = std::fs::metadata(a3, a4);
    if v10 as i64 == 2 {
        return struct80 {
            field_0: *(&v0 as &i128)
            field_16: v2
            field_24: v3.field_0 as i64
            field_32: *((&v3.field_0 as &char + 8) as &i128)
            field_48: a3
            field_56: a4
            field_64: a1
            field_72: a2
        };
    }
    v11 = core::str::converts::from_utf8(a1, a2);
    core::option::unwrap(v11);
    if !core::slice::<impl [T]>::ends_with(v12, *((&v11 as &char + 16) as &i64), "/.") {
        v15 = std::path::Path::parent(v4, v5);
        v16 = v14;
        if !v15 {
            return struct80 {
                field_0: *(&v0 as &i128)
                field_16: v2
                field_24: v16
                field_32: v6
                field_48: a3
                field_56: a4
                field_64: a1
                field_72: a2
            };
        }
        v8 = std::sys::pal::unix::os::split_paths::bytes_to_path(v15, a2);
        v6 = *(&v8.inner.inner.inner.buf.inner.ptr as &i128);
        v16 = v9;
        return struct80 {
            field_0: *(&v0 as &i128)
            field_16: v2
            field_24: v16
            field_32: v6
            field_48: a3
            field_56: a4
            field_64: a1
            field_72: a2
        };
    }
    return struct80 {
        field_0: *(&v0 as &i128)
        field_16: v2
        field_24: v3.field_0 as i64
        field_32: *((&v3.field_0 as &char + 8) as &i128)
        field_48: a3
        field_56: a4
        field_64: a1
        field_72: a2
    };
}
