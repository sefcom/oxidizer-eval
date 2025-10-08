fn starship::formatter::version::VersionFormatter::format(a1: i64, a2: i64, a3: i64) -> Result<struct24, struct24> {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0xf0]
    let v1: u8;  // [bp-0xf0]
    let v2: u8;  // [bp-0xd8]
    let v3: struct32;  // [bp-0xc8]
    let v4: u64;  // [bp-0xc0]
    let v5: struct16;  // [bp-0xb0]
    let v6: struct24;  // [bp-0xa8]
    let v7: struct72;  // [bp-0xa8]
    let v8: i64;  // [bp-0x60]
    let v9: u32;  // [bp-0x10]

    v9 = 0;
    v8 = &v2;
    v0 = struct40 {
        field_0: a2
        field_8: a3
        field_16: &v8
        field_24: a2
        field_32: a3
    };
    v7 = starship::formatter::string_formatter::StringFormatter::map(a1, &v0);
    v1 = 2;
    v3 = starship::formatter::string_formatter::StringFormatter::parse(&v7, &v1 as u32, 0);
    if v3.field_0 as i32 != 1 {
        v6 = starship::formatter::version::VersionFormatter::format::{{closure}}(&v3 as u8);
        return Ok(struct24 {
            field_0: v6.field_0
            field_16: v6.field_16
        });
    }
    return Err(struct24 {
        field_0: v4
        field_16: v5
    });
}
