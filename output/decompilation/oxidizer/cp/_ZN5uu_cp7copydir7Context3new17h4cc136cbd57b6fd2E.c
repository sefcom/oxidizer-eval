fn uu_cp::copydir::Context::new(a0: &Result<struct80, struct8>, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x128]
    let v1: i64;  // [sp-0x120]
    let v2: i64;  // [sp-0x118]
    let v3: struct24;  // [sp-0x110]
    let v4: iNone;  // [sp-0xf8]
    let v5: Result<struct24, struct8>;  // [sp-0xe0], Other Possible Types: struct24
    let v7: i64;  // rax
    let v8: i64;  // rsi

    v5 = std::env::current_dir();
    v7 = v5 as i64;
    v8 = *((&v5 as &char + 8) as &i64);
    match v5 {
        Err(_) => {
            *((a0 + 8) as &unsigned long) = v1;
            *(a0 as &i64) = 0x8000000000000000;
        },
        Ok(_) => {
            v0 = v7;
            v1 = v8;
            v2 = *((&v5 as &char + 16) as &i64);
            v3 = std::path::Path::join(v1, v2, a1, a2);
            v5 = std::fs::metadata(a3, a4);
            match v5 {
                Err(_) => {
                    return Ok(struct80 {
                        field_0: *(&v0 as &i128)
                        field_16: v2
                        field_24: v9
                        field_32: *((&v3.field_0 as &char + 8) as &i128)
                        field_48: a3
                        field_56: a4
                        field_64: a1
                        field_72: a2
                    });
                },
                Ok(_) => {
                    v5 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
                    if v5 as i64 {
                        core::option::unwrap_failed("src/uu/cp/src/copydir.rs"); /* do not return */
                    } else if !core::slice::<impl [T]>::ends_with(*((&v5 as &char + 8) as &i64), *((&v5 as &char + 16) as &i64), "/.") as i8 {
                        v5 = std::sys::pal::unix::os::split_paths::bytes_to_path(std::path::Path::parent(*((&v3.field_0 as &char + 8) as &i64), v3.field_16), a2);
                        v4 = *((&v5.field_0 as &char + 8) as &i128);
                    }
                },
            }
        },
    }
}
