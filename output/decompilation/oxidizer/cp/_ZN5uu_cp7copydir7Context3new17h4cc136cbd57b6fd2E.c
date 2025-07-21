fn uu_cp::copydir::Context::new(a1: i64, a2: i64, a3: i64, a4: i64) -> Result<struct80, struct16> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x128]
    let v1: u64;  // [bp-0x120]
    let v2: u64;  // [bp-0x118]
    let v3: std::path::PathBuf;  // [bp-0x110]
    let v4: u64;  // [bp-0x108]
    let v5: u64;  // [bp-0x100]
    let v6: std::sys::os_str::bytes::Buf;  // [bp-0xf8], Other Possible Types: u128
    let v7: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0xe0]
    let v8: u64;  // [bp-0xe0]
    let v9: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v10: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xe0]
    let v11: u64;  // [bp-0xd8]
    let v13: core::option::Option<&std::path::Path>;  // rax

    v7 = std::env::current_dir();
    match v7 {
        Err(_) => {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v11
            };
        },
        Ok(_) => {
            v0 = v7 as i64;
            v1 = v11;
            v2 = *((&v7 as &char + 16) as &i64);
            v3 = std::path::Path::join(v11, *((&v7 as &char + 16) as &i64), a1, a2);
            v9 = std::fs::metadata(a3, a4);
            match v9 {
                Err(_) => {
                    return Ok(struct80 {
                        field_0: *(&v0 as &i128)
                        field_16: v2
                        field_24: v3.inner.inner.inner.buf.cap.__0
                        field_32: *(&v3.inner.inner.inner.buf.ptr as &i128)
                        field_48: a3
                        field_56: a4
                        field_64: a1
                        field_72: a2
                    });
                },
                Ok(_) => {
                    v10 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
                    if v10 as i64 {
                        core::option::unwrap_failed(); /* do not return */
                    } else if core::slice::<impl [T]>::ends_with(v11, *((&v10 as &char + 16) as &i64), "/.") as u8 {
                        return Ok(struct80 {
                            field_0: *(&v0 as &i128)
                            field_16: v2
                            field_24: v3.inner.inner.inner.buf.cap.__0
                            field_32: *(&v3.inner.inner.inner.buf.ptr as &i128)
                            field_48: a3
                            field_56: a4
                            field_64: a1
                            field_72: a2
                        });
                    } else {
                        v13 = std::path::Path::parent(v4, v5) as u64;
                        match v13 {
                            None => {
                                return Ok(struct80 {
                                    field_0: *(&v0 as &i128)
                                    field_16: v2
                                    field_24: 0x8000000000000000
                                    field_32: v6
                                    field_48: a3
                                    field_56: a4
                                    field_64: a1
                                    field_72: a2
                                });
                            },
                            Some(_) => {
                                std::sys::pal::unix::os::split_paths::bytes_to_path(v13);
                                v6 = *((&v10 as &char + 8) as &i128);
                                return Ok(struct80 {
                                    field_0: *(&v0 as &i128)
                                    field_16: v2
                                    field_24: v8
                                    field_32: v6
                                    field_48: a3
                                    field_56: a4
                                    field_64: a1
                                    field_72: a2
                                });
                            },
                        }
                    }
                },
            }
        },
    }
}
