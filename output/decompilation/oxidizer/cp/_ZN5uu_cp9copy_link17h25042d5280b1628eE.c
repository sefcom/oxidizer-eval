fn uu_cp::copy_link(a1: &str, a2: &std::path::Path, a3: i64) -> Option<struct8> {
    let a0: u64;  // rdi
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x50]
    let v1: i64;  // [bp-0x48]
    let v2: u64;  // [bp-0x40]
    let v4: u64;  // rsi
    let v5: u64;  // rdx
    let v6: u32;  // ecx
    let v7: u64;  // r8
    let v8: u64;  // rax

    v0 = std::fs::read_link(v4, v5);
    match v0 {
        Err(_) => {
            return Some(v1);
        },
        Ok(_) => {
            if std::path::Path::is_symlink(a2) as u8 || std::path::Path::is_file(a2) as u8 {
                v8 = std::fs::remove_file(v6, v7 as u32);
                if v8 {
                    return Some(v8);
                }
            }
            uu_cp::symlink_file(a0, v1, v2, a2, v7);
        },
    }
}
