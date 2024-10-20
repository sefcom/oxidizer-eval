fn uu_mv::rename(a0: u32, a1: u32, a2: u32, a3: u32, a4: void*, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x300]
    let v1: i1408;  // [sp-0x2d8], Other Possible Types: Arguments, Enum, struct9, struct24
    let v2: i64;  // [sp-0x2d0]
    let v3: i64;  // [sp-0x2c8]
    let v4: i128;  // [bp-0x2c0]
    let v5: i64;  // [bp-0x2b8]
    let v6: i64;  // [sp-0x2a8]
    let v7: i32;  // [bp-0x220]
    let v8: i64;  // [sp-0x218], Other Possible Types: struct12, Argument
    let v9: Argument;  // [bp-0x210], Other Possible Types: i64
    let v10: i64;  // [sp-0x208]
    let v11: i64;  // [bp-0x200]
    let v12: i96;  // [sp-0x1f8], Other Possible Types: Enum, struct16, Arguments, struct12, Argument
    let v13: i64;  // [sp-0x1f0]
    let v14: i64;  // [sp-0x1e8]
    let v15: i8;  // [bp-0x1e0]
    let v16: i64;  // [bp-0x148], Other Possible Types: struct8
    let v17: i64;  // [sp-0x140]
    let v18: i64;  // [sp-0x138]
    let v19: i8;  // [sp-0x130]
    let v20: i64;  // [sp-0x128], Other Possible Types: Argument, struct16
    let v21: i64;  // [sp-0x120]
    let v22: i64;  // [bp-0x118]
    let v23: i8;  // [sp-0x110]
    let v24: String;  // [sp-0x78], Other Possible Types: i192
    let v25: i192;  // [sp-0x60], Other Possible Types: String
    let v26: i192;  // [sp-0x48], Other Possible Types: String
    let v28: i32;  // eax
    let v29: i64;  // r14
    let v30: i64;  // r13
    let v31: i64;  // rax
    let v33: i32;  // eax
    let v34: i32;  // eax
    let v35: i64;  // rcx
    let v37: i32;  // esi
    let v38: i8;  // sil
    let v39: i64;  // rsi
    let v40: i64;  // rdx
    let v41: i64;  // rax
    let v42: i64;  // rdi
    let v43: i64;  // rsi
    let v44: i64;  // rdx
    let v45: i64;  // rbx
    let v47: i128;  // xmm0
    let v48: i128;  // xmm1
    let v49: i64;  // rdx
    let v50: i64;  // rcx
    let v51: i64;  // r8
    let v52: i64;  // r9

    v1 = std::sys::pal::unix::fs::stat(a2, a3);
    if v1 == 2 {
        v13 = v2;
        v12 = 2;
        goto LABEL_4a6022;
    }
    memcpy(&v12, &v1, 176);
    if v12 == 2 {
LABEL_4a6022:
        v29 = 0x8000000000000000;
        goto LABEL_4a6043;
    }
    v28 = *((a4 + 55) as &i8);
    if v28 == 1 {
        if *((a4 + 52) as &i8) {
            v12 = 1;
            v13 = a2;
            v14 = a3;
            v15 = 1;
            v20 = &v12;
            v1 = Arguments {
                pieces: ["skipped ", "\n"]
                args: [&v20]
                fmt: None
            };
            v3 = &v20;
            std::io::stdio::_print(&v1);
            return 0;
        }
        return 0;
    }
    if v28 == 2 {
        v30 = *((a4 + 53) as &i8);
        if v30 == 1 {
            return 0;
        }
        v1 = std::sys::pal::unix::fs::stat(a0, a1);
        if v1 == 2 {
            return v31;
        }
        memcpy(&v22, &v1, 160);
        v20 = struct16 {
            field_0: v32
            field_8: vvar_354{reg 56}
        };
        v12 = std::fs::Metadata::modified(&v20);
        v33 = *((&v12 as &char + 8) as &i32);
        v31 = v12;
        v7 = v33;
        if v33 == 0x3b9aca00 {
            return v31;
        }
        v1 = std::sys::pal::unix::fs::stat(a2, a3);
        v31 = v2;
        if v1 == 2 {
            return v31;
        }
        v0 = v31;
        memcpy(&v14, &v1, 160);
        v12 = struct16 {
            field_0: v32
            field_8: v0
        };
        v8 = std::fs::Metadata::modified(&v12);
        v34 = *((&v8 as &char + 8) as &i32);
        if v34 == 0x3b9aca00 {
            return v31;
        }
        v35 = (v31 < v8 ? (-0x100 | v31 != v8) & 4294967295 & 4294967295 : 255);
        if v7 < v34 {
            v37 = 255;
        } else {
            v37 = -0x100 | v7 != v34;
        }
        v38 = ((v35 & 255 & 255) ? v35 & 4294967295 : v37);
        if v38 != 1 {
            return 0;
        }
    } else if v28 != 3 {
        v30 = *((a4 + 53) as &i8);
    } else {
        v12 = 1;
        v13 = a2;
        v14 = a3;
        v15 = 1;
        v20 = Argument {
            value: &v12
            formatter: <os_display::Quoted as core::fmt::Display>::fmt
        };
        v1 = Arguments {
            pieces: ["not replacing "]
            args: [&v20]
            fmt: None
        };
        v26 = alloc::fmt::format::format_inner(&v1);
        std::io::error::Error::new(39, &v26);
        return v31;
    }
    if !v30 {
        if !*((a4 + 52) as &i8) {
            return 0;
        }
        v12 = 1;
        v13 = a2;
        v14 = a3;
        v15 = 1;
        v20 = &v12;
        v1 = Arguments {
            pieces: ["skipped ", "\n"]
            args: [&v20]
            fmt: None
        };
        v3 = &v20;
        std::io::stdio::_print(&v1);
    }
    if v30 == 1 {
        if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
            once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
        }
        v12 = g_537550;
        v20 = Argument {
            value: &v12
            formatter: <&T as core::fmt::Display>::fmt
        };
        v1 = Arguments {
            pieces: [&g_530950, ": "]
            args: [&v20]
            fmt: None
        };
        std::io::stdio::_eprint(&v1);
        v12 = 1;
        v13 = a2;
        v14 = a3;
        v15 = 1;
        v20 = &v12;
        v1 = Arguments {
            pieces: ["overwrite ", "?"]
            args: [&v20]
            fmt: None
        };
        std::io::stdio::_eprint(&v1);
        v1 = Arguments {
            pieces: [" "]
            args: [8]
            fmt: None
        };
        v4 = 0;
        std::io::stdio::_eprint(&v1);
        v16 = struct8 {
            field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
        };
        v41 = <std::io::stdio::Stderr as std::io::Write>::flush(&v16, v39, v40);
        if v41 {
            v8 = v41;
            v12 = uucore::util_name();
            v13 = v40;
            v20 = Argument {
                value: &v12
                formatter: <&T as core::fmt::Display>::fmt
            };
            v1 = &g_530950;
            v3 = &v20;
            std::io::stdio::_eprint(&v1);
            v12 = Argument {
                value: &v8
                formatter: <std::io::error::Error as core::fmt::Display>::fmt
            };
            v1 = Arguments {
                pieces: [&g_5309a0, "\n"]
                args: [&v12]
                fmt: None
            };
            std::io::stdio::_eprint(&v1);
            std::process::exit(1); /* do not return */
        }
        if !uucore::read_yes(v42, v39, v40) as i8 {
            v43 = 1;
            v44 = 0;
            v45 = 0x8000000000000000;
            goto LABEL_4a6acf;
        }
    }
    v1 = uucore::features::backup_control::get_backup_path(*((a4 + 54) as &i8), a2, a3, *((a4 + 8) as &i64), *((a4 + 16) as &i64));
    v45 = v1;
    v0 = v2;
    v7 = v3;
    if v45 != 0x8000000000000000 && (v31 = uu_mv::rename_with_fallback() as i64, v31) {
LABEL_4a60ee:
        if v45 {
            return v31;
        }
        return v31;
    }
LABEL_4a6043:
    v1 = std::sys::pal::unix::fs::stat(a2, a3);
    if v1 == 2 {
        v13 = v2;
        v12 = 2;
        goto LABEL_4a60a3;
    }
    memcpy(&v12, &v1, 176);
    if v12 == 2 {
LABEL_4a60a3:
        goto LABEL_4a60b3;
    }
    if std::path::Path::is_dir(a2, a3) as i8 && std::path::Path::is_dir(a0, a1) as i8 {
        v1 = std::sys::pal::unix::fs::readdir(a2, a3);
        if *((&v1 as &char + 8) as &i8) != 2 {
            v6 = v1;
            v1 = 2;
            v12 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v6, v40);
            v47 = v12;
            v48 = *((&v12 as &char + 16) as &i128);
            v5 = *((&v12 as &char + 32) as &i128);
            v3 = v48;
            v1 = v47;
            if !(!v1) {
                goto LABEL_4a6a00;
            }
            v31 = std::sys::pal::unix::fs::rmdir(a2, a3);
            if v31 {
LABEL_4a60d8:
                goto LABEL_4a60db;
            }
        } else {
            v1 = v6;
LABEL_4a6a00:
            v44 = 19;
            v43 = &g_421568;
LABEL_4a6acf:
            v31 = std::io::error::Error::new(39, v43, v44);
LABEL_4a60db:
            if v45 == 0x8000000000000000 {
                return v31;
            }
            goto LABEL_4a60ee;
        }
    }
LABEL_4a60b3:
    v31 = uu_mv::rename_with_fallback() as i64;
    if !v31 {
        if *((a4 + 49) as &i8) {
            if v29 == 0x8000000000000000 {
                v20 = 1;
                v21 = a0;
                v22 = a1;
                v23 = 1;
                v12 = 1;
                v13 = a2;
                v14 = a3;
                v15 = 1;
                v8 = Argument {
                    value: &v20
                    formatter: <os_display::Quoted as core::fmt::Display>::fmt
                };
                v9 = Argument {
                    value: <os_display::Quoted as core::fmt::Display>::fmt
                    formatter: &v12
                };
                v11 = <os_display::Quoted as core::fmt::Display>::fmt;
                v1 = Arguments {
                    pieces: ["renamed ", " -> "]
                    args: [&v8, &v9]
                    fmt: None
                };
                v25 = alloc::fmt::format::format_inner(&v1);
                v12 = v25;
                v14 = *((&v25 as &char + 16) as &i64);
            } else {
                v16 = 1;
                v17 = a0;
                v18 = a1;
                v19 = 1;
                v8 = 1;
                v9 = a2;
                v10 = a3;
                v11 = 1;
                v20 = 1;
                v21 = v0;
                v22 = v7;
                v23 = 1;
                v1 = &v16;
                v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                v3 = &v8;
                v4 = <os_display::Quoted as core::fmt::Display>::fmt;
                v5 = &v20;
                v12 = Arguments {
                    pieces: ["renamed ", " -> ", " (backup: ", ")"]
                    args: &[&Argument] {
                        ptr: &v1
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v15 = 3;
                v24 = alloc::fmt::format::format_inner(&v12);
                v12 = v24;
                v14 = *((&v24 as &char + 16) as &i64);
            }
            if !a5 {
                v20 = Argument {
                    value: &v12
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v1 = Arguments {
                    pieces: [&g_5309a0, "\n"]
                    args: [&v20]
                    fmt: None
                };
                std::io::stdio::_print(&v1);
            } else {
                indicatif::multi::MultiProgress::suspend(a5, &v12, v49, v50, v51, v52);
            }
            if !v12 {
                return 0;
            }
        } else if !v29 << 1 {
            return 0;
        }
        return 0;
    }
    goto LABEL_4a60d8;
}
