fn uu_cp::platform::linux::check_dest_is_fifo(a0: i64, a1: i64) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xb8]
    let v2: u32;  // ebx

    v0 = std::fs::metadata(a0, a1);
    return v2 & -0x100 | (0xf000 & *((&v0 as &char + 56) as &i32)) == 0x1000 & v0 as i64 != 2;
}
