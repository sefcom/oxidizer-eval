fn uu_install::is_new_file_path(a0: u64, a1: u64) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd0]
    let v2: u64;  // rbp
    let v3: u64;  // rax
    let v4: u64;  // rbp
    let v5: u64;  // rdx

    v0 = std::fs::metadata(a0, a1);
    v2 = v0 as i32;
    if v2 == 2 {
        v3 = std::path::Path::parent(a0, a1);
        v4 = v2 & 0xffffff00 | 1;
        if v3 && !std::path::Path::is_dir(v3, v5) && !std::path::Path::parent(a0, a1) {
            core::option::unwrap_failed(); /* do not return */
        }
    }
    return v4 & 4294967295;
}
