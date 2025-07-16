fn uu_cat::cat_path(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct25 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0xd8], Other Possible Types: std::io::stdio::Stdin
    let v1: u64;  // [bp-0xd8]
    let v2: u64;  // [bp-0xd8]
    let v3: u64;  // [bp-0xd8]
    let v4: struct8;  // [bp-0xc8], Other Possible Types: u64, struct9, std::io::stdio::Stdin
    let v5: struct16;  // [bp-0xc8]
    let v6: u8;  // [bp-0xc4]
    let v7: u8;  // [bp-0xc0]
    let v8: i8;  // [bp-0xbf]
    let v9: u64;  // [bp-0xb8]
    let v11: u64;  // rax
    let v12: u64;  // rax
    let v13: u64;  // rdx
    let v14: i64;  // rdi
    let v15: std::io::stdio::Stdin;  // rax
    let v16: u8;  // al
    let v17: core::result::Result<(), std::io::error::Error>;  // rax

    v4 = uu_cat::get_input_type(a1, a2);
    v11 = v4.field_0;
    if v11 != 9223372036854775814 {
        v13 = *(&v8 as &i64);
        return struct32 {
            field_0: v11
            field_8: v7
            field_9: v9
            field_16: <UNKNOWN>
        };
    }
    v12 = v7;
    if !v12 {
        return struct8 {
            field_0: 9223372036854775811
        };
    } else if v12 != 2 {
        v14 = &v4;
        if v12 == 7 {
            std::os::unix::net::stream::UnixStream::connect(v14, a1, a2);
            if !v4.field_0 as i32 {
                v0 = *((&v4.field_0 as &char + 4) as &i32);
                v0 = std::os::unix::net::datagram::UnixDatagram {
                    __0: std::sys::pal::unix::net::Socket {
                        __0: std::sys::pal::unix::fd::FileDesc {
                            __0: std::os::fd::owned::OwnedFd {
                                fd: v1 & -0x100000000 | v0 as u64
                            }
                        }
                    }
                };
                v17 = std::os::unix::net::datagram::UnixDatagram::shutdown(&v0, 1);
                match v17 {
                    Ok(_) => {
                        v4 = v0;
                        v6 = 0;
                        v4 = uu_cat::cat_handle(a3, a4, a4);
                        return;
                    },
                    Err(_) => {
                        return struct16 {
                            field_0: 0x8000000000000000
                            field_8: v17
                        };
                    },
                }
            }
        } else {
            std::fs::File::open(v14, a1, a2);
            if !v4.field_0 as i32 {
                v3 = *((&v4.field_0 as &char + 4) as &i32);
                v0 = v0 & -0x100000000 | v3;
                v1 = v3;
                if a5 {
                    v1 = v3;
                    if uucore::features::fs::FileInformation::file_size(a5) {
                        v5 = uucore::features::fs::FileInformation::from_file(&v0);
                        if v5.field_0 {
                            v1 = v2;
                        } else {
                            v1 = v3;
                            if v5.field_8 == *(a5 as &i64) {
                                v1 = v3;
                                if v9 == *((a5 + 8) as &i64) {
                                    return struct8 {
                                        field_0: 9223372036854775812
                                    };
                                }
                            }
                        }
                    }
                }
                v4 = v1;
                v6 = 0;
                v4 = uu_cat::cat_handle(a3, a4, a4);
                return;
            }
        }
        return struct16 {
            field_0: 0x8000000000000000
            field_8: *(&v7 as &i64)
        };
    } else {
        v15 = std::io::stdio::stdin();
        v0 = std::io::stdio::stdin();
        v16 = std::sys::pal::unix::io::is_terminal();
        v4 = v15;
        v7 = v16;
        v4 = uu_cat::cat_handle(a3, a4, a4);
        return;
    }
}
