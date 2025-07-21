fn uu_pr::file_last_modified_time(a0: &struct24, a1: i64, a2: i64) -> long long {
    let v0: struct24;  // [bp-0xd0]
    let v1: u64;  // [bp-0xd0]
    let v2: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xb8]

    v2 = std::fs::metadata(a1, a2);
    if let Ok(_) = v2 {
        v0 = uu_pr::file_last_modified_time::{{closure}}(&v2);
    }
    return core::result::Result<T,E>::unwrap_or_default(a0, &v1) as u64;
}
