fn uu_cp::copydir::Context::new(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i64;  // [sp-0x128]
    let v1: i64;  // [sp-0x120]
    let v2: i64;  // [sp-0x118]
    let v3: struct24;  // [sp-0x110], Other Possible Types: i192
    let v4: i128;  // [sp-0xf8]
    let v5: i192;  // [sp-0xe0], Other Possible Types: Result<struct24, struct16>, struct24
    let v7: i64;  // rbp
    let v8: i64;  // rax
    let v10: i64;  // rax
    let v11: i64;  // rdx
    let v12: i64;  // rcx
    let v13: i64;  // rax

    v7 = 0x8000000000000000;
    v5 = std::env::current_dir();
    v8 = v5;
    match v5 {
        Err(_) => {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v1
            };
        },
        Ok(_) => {
            v0 = v8;
            v1 = *((&v5 as &char + 8) as &i64);
            v2 = *((&v5 as &char + 16) as &i64);
            v3 = std::path::Path::join(v1, v2, a1, a2);
            v5 = std::fs::metadata(a3, a4);
            if v5 != 2 {
                v5 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
                if v5 {
                    core::option::unwrap_failed(); /* do not return */
                } else if !core::slice::<impl [T]>::ends_with(*((&v5 as &char + 8) as &i64), *((&v5 as &char + 16) as &i64), "/.") as i8 {
                    v13 = std::path::Path::parent(*((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), v11, v12);
                    if v13 {
                        v5 = std::sys::pal::unix::os::split_paths::bytes_to_path(v13, v11);
                        v7 = v5;
                        v4 = *((&v5 as &char + 8) as &i128);
                    }
                    return struct80 {
                        field_0: v0
                        field_16: v2
                        field_24: v7
                        field_32: v4
                        field_48: a3
                        field_56: a4
                        field_64: a1
                        field_72: a2
                    };
                }
            }
            v10 = v3;
            return struct80 {
                field_0: v0
                field_16: v2
                field_24: v10
                field_32: *((&v3 as &char + 8) as &i128)
                field_48: a3
                field_56: a4
                field_64: a1
                field_72: a2
            };
        },
    }
}
