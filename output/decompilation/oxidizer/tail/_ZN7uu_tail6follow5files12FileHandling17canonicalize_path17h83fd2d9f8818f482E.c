fn uu_tail::follow::files::FileHandling::canonicalize_path(a1: &[u8]) -> : struct24 {
    let a0: u64;  // rdi
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x30]
    let v2: u32;  // esi

    if !std::path::Path::is_absolute(a1) && !<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(a1) {
        v0 = std::fs::canonicalize(a1);
        if !((((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char) {
            return struct24 {
                field_0: v0 as i128
                field_16: *((&v0 as &char + 16) as &i64)
            };
        }
    }
    std::sys::pal::unix::os::split_paths::bytes_to_path(a0, v2);
    return;
}
