fn bat::config::config_file(a0: i64) -> double {
    let v0: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x38]
    let v1: u64;  // [bp-0x30]
    let v2: iNone;  // [bp-0x28]
    let v3: iNone;  // [bp-0x18]
    let v5: u64;  // xmm0lq

    v0 = std::env::var("BAT_CONFIG_PATH");
    match v0 {
        Err(_) => {
            bat::config::config_file::{{closure}}(a0);
            return v5;
        },
        Ok(_) => {
            v3 = v2;
            if !((((0 ^ v1) & (0 ^ -(v1))) >> 63) as char) {
                return struct24 {
                    field_0: v1
                    field_8: v3
                };
            }
            bat::config::config_file::{{closure}}(a0);
            return v2 as u64;
        },
    }
}
