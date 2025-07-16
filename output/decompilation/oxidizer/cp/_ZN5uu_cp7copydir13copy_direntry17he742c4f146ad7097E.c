fn uu_cp::copydir::copy_direntry(a1: i64, a2: i64, a3: i64, a4: i64, a5: i8, a6: i32, a7: i32) -> Option<struct64> {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x1f8]
    let v1: u64;  // [bp-0x1f0]
    let v2: u64;  // [bp-0x1e8]
    let v3: u128;  // [bp-0x1d8]
    let v4: u32;  // [bp-0x1d0]
    let v5: u64;  // [bp-0x1c8]
    let v6: u64;  // [bp-0x1b8]
    let v7: u8;  // [bp-0x1a8]
    let v8: u128;  // [bp-0x1a0]
    let v9: u8;  // [bp-0x198]
    let v10: u8;  // [bp-0x190]
    let v11: u8;  // [bp-0x188]
    let v12: u64;  // [bp-0x178]
    let v13: u128;  // [bp-0x168]
    let v14: u64;  // [bp-0x160]
    let v15: u64;  // [bp-0x158]
    let v16: u8;  // [bp-0x148]
    let v17: i8;  // [bp-0x138]
    let v18: i8;  // [bp-0x128]
    let v19: u128;  // [bp-0x118]
    let v20: u64;  // [bp-0x108]
    let v21: i64;  // [bp-0x100]
    let v22: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xf8]
    let v23: struct16;  // [bp-0xf8], Other Possible Types: u64
    let v24: u128;  // [bp-0xf8]
    let v25: u128;  // [bp-0xe8]
    let v26: u128;  // [bp-0xd8]
    let v28: u128;  // [bp-0xc8]
    let v29: alloc::string::String;  // [bp-0x48]
    let v30: u8;  // al
    let v31: u128;  // xmm2
    let v32: u128;  // xmm1
    let v33: u128;  // xmm0
    let v34: u64;  // rax
    let v35: u128;  // xmm0
    let v36: u128;  // xmm1
    let v37: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // xmm2
    let v38: u32;  // eax
    let v39: i64;  // rdx

    v2 = *((a2 + 16) as &i64);
    v0 = *(a2 as &i128);
    v15 = *((a2 + 40) as &i64);
    v13 = *((a2 + 24) as &i128);
    v5 = *((a2 + 64) as &i64);
    v3 = *((a2 + 48) as &i128);
    v30 = std::path::Path::is_symlink();
    if (!*((a3 + 65) as &i8) & v30) {
        uu_cp::copy_link(v1, v2, v4, v5, a4, v0 as i64);
    }
    if std::path::Path::is_dir(v1, v2) && !uu_cp::copydir::ends_with_slash_dot(&v0) as i8 {
        v22 = std::fs::metadata(v4, v5);
        if let Err(_) = v22 {
            if *((a2 + 72) as &i8) {
                <uu_cp::Error as core::convert::From<&str>>::from("cannot overwrite non-directory with directory", a3);
                return Some(struct64 {
                    field_0: *(&v23 as &i128)
                    field_16: *((&v22 as &char + 16) as &i128)
                    field_32: *((&v22 as &char + 32) as &i128)
                    field_48: *((&v22 as &char + 48) as &i128)
                });
            }
            v23 = uu_cp::copydir::build_dir(*((a3 + 48) as &i32) as i8, *((a3 + 50) as &i8), &v3 as u8, 0);
            if v23.field_0 != 13 {
                return struct72 {
                    field_0: v34
                    field_8: <UNKNOWN>
                    field_24: <UNKNOWN>
                    field_40: <UNKNOWN>
                    field_56: <UNKNOWN>
                };
            }
            if !*((a3 + 72) as &i8) {
                return struct8 {
                    field_0: 13
                };
            }
            uu_cp::context_for(&v16, v14, v15, v4, v5);
            println!("{}", &v16);
            return struct8 {
                field_0: 13
            };
        }
    }
    if std::path::Path::is_dir(v1, v2) {
        return struct8 {
            field_0: 13
        };
    }
    if a5 {
        uu_cp::copy_file(a1, v1, v2, v4, v5, a3, a4, a6, a7, 0, 97);
        if *(&v16 as &i32) != 13 {
            v35 = *(&v16 as &i128);
            v36 = *(&v17 as &i128);
            v37 = *(&v18 as &i128);
            v28 = v19;
            *(&v26 as &core::result::Result<std::fs::Metadata, std::io::error::Error>) = v37;
            v25 = v36;
            v24 = v35;
            if !std::path::Path::is_symlink() {
                memcpy(&v7, &v24, 16);
                memcpy(&v9, &v25, 16);
                memcpy(&v11, &v26, 16);
                v12 = *((&v28 as &char + 8) as &i64);
                if v23 != 13 {
                    *((a0 + 56) as &u64) = v12;
                }
            }
        }
    } else {
        uu_cp::copy_file(a1, v1, v2, v4, v5, a3, a4, a6, a7, 0, 97);
        if v23 != 3 {
            if v23 != 13 {
                return Some(struct64 {
                    field_0: *(&v23 as &i128)
                    field_16: *((&v22 as &char + 16) as &i128)
                    field_32: *((&v22 as &char + 32) as &i128)
                    field_48: *((&v22 as &char + 48) as &i128)
                });
            }
        } else {
            if std::io::error::Error::kind(v26) == 1 {
                v38 = std::io::error::Error::kind(v26);
                v7 = 1;
                v8 = *((&v13 as &char + 8) as &i128);
                v10 = 1;
                v29 = format!("cannot open {} for reading", &v7);
                v6 = uucore::mods::error::UIoError::new(v38, &v29);
                uucore::mods::error::set_exit_code(*((v39 + 96) as &i64)(v6) as u32);
                v20 = uucore::util_name();
                v21 = v39;
                eprintln!("{}: {}", &v20, &v6);
            } else {
                return Some(struct64 {
                    field_0: *(&v23 as &i128)
                    field_16: *((&v22 as &char + 16) as &i128)
                    field_32: *((&v22 as &char + 32) as &i128)
                    field_48: *((&v22 as &char + 48) as &i128)
                });
            }
        }
    }
    return struct8 {
        field_0: 13
    };
}
