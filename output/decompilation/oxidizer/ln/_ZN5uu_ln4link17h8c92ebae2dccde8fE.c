fn uu_ln::link(a0: u32, a1: u32, a2: u32, a3: u32, a4: &u64) -> u64 {
    let v0: i8;  // [sp-0x18d]
    let v1: i32;  // [sp-0x18c]
    let v2: i64;  // [sp-0x188], Other Possible Types: struct24
    let v3: i64;  // [bp-0x180]
    let v4: i64;  // [sp-0x178]
    let v5: i8;  // [sp-0x170]
    let v6: i64;  // [sp-0x168], Other Possible Types: struct24
    let v7: i64;  // [sp-0x160]
    let v8: i64;  // [sp-0x158]
    let v9: i8;  // [sp-0x150]
    let v10: i64;  // [sp-0x140]
    let v11: i8;  // [bp-0x130]
    let v12: i64;  // [sp-0x128]
    let v13: i64;  // [sp-0x120]
    let v14: i64;  // [sp-0x118]
    let v15: i64;  // [sp-0x110]
    let v16: i64;  // [sp-0x108], Other Possible Types: struct16, Result<struct24, struct8>, Arguments
    let v17: i64;  // [sp-0x100]
    let v18: i64;  // [sp-0xf8]
    let v20: struct24;  // rax
    let v21: i64;  // 4149
    let v22: i64;  // rax
    let v23: i64;  // rbp

    v20 = 0x8000000000000000;
    v10 = 0x8000000000000000;
    v21 = *((a4 + 49) as &i8);
    v15 = a0;
    if !v21 {
        v13 = a0;
        v14 = a1;
        v12 = 0x8000000000000000;
    } else {
        v20 = uu_ln::relative_path(a0, a1, a2, a3);
    }
    v1 = (v20 & -0x100 | 1) as u32;
    if std::path::Path::is_symlink(a2, a3) as i8 {
        goto *((4319464 + *((vvar_4 + 55) as &i8) * 4) as &i32) + 4319464;
    } else {
        v16 = std::fs::metadata(a2, a3);
        if v16 != 2 {
            goto *((4319464 + *((vvar_4 + 55) as &i8) * 4) as &i32) + 4319464;
        } else {
            v0 = *((a4 + 48) as &i8);
            if !v0 {
                if !*((a4 + 50) as &i8) || !std::path::Path::is_symlink(v13, v14) as i8 {
                    v6 = std::sys::pal::unix::os::split_paths::bytes_to_path(v13, v14);
                } else {
                    v16 = std::fs::canonicalize(&v12);
                    v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v16, &v12);
                    if v6 == 0x8000000000000000 {
                        return v23;
                    }
                }
                v18 = v8;
                v16 = v6;
                v17 = v7;
                v16 = &v12;
                v17 = a2;
                v18 = a3;
                if !<core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::hard_link(&v16, a2, a3), &v16) {
LABEL_4baa44:
                    if !*((a4 + 53) as &i8) {
LABEL_4bab5c:
                    } else {
                        v6 = 1;
                        v7 = a2;
                        v8 = a3;
                        v9 = 1;
                        v2 = 1;
                        v3 = v13;
                        v5 = 1;
                        v1 = &g_52d001;
                        print!("{} -> {}", &v6, &v2);
                        if v10 != 0x8000000000000000 {
                            v8 = v11;
                            v6 = v10;
                            v2 = 1;
                            v3 = v7;
                            v4 = v8;
                            v5 = 1;
                            println!(" (backup: {})", &v2);
                        } else {
                            v16 = Arguments {
                                pieces: ["\n"]
                                args: []
                                fmt: 0
                            };
                            std::io::stdio::_print(&v16);
                            goto LABEL_4bab5c;
                        }
                    }
                    return 0;
                }
            } else {
                v22 = std::os::unix::fs::symlink(&v12, a2, a3);
                if !v22 {
                    goto LABEL_4baa44;
                }
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
            }
            return v23;
        }
    }
}
