fn uu_ls::PathData::new::get_file_type(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: Result<struct4, struct8>;  // [sp-0xe0]
    let v1: u128;  // [sp-0xd0], Other Possible Types: struct16
    let v3: u32;  // ebp

    if a3 {
        v1 = std::fs::metadata(a1, a2);
        if v1 as i32 != 2 {
            return 1;
        }
    }
    v0 = std::fs::DirEntry::file_type(a0) as u64;
    match v0 {
        Ok(_) => {
            v3 = 1;
        },
        Err(_) => {
            v1 = std::fs::symlink_metadata(a1, a2);
            v3 = (-0x100 | (v1 as i64 as i32 == 2) as u8 as u64) as u32 + 1;
        },
    }
    return v3;
}
