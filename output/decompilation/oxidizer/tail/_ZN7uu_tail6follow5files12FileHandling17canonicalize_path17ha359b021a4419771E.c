fn uu_tail::follow::files::FileHandling::canonicalize_path(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x30]
    let v2: u64;  // rdi
    let v3: i64;  // rdi

    if !std::path::Path::is_absolute(a0, a1) && !<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(a0, a1) as i8 {
        v0 = std::fs::canonicalize(a0, a1);
        if let Ok(_) = v0 {
            *((v3 + 16) as &i64) = *((&v0 as &char + 16) as &i64);
            *(v3 as &i128) = v0 as i128;
            return;
        }
    }
    std::sys::pal::unix::os::split_paths::bytes_to_path(v2);
    return;
}
