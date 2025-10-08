fn fd::filesystem::path_absolute_form(a0: u64, a1: &u8, a2: u64) -> long long {
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x60]
    let v1: struct24;  // [bp-0x60]
    let v2: i64;  // [bp-0x50]
    let v3: struct24;  // [bp-0x48]
    let v5: &u8;  // r13
    let v6: &u8;  // r14
    let v7: u64;  // 4096
    let v8: u64;  // rdx

    if std::path::Path::is_absolute(a1, a2) {
        return std::sys::pal::unix::os::split_paths::bytes_to_path(a0, a1 as u32);
    }
    v5 = std::path::Path::strip_prefix(a1, a2);
    v0 = std::env::current_dir();
    if (((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char {
        return struct24 {
            field_0: v0 as i128
            field_16: v2
        };
    }
    if v5 {
        v6 = v5;
        if v5 {
            goto LABEL_5f4113;
        }
LABEL_5f4112:
        v7 = a2;
    } else {
        v6 = a1;
        if !v5 {
            goto LABEL_5f4112;
        }
LABEL_5f4113:
        v7 = v8;
    }
    v3 = v1;
    return fd::filesystem::path_absolute_form::{{closure}}(a0, v6, v7, &v3);
}
