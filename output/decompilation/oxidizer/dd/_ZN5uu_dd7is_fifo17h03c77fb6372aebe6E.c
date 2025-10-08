fn uu_dd::is_fifo(a0: &std::path::Path) -> u64 {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc0]

    v0 = std::fs::metadata(a0);
    return vvar_3{reg 56} & -0x100 | (*((&v0 as &char + 56) as &i32) & 0xf000) == 0x1000 & v0 as i32 != 2;
}
