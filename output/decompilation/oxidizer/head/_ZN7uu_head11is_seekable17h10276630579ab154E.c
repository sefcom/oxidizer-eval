fn uu_head::is_seekable(a0: i64) -> long long {
    let v0: u64;  // [bp-0x30]
    let v1: u64;  // [bp-0x28]
    let v2: u64;  // [bp-0x18]
    let v6: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v7: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v8: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v8 = <std::fs::File as std::io::Seek>::seek(a0);
    v2 = *((&v8 as &char + 8) as &i64);
    if let Ok(_) = v8 {
        v7 = <std::fs::File as std::io::Seek>::seek(a0);
        v0 = v7 as i64;
        v1 = *((&v7 as &char + 8) as &i64);
        if let Ok(_) = v7 {
            core::result::Result<T,E>::unwrap(*((&v8 as &char + 8) as &i64));
            v6 = <std::fs::File as std::io::Seek>::seek(a0);
            return (a0 as u32 & -0x100 | (!v6 as i64) as u8 as u32) as u64;
        }
    }
    return 0;
}
