fn starship::formatter::string_formatter::StringFormatter::parse::parse_textgroup(a0: u64, a1: u64, a2: u32, a3: u32, a4: u64) -> int {
    let v0: struct33;  // [bp-0xa0]
    let v1: struct24;  // [bp-0x7b]
    let v2: struct24;  // [bp-0x7a]
    let v3: struct40;  // [bp-0x6a]
    let v4: struct25;  // [bp-0x68]
    let v5: <anon>;  // [bp-0x58]
    let v6: core::fmt::rt::Argument;  // [bp-0x48]
    let v7: core::fmt::Arguments;  // [bp-0x38]

    v0 = starship::formatter::string_formatter::StringFormatter::parse::parse_style(a1 + 24, a3);
    if v0.field_0 != 2 && (v0.field_0 & 1) {
        return struct32 {
            field_0: 1
            field_8: v0.field_1
            field_24: v0.field_16
        };
    }
    v7 = v5;
    v6 = v4;
    v1 = 2;
    v2 = v6;
    v3 = v5;
    starship::formatter::string_formatter::StringFormatter::parse::parse_format(a0, a1, &v1, a2, a3, a4);
    return;
}
