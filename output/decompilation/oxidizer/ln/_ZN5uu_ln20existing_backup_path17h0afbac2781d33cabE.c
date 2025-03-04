fn uu_ln::existing_backup_path(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct24;  // [sp-0xf0]
    let v1: Result<struct176, struct8>;  // [sp-0xd8]

    v0 = uu_ln::simple_backup_path(a1, a2, ".~1~");
    v1 = std::fs::metadata(*((&v0.field_0 as &char + 8) as &i64), v0.field_16);
    match v1 {
        Ok(_) => {
            uu_ln::numbered_backup_path(a0, a1, a2);
        },
        Err(_) => {
            uu_ln::simple_backup_path(a0, a1, a2, a3, a4);
        },
    }
    return;
}
