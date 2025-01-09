fn uu_tail::follow::files::FileHandling::canonicalize_path(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i192;  // [sp-0x30], Other Possible Types: Result<struct24, struct8>

    if !std::path::Path::is_absolute(a1, a2) as i8 && !<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(a1, a2) as i8 {
        v0 = std::fs::canonicalize(a1, a2);
        if v0 != 0x8000000000000000 {
            return struct24 {
                field_0: v0
                field_16: v2
            };
        }
    }
    std::sys::pal::unix::os::split_paths::bytes_to_path(a0, a1, a2);
}
