fn uu_touch::filetime_to_datetime(a0: u64, a1: u64, a2: u32) -> long long {
    let v0: struct12;  // [bp-0x24], Other Possible Types: u8
    let v1: struct12;  // [bp-0x18]
    let v3: u64;  // rax

    v3 = chrono::datetime::DateTime<chrono::offset::utc::Utc>::from_timestamp(&v0, a1, a2);
    if !*(&v0 as &i32) {
        return struct4 {
            field_0: 0
        };
    }
    v1 = v0;
    return <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<chrono::datetime::DateTime<chrono::offset::utc::Utc>>>::from(a0, &v1);
}
