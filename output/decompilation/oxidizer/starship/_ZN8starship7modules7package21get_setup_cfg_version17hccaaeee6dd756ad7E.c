fn starship::modules::package::get_setup_cfg_version(a0: u64, a1: void*, a2: i64) -> long long {
    let v0: u128;  // [bp-0x1a8]
    let v1: u64;  // [bp-0x1a0]
    let v2: Option<struct48>;  // [bp-0x198]
    let v3: Option<struct24>;  // [bp-0x188]
    let v4: u64;  // [bp-0x188]
    let v5: Result<struct72, struct24>;  // [bp-0xd8]
    let v6: u8;  // [bp-0xd0]
    let v8: &str;  // rdx
    let v9: struct40;  // r15
    let v10: u32;  // rdx

    v3 = starship::context::Context::read_file_from_pwd(a1, "setup.cfg");
    if (((0 ^ v3 as i64) & (0 ^ -(v4))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v8 = *((&v3 as &char + 16) as &i64);
    v2 = *((&v3 as &char + 16) as &i64);
    v0 = v3 as i128;
    ini::Ini::load_from_str(&v3, v1, v8);
    match v3 {
        None => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Some(_) => {
            memcpy(&v6, &v3 as u8, 168);
            v5 = v3 as i64;
            v9 = ini::Ini::get_from(&v5);
            if !v9 || core::slice::<impl [T]>::starts_with(v9 as u32, v10 as u32) as u8 || core::slice::<impl [T]>::starts_with(v9 as u32, v10 as u32) as u8 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            starship::modules::package::format_version(a0, v9, v10, *((a2 + 48) as &i64), *((a2 + 56) as &i64));
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
