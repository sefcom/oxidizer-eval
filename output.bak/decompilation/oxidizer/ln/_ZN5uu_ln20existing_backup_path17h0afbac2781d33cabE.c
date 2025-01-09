fn uu_ln::existing_backup_path(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i192;  // [sp-0xf0], Other Possible Types: struct24
    let v1: i128;  // [sp-0xd8], Other Possible Types: struct16

    v0 = uu_ln::simple_backup_path(a1, a2, ".~1~");
    v1 = std::fs::metadata(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
    if v1 != 2 {
        uu_ln::numbered_backup_path(a0, a1, a2);
    } else {
        uu_ln::simple_backup_path(a0, a1, a2, a3, a4);
    }
    return;
}
