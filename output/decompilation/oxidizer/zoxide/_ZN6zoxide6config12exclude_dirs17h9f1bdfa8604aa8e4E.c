fn zoxide::config::exclude_dirs(a0: i64) {
    let v0: struct24;  // [bp-0x68]
    let v1: u64;  // [bp-0x68]
    let v2: u64;  // [bp-0x60]
    let v3: u64;  // [bp-0x58]
    let v4: struct33;  // [bp-0x50], Other Possible Types: struct8

    v0 = std::env::var_os("_ZO_EXCLUDE_DIRS");
    if !((((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char) {
        v4 = struct33 {
            field_0: std::path::Path::to_path_buf
            field_8: v2
            field_16: v3
            field_24: std::sys::pal::unix::os::split_paths::is_separator
            field_32: 0
        };
        core::iter::traits::iterator::Iterator::collect(a0, &v4);
        return;
    }
    v4 = zoxide::config::exclude_dirs::{{closure}}();
    core::iter::traits::iterator::Iterator::collect(a0, &v4);
    return;
}
