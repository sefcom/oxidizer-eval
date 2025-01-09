fn uu_cp::platform::linux::check_dest_is_fifo(a0: u32, a1: u32) -> u64 {
    let v0: u128;  // [sp-0xb8], Other Possible Types: struct16
    let v1: i8;  // [bp-0x80]
    let v5: u64;  // rbx

    v0 = std::fs::metadata(a0, a1);
    return (v5 | -0x100 | (0xf000 & v1) == 0x1000 & v0 as i64 != 2) & 4294967295 & 4294967295;
}
