fn fd::filesystem::is_existing_directory(a0: &std::path::Path) -> u64 {
    let v0: struct24;  // [bp-0x38]
    let v2: u64;  // rdi
    let v3: u64;  // rsi
    let v4: u64;  // rbp

    if std::path::Path::is_dir(v2, v3) {
        v4 = vvar_15{reg 56} & -0x100 | 1;
        if !std::path::Path::file_name(a0) {
            v0 = normpath::imp::normalize(a0);
        }
    }
    return v4 & 4294967295;
}
