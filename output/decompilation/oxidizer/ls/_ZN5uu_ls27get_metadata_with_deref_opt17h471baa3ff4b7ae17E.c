fn uu_ls::get_metadata_with_deref_opt(a1: i64, a2: i64, a3: i32) -> : struct16 {
    let a0: u64;  // rdi

    if !a3 {
        std::fs::symlink_metadata(a0, a1, a2);
        return a0;
    }
    std::fs::metadata(a0, a1, a2);
    return a0;
}
