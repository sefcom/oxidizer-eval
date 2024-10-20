fn uu_tail::args::Settings::check_warnings(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0xf8], Other Possible Types: Argument
    let v1: u128;  // [bp-0xe8]
    let v2: u32;  // [sp-0xd8]
    let v3: u8;  // [sp-0xd4]
    let v4: Arguments;  // [bp-0xd0], Other Possible Types: u384, struct16
    let v5: u64;  // [sp-0xc0]
    let v6: u128;  // [bp-0xb8]
    let v7: i8;  // [bp-0x98]
    let v9: void*;  // rax
    let v11: u32;  // ebp
    let v12: u8;  // r15b
    let v14: u64;  // rsi
    let v15: &struct_0;  // rdx

    if a0->field_48 {
        v9 = a0->field_4c;
        switch (v9 as u32) {
        case 0:
            if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            }
            v1 = g_563010;
            v0 = &v1;
            v4 = Arguments {
                pieces: [&g_55ba60, ": warning: "]
                args: [&v0]
                fmt: None
            };
            v5 = &v0;
            std::io::stdio::_eprint(&v4);
            break;
        case 2:
            if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            }
            v1 = g_563010;
            v0 = &v1;
            v4 = Arguments {
                pieces: [&g_55ba60, ": warning: "]
                args: [&v0]
                fmt: None
            };
            v5 = &v0;
            std::io::stdio::_eprint(&v4);
            break;
        default:
            goto LABEL_4a4c16;
        }
        v4 = Arguments {
            pieces: &[&str] {
                ptr: v10
                len: 1
            }
            args: [8]
            fmt: None
        };
        v6 = 0;
        v9 = std::io::stdio::_eprint(&v4);
    }
LABEL_4a4c16:
    v11 = a0->field_44;
    v12 = a0->field_4c;
    if !v11 {
        if v12 == 2 {
            return v9;
        }
    } else {
        if v12 == 2 {
            if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            }
            v1 = g_563010;
            v0 = Argument {
                value: &v1
                formatter: <&T as core::fmt::Display>::fmt
            };
            v4 = Arguments {
                pieces: [&g_55ba60, ": warning: "]
                args: [&v0]
                fmt: None
            };
            std::io::stdio::_eprint(&v4);
            v4 = Arguments {
                pieces: &[&str] {
                    ptr: v10
                    len: 1
                }
                args: [8]
                fmt: None
            };
            v6 = 0;
            std::io::stdio::_eprint(&v4);
            return v9;
        } else if kill(v11, 0) && std::sys::pal::unix::os::errno() as i32 == 38 {
            if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            }
            v1 = g_563010;
            v0 = &v1;
            v4 = Arguments {
                pieces: [&g_55ba60, ": warning: "]
                args: [&v0]
                fmt: None
            };
            v5 = &v0;
            std::io::stdio::_eprint(&v4);
            v4 = Arguments {
                pieces: ["--pid=PID is not supported on this system\n"]
                args: [8]
                fmt: None
            };
            v6 = 0;
            std::io::stdio::_eprint(&v4);
        }
    }
    v9 = a0->field_28;
    v14 = v9 * 48;
    do {
        v15 = a0->field_20;
        if !v14 {
            return v9;
        }
    } while ((v14 -= 48, v15->field_18 != 0x8000000000000000));
    if !v11 && !v12 && v9 == 1 {
        v1 = 0;
        v4 = std::fs::File::metadata(&v1);
        if v4 as i32 == 2 {
            goto LABEL_4a4dd2;
        }
        v1 = *((&v4 as &char + 32) as &i128);
        v2 = 0;
        v3 = 1;
        v4 = std::fs::File::metadata(&v2);
        if v4 as i32 != 2 {
            goto LABEL_4a4f21;
        } else if v3 {
LABEL_4a4f21:
            v2 = -1;
            if v2 == -1 {
                core::option::unwrap_failed(); /* do not return */
            } else if (0xf000 & v7) != 0x8000 {
                return v9;
            }
        }
    }
LABEL_4a4dd2:
    std::io::stdio::stdin();
    v9 = isatty(0) as i64;
    if !v9 as u32 {
        return v9;
    }
    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v1 = g_563010;
    v0 = &v1;
    v4 = Arguments {
        pieces: [&g_55ba60, ": warning: "]
        args: [&v0]
        fmt: None
    };
    v5 = &v0;
    std::io::stdio::_eprint(&v4);
    v4 = Arguments {
        pieces: &[&str] {
            ptr: v10
            len: 1
        }
        args: [8]
        fmt: None
    };
    v6 = 0;
    v9 = std::io::stdio::_eprint(&v4);
    return v9;
}
