fn uu_cp::copydir::Context::new(a0: &Result<struct80, struct8>, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x128]
    let v1: i64;  // [sp-0x120]
    let v2: i64;  // [sp-0x118]
    let v3: struct24;  // [sp-0x110], Other Possible Types: i192
    let v4: i128;  // [sp-0xf8]
    let v5: i136;  // [sp-0xe0], Other Possible Types: Result<struct24, struct8>, struct24, struct16
    let v7: i64;  // rbp
    let v8: i64;  // rax
    let v9: i64;  // rsi
    let v11: i64;  // rax
    let v12: i64;  // rdx

    v7 = 0x8000000000000000;
    v5 = std::env::current_dir();
    v8 = v5;
    v9 = *((&v5 as &char + 8) as &i64);
    match v5 {
        Err(_) => {
            *((a0 + 8) as &i64) = v1;
            *(a0 as &i64) = 0x8000000000000000;
        },
        Ok(_) => {
            v0 = v8;
            v1 = v9;
            v2 = *((&v5 as &char + 16) as &i64);
            v3 = std::path::Path::join(v1, v2, a1, a2);
            v5 = std::fs::metadata(a3, a4);
            return Ok(struct80 {
                field_0: v0
                field_16: v2
                field_24: v10
                field_32: *((&v3 as &char + 8) as &i128)
                field_48: a3
                field_56: a4
                field_64: a1
                field_72: a2
            });
            v5 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
            if v5 {
                core::option::unwrap_failed("src/uu/cp/src/copydir.rs"); /* do not return */
            }
            v11 = std::path::Path::parent(*((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64));
            if !v11 {
                *((a0 + 16) as &i64) = v2;
                *(a0 as &i64) = v0;
                *((a0 + 24) as &i64) = v7;
                *((a0 + 32) as &i128) = v4;
                *((a0 + 48) as &i64) = a3;
                *((a0 + 56) as &i64) = a4;
                *((a0 + 64) as &i64) = a1;
                *((a0 + 72) as &i64) = a2;
            }
            v5 = std::sys::pal::unix::os::split_paths::bytes_to_path(v11, v12);
            v7 = v5;
            v4 = *((&v5 as &char + 8) as &i128);
        },
    }
}
