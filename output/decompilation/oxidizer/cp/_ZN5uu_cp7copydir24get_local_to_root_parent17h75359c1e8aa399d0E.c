fn uu_cp::copydir::get_local_to_root_parent(a0: &struct8, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v1: u64;  // rax

    if a3 {
        v1 = std::path::Path::strip_prefix(a1, a2, a3, a4);
        if !v1 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    return std::sys::pal::unix::os::split_paths::bytes_to_path(a0, v1, a2);
}
