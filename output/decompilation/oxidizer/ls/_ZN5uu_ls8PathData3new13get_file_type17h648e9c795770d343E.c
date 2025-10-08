fn uu_ls::PathData::new::get_file_type(a0: void*, a1: u32, a2: i64, a3: u32) -> long long {
    let v0: Result<struct4, struct8>;  // [bp-0xc8]

    if a3 {
        v0 = std::fs::metadata(a1);
        if let Ok(_) = v0 {
            return 1;
        }
    }
    v0 = std::fs::DirEntry::file_type(a0);
    match v0 {
        Ok(_) => {
            return 1;
        },
        Err(_) => {
            v0 = std::fs::symlink_metadata(a1);
            return 1;
        },
    }
}
