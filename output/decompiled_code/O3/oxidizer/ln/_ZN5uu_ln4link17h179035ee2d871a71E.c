fn uu_ln::link() -> u32 {
    let v0: i32;  // [sp-0x18c]
    let v1: i64;  // [sp-0x188], Other Possible Types: struct24
    let v2: i128;  // [bp-0x180]
    let v3: i8;  // [sp-0x170]
    let v4: i128;  // [sp-0x168], Other Possible Types: struct24
    let v5: i64;  // [sp-0x160]
    let v6: i64;  // [sp-0x158]
    let v7: i8;  // [sp-0x150]
    let v8: i64;  // [sp-0x140]
    let v9: i8;  // [bp-0x130]
    let v10: i64;  // [sp-0x128]
    let v11: i64;  // [sp-0x120]
    let v12: i64;  // [sp-0x118]
    let v13: i64;  // [sp-0x110]
    let v14: i64;  // [sp-0x108], Other Possible Types: Result<struct24, struct16>, Arguments
    let v15: i64;  // [sp-0x100]
    let v16: i64;  // [sp-0xf8]
    let v18: struct24;  // rax
    let v19: i64;  // r8
    let v20: i64;  // 4149
    let v21: i64;  // rdi
    let v22: i64;  // rsi
    let v23: i64;  // rdx
    let v24: i64;  // rcx
    let v25: i64;  // r9
    let v26: i64;  // rsi
    let v27: i64;  // rax

    v18 = 0x8000000000000000;
    v8 = 0x8000000000000000;
    v20 = *((v19 + 49) as &i8);
    v13 = v21;
    if !v20 {
        v11 = v21;
        v12 = v26;
        v10 = 0x8000000000000000;
    } else {
        v18 = uu_ln::relative_path(v21, v22, v23, v24, v25);
    }
    v0 = (v18 | -0x100 | 1) as u32;
    if std::path::Path::is_symlink(v23, v24) as i8 {
        goto *((4319496 + *((vvar_116{reg 80} + 55) as &i8) * 4) as &i32) + 4319496;
    } else {
        v14 = std::fs::metadata(v23, v24);
        if v14 != 2 {
            goto *((4319496 + *((vvar_116{reg 80} + 55) as &i8) * 4) as &i32) + 4319496;
        } else {
            if !*((v19 + 48) as &i8) {
                if !*((v19 + 50) as &i8) || !std::path::Path::is_symlink(v11, v12) as i8 {
                    v4 = std::sys::pal::unix::os::split_paths::bytes_to_path(v11, v12);
                } else {
                    v14 = std::fs::canonicalize(&v10, v23);
                    v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v14, &v10);
                    if v4 == 0x8000000000000000 {
                        return;
                    }
                    v4 = v1;
                    v5 = v1.8;
                    v6 = v1.field_16;
                }
                v16 = v6;
                v14 = v4;
                v15 = v5;
                v14 = &v10;
                v15 = v23;
                v16 = v24;
                if !<core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::hard_link(&v14, v23, v24), &v14) {
LABEL_4ba771:
                    if !*((v19 + 53) as &i8) {
LABEL_4ba889:
                    } else {
                        v4 = 1;
                        v5 = v23;
                        v6 = v24;
                        v7 = 1;
                        v1 = 1;
                        v2 = v11;
                        v3 = 1;
                        v0 = -79;
                        print!("{:?} -> {:?}", &v4, &v1);
                        if v8 != 0x8000000000000000 {
                            v6 = v9;
                            v4 = v8;
                            v1 = 1;
                            v1.8 = vvar_464{stack -352};
                            v1.field_16 = vvar_485{stack -344};
                            v3 = 1;
                            println!(" (backup: {:?})", &v1);
                            v0 = 0;
                        } else {
                            v14 = Arguments {
                                pieces: ["\n"]
                                args: []
                                fmt: 0
                            };
                            std::io::stdio::_print(&v14);
                            goto LABEL_4ba889;
                        }
                    }
                    return;
                }
            } else {
                v27 = std::os::unix::fs::symlink(&v10, v23, v24);
                if !v27 {
                    goto LABEL_4ba771;
                }
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v27);
            }
            return;
        }
    }
}
