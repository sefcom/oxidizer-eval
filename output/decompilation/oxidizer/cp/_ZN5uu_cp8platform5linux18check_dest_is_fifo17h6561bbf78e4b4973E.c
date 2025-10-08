fn uu_cp::platform::linux::check_dest_is_fifo(a0: u64, a1: u64) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc0]

    v0 = std::fs::metadata(a0, a1);
    return vvar_4{reg 56} & -0x100 | (*((&v0 as &char + 56) as &i32) & 0xf000) == 0x1000 & v0 as i32 != 2;
}
