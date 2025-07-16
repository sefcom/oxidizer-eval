fn uu_cp::disk_usage_directory(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x148]
    let v1: u8;  // [bp-0x140]
    let v2: u64;  // [bp-0x138]
    let v3: u64;  // [bp-0x130]
    let v4: u128;  // [bp-0x128]
    let v5: u64;  // [bp-0x118]
    let v6: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0x110]
    let v7: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x108]
    let v8: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x100]
    let v9: u128;  // [bp-0xf8]
    let v10: u64;  // [bp-0xe8]
    let v11: struct9;  // [bp-0xe0], Other Possible Types: u32, core::result::Result<std::fs::Metadata, std::io::error::Error>
    let v12: std::path::PathBuf;  // [bp-0xe0]
    let v13: u32;  // [bp-0xdc]
    let v14: u64;  // [bp-0xd8]
    let v16: core::result::Result<std::fs::FileType, std::io::error::Error>;  // rax:rdx

    v11 = std::fs::read_dir(a0, a1);
    if v11.field_8 == 2 {
        return 1;
    }
    v0 = v11.field_0;
    v1 = v11.field_8;
    loop {
        v6 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v0);
        if let None = v6 {
            return 0;
        }
        if !v7 {
            break;
        }
        v5 = v10;
        v4 = v9;
        v2 = v7;
        v3 = v8;
        v16 = std::fs::DirEntry::file_type(&v6 as u8);
        if v11 {
            break;
        }
        if (v13 & 0xf000) == 0x4000 {
            v12 = std::fs::DirEntry::path(&v2);
            if uu_cp::disk_usage_directory(v14, v12.inner.inner.inner.len) {
                break;
            }
        } else {
            v11 = std::fs::DirEntry::metadata(&v2);
            if let Err(_) = v11 {
                break;
            }
        }
    }
    return 1;
}
