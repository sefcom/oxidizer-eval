fn uu_dd::is_fifo(a0: u32, a1: u32) -> u64 {
    let v0: u32;  // [sp-0xb0], Other Possible Types: struct16
    let v1: i8;  // [bp-0x78]

    v0 = std::fs::metadata(a0, a1);
    if v0 == 2 {
        return 0;
    } else if (0xf000 & v1) == 0x1000 {
        return core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0) | -0x100 | 1;
    } else {
        return 0;
    }
}
