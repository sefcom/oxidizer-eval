fn uu_split::get_input_size(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i32;  // [sp-0x11c]
    let v1: i64;  // [sp-0x118], Other Possible Types: Enum, Argument
    let v2: i64;  // [sp-0x108]
    let v3: i1408;  // [sp-0x100], Other Possible Types: Enum, Arguments, struct8
    let v4: i64;  // [bp-0xf8]
    let v5: i192;  // [sp-0x50], Other Possible Types: String
    let v6: String;  // [sp-0x38], Other Possible Types: i192
    let v8: i64;  // rbx
    let v10: i64;  // rdx
    let v11: i64;  // rsi
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // rdx
    let v15: i64;  // rcx

    v8 = a0;
    v2 = a0;
    if !a3 {
        v3 = std::sys::pal::unix::fs::stat(*((v8 + 8) as &i64), *((v8 + 16) as &i64));
        if v3 != 2 {
            a4 = *((&v3 as &char + 88) as &i64);
            if !a4 {
                goto LABEL_49a339;
            }
            if a4 >= 536870913 {
                a4 = 0x200;
            }
        } else {
LABEL_49a339:
            a4 = 0x200;
        }
    }
    v3 = a1;
    v4 = a4;
    if std::io::default_read_to_end(&v3, a2, 0, a3) {
        return 1;
    }
    if a4 > v10 {
        return 0;
    }
    v11 = *((v8 + 8) as &i64);
    v12 = *((v8 + 16) as &i64);
    if v12 == 1 && *(v11 as &i8) == 45 {
        v1 = &v2;
        v3 = Arguments {
            pieces: &[&str] {
                ptr: &g_50b720
                len: <UNKNOWN>
            }
            args: [&v1]
            fmt: None
        };
        v4 = 2;
        v6 = alloc::fmt::format::format_inner(&v3);
        std::io::error::Error::new(39, &v6);
        return 1;
    }
    v3 = std::sys::pal::unix::fs::stat(v11, v12);
    if v3 == 2 {
        return 1;
    } else if *((&v3 as &char + 80) as &i64) < v10 {
        v13 = v2;
        v14 = *((v13 + 8) as &i64);
        v15 = *((v13 + 16) as &i64);
        v3 = struct8 {
            field_0: 0x1b600000000
        };
        v4 = 0;
        v4 = 1;
        v1 = std::fs::OpenOptions::_open(&v3, v14, v15);
        if v1 {
            return 1;
        }
        v0 = *((&v1 as &char + 4) as &i32);
        if !<std::fs::File as std::io::Seek>::seek(&v0, 1) {
            if !v10 {
                v1 = Argument {
                    value: &v2
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v3 = Arguments {
                    pieces: &[&str] {
                        ptr: &g_50b700
                        len: <UNKNOWN>
                    }
                    args: [&v1]
                    fmt: None
                };
                v4 = 2;
                v5 = alloc::fmt::format::format_inner(&v3);
                std::io::error::Error::new(39, &v5);
            } else {
                return 0;
            }
        }
    }
}
