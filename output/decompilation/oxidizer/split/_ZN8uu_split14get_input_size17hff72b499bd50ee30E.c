fn uu_split::get_input_size(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: struct4;  // [bp-0x11c]
    let v1: i64;  // [bp-0x118]
    let v2: i64;  // [bp-0x110]
    let v3: u64;  // [bp-0x108]
    let v4: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x100]
    let v5: struct16;  // [bp-0x100], Other Possible Types: u64
    let v6: u64;  // [bp-0x100]
    let v7: struct4;  // [bp-0xfc]
    let v8: u64;  // [bp-0xf8]
    let v9: i64;  // [bp-0xf0]
    let v10: u64;  // [bp-0xe8]
    let v11: void*;  // [bp-0xe0]
    let v12: u8;  // [bp-0x50]
    let v13: u8;  // [bp-0x38]
    let v15: u64;  // rdx
    let v17: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v1 = a0;
    if !a3 {
        a4 = uucore::features::fs::sane_blksize::sane_blksize_from_path(*((a0 + 8) as &i64), *((a0 + 16) as &i64));
    }
    v5 = struct16 {
        field_0: a1
        field_8: a4
    };
    if std::io::default_read_to_end(&v5, a2, 0, a3) {
        return 1;
    }
    if a4 > v15 {
        return 0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((a0 + 8) as &i64), *((a0 + 16) as &i64), "-") as i8 {
        v2 = &v1;
        v3 = <&T as core::fmt::Display>::fmt;
        v6 = &g_5483a0;
        v8 = 2;
        v11 = 0;
        v9 = &v2;
        v10 = 1;
        core::option::Option<T>::map_or_else(None, &v5, a3);
        std::io::error::Error::new(39, &v13);
    } else {
        v4 = std::fs::metadata(a0, a2);
        if let Ok(_) = v4 {
            if *((&v4 as &char + 80) as &i64) >= v15 {
                return 0;
            }
            v5 as u128 = std::fs::File::open(*((v1 + 8) as &i64), *((v1 + 16) as &i64));
            match v5 as u128 {
                Err(_) => {
                    return 1;
                },
                Ok(v0) => {
                    v17 = <std::fs::File as std::io::Seek>::seek(&v0, 1, 0);
                    if let Ok(_) = v17 {
                        if *((&v17 as &char + 8) as &i64) {
                            return 0;
                        }
                        v2 = &v1;
                        v3 = <&T as core::fmt::Display>::fmt;
                        v5 = &g_5483c0 as u64;
                        v8 = 2;
                        v11 = 0;
                        v9 = &v2;
                        v10 = 1;
                        core::option::Option<T>::map_or_else(None, &v5 as u128, a3);
                        std::io::error::Error::new(39, &v12);
                    }
                },
            }
        }
    }
    return 1;
}
