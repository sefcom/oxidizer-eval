fn uu_tail::paths::path_is_tailable(a0: &std::path::Path) -> u64 {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd0]
    let v2: u64;  // rdi
    let v3: u64;  // rsi
    let v4: u64;  // rax

    v4 = std::path::Path::is_file(v2, v3);
    if v4 {
        return v4 & -0x100 | 1;
    }
    v0 = std::fs::metadata(a0);
    match v0 {
        Err(_) => {
            return 0;
        },
        Ok(_) => {
            v0 = std::fs::metadata(a0);
            return core::result::Result<T,E>::is_ok_and(&v0);
        },
    }
}
