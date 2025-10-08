long long zoxide::config::exclude_dirs(unsigned long long a0)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    char v3;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    char v7;  // [bp-0x30]

    std::env::var_os(&v0, "_ZO_EXCLUDE_DIRS", 16);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        v3 = std::path::Path::to_path_buf;
        v4 = v1;
        v5 = v2;
        v6 = std::sys::pal::unix::os::split_paths::is_separator;
        v7 = 0;
        a0.collect(&v3);
        return (unsigned long long)core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v4);
    }
    zoxide::config::exclude_dirs::{{closure}}(&v3);
    return a0.collect(&v3);
}
