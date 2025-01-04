fn uu_cp::copydir::get_local_to_root_parent(a0: &u64, a1: u64, a2: u64, a3: u64, a4: u64) -> u64 {
    if a3 {
        a1 = std::path::Path::strip_prefix(a1, a2, a3, a4);
        if !a1 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    return std::sys::pal::unix::os::split_paths::bytes_to_path(a0, a1, a2);
}
