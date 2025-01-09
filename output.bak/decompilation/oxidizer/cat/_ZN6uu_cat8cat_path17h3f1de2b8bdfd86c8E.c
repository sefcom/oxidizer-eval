fn uu_cat::cat_path(a0: &Option<Result<struct25, struct8>>, a1: u32, a2: u32, a3: u32, a4: u32, a5: &u64) -> u64 {
    let v0: i64;  // [bp-0xd8], Other Possible Types: struct4
    let v1: i64;  // [sp-0xc8], Other Possible Types: Result<struct4, struct8>, Option<struct8>, struct9
    let v2: i8;  // [sp-0xc4]
    let v3: i8;  // [sp-0xc0]
    let v4: i8;  // [bp-0xbf]
    let v5: i64;  // [bp-0xb8]
    let v7: i64;  // rax
    let v8: i64;  // rcx
    let v10: i64;  // rdx
    let v12: i32;  // ebp
    let v13: i64;  // rax
    let v14: i32;  // ebp

    v1 = uu_cat::get_input_type(a1, a2);
    v7 = v1;
    v8 = v3;
    if v7 != 9223372036854775814 {
        v10 = v4;
        *((a0 + 16) as &i64) = v5;
        *((a0 + 9) as &i64) = v10;
        *(a0 as &i64) = v7;
        *((a0 + 8) as &i8) = v8;
    }
    switch (v8 & 4294967295) {
    case 0:
        *(a0 as &i64) = 9223372036854775811;
    case 2:
        v0 = std::io::stdio::stdin();
        *(&v1 as &long long) = std::io::stdio::stdin();
        v3 = std::sys::pal::unix::io::is_terminal();
        uu_cat::cat_handle(a0, &v1, a3, a4);
    case 7:
        v1 = std::os::unix::net::stream::UnixStream::connect(a1, a2) as u64;
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v11
        };
        v12 = *((&v1 as &char + 4) as &i32);
        v0 = struct4 {
            field_0: v12
        };
        v13 = std::os::unix::net::datagram::UnixDatagram::shutdown(&v0, 1);
        if v13 {
            *(a0 as &i64) = 0x8000000000000000;
            *((a0 + 8) as &i64) = v13;
        } else {
            v1 = v12;
            v2 = 0;
            uu_cat::cat_handle(a0, &v1, a3, a4);
        }
    default:
        v1 = std::fs::File::open(a1, a2) as u64;
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v11
        };
        v14 = *((&v1 as &char + 4) as &i32);
        v0 = v14;
        if a5 && uucore::features::fs::FileInformation::file_size(a5) {
            v1 = uucore::features::fs::FileInformation::from_file(&v0);
            if v1 {
                v14 = v0;
                break;
            } else if v3 == *(a5 as &i64) && v5 == *((a5 + 8) as &i64) {
                *(a0 as &i64) = 9223372036854775812;
            }
        }
        v1 = v14;
        v2 = 0;
        uu_cat::cat_handle(a0, &v1, a3, a4);
    }
}
