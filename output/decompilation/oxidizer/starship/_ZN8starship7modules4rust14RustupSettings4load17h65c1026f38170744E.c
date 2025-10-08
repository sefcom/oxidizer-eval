fn starship::modules::rust::RustupSettings::load(a0: u64) -> void {
    let v0: &str;  // [bp-0x58], Other Possible Types: Option<struct24>
    let v1: struct40;  // [bp-0x50]
    let v2: u64;  // [bp-0x48]
    let v3: Result<struct24, struct16>;  // [bp-0x40], Other Possible Types: struct24
    let v4: u64;  // [bp-0x40]
    let v5: struct40;  // [bp-0x38]
    let v6: u8;  // [bp-0x28]

    v3 = home::rustup_home();
    if !((((0 ^ v3.field_0) & (0 ^ -(v4))) >> 63) as char) {
        v1 = v5;
        v0 = v3.field_0;
        std::path::Path::join(&v6, v1.field_0 as i64, v2, "settings.toml");
        v3 = std::fs::read_to_string(&v6);
        if let Ok(_) = v3 {
            v1 = v5;
            v0 = v3 as i64;
            starship::modules::rust::RustupSettings::from_toml_str(a0, v1.field_0 as i64, v2);
            return;
        }
    }
    return struct8 {
        field_0: 9223372036854775809
    };
}
