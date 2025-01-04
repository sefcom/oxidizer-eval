fn uu_tail::follow::files::FileHandling::canonicalize_path(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [sp-0x30], Other Possible Types: Result<struct24, struct16>
    let v2: i64;  // rdx
    let v3: i64;  // rcx
    let v4: i64;  // r8
    let v5: i64;  // r9
    let v6: i64;  // rax

    if !std::path::Path::is_absolute(a1, a2) as i8 && !<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(a1, a2, v2, v3, v4, v5) as i8 {
        v0 = std::fs::canonicalize(a1, a2);
        if v0 != 0x8000000000000000 {
            v6 = *((&v0 as &char + 16) as &i64);
            return struct24 {
                field_0: v0
                field_16: v6
            };
        }
    }
    v6 = std::sys::pal::unix::os::split_paths::bytes_to_path(a0, a1, a2);
    return v6;
}
