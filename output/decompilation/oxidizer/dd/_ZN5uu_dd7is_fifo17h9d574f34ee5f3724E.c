fn uu_dd::is_fifo(a0: i64, a1: i64) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xb0]

    v0 = std::fs::metadata(a0, a1);
    if let Ok(_) = v0 {
        if (0xf000 & *((&v0 as &char + 56) as &i32)) == 0x1000 {
            return;
        }
    }
    return 0;
}
