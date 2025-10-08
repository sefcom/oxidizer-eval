fn uu_split::get_input_size(a0: i64, a1: u64, a2: void*, a3: u8, a4: u64) -> long long {
    let v0: i64;  // [bp-0x118]
    let v1: struct4;  // [bp-0x110]
    let v2: alloc::string::String;  // [bp-0x100]
    let v3: Result<struct4, struct8>;  // [bp-0xe8], Other Possible Types: struct24
    let v4: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe8]
    let v5: struct4;  // [bp-0xe4]
    let v6: alloc::string::String;  // [bp-0x38]
    let v8: u64;  // rdx
    let v12: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v0 = a0;
    if !(a3 & 1) {
        a4 = uucore::features::fs::sane_blksize::sane_blksize_from_path(*((a0 + 8) as &i64), *((a0 + 16) as &i64));
    }
    v3 = struct24 {
        field_0: a1
        field_8: a4
        field_16: a4
    };
    if (std::io::default_read_to_end(&v3, a2) & 1) {
        return 1;
    }
    if a4 > v8 {
        return 0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((a0 + 8) as &i64), *((a0 + 16) as &i64), "-") {
        v2 = format!("{}: cannot determine input size", &v0);
        std::io::error::Error::_new(40, alloc::boxed::Box<T>::new(&v2) as u64, &g_50ad88);
    } else {
        v4 = std::fs::metadata(a0, a2);
        if let Ok(_) = v4 {
            if *((&v4 as &char + 80) as &i64) >= v8 {
                return 0;
            }
            v3 = std::fs::File::open(*((v0 + 8) as &i64), *((v0 + 16) as &i64));
            if let Ok(v1) = v3 {
                v12 = <std::fs::File as std::io::Seek>::seek(&v1 as u64, 1, 0);
                if let Ok(_) = v12 {
                    if *((&v12 as &char + 8) as &i64) {
                        return 0;
                    }
                    v6 = format!("{}: cannot determine file size", &v0);
                    std::io::error::Error::_new(40, alloc::boxed::Box<T>::new(&v6) as u64, &g_50ad88);
                }
            }
        }
    }
    return 1;
}
