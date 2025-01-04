fn uu_cp::file_or_link_exists(a0: i64, a1: i64) -> u64 {
    let v0: Result<struct176, struct16>;  // [sp-0xc0], Other Possible Types: i1408

    v0 = std::fs::symlink_metadata(a0, a1);
    return vvar_5{reg 56} | -0x100 | v0 != 2;
}
