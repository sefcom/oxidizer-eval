fn uu_who::platform::unix::idle_string::NOW::__init(a0: u64) -> long long {
    let v0: struct16;  // [bp-0x20]

    v0 = time::offset_date_time::OffsetDateTime::now_local();
    return core::result::Result<T,E>::unwrap(a0, &v0) as u64;
}
