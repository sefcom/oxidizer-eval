fn uu_dd::is_fifo(a0: u32, a1: u32) -> u64 {
    let v0: Result<struct176, struct8>;  // [sp-0xb0]

    v0 = std::fs::metadata(a0, a1);
    if v0 as i32 == 2 {
        return 0;
    } else if (0xf000 & *((&v0 as &char + 56) as &i32)) != 0x1000 {
        return 0;
    } else {
        return core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0) & -0x100 | 1;
    }
}
