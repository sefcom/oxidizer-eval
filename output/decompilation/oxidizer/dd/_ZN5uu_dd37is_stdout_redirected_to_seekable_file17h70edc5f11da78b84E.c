fn uu_dd::is_stdout_redirected_to_seekable_file() -> u64 {
    let v0: struct4;  // [bp-0x54]
    let v1: core::fmt::Arguments;  // [bp-0x50], Other Possible Types: core::result::Result<u64, std::io::error::Error>, u64
    let v2: core::slice::iter::Chunks<usize>;  // [sp-0x48], Other Possible Types: u64
    let v3: Result<struct4, struct8>;  // [bp-0x40]
    let v4: struct24;  // [bp-0x30]
    let v5: u64;  // [bp-0x28]
    let v7: core::fmt::Arguments;  // ebp
    let v10: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v11: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v4 = uu_dd::stdout_canonicalized();
    v3 = std::fs::File::open(v5, v4.field_16);
    if let Ok(v0) = v3 {
        v10 = <std::fs::File as std::io::Seek>::stream_position(&v0);
        v1 = v10 as i64;
        v2 = *((&v10 as &char + 8) as &i64);
        if let Ok(_) = v10 {
            v11 = <std::fs::File as std::io::Seek>::seek(&v0, 1, 0);
            v1 = v11 as i64;
            v2 = *((&v11 as &char + 8) as &i64);
            if let Ok(_) = v11 {
                v1 = std::io::Seek::rewind(&v0);
            }
        }
    }
    return v7 as u64;
}
