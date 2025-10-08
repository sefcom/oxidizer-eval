fn uu_mv::rename_symlink_fallback(a0: u64, a1: u64, a2: u32) -> long long {
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x50]
    let v1: struct24;  // [bp-0x50], Other Possible Types: u64
    let v2: u64;  // [bp-0x48]
    let v3: struct24;  // [bp-0x38]
    let v5: u32;  // rcx
    let v6: u64;  // rax

    v0 = std::fs::read_link(a0, a1);
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        return v2;
    }
    v3 = v1;
    v6 = std::os::unix::fs::symlink(&v3, a2, v5);
    if !v6 {
        return std::fs::remove_file(a0, a1);
    }
    return v6;
}
