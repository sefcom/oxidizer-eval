fn starship::modules::hg_branch::get_hg_current_bookmark(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u8;  // [bp-0x38]
    let v1: u64;  // [bp-0x30]
    let v2: u64;  // [bp-0x28]
    let v3: u8;  // [bp-0x20]

    std::path::Path::join(&v0, a1, a2, ".hg");
    std::path::Path::join(&v3, v1, v2, "bookmarks.current");
    starship::utils::read_file(a0, &v3);
    return;
}
