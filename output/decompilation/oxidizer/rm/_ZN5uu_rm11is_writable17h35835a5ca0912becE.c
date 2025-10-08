fn uu_rm::is_writable(a0: i64, a1: i64) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xb0]

    v0 = std::fs::metadata(a0, a1);
    match v0 {
        Ok(_) => {
            return (*((&v0 as &char + 56) as &i8) >> 7) as u8 as u64;
        },
        Err(_) => {
            return 0;
        },
    }
}
