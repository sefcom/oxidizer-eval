fn uu_install::chown_optional_user_group(a0: &std::path::Path, a1: i64) -> u64 {
    let v0: void*;  // [bp-0x158]
    let v1: void*;  // [bp-0x150]
    let v2: iNone;  // [bp-0x148], Other Possible Types: struct24
    let v3: u64;  // [bp-0x138]
    let v4: Result<struct24, struct24>;  // [bp-0x120], Other Possible Types: struct16
    let v5: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: u64
    let v6: u128;  // [bp-0xd8]
    let v7: u64;  // [bp-0xc8]
    let v8: iNone;  // [bp-0xc0]
    let v9: u64;  // [bp-0xb0]
    let v10: u32;  // [bp-0xa4]
    let v12: u8;  // bpl
    let v13: u64;  // r12
    let v14: u32;  // rsi
    let v15: u32;  // edi

    v12 = *((a1 + 80) as &i32);
    v13 = *((a1 + 88) as &i32);
    if !*((a1 + 80) as &i32) && !v13 && uucore::features::process::geteuid() {
        return 0;
    }
    v5 = std::fs::metadata(a0);
    match v5 {
        Err(_) => {
            v4 = struct16 {
                field_0: 10
                field_8: v6
            };
            return alloc::boxed::Box<T>::new(&v4) as u64;
        },
        Ok(_) => {
            v4 = uucore::features::perms::wrap_chown(a0, v14, v10 as u64, *((&v5 as &char + 64) as &i32) as u32 as u64, v12, v1 as u32, v13 as u8, v0 as u32);
            match v4 {
                Err(_) => {
                    v2 = std::sys::pal::unix::os::split_paths::bytes_to_path(v15);
                    v9 = *((&v4 as &char + 24) as &i64);
                    v8 = *((&v4 as &char + 8) as &i128);
                    v6 = *(&v2.field_0 as &i128) as u128;
                    v7 = v3;
                    v5 = 4;
                    return alloc::boxed::Box<T>::new(&v5) as u64;
                },
                Ok(_) => {
                    if *((a1 + 97) as &i8) != 1 || !*((&v4 as &char + 24) as &i64) {
                        return 0;
                    }
                    v3 = *((&v4 as &char + 24) as &i64);
                    v2 = *((&v4 as &char + 8) as &i128);
                    println!("chown: {}", &v2);
                    return 0;
                },
            }
        },
    }
}
