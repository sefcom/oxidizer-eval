fn uu_cp::copydir::Entry::new(a0: i64, a1: i64, a2: void*, a3: u8) -> int {
    let v0: u64;  // [bp-0xf0]
    let v1: u128;  // [bp-0xe8]
    let v2: u64;  // [bp-0xe0]
    let v3: u64;  // [bp-0xd8]
    let v4: std::path::PathBuf;  // [bp-0xc8], Other Possible Types: struct8, u128
    let v5: u64;  // [bp-0xb8]
    let v6: u64;  // [bp-0xa8]
    let v7: u64;  // [bp-0xa0]
    let v8: iNone;  // [bp-0x98]
    let v9: u64;  // [bp-0x88]
    let v10: struct24;  // [bp-0x80]
    let v11: u64;  // [bp-0x78]
    let v12: u64;  // [bp-0x70]
    let v13: struct24;  // [bp-0x68]
    let v14: u64;  // [bp-0x58]
    let v15: u64;  // [bp-0x50]
    let v16: std::path::PathBuf;  // [bp-0x48]
    let v18: u64;  // rax
    let v19: void*;  // rcx
    let v20: u64;  // rdx
    let v21: u8;  // al
    let v22: core::fmt::Arguments;  // r15
    let v23: u64;  // rax
    let v24: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // rax
    let v25: u128;  // xmm0
    let v27: u128;  // [bp-0xb0]

    v18 = <&T as core::convert::AsRef<U>>::as_ref(a2);
    v16 = std::sys::pal::unix::os::split_paths::bytes_to_path(v18, a2);
    v10 = std::path::Path::join(*((a1 + 8) as &i64), *((a1 + 16) as &i64), &v16);
    v4 = uu_cp::copydir::get_local_to_root_parent(v11, v12, v19, *((a1 + 40) as &i64));
    if v4 == 0x8000000000000000 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v3 = v5;
    v1 = *(&v4 as &i128);
    if a3 {
        v21 = std::path::Path::is_dir(v18, v20);
        v22 = *((a1 + 56) as &i64);
        if !v22 {
LABEL_498ec6:
            v23 = std::path::Path::strip_prefix(v2, v3, *((a1 + 64) as &i64), *((a1 + 72) as &i64));
            if !v23 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v4 = std::sys::pal::unix::os::split_paths::bytes_to_path(v23, a2);
            v3 = v5;
            v1 = *(&v4.inner.inner.inner.buf.inner.cap as &i128);
        } else if *((a1 + 48) as &i64) + v22 - 1 == "/" {
            if v21 {
                goto LABEL_498e33;
            }
            goto LABEL_498ec6;
        } else {
            if (v21 ^ 1) || *((*((a1 + 48) as &i64) + v22 - 1) as &i8) != 92 {
                goto LABEL_498ec6;
            }
LABEL_498e33:
            v15 = std::fs::create_dir_all(*((a1 + 48) as &i64), v22);
            if v15 {
                v0 = v15;
                eprintln!("Failed to create directory: {}", &v0);
            }
        }
    }
    std::path::Path::join(&v13, *((a1 + 48) as &i64), v22, &v1);
    v24 = std::path::Path::is_file(*((a1 + 48) as &i64), v22);
    v5 = v12;
    v25 = v10.field_0;
    v4 = v25;
    v7 = v16.inner.inner.inner.len;
    v27 = *(&v16.inner.inner.inner.buf.inner.cap as &i128);
    v9 = v14;
    v8 = v13.field_0;
    return struct80 {
        field_0: v25
        field_16: *(&v5 as &i128)
        field_32: v6
        field_40: v7
        field_48: v8
        field_64: v14
        field_72: v24 as u8
    };
}
