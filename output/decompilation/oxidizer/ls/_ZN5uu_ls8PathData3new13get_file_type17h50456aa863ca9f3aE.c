fn uu_ls::PathData::new::get_file_type(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: Result<struct4, struct8>;  // [sp-0xe0]
    let v1: Result<struct176, struct8>;  // [sp-0xd0]
    let v3: i32;  // ebp

    if a3 {
        v1 = std::fs::metadata(a1, a2);
        if v1 as i32 != 2 {
            return 1;
        }
    }
    v0 = std::fs::DirEntry::file_type(a0);
    match v0 {
        Err(_) => {
            v1 = std::fs::symlink_metadata(a1, a2);
        },
        Ok(_) => {
            return v3 as u64;
        },
    }
}
