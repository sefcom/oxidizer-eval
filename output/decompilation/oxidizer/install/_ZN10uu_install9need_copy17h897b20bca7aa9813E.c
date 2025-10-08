fn uu_install::need_copy(a1: &[u8], a2: &std::path::Path, a3: i64) -> : struct9 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x108]
    let v1: u32;  // [bp-0x104]
    let v2: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xf8]
    let v3: u64;  // [bp-0xe8]
    let v4: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v5: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xe0]
    let v6: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v7: u64;  // [bp-0xd8]
    let v8: u32;  // [bp-0xa8]
    let v9: u32;  // [bp-0xa4]
    let v11: u64;  // rsi
    let v12: u64;  // rdx
    let v13: u32;  // eax
    let v14: u64;  // r14
    let v15: u64;  // rcx

    v4 = std::fs::metadata(v11, v12);
    if let Err(_) = v4 {
        return struct16 {
            field_0: 0
            field_8: 1
        };
    }
    v1 = v8;
    v3 = *((&v4 as &char + 80) as &i64);
    v6 = std::fs::metadata(a2);
    if let Ok(_) = v6 {
        v0 = *((&v6 as &char + 64) as &i32);
        v2 = *((&v6 as &char + 80) as &i64);
        if *((a3 + 72) as &i32) == 1 {
            v13 = *((a3 + 76) as &i32);
            if !((*((a3 + 76) as &i32) | v1 | v8) & 0xe00) {
                goto LABEL_469a61;
            }
        } else {
            v13 = 493;
            if !((v1 as u16 | v8 as u16) & 0xe00) {
LABEL_469a61:
                if v13 == (v8 & 4095) && !(v8 & 0xf000 ^ 0x8000) && !(v1 & 0xf000 ^ 0x8000) && v3 == v2 && (*((a3 + 80) as &i32) != 1 || *((a3 + 84) as &i32) == v9) {
                    if (*((a3 + 88) as &i8) & 1) {
                        if *((a3 + 92) as &i32) == v0 {
                            goto LABEL_469af3;
                        }
                    } else {
                        if v9 == uucore::features::process::geteuid() && v0 == uucore::features::process::getegid() {
LABEL_469af3:
                            v4 = core::str::converts::from_utf8(a1);
                            match v4 {
                                Err(_) => {
                                    core::option::unwrap_failed(); /* do not return */
                                },
                                Ok(_) => {
                                    v5 = core::str::converts::from_utf8(v15, v14);
                                    core::option::unwrap(v5);
                                    if file_diff::diff(v7, *((&v5 as &char + 16) as &i64), v7, *((&v5 as &char + 16) as &i64)) as u8 {
                                        *((a0 + 8) as &i8) = 0;
                                    }
                                },
                            }
                        }
                    }
                }
            }
        }
    }
    return struct16 {
        field_0: 0
        field_8: 1
    };
}
