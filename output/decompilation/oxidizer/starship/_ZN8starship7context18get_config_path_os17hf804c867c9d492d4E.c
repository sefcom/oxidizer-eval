fn starship::context::get_config_path_os() -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x70]
    let v1: u64;  // [bp-0x60], Other Possible Types: unsigned long
    let v2: u128;  // [bp-0x58]
    let v3: u64;  // [bp-0x50]
    let v4: struct176;  // [bp-0x48]
    let v5: u8;  // [bp-0x40]
    let v6: i64;  // [bp-0x38]
    let v7: i64;  // [bp-0x30]
    let v8: struct80;  // [bp-0x28], Other Possible Types: u8
    let v9: i8;  // [bp-0x18]

    v0 = starship::context_env::Env::get_env_os("STARSHIP_CONFIG");
    if !((((0 ^ v0.field_0) & (0 ^ -(v0.field_0))) >> 63) as char) {
        return Some(struct24 {
            field_0: *(&v0.field_0 as &i128)
            field_16: v1
        });
    }
    starship::context::home_dir(&v0);
    if v0.field_0 != 0x8000000000000000 {
        v4 = v1;
        v2 = *(&v0.field_0 as &i128);
        std::path::Path::join(&v5, v3, v1, ".config");
        std::path::Path::join(&v8, v6, v7, "starship.toml");
        return Some(struct24 {
            field_0: v8
            field_16: *(&v9 as &i64)
        });
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
