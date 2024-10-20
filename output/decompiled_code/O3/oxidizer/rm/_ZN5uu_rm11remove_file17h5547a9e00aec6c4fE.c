fn uu_rm::remove_file(a0: u32, a1: u32, a2: u8, a3: u32) -> u64 {
    let v0: i64;  // [bp-0x1e8], Other Possible Types: Argument, struct24
    let v1: i64;  // [sp-0x1e0], Other Possible Types: Argument
    let v2: i64;  // [sp-0x1d8]
    let v3: i64;  // [bp-0x1d0]
    let v4: i64;  // [bp-0x1c8], Other Possible Types: Argument, struct8
    let v5: i64;  // [bp-0x1c0]
    let v6: struct8;  // [bp-0x1b8], Other Possible Types: i64
    let v7: i32;  // [bp-0x1ac]
    let v8: Arguments;  // [sp-0x1a8], Other Possible Types: i1408, Enum, struct16
    let v9: i64;  // [sp-0x1a0]
    let v10: i64;  // [sp-0x198]
    let v11: i128;  // [bp-0x190]
    let v12: i64;  // [sp-0xf8], Other Possible Types: Enum
    let v13: i8;  // [bp-0xf0]
    let v14: struct8;  // [bp-0xe8]
    let v15: i128;  // [sp-0xe0], Other Possible Types: Argument
    let v16: i64;  // [sp-0xd8]
    let v17: i64;  // [sp-0xd0]
    let v18: i8;  // [sp-0xc8]
    let v19: i8;  // [bp-0xa8]
    let v20: i8;  // [bp-0x90]
    let v22: i64;  // r13
    let v23: i64;  // rsi
    let v24: i64;  // rdx
    let v25: i64;  // rax
    let v26: i64;  // rsi
    let v27: i64;  // rax
    let v28: i64;  // rsi
    let v29: i64;  // rax
    let v30: i64;  // rdx
    let v31: i64;  // rdi
    let v32: i64;  // rsi
    let v33: i64;  // rdx
    let v34: i8;  // r15b
    let v35: i64;  // rsi
    let v36: i64;  // rax
    let v37: i64;  // rsi
    let v38: i64;  // rdx
    let v39: i64;  // rax
    let v40: i64;  // rdi
    let v41: i64;  // rsi
    let v42: i64;  // rdx
    let v43: i64;  // rdi
    let v44: i64;  // rax
    let v45: i64;  // rcx

    v22 = a3;
    if !v22 {
LABEL_48ab72:
        v44 = std::sys::pal::unix::fs::unlink(a0, a1);
        if v44 {
            v4 = v44;
            if std::io::error::Error::kind(v44) as i8 != 1 {
                if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                    once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                }
                v15 = g_4f3390;
                v0 = &v15;
                v8 = Arguments {
                    pieces: [&g_4ee5f8, ": "]
                    args: [&v0]
                    fmt: None
                };
                v10 = &v0;
                std::io::stdio::_eprint(&v8);
                v15 = 1;
                v16 = a0;
                v17 = a1;
                v18 = 1;
                v0 = &v15;
                v1 = Argument {
                    value: <os_display::Quoted as core::fmt::Display>::fmt
                    formatter: &v4
                };
                v3 = <std::io::error::Error as core::fmt::Display>::fmt;
                v8 = Arguments {
                    pieces: ["cannot remove ", ": ", "\n"]
                    args: [&v0, &v1]
                    fmt: None
                };
                std::io::stdio::_eprint(&v8);
            } else {
                if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                    once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                }
                v15 = g_4f3390;
                v0 = Argument {
                    value: &v15
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v8 = Arguments {
                    pieces: [&g_4ee5f8, ": "]
                    args: [&v0]
                    fmt: None
                };
                std::io::stdio::_eprint(&v8);
                v15 = 1;
                v16 = a0;
                v17 = a1;
                v18 = 1;
                v0 = &v15;
                v8 = Arguments {
                    pieces: ["cannot remove ", ": Permission denied\n"]
                    args: [&v0]
                    fmt: None
                };
                v10 = &v0;
                std::io::stdio::_eprint(&v8);
            }
            return core::ptr::drop_in_place<std::io::error::Error>(&v4) | -0x100 | 1;
        } else {
            if !a2 {
                return 0;
            }
            v0 = uucore::features::fs::normalize_path(a0, a1, v45);
            v15 = 1;
            v16 = v1;
            v17 = v2;
            v18 = 1;
            v4 = Argument {
                value: &v15
                formatter: <UNKNOWN>
            };
            v5 = <os_display::Quoted as core::fmt::Display>::fmt;
            v8 = Arguments {
                pieces: ["removed ", "\n"]
                args: [&v4]
                fmt: None
            };
            std::io::stdio::_print(&v8);
        }
    }
    if v22 == 2 {
        v8 = std::sys::pal::unix::fs::lstat(a0, a1);
        if v8 == 2 {
            v16 = v9;
            v15 = 2;
            goto LABEL_48a418;
        }
        memcpy(&v15, &v8, 176);
        if v15 != 2 {
            if !((0xf000 & v19) == 0xa000) {
                goto LABEL_48a425;
            }
            if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            }
            v0 = g_4f3390;
            v4 = &v0;
            v5 = <&T as core::fmt::Display>::fmt;
            v8 = Arguments {
                pieces: [&g_4ee5f8, ": "]
                args: [&v4]
                fmt: None
            };
            std::io::stdio::_eprint(&v8);
            v0 = 1;
            v1 = a0;
            v2 = a1;
            v3 = 1;
            v4 = Argument {
                value: &v0
                formatter: <UNKNOWN>
            };
            v5 = <os_display::Quoted as core::fmt::Display>::fmt;
            v8 = Arguments {
                pieces: ["remove symbolic link ", "?"]
                args: [&v4]
                fmt: None
            };
            std::io::stdio::_eprint(&v8);
            v8 = Arguments {
                pieces: [" "]
                args: [8]
                fmt: None
            };
            v11 = 0;
            std::io::stdio::_eprint(&v8);
            v6 = struct8 {
                field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
            };
            v25 = <std::io::stdio::Stderr as std::io::Write>::flush(&v6, v23, v24);
            if v25 {
                v12 = v25;
                v0 = uucore::util_name();
                v1 = v24;
                v4 = Argument {
                    value: &v0
                    formatter: <UNKNOWN>
                };
                v5 = <&T as core::fmt::Display>::fmt;
                v8 = Arguments {
                    pieces: [&g_4ee5f8, ": "]
                    args: [&v4]
                    fmt: None
                };
                std::io::stdio::_eprint(&v8);
                v0 = Argument {
                    value: &v12
                    formatter: <std::io::error::Error as core::fmt::Display>::fmt
                };
                v8 = Arguments {
                    pieces: [&g_4ee7a0, "\n"]
                    args: [&v0]
                    fmt: None
                };
                std::io::stdio::_eprint(&v8);
                std::process::exit(1); /* do not return */
            }
        } else {
LABEL_48a418:
            goto LABEL_48a425;
        }
    } else {
LABEL_48a425:
        v4 = struct8 {
            field_0: 0x1b600000000
        };
        v5 = 0;
        v5 = 257;
        v12 = std::fs::OpenOptions::_open(&v4, a0, a1);
        if v12 {
            v8 = v13;
            if std::io::error::Error::kind(v13) as i32 == 1 {
                goto LABEL_48a84c;
            }
            goto LABEL_48ab72;
        } else {
            v7 = *((&v12 as &char + 4) as &i32);
            v8 = std::fs::File::metadata(&v7);
            if v8 == 2 {
                goto LABEL_48ab72;
            }
            if v22 != 2 || !(146 & *((&v8 as &char + 56) as &i32)) {
LABEL_48a84c:
                v8 = std::sys::pal::unix::fs::stat(a0, a1);
                if v8 == 2 {
                    v16 = v9;
                    v15 = 2;
                    goto LABEL_48a8ac;
                }
                memcpy(&v15, &v8, 176);
                if v15 != 2 {
                    if !(!(v19 & 146)) {
                        goto LABEL_48ab72;
                    }
                    if v20 {
                        goto LABEL_48a8ac;
                    } else {
                        v0 = uucore::util_name();
                        v1 = v33;
                        v4 = Argument {
                            value: &v0
                            formatter: <UNKNOWN>
                        };
                        v5 = <&T as core::fmt::Display>::fmt;
                        v8 = Arguments {
                            pieces: [&g_4ee5f8, ": "]
                            args: [&v4]
                            fmt: None
                        };
                        std::io::stdio::_eprint(&v8);
                        v0 = 1;
                        v1 = a0;
                        v2 = a1;
                        v3 = 1;
                        v4 = &v0;
                        v5 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v8 = Arguments {
                            pieces: ["remove write-protected regular empty file ", "?"]
                            args: [&v4]
                            fmt: None
                        };
                        v10 = &v4;
                        std::io::stdio::_eprint(&v8);
                        v8 = Arguments {
                            pieces: [" "]
                            args: [8]
                            fmt: None
                        };
                        v11 = 0;
                        std::io::stdio::_eprint(&v8);
                        v6 = struct8 {
                            field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                        };
                        v36 = <std::io::stdio::Stderr as std::io::Write>::flush(&v6, v35, v33);
                        if v36 {
                            v12 = v36;
                            v0 = uucore::util_name();
                            v1 = v33;
                            v4 = &v0;
                            v5 = <&T as core::fmt::Display>::fmt;
                            v8 = Arguments {
                                pieces: [&g_4ee5f8, ": "]
                                args: [&v4]
                                fmt: None
                            };
                            v10 = &v4;
                            std::io::stdio::_eprint(&v8);
                            v0 = &v12;
                            v8 = Arguments {
                                pieces: [&g_4ee7a0, "\n"]
                                args: [&v0]
                                fmt: None
                            };
                            v10 = &v0;
                            std::io::stdio::_eprint(&v8);
                            std::process::exit(1); /* do not return */
                        }
                    }
                } else {
LABEL_48a8ac:
                    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                    }
                    v0 = g_4f3390;
                    v4 = Argument {
                        value: &v0
                        formatter: <UNKNOWN>
                    };
                    v5 = <&T as core::fmt::Display>::fmt;
                    v8 = Arguments {
                        pieces: [&g_4ee5f8, ": "]
                        args: [&v4]
                        fmt: None
                    };
                    std::io::stdio::_eprint(&v8);
                    v0 = 1;
                    v1 = a0;
                    v2 = a1;
                    v3 = 1;
                    v4 = &v0;
                    v5 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v8 = Arguments {
                        pieces: ["remove write-protected regular file ", "?"]
                        args: [&v4]
                        fmt: None
                    };
                    v10 = &v4;
                    std::io::stdio::_eprint(&v8);
                    v8 = Arguments {
                        pieces: [" "]
                        args: [8]
                        fmt: None
                    };
                    v11 = 0;
                    std::io::stdio::_eprint(&v8);
                    v6 = struct8 {
                        field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                    };
                    v39 = <std::io::stdio::Stderr as std::io::Write>::flush(&v6, v37, v38);
                    if v39 {
                        v12 = v39;
                        v0 = uucore::util_name();
                        v1 = v38;
                        v4 = &v0;
                        v5 = <&T as core::fmt::Display>::fmt;
                        v8 = Arguments {
                            pieces: [&g_4ee5f8, ": "]
                            args: [&v4]
                            fmt: None
                        };
                        std::io::stdio::_eprint(&v8);
                        v0 = &v12;
                        v8 = Arguments {
                            pieces: [&g_4ee7a0, "\n"]
                            args: [&v0]
                            fmt: None
                        };
                        v10 = &v0;
                        std::io::stdio::_eprint(&v8);
                        std::process::exit(1); /* do not return */
                    }
                    v34 = uucore::read_yes(v43, v37, v38) & 4294967295 & 4294967295;
                    goto LABEL_48ab69;
                    goto LABEL_48ab69;
                }
            } else {
                if !*((&v8 as &char + 80) as &i64) {
                    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                    }
                    v15 = g_4f3390;
                    v0 = &v15;
                    v8 = Arguments {
                        pieces: [&g_4ee5f8, ": "]
                        args: [&v0]
                        fmt: None
                    };
                    v10 = &v0;
                    std::io::stdio::_eprint(&v8);
                    v15 = 1;
                    v16 = a0;
                    v17 = a1;
                    v18 = 1;
                    v0 = Argument {
                        value: &v15
                        formatter: <os_display::Quoted as core::fmt::Display>::fmt
                    };
                    v8 = Arguments {
                        pieces: ["remove regular empty file ", "?"]
                        args: [&v0]
                        fmt: None
                    };
                    std::io::stdio::_eprint(&v8);
                    v8 = Arguments {
                        pieces: [" "]
                        args: [8]
                        fmt: None
                    };
                    v11 = 0;
                    std::io::stdio::_eprint(&v8);
                    v14 = struct8 {
                        field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                    };
                    v29 = <std::io::stdio::Stderr as std::io::Write>::flush(&v14, v28, v30);
                    if v29 {
                        v6 = v29;
                        v15 = uucore::util_name();
                        v16 = v30;
                        v0 = Argument {
                            value: &v15
                            formatter: <&T as core::fmt::Display>::fmt
                        };
                        v8 = Arguments {
                            pieces: [&g_4ee5f8, ": "]
                            args: [&v0]
                            fmt: None
                        };
                        std::io::stdio::_eprint(&v8);
                        v15 = Argument {
                            value: &v6
                            formatter: <std::io::error::Error as core::fmt::Display>::fmt
                        };
                        v8 = Arguments {
                            pieces: [&g_4ee7a0, "\n"]
                            args: [&v15]
                            fmt: None
                        };
                        std::io::stdio::_eprint(&v8);
                        std::process::exit(1); /* do not return */
                    }
                } else {
                    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                    }
                    v15 = g_4f3390;
                    v0 = &v15;
                    v8 = Arguments {
                        pieces: [&g_4ee5f8, ": "]
                        args: [&v0]
                        fmt: None
                    };
                    v10 = &v0;
                    std::io::stdio::_eprint(&v8);
                    v15 = 1;
                    v16 = a0;
                    v17 = a1;
                    v18 = 1;
                    v0 = &v15;
                    v8 = Arguments {
                        pieces: ["remove file ", "?"]
                        args: [&v0]
                        fmt: None
                    };
                    v10 = &v0;
                    std::io::stdio::_eprint(&v8);
                    v8 = Arguments {
                        pieces: [" "]
                        args: [8]
                        fmt: None
                    };
                    v11 = 0;
                    std::io::stdio::_eprint(&v8);
                    v14 = struct8 {
                        field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                    };
                    v27 = <std::io::stdio::Stderr as std::io::Write>::flush(&v14, v26, v30);
                    if v27 {
                        v6 = v27;
                        v15 = uucore::util_name();
                        v16 = v30;
                        v0 = &v15;
                        v8 = Arguments {
                            pieces: [&g_4ee5f8, ": "]
                            args: [&v0]
                            fmt: None
                        };
                        v10 = &v0;
                        std::io::stdio::_eprint(&v8);
                        v15 = &v6;
                        v8 = Arguments {
                            pieces: [&g_4ee7a0, "\n"]
                            args: [&v15]
                            fmt: None
                        };
                        v10 = &v15;
                        std::io::stdio::_eprint(&v8);
                        std::process::exit(1); /* do not return */
                    }
                }
                v34 = uucore::read_yes(v31, v32, v30) as i32;
LABEL_48ab69:
                if !v34 {
                    return 0;
                }
                goto LABEL_48ab72;
            }
        }
    }
    if !uucore::read_yes(v40, v41, v42) as i8 {
        return 0;
    }
    goto LABEL_48ab72;
}
