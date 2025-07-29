fn flealib::ftp::FTP::write_file(a0: u64, a1: i64) -> long long {
    let v0: std::fs::File;  // [bp-0x24]
    let v1: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x20]
    let v2: u32;  // [bp-0x1c]
    let v4: u64;  // rdx
    let v5: Result<(), &BOT>;  // r14

    v1 = std::fs::File::create(a0, v4);
    if let Ok(v0) = v1 {
        v5 = std::io::Write::write_all(&v0, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    }
    return v5;
}
