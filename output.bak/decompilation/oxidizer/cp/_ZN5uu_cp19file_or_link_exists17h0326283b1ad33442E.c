fn uu_cp::file_or_link_exists(a0: u32, a1: u32) -> u64 {
    let v0: struct16;  // [sp-0xc0], Other Possible Types: u128

    v0 = std::fs::symlink_metadata(a0, a1);
    return vvar_5{reg 56} | -0x100 | v0 as i32 != 2;
}
