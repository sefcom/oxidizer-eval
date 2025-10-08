fn zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open() -> Result<struct64, struct8> {
    let a0: u64;  // rdi
    let v0: Result<struct24, struct16>;  // [bp-0x38]
    let v1: struct24;  // [bp-0x38], Other Possible Types: u64
    let v2: u64;  // [bp-0x30]
    let v3: struct24;  // [bp-0x20]

    v0 = zoxide::config::data_dir();
    if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
        v3 = v1;
        zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open_dir(a0, &v3);
        return;
    }
    return Err(v2);
}
