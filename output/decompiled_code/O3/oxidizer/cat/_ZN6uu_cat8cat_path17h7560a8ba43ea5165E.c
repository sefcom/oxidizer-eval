fn uu_cat::cat_path(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i32;  // [bp-0xd8], Other Possible Types: struct4
    let v1: i32;  // [sp-0xc8], Other Possible Types: Result<struct24, struct9>, struct5, Option<struct8>, struct9
    let v2: i8;  // [sp-0xc0]
    let v4: i64;  // rax
    let v5: i64;  // rcx
    let v6: i64;  // rax
    let v7: i64;  // rdx
    let v8: i64;  // rax
    let v9: i64;  // rax
    let v11: i64;  // rdx

    v1 = uu_cat::get_input_type(a1, a2);
    v4 = v1;
    v5 = v2;
    match v1 {
        Ok(_) => {
            v7 = *((&v1 as &char + 9) as &i64);
            return struct25 {
                field_0: v4
                field_8: v5 as i8
                field_9: v7
                field_16: <UNKNOWN>
            };
        },
        Err(_) => {
            v6 = v5 & 4294967295;
            switch (v6 as i32) {
            case 0:
                return struct8 {
                    field_0: 9223372036854775811
                };
            case 2:
                *(&v0 as &long long) = std::io::stdio::stdin();
                v1 = struct9 {
                    field_0:                     std::io::stdio::stdin()
                    field_8: v2
                };
                v2 = std::sys::pal::unix::io::is_terminal() as i8;
                v8 = uu_cat::cat_handle(a0, &v1, a3, a4);
                return v8;
            case 7:
                v1 = std::os::unix::net::stream::UnixStream::connect(a1, a2);
                if !v1 {
                    v0 = struct4 {
                        field_0: vvar_108{reg 56}
                    };
                    v9 = std::os::unix::net::datagram::UnixDatagram::shutdown(&v0, 1);
                    if v9 {
                        return struct16 {
                            field_0: 0x8000000000000000
                            field_8: v9
                        };
                    }
                    v1 = struct5 {
                        field_0: vvar_108{reg 56}
                        field_4: 0
                    };
                    uu_cat::cat_handle(a0, &v1, a3, a4);
                    return v8;
                }
            default:
                v1 = std::fs::File::open(a1, a2);
                if !v1 {
                    v0 = *((&v1 as &char + 4) as &i32);
                    if a5 && uucore::features::fs::FileInformation::file_size(a5) {
                        v1 = uucore::features::fs::FileInformation::from_file(&v0, v11);
                        if v1 {
                            break;
                        } else if *((&v1 as &char + 8) as &i64) == *(a5 as &i64) && *((&v1 as &char + 16) as &i64) == *((a5 + 8) as &i64) {
                            return struct8 {
                                field_0: 9223372036854775812
                            };
                        }
                    }
                    v1 = struct5 {
                        field_0: vvar_14{reg 56}
                        field_4: 0
                    };
                    uu_cat::cat_handle(a0, &v1, a3, a4);
                    return v8;
                }
            }
            v8 = *((&v1 as &char + 8) as &i64);
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v8
            };
        },
    }
}
