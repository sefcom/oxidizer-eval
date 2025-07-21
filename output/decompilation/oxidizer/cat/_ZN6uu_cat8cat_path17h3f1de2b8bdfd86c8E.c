fn uu_cat::cat_path(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct25 {
    let a0: i64;  // rdi
    let v0: std::io::stdio::Stdin;  // [bp-0xd8], Other Possible Types: u64
    let v1: u64;  // [bp-0xd8]
    let v2: u64;  // [bp-0xd8]
    let v3: u64;  // [bp-0xd8]
    let v4: std::io::stdio::Stdin;  // [bp-0xc8], Other Possible Types: struct9, struct8, u64
    let v5: struct16;  // [bp-0xc8]
    let v6: u8;  // [bp-0xc4]
    let v7: u8;  // [bp-0xc0]
    let v8: u64;  // [bp-0xb8]
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u64;  // rdx
    let v13: i64;  // rdi
    let v14: std::io::stdio::Stdin;  // rax
    let v15: u8;  // al
    let v16: core::result::Result<(), std::io::error::Error>;  // rax

    v4 = uu_cat::get_input_type(a1, a2);
    v10 = v4.field_0;
    if v10 != 9223372036854775814 {
        v12 = *(&v7 as &i64);
        return struct32 {
            field_0: v10
            field_8: v7
            field_9: v8
            field_16: <UNKNOWN>
        };
    }
    v11 = v7;
    if !v11 {
        return struct8 {
            field_0: 9223372036854775811
        };
    } else if v11 != 2 {
        v13 = &v4;
        if v11 == 7 {
            std::os::unix::net::stream::UnixStream::connect(v13, a1, a2);
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
                v16 = std::os::unix::net::datagram::UnixDatagram::shutdown(&v0, 1);
                match v16 {
                    Ok(_) => {
                        v4 = v0;
                        v6 = 0;
                        v4 = uu_cat::cat_handle(a3, a4, a4);
                        return;
                    },
                    Err(_) => {
                        return struct16 {
                            field_0: 0x8000000000000000
                            field_8: v16
                        };
                    },
                }
            }
        } else {
            std::fs::File::open(v13, a1, a2);
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
                                if v8 == *((a5 + 8) as &i64) {
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
            field_8: *(&v4.field_8 as &i64)
        };
    } else {
        v14 = std::io::stdio::stdin();
        v0 = std::io::stdio::stdin();
        v15 = std::sys::pal::unix::io::is_terminal();
        v4 = v14;
        v7 = v15;
        v4 = uu_cat::cat_handle(a3, a4, a4);
        return;
    }
}
