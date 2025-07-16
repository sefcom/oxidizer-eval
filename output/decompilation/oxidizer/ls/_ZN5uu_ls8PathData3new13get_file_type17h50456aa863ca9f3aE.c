fn uu_ls::PathData::new::get_file_type(a0: i64, a1: i64, a2: i64, a3: i32) -> long long {
    let v0: u8;  // [bp-0xe0]
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd0]
    let v3: u32;  // ebp
    let v4: core::result::Result<std::fs::FileType, std::io::error::Error>;  // rax:rdx

    if a3 {
        v1 = std::fs::metadata(a1, a2);
        if let Ok(_) = v1 {
            return 1;
        }
    }
    v4 = std::fs::DirEntry::file_type(&v0);
    if *(&v0 as &i32) {
        v1 = std::fs::symlink_metadata(a1, a2);
    }
    return v3;
}
