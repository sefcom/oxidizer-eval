fn uu_ln::existing_backup_path(a0: i32, a1: i64, a2: i32, a3: i32, a4: i32) -> int {
    let v0: u64;  // [bp-0xe8]
    let v1: u64;  // [bp-0xe0]
    let v2: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd8]
    let v4: u32;  // r9

    uu_ln::simple_backup_path(a1, a2, ".~1~", v4);
    v2 = std::fs::metadata(v0, v1);
    match v2 {
        Err(_) => {
            uu_ln::simple_backup_path(a1, a2, a3, a4, v4);
        },
        Ok(_) => {
            uu_ln::numbered_backup_path(a0, a1, a2 as u32);
        },
    }
    return;
}
