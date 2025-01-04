fn uu_touch::filetime_to_datetime(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i8;  // [bp-0x24]
    let v1: i96;  // [bp-0x18]
    let v3: Option<struct12>;  // rax

    v3 = chrono::datetime::DateTime<chrono::offset::utc::Utc>::from_timestamp(a1, a2);
    if !v0 {
        return struct4 {
            field_0: 0
        };
    }
    v1 = v0;
    v3 = <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<chrono::datetime::DateTime<chrono::offset::utc::Utc>>>::from(a0, &v1);
    return v3;
}
