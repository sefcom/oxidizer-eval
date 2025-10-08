fn just::function::datetime_utc(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0xb0], Other Possible Types: struct33
    let v1: struct12;  // [bp-0x84]
    let v2: struct60;  // [bp-0x78]

    v1 = chrono::offset::utc::Utc::now();
    v0 = struct33 {
        field_0: a2
        field_8: a3
        field_16: ""
        field_32: 0
    };
    v2 = chrono::datetime::DateTime<Tz>::format_with_items(&v1, &v0);
    v0 = <T as alloc::string::SpecToString>::spec_to_string(&v2);
    return struct32 {
        field_0: 0
        field_8: v0.field_0
        field_24: 8
    };
}
