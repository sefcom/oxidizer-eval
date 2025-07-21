fn uu_cp::disk_usage_directory(a0: i64, a1: i64) -> long long {
    let v0: struct16;  // [bp-0x148]
    let v1: struct40;  // [bp-0x138]
    let v2: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0x110]
    let v3: struct40;  // [bp-0x108]
    let v4: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x108]
    let v5: core::fmt::rt::Argument;  // [bp-0xe0], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>, struct9
    let v6: std::path::PathBuf;  // [bp-0xe0], Other Possible Types: struct16
    let v7: u32;  // [bp-0xdc]
    let v8: u64;  // [bp-0xd8]
    let v10: core::result::Result<std::fs::FileType, std::io::error::Error>;  // rax:rdx

    v5 = std::fs::read_dir(a0, a1);
    if v5.field_8 != 2 {
        v0 = v6;
        loop {
            v2 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v0);
            if let None = v2 {
                return 0;
            }
            if !v4 || !((v1 = v3, v10 = std::fs::DirEntry::file_type(&v2 as u8), !v5)) {
                break;
            }
            if (v7 & 0xf000) == 0x4000 {
                v6 = std::fs::DirEntry::path(&v1);
                if uu_cp::disk_usage_directory(v8, v6.inner.inner.inner.len) {
                    break;
                }
            } else {
                v5 = std::fs::DirEntry::metadata(&v1);
                if let Err(_) = v5 {
                    break;
                }
            }
        }
    }
    return 1;
}
