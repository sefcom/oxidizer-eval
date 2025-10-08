fn uu_ln::existing_backup_path(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64) -> void {
    let v0: struct24;  // [bp-0xf8]
    let v1: u64;  // [bp-0xf0]
    let v2: u64;  // [bp-0xe8]
    let v3: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]

    v0 = uu_ln::simple_backup_path(a1, a2, ".~1~");
    v3 = std::fs::metadata(v1, v2);
    if v3 as i64 == 2 {
        uu_ln::simple_backup_path(a0, a1, a2, a3, a4);
    } else {
        uu_ln::numbered_backup_path(a0, a1, a2);
    }
    return;
}
