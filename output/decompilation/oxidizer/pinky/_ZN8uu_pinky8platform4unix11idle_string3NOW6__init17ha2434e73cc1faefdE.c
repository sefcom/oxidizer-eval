fn uu_pinky::platform::unix::idle_string::NOW::__init(a0: i64) -> double {
    let v0: struct16;  // [bp-0x18]
    let v2: u64;  // xmm0lq

    v0 = time::offset_date_time::OffsetDateTime::now_local();
    if *((&v0.field_0 as &char + 11) as &i8) != 1 {
        return struct16 {
            field_0: v0.field_0
        };
    }
    time::offset_date_time::OffsetDateTime::now_utc(a0);
    return v2;
}
