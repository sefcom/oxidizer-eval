fn uu_cp::copydir::get_local_to_root_parent(a1: i64, a2: i32, a3: i64, a4: i32) -> : struct8 {
    let a0: i64;  // rdi

    if a3 {
        a1 = std::path::Path::strip_prefix(a1, a2, a3, a4);
        if !a1 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    return std::sys::pal::unix::os::split_paths::bytes_to_path(a1) as u64;
}
