fn uu_ls::get_metadata_with_deref_opt(a1: &std::path::Path, a2: i32) -> Result<struct176, struct16> {
    let a0: u64;  // rdi
    let v1: u32;  // esi
    let v2: u32;  // esi

    if a2 {
        std::fs::metadata(a0, v2);
        return;
    }
    std::fs::symlink_metadata(a0, v1);
    return;
}
