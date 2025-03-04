fn uu_touch::filetime_to_datetime(a0: &Option<struct16>, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x24]
    let v1: iNone;  // [sp-0x18]
    let v3: Option<struct12>;  // rax

    v3 = chrono::datetime::DateTime<chrono::offset::utc::Utc>::from_timestamp(a1, a2);
    if !*(&v0 as &i32) {
        return struct4 {
            field_0: 0
        };
    }
    v1 = *(&v0 as &i96);
    v3 = <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<chrono::datetime::DateTime<chrono::offset::utc::Utc>>>::from(a0, &v1);
}
