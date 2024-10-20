fn uu_ln::link() -> u32 {
    let v0: i64;  // [sp-0x190]
    let v1: i8;  // [bp-0x180]
    let v2: i64;  // [bp-0x178], Other Possible Types: struct24
    let v3: i64;  // [sp-0x170]
    let v4: i64;  // [sp-0x168]
    let v5: i8;  // [sp-0x160]
    let v6: i64;  // [sp-0x150], Other Possible Types: Argument
    let v7: i64;  // [sp-0x148]
    let v8: i64;  // [sp-0x140]
    let v9: i8;  // [sp-0x138]
    let v10: i64;  // [sp-0x130], Other Possible Types: struct24
    let v11: i64;  // [sp-0x128]
    let v12: i64;  // [sp-0x120]
    let v13: i1408;  // [bp-0x118], Other Possible Types: Arguments, Enum, struct24
    let v14: i128;  // [sp-0x100]
    let v15: i64;  // [sp-0x60], Other Possible Types: Argument
    let v16: Argument;  // [bp-0x58]
    let v18: i64;  // [sp-0x48]
    let v19: i8;  // [bp-0x40]
    let v21: i64;  // r8
    let v22: i64;  // rdi
    let v23: i64;  // rsi
    let v24: i64;  // rdx
    let v25: i64;  // rcx
    let v28: i64;  // rdi
    let v29: i64;  // rsi
    let v30: i64;  // rbp
    let v31: i64;  // rbx
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v34: i128;  // xmm0
    let v35: i64;  // r13
    let v36: i64;  // rsi
    let v37: i8;  // bl

    if !*((v21 + 49) as &i8) {
        v11 = v22;
        v12 = v23;
        goto LABEL_4892d4;
    }
    uucore::features::fs::canonicalize();
    if v15 == 0x8000000000000000 {
        goto LABEL_4892c0;
    } else {
        if !std::path::Path::parent(v24, v25, v24, v25) {
            core::option::unwrap_failed(); /* do not return */
        }
        uucore::features::fs::canonicalize();
        if v6 != 0x8000000000000000 {
            v4 = v8;
            v2 = v6;
            v13 = struct24 {
                field_0: v26
                field_8: v27
                field_16: v17
            };
            v10 = uucore::features::fs::make_path_relative_to(&v13, &v2);
        } else {
LABEL_4892c0:
            v11 = v28;
            v12 = v29;
LABEL_4892d4:
            v10 = 0x8000000000000000;
        }
        if std::path::Path::is_symlink(v24, v25) as i8 {
            goto *((4301704 + *(((stack_base)[344] as i64 + 55) as &i8) * 4) as &i32) + 4301704;
        } else {
            v13 = std::sys::pal::unix::fs::stat(v24, v25);
            if v13 != 2 {
                goto *((4301704 + *(((stack_base)[344] as i64 + 55) as &i8) * 4) as &i32) + 4301704;
            } else {
                v0 = 0x8000000000000000;
                if *((v21 + 48) as &i8) {
                    v30 = v11;
                    v31 = v12;
                    v32 = std::sys::pal::unix::fs::symlink(v30, v31, v24, v25);
                    if !v32 {
                        goto LABEL_4899cb;
                    }
                    v13 = 0x8000000000000000;
                    v14 = v32;
                    v33 = __rust_alloc(32, 8);
                    v34 = v13;
                    *((v33 + 16) as &i128) = *((&v13 as &char + 16) as &i128);
                    *(v33 as &i128) = v34;
                } else {
                    v30 = v11;
                    v31 = v12;
                    if !*((v21 + 50) as &i8) || !std::path::Path::is_symlink(v30, v31) as i8 {
                        v2 = std::sys::pal::unix::os::split_paths::bytes_to_path(v30, v31);
                        v3 = v3;
                        v4 = v4;
                        goto LABEL_489954;
                    } else {
                        v13 = std::sys::pal::unix::fs::canonicalize(v30, v31);
                        if v2 == 0x8000000000000000 {
                            <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v3, &v10);
                        } else {
                            v2 = v13;
                            v3 = v3;
                            v4 = v4;
LABEL_489954:
                            v35 = std::sys::pal::unix::fs::link(v3, v4, v24, v25);
                            if v35 {
                                v13 = struct24 {
                                    field_0: &v10
                                    field_8: v24
                                    field_16: v25
                                };
                                <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v35, &v13);
                            } else {
LABEL_4899cb:
                                if !*((v21 + 53) as &i8) {
LABEL_489aee:
                                    v37 = 0;
                                } else {
                                    v6 = 1;
                                    v7 = v24;
                                    v8 = v25;
                                    v9 = 1;
                                    v2 = 1;
                                    v3 = v30;
                                    v4 = v31;
                                    v5 = 1;
                                    v15 = Argument {
                                        value: &v6
                                        formatter: <os_display::Quoted as core::fmt::Display>::fmt
                                    };
                                    v16 = Argument {
                                        value: <os_display::Quoted as core::fmt::Display>::fmt
                                        formatter: &v2
                                    };
                                    v18 = <os_display::Quoted as core::fmt::Display>::fmt;
                                    v13 = Arguments {
                                        pieces: [&g_4efaf0, " -> "]
                                        args: [&v15, &v16]
                                        fmt: None
                                    };
                                    std::io::stdio::_print(&v13);
                                    if v0 != 0x8000000000000000 {
                                        v2 = 1;
                                        v3 = v1;
                                        v4 = v19;
                                        v5 = 1;
                                        v6 = Argument {
                                            value: &v2
                                            formatter: <os_display::Quoted as core::fmt::Display>::fmt
                                        };
                                        v13 = Arguments {
                                            pieces: [" (backup: ", ")\n"]
                                            args: [&v6]
                                            fmt: None
                                        };
                                        std::io::stdio::_print(&v13);
                                        v37 = (&v6 | -0x100 | 1) as u8;
                                    } else {
                                        v13 = Arguments {
                                            pieces: ["\n"]
                                            args: [8, 16]
                                            fmt: None
                                        };
                                        v14 = 0;
                                        std::io::stdio::_print(&v13);
                                        goto LABEL_489aee;
                                    }
                                }
                                return;
                            }
                        }
                    }
                }
                v36 = v10;
                return;
            }
        }
    }
}
