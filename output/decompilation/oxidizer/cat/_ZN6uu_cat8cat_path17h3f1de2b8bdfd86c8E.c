fn uu_cat::cat_path(a0: &struct25, a1: u32, a2: u32, a3: u32, a4: u32, a5: &u64) -> u64 {
    let v0: i32;  // [bp-0xd8], Other Possible Types: unsigned long
    let v1: i32;  // [sp-0xc8], Other Possible Types: Result<struct4, struct8>, Option<struct8>, unsigned long
    let v2: i8;  // [sp-0xc4]
    let v3: i8;  // [sp-0xc0]
    let v5: i64;  // rax
    let v6: i64;  // rcx
    let v8: i64;  // rdx
    let v10: i32;  // ebp
    let v11: i32;  // ebp

    v1 = uu_cat::get_input_type(a1, a2);
    v5 = v1 as i64;
    v6 = v3;
    match v1 {
        Ok(_) => {
            v8 = *((&v1 as &char + 9) as &i64);
            *((a0 + 16) as &i64) = *((&v1 as &char + 16) as &i64);
            *((a0 + 9) as &unsigned long) = v8;
            *(a0 as &unsigned long) = v5;
            *((a0 + 8) as &u8) = v6 as u8;
        },
        Err(_) => {
            match ((v6 & 4294967295) as u32) {
                0 => {
                    *(a0 as &i64) = 9223372036854775811;
                }
                2 => {
                    *(&v0 as &u64) = std::io::stdio::stdin() as u64;
                    *(&v1 as &long long) = std::io::stdio::stdin();
                    v3 = std::sys::pal::unix::io::is_terminal();
                    uu_cat::cat_handle(a0, &v1, a3, a4);
                }
                7 => {
                    v1 = std::os::unix::net::stream::UnixStream::connect(a1, a2);
                    if !v1 {
                        v10 = *((&v1 as &char + 4) as &i32);
                        v0 = v10;
                        if !std::os::unix::net::datagram::UnixDatagram::shutdown(&v0, 1) {
                            v1 = v10;
                            v2 = 0;
                            uu_cat::cat_handle(a0, &v1, a3, a4);
                        }
                    }
                }
                _ => {
                    v1 = std::fs::File::open(a1, a2);
                    if !v1 {
                        v11 = *((&v1 as &char + 4) as &i32);
                        v0 = v11;
                        if !(a5 && uucore::features::fs::FileInformation::file_size(a5)) {
                            v1 = v11;
                            v2 = 0;
                            uu_cat::cat_handle(a0, &v1, a3, a4);
                        }
                        v1 = uucore::features::fs::FileInformation::from_file(&v0);
                        if v1 as i64 {
                            v11 = v0;
                            break;
                        }
                    }
                }
            }
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v9
            };
        },
    }
}
