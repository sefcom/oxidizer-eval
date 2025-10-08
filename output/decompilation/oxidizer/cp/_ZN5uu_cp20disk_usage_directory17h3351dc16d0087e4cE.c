fn uu_cp::disk_usage_directory(a0: i64, a1: i64) -> u64 {
    let v2: struct16;  // [bp-0x138]
    let v4: u8;  // [bp-0x110]
    let v5: core::fmt::rt::Argument;  // [bp-0x108]
    let v6: struct16;  // [bp-0x108]
    let v8: Result<struct4, struct8>;  // [bp-0xe0], Other Possible Types: struct9
    let v9: struct24;  // [bp-0xe0]
    let v10: Result<struct176, struct16>;  // [bp-0xe0]
    let v11: struct32;  // [bp-0xdc]
    let v12: Option<struct32>;  // [bp-0xd8]
    let v14: core::fmt::rt::Argument;  // r14
    let v15: Result<struct4, struct8>;  // r15
    let v17: Result<struct1, struct8>;  // r12
    let v18: struct16;  // r13

    v8 = std::fs::read_dir(a0, a1);
    if v8.field_8 as i8 == 2 {
        return 1;
    }
    loop {
        <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v17, v18);
        if *(&v4 as &i32) != 1 {
            return 0;
        }
        if !v5 {
            break;
        }
        *((v15 + 16) as &i64) = *((v14 + 16) as &i64);
        *(v15 as &i128) = *(v14 as &i128);
        v2 = v6;
        v8 = std::fs::DirEntry::file_type(&v2);
        if let Err(_) = v8 {
            break;
        }
        if (v11 as u16 & 0xf000) == 0x4000 {
            v9 = std::fs::DirEntry::path(&v2);
            if (uu_cp::disk_usage_directory(v12, v9.field_16) & 1) {
                break;
            }
        } else {
            v10 = std::fs::DirEntry::metadata(&v2);
            if let Err(_) = v10 {
                break;
            }
        }
    }
    return 1;
}
