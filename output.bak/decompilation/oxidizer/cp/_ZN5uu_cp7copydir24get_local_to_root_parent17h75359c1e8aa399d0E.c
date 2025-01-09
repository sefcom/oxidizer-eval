fn uu_cp::copydir::get_local_to_root_parent(a0: &struct8, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    if a3 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return std::sys::pal::unix::os::split_paths::bytes_to_path(a0, std::path::Path::strip_prefix(a1, a2, a3, a4), a2);
}
