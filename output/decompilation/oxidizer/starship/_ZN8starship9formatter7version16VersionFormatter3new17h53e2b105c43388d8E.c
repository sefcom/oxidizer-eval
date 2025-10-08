fn starship::formatter::version::VersionFormatter::new(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: iNone;  // [bp-0x68]
    let v1: u64;  // [bp-0x58]
    let v2: Result<struct72, struct24>;  // [bp-0x50]
    let v3: iNone;  // [bp-0x48]
    let v4: u64;  // [bp-0x38]
    let v5: struct24;  // [bp-0x30]
    let v6: iNone;  // [bp-0x20]

    v2 = starship::formatter::string_formatter::StringFormatter::new(a1, a2);
    v0 = v3;
    v1 = v4;
    return struct72 {
        field_0: v2 as i64
        field_8: v0
        field_24: v1
        field_32: v5
        field_48: v6
        field_64: *((&v2 as &char + 64) as &i64)
    };
}
