fn bat::assets::build_assets::acknowledgements::to_path_and_stem(a0: i64, a1: u64, a2: u64, a3: u64) -> void {
    let v0: u128;  // [bp-0xa8]
    let v1: i8;  // [bp-0xa0]
    let v2: u64;  // [bp-0x98], Other Possible Types: unsigned long
    let v3: u128;  // [bp-0x90]
    let v4: u64;  // [bp-0x88]
    let v5: u64;  // [bp-0x80]
    let v6: u64;  // [bp-0x78]
    let v7: u64;  // [bp-0x70]
    let v8: Result<struct40, struct16>;  // [bp-0x68]
    let v9: std::path::PathBuf;  // [bp-0x60]
    let v10: u64;  // [bp-0x50]
    let v11: struct24;  // [bp-0x48]
    let v12: u128;  // [bp-0x40]
    let v14: std::io::stdio::Stdout;  // r13
    let v15: struct24;  // rbp
    let v16: core::fmt::rt::Argument;  // rax
    let v17: struct24;  // rax
    let v18: Result<struct4, struct8>;  // rax

    v14 = *((a3 + 8) as &i64);
    v15 = *((a3 + 16) as &i64);
    v9 = std::sys::pal::unix::os::split_paths::bytes_to_path(v14, v15);
    v16 = std::path::Path::file_stem(v14, v15);
    if !v16 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    bat::assets::build_assets::acknowledgements::to_path_and_stem::{{closure}}(&v0, v16, a2);
    v17 = *(&v0 as &i64);
    v12 = *(&v1 as &i128);
    v11 = v17;
    v18 = std::path::Path::strip_prefix(v14, v15, a1, a2);
    if let Ok(_) = v18 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    bat::assets::build_assets::acknowledgements::to_path_and_stem::{{closure}}(&v0, v18, a2);
    v8 = v2;
    v6 = *(&v0 as &i128);
    if v6 != 0x8000000000000000 {
        v0 = *(&v9.inner.inner.inner.buf.inner.cap as &i128);
        v2 = v10;
        v3 = *(&v11.field_0 as &i128);
        v5 = *((&v12 as &char + 8) as &i64);
        return struct72 {
            field_0: *(&v9.inner.inner.inner.buf.inner.cap as &i128)
            field_16: v2
            field_24: v3 as i64
            field_32: v4
            field_40: v5
            field_48: v6
            field_56: v7
            field_64: v8
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
