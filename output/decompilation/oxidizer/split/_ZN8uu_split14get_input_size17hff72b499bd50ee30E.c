fn uu_split::get_input_size(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i32;  // [sp-0x11c]
    let v2: Result<struct176, struct8>;  // [sp-0x100], Other Possible Types: unsigned long
    let v3: i64;  // [sp-0xf8]
    let v4: String;  // [sp-0x50]
    let v5: String;  // [sp-0x38]
    let v7: i64;  // r14
    let v8: i64;  // rdx

    v7 = a4;
    if !a3 {
        v7 = uucore::features::fs::sane_blksize::sane_blksize_from_path(*((a0 + 8) as &i64), *((a0 + 16) as &i64));
    }
    v2 = a1;
    v3 = v7;
    if std::io::default_read_to_end(&v2, a2, 0, a3) {
        return 1;
    } else if v7 > v8 {
        return 0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((a0 + 8) as &i64), *((a0 + 16) as &i64), "-") as i8 {
        v5 = format!("{}: cannot determine input size", &v1);
        std::io::error::Error::new(39, &v5);
        return 1;
    } else {
        v2 = std::fs::metadata(a0);
        if v2 as i32 == 2 {
            return 1;
        }
        if *((&v2 as &char + 80) as &i64) >= v8 {
            return 0;
        }
        v2 = std::fs::File::open(*((a0 + 8) as &i64), *((a0 + 16) as &i64));
        if !v2 as i32 {
            if <std::fs::File as std::io::Seek>::seek(&v0, 1, 0) {
                return 1;
            }
            if !v8 {
                v4 = format!("{}: cannot determine file size", &v1);
                std::io::error::Error::new(39, &v4);
            } else {
                return 0;
            }
        }
    }
}
