fn uu_cat::cat_path(a0: u64, a1: u64, a2: u64, a3: void*, a4: u64, a5: i64) -> int {
    let v0: u64;  // [bp-0xd4]
    let v1: u64;  // [bp-0xd0]
    let v2: Option<struct8>;  // [bp-0xc8], Other Possible Types: struct9, u128
    let v3: Option<struct8>;  // [sp-0xc8], Other Possible Types: struct8
    let v4: std::io::stdio::Stdin;  // [bp-0xc8]
    let v5: u8;  // [bp-0xc0]
    let v6: i8;  // [bp-0xb8]
    let v10: u64;  // rax
    let v11: i64;  // rdi
    let v12: u64;  // rax
    let v14: std::io::stdio::Stdin;  // rax
    let v15: u64;  // rbp
    let v16: u8;  // al

    v2 = uu_cat::get_input_type(a1, a2);
    if v2.field_0 != 9223372036854775814 {
        return struct32 {
            field_0: v2.field_0
            field_8: v5
            field_9: *(&v6 as &i64)
            field_16: <UNKNOWN>
        };
    }
    v10 = v5;
    if !v10 {
        return struct8 {
            field_0: 9223372036854775811
        };
    } else if v10 != 2 {
        v11 = &v2;
        if v10 == 7 {
            std::os::unix::net::stream::UnixStream::connect(v11, a1, a2);
            if (v2.field_0 as i8 & 1) {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: *(&v2.field_8 as &i64)
                };
            }
            v0 = *((&v2.field_0 as &char + 4) as &i32);
            v12 = std::os::unix::net::datagram::UnixDatagram::shutdown(&v0, 1);
            if v12 {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v12
                };
            }
            v3 = struct8 {
                field_0: v0
                field_4: 0
            };
            uu_cat::cat_handle(a0, &v3, a3, a4);
        } else {
            std::fs::File::open(v11, a1, a2);
            if (v2.field_0 as i8 & 1) {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: *(&v2.field_8 as &i64)
                };
            }
            if a5 && uucore::features::fs::FileInformation::file_size(a5) {
                v2 = uucore::features::fs::FileInformation::from_file(v2.field_0);
                if let None = v2 {
                    if *((&v2 as &char + 8) as &i64) == *(a5 as &i64) && *(&v6 as &i64) == *((a5 + 8) as &i64) {
                        return struct8 {
                            field_0: 9223372036854775812
                        };
                    }
                }
            }
            v3 = struct8 {
                field_0: *((&v2 as &char + 4) as &i32)
                field_4: 0
            };
            uu_cat::cat_handle(a0, &v3, a3, a4);
        }
        return;
    } else {
        v14 = std::io::stdio::stdin();
        v3 = uucore::features::fs::FileInformation::from_file();
        v15 = *((&v3 as &char + 8) as &i64);
        match v3 {
            Some(_) => {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v15
                };
            },
            None => {
                v1 = *(&v6 as &i64);
                std::io::stdio::stdin();
                v16 = std::sys::io::is_terminal::isatty::is_terminal();
                v4 = v14;
                v5 = v16;
                if a5 && *(a5 as &i64) == v15 && v1 == *((a5 + 8) as &i64) && uu_cat::is_appending() as u64 as u8 {
                    return struct8 {
                        field_0: 9223372036854775812
                    };
                }
                uu_cat::cat_handle(a0, &v4 as u8, a3, a4);
                return;
            },
        }
    }
}
