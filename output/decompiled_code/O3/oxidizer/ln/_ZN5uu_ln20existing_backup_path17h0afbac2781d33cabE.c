fn uu_ln::existing_backup_path(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: struct24;  // [sp-0xf0], Other Possible Types: i192
    let v1: Result<struct176, struct16>;  // [sp-0xd8], Other Possible Types: i1408

    v0 = uu_ln::simple_backup_path(a1, a2, ".~1~");
    v1 = std::fs::metadata(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
    if v1 != 2 {
        uu_ln::numbered_backup_path(a0, a1, a2);
    } else {
        uu_ln::simple_backup_path(a0, a1, a2, a3, a4);
    }
    return;
}
