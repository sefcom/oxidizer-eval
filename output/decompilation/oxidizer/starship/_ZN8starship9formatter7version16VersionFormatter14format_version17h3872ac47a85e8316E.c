fn starship::formatter::version::VersionFormatter::format_version(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: struct72;  // [bp-0x60]
    let v1: u64;  // [bp-0x60]
    let v2: u128;  // [bp-0x58]

    v0 = starship::formatter::version::VersionFormatter::new(a3, a4);
    if !((((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char) {
        starship::formatter::version::VersionFormatter::format(a0, &v0, a1, a2);
        return a0;
    }
    return struct32 {
        field_0: 1
        field_8: v2
        field_24: v0.field_24
    };
}
