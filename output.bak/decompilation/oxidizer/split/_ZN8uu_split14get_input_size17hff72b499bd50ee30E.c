fn uu_split::get_input_size(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i32;  // [bp-0x11c]
    let v1: i64;  // [sp-0x118]
    let v2: i64;  // [sp-0x110]
    let v3: i64;  // [sp-0x108]
    let v4: i64;  // [sp-0x100], Other Possible Types: Result<struct4, struct8>, struct16
    let v5: i64;  // [sp-0xf8]
    let v6: i64;  // [sp-0xf0]
    let v7: i64;  // [sp-0xe8]
    let v8: i64;  // [sp-0xe0]
    let v9: i8;  // [bp-0xb0]
    let v10: struct24;  // [sp-0x50], Other Possible Types: i192
    let v11: String;  // [sp-0x38], Other Possible Types: i192
    let v13: i64;  // rbx
    let v14: i64;  // rdx

    v13 = a0;
    v1 = a0;
    v4 = a1;
    v5 = uucore::features::fs::sane_blksize::sane_blksize_from_path(*((v13 + 8) as &i64), *((v13 + 16) as &i64));
    if std::io::default_read_to_end(&v4, a2, 0, a3) {
        return 1;
    } else if v5 > v14 {
        return 0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v13 + 8) as &i64), *((v13 + 16) as &i64), "-") as i8 {
        v11 = format!("{:?}: cannot determine input size", &v1);
        std::io::error::Error::new(39, &v11);
        return 1;
    } else {
        v4 = std::fs::metadata(v13);
        if v4 == 2 {
            return 1;
        }
        if v9 >= v14 {
            return 0;
        }
        v4 = std::fs::File::open(*((v1 + 8) as &i64), *((v1 + 16) as &i64)) as u64;
        if !v4 {
            v0 = *((&v4 as &char + 4) as &i32);
            if <std::fs::File as std::io::Seek>::seek(&v0, 1, 0) {
                return 1;
            }
            if !v14 {
                v2 = &v1;
                v3 = <&T as core::fmt::Display>::fmt;
                v4 = &g_5483c0;
                v5 = 2;
                v8 = 0;
                v6 = &v2;
                v7 = 1;
                v10 = core::option::Option<T>::map_or_else(None, &v4);
                std::io::error::Error::new(39, &v10);
            } else {
                return 0;
            }
        }
    }
}
