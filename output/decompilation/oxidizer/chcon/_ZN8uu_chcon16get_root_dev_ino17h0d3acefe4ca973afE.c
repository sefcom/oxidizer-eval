fn uu_chcon::get_root_dev_ino() -> Result<struct48, struct16> {
    let a0: u64;  // rdi
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xb8]
    let v2: u64;  // rsi
    let v3: u64;  // rdx

    v0 = std::fs::symlink_metadata(v2, v3);
    match v0 {
        Ok(_) => {
            return Err(*((&v0 as &char + 32) as &i128));
        },
        Err(_) => {
            uu_chcon::errors::Error::from_io1(a0, *((&v0 as &char + 8) as &i64));
            return;
        },
    }
}
