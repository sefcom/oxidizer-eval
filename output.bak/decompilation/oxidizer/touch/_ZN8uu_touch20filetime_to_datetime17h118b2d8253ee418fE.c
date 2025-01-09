fn uu_touch::filetime_to_datetime(a0: &Option<struct16>, a1: u32, a2: u32) -> u64 {
    let v2: struct12;  // [bp-0x18]
    let v4: Option<struct12>;  // rax

    v4 = chrono::datetime::DateTime<chrono::offset::utc::Utc>::from_timestamp(a1, a2);
    return struct4 {
        field_0: 0
    };
    v2 = struct12 {
        field_0: v0
        field_8: v1
    };
    v4 = <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<chrono::datetime::DateTime<chrono::offset::utc::Utc>>>::from(a0, &v2);
}
