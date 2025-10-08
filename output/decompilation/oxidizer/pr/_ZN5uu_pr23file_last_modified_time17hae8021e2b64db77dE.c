fn uu_pr::file_last_modified_time(a0: &struct24, a1: &std::path::Path) -> u64 {
    let v0: struct24;  // [bp-0xd0]
    let v1: u64;  // [bp-0xd0]
    let v2: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xb8]
    let v4: u64;  // rsi
    let v5: u64;  // rdx

    v2 = std::fs::metadata(v4, v5);
    if let Ok(_) = v2 {
        v0 = uu_pr::file_last_modified_time::{{closure}}(&v2);
    }
    return core::result::Result<T,E>::unwrap_or_default(a0, &v1);
}
