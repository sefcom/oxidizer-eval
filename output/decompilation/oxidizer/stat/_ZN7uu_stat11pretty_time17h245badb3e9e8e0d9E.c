fn uu_stat::pretty_time(a1: i64, a2: i32) -> : struct24 {
    let a0: u64;  // rdi
    let v0: struct12;  // [bp-0xb8]
    let v1: u64;  // [bp-0xb8]
    let v2: struct33;  // [bp-0xa8]
    let v3: Option<struct12>;  // [bp-0x80], Other Possible Types: struct60
    let v5: struct16;  // [bp-0x28]

    v3 = chrono::datetime::DateTime<chrono::offset::utc::Utc>::from_timestamp(a1, a2);
    if let None = v3 {
        v0 = <chrono::datetime::DateTime<chrono::offset::utc::Utc> as core::default::Default>::default();
    }
    v5 = <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<chrono::datetime::DateTime<chrono::offset::utc::Utc>>>::from(&v1);
    v2 = struct33 {
        field_0: "%Y-%m-%d %H:%M:%S.%f %z"
        field_16: ""
        field_32: 0
    };
    v3 = chrono::datetime::DateTime<Tz>::format_with_items(&v5, &v2);
    <T as alloc::string::SpecToString>::spec_to_string(a0, &v3);
    return;
}
