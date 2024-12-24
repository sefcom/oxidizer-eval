fn uu_ls::get_metadata_with_deref_opt(a0: void*, a1: u64, a2: u64, a3: u32) -> u64 {
    if !a3 {
        std::fs::symlink_metadata(a0, a1, a2);
        return a0;
    }
    std::fs::metadata(a0, a1, a2);
    return a0;
}
