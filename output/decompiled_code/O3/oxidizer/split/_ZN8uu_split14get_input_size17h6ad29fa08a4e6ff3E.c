fn uu_split::get_input_size(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i32;  // [bp-0x11c]
    let v1: i64;  // [sp-0x118]
    let v2: i64;  // [sp-0x110]
    let v3: i64;  // [sp-0x108]
    let v4: i1408;  // [sp-0x100], Other Possible Types: Result<struct176, struct16>
    let v5: i64;  // [sp-0xf8]
    let v6: i64;  // [sp-0xf0]
    let v7: i64;  // [sp-0xe8]
    let v8: i64;  // [sp-0xe0]
    let v9: struct24;  // [sp-0x50], Other Possible Types: i192
    let v10: i192;  // [sp-0x38]
    let v12: i64;  // rbx
    let v13: i64;  // rdx

    v12 = a0;
    v1 = a0;
    v4 = a1;
    v5 = uucore::features::fs::sane_blksize::sane_blksize_from_path(*((v12 + 8) as &i64), *((v12 + 16) as &i64));
    if std::io::default_read_to_end() as i64 {
        return 1;
    } else if v5 > v13 {
        return 0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v12 + 8) as &i64), *((v12 + 16) as &i64), "-") as i8 {
        v10 = format!("{:?}: cannot determine input size", &v1);
        std::io::error::Error::new(39, &v10);
        return 1;
    } else {
        v4 = std::fs::metadata(v12, v13);
        if v4 == 2 {
            return 1;
        }
        if *((&v4 as &char + 80) as &i64) >= v13 {
            return 0;
        }
        v4 = std::fs::File::open(*((v1 + 8) as &i64), *((v1 + 16) as &i64));
        if !v4 {
            v0 = *((&v4 as &char + 4) as &i32);
            if <std::fs::File as std::io::Seek>::seek(&v0, 1) {
                return 1;
            }
            if !v13 {
                v2 = &v1;
                v3 = <&T as core::fmt::Display>::fmt;
                v4 = &g_5488c0;
                v5 = 2;
                v8 = 0;
                v6 = &v2;
                v7 = 1;
                v9 = core::option::Option<T>::map_or_else(0, &v4);
                std::io::error::Error::new(39, &v9);
            } else {
                return 0;
            }
        }
    }
}
