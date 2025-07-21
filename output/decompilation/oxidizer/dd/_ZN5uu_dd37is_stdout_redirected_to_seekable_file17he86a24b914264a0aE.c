fn uu_dd::is_stdout_redirected_to_seekable_file() -> long long {
    let v0: u32;  // [bp-0x4c]
    let v1: core::slice::iter::Chunks<usize>;  // [sp-0x48], Other Possible Types: u64
    let v2: struct24;  // [bp-0x40], Other Possible Types: u64
    let v3: u8;  // [bp-0x38]
    let v4: i8;  // [bp-0x34]
    let v5: u64;  // [bp-0x20]
    let v6: u8;  // [bp-0x18]
    let v8: u64;  // rsi
    let v9: Result<struct4, struct8>;  // ebx
    let v12: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v13: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    uu_dd::stdout_canonicalized(v8);
    std::fs::File::open(&v3, v5, *(&v6 as &i64));
    if !v3 {
        v0 = *(&v4 as &i32);
        v13 = <std::fs::File as std::io::Seek>::seek(&v0, 2, 0);
        v1 = v13 as i64;
        v2 = *((&v13 as &char + 8) as &i64);
        if let Ok(_) = v13 {
            v12 = <std::fs::File as std::io::Seek>::seek(&v0, 1, 0);
            v1 = v12 as i64;
            v2 = *((&v12 as &char + 8) as &i64);
            if let Ok(_) = v12 {
                v1 = std::io::Seek::rewind(&v0);
            }
        }
    }
    return v9 as u64;
}
