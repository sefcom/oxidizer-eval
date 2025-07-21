fn uu_mv::rename_symlink_fallback(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x50]
    let v1: std::path::PathBuf;  // [bp-0x50], Other Possible Types: struct24
    let v2: u64;  // [bp-0x48]
    let v3: std::path::PathBuf;  // [bp-0x38], Other Possible Types: struct24
    let v5: u32;  // rcx
    let v6: u64;  // rax

    v0 = std::fs::read_link(a0, a1);
    match v0 {
        Err(_) => {
            return v2;
        },
        Ok(v3) => {
            v3 = v1;
            v6 = std::os::unix::fs::symlink(&v3, a2, v5);
            if !v6 {
                return std::fs::remove_file();
            }
            return v6;
        },
    }
}
