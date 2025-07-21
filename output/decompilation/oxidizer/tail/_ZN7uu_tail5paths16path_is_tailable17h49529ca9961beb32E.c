fn uu_tail::paths::path_is_tailable(a0: i64, a1: i64) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc8]
    let v2: u64;  // rax

    v2 = std::path::Path::is_file();
    if v2 {
        return v2 & -0x100 | 1;
    }
    v0 = std::fs::metadata(a0, a1);
    match v0 {
        Err(_) => {
            return 0;
        },
        Ok(_) => {
            v0 = std::fs::metadata(a0, a1);
            return core::result::Result<T,E>::map_or(&v0);
        },
    }
}
