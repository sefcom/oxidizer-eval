fn uu_cp::copy_link(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct16 {
    let a0: u64;  // rsi
    let v0: u8;  // [bp-0x58]
    let v1: u64;  // [bp-0x50]
    let v2: u64;  // [bp-0x48]
    let v3: u64;  // [bp-0x40]
    let v4: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x38]
    let v5: u64;  // [bp-0x30]
    let v6: i64;  // rdi
    let v7: core::result::Result<(), std::io::error::Error>;  // rax
    let v8: i64;  // rdi

    v4 = std::fs::read_link(a0, a1);
    match v4 {
        Err(_) => {
            *(v6 as &i64) = 2;
            *((v6 + 8) as &u64) = v5;
            return;
        },
        Ok(_) => {
            v1 = v4 as i64;
            v2 = v5;
            v3 = *((&v4 as &char + 16) as &i64);
            if (std::path::Path::is_symlink() as u8 || std::path::Path::is_file(a2, a3) as u8) && !((v7 = std::fs::remove_file(a2, a3), !v7)) {
                *(v8 as &i64) = 2;
                *((v8 + 8) as &core::result::Result<(), std::io::error::Error>) = v7;
            } else {
                uu_cp::symlink_file(v2, v3, a2, a3, a4, *(&v0 as &i64));
            }
            return;
        },
    }
}
