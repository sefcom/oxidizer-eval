fn uu_rm::is_readable(a0: u64, a1: u64) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xb0]

    v0 = std::fs::metadata(a0, a1);
    match v0 {
        Ok(_) => {
            return (*((&v0 as &char + 57) as &i8) & 1) as u8 as u64;
        },
        Err(_) => {
            return 0;
        },
    }
}
