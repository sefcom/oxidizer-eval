fn uu_tail::follow::files::FileHandling::canonicalize_path(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct24, struct8>;  // [sp-0x30]
    let v3: i64;  // rax

    if !std::path::Path::is_absolute(a1, a2) as i8 && !<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(a1, a2) as i8 {
        v0 = std::fs::canonicalize(a1, a2);
        return struct24 {
            field_0: v0
            field_16: v2
        };
    }
    v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(a0, a1, a2);
}
