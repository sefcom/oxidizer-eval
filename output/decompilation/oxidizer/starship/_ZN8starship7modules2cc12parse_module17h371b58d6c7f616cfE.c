fn starship::modules::cc::parse_module(a0: u64, a1: u64, a2: u64, a3: i64, a4: u64) -> void {
    let v0: Result<struct72, struct24>;  // [bp-0x108]
    let v1: u64;  // [bp-0x108]
    let v2: struct24;  // [bp-0xf0]
    let v3: struct72;  // [bp-0xc0]
    let v4: struct72;  // [bp-0x78]

    v0 = starship::formatter::string_formatter::StringFormatter::new(*((a3 + 96) as &i64), *((a3 + 104) as &i64));
    v3 = struct72 {
        field_0: a1
        field_8: *((a3 + 112) as &i128)
        field_24: a3 + 128
        field_32: *((a3 + 144) as &i128)
        field_48: a3 + 72
        field_56: a4
        field_64: a2
    };
    if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
        v4 = v1;
        starship::modules::cc::parse_module::{{closure}}(a0, &v3, &v4);
    }
    return struct32 {
        field_0: 1
        field_8: *((&v0 as &char + 8) as &i128)
        field_24: v2
    };
}
