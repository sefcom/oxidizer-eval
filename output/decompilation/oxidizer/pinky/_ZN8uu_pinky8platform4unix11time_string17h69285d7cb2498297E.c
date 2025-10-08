fn uu_pinky::platform::unix::time_string(a0: u64, a1: &u64) -> void {
    let v0: struct24;  // [bp-0x70]
    let v1: u64;  // [bp-0x68]
    let v2: u64;  // [bp-0x60]
    let v3: struct16;  // [bp-0x58]
    let v4: Result<struct24, struct24>;  // [bp-0x48], Other Possible Types: struct48

    v4 = time::format_description::parse::parse("[month repr:short] [day padding:space] [hour]:[minute]");
    v0 = core::result::Result<T,E>::unwrap(&v4);
    v3 = uucore::features::utmpx::Utmpx::login_time(a1);
    v4 = time::offset_date_time::OffsetDateTime::format(&v3, v1, v2);
    core::result::Result<T,E>::unwrap(a0, &v4);
    return;
}
