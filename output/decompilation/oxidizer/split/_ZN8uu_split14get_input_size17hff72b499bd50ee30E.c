fn uu_split::get_input_size(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i32;  // [sp-0x11c]
    let v1: i64;  // [sp-0x118]
    let v2: i64;  // [sp-0x100], Other Possible Types: Result<struct4, struct8>, struct16
    let v3: i64;  // [sp-0xf8]
    let v4: i8;  // [bp-0xb0]
    let v5: i192;  // [sp-0x50], Other Possible Types: String
    let v6: i192;  // [sp-0x38], Other Possible Types: String
    let v8: i64;  // rbx
    let v9: i64;  // rdx

    v8 = a0;
    v1 = a0;
    v2 = a1;
    v3 = uucore::features::fs::sane_blksize::sane_blksize_from_path(*((v8 + 8) as &i64), *((v8 + 16) as &i64));
    if std::io::default_read_to_end(&v2, a2, 0, a3) {
        return 1;
    } else if v3 > v9 {
        return 0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v8 + 8) as &i64), *((v8 + 16) as &i64), "-") as i8 {
        v6 = format!("{}: cannot determine input size", &v1);
        std::io::error::Error::new(39, &v6);
        return 1;
    } else {
        v2 = std::fs::metadata(v8);
        if v2 == 2 {
            return 1;
        }
        if v4 >= v9 {
            return 0;
        }
        v2 = std::fs::File::open(*((v1 + 8) as &i64), *((v1 + 16) as &i64));
        if !v2 {
            if <std::fs::File as std::io::Seek>::seek(&v0, 1, 0) {
                return 1;
            }
            if !v9 {
                v5 = format!("{}: cannot determine file size", &v1);
                std::io::error::Error::new(39, &v5);
            } else {
                return 0;
            }
        }
    }
}
