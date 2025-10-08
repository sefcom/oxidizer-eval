fn starship::modules::package::get_vpkg_version(a0: u64, a1: void*, a2: i64) -> long long {
    let v0: u128;  // [bp-0x88]
    let v1: i64;  // [bp-0x80]
    let v2: struct24;  // [bp-0x78]
    let v3: Option<struct24>;  // [bp-0x70]
    let v4: Result<struct32, struct9>;  // [bp-0x70]
    let v5: u128;  // [bp-0x60]
    let v6: struct24;  // [bp-0x50]
    let v7: u128;  // [bp-0x4f]
    let v8: Result<struct32, struct9>;  // [bp-0x40]
    let v9: struct24;  // [bp-0x30]
    let v11: i64;  // rax

    v3 = starship::context::Context::read_file_from_pwd(a1, "vpkg.json");
    if (((0 ^ v3 as i64) & (0 ^ -(v3 as i64))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v2 = *((&v3 as &char + 16) as &i64);
    v0 = v3 as i128;
    v9 = struct24 {
        field_0: v1
        field_16: 0
    };
    v4 = serde_json::de::from_trait(&v9, a2 as u8);
    match v4 {
        Err(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Ok(_) => {
            v8 = v5;
            v7 = *((&v4 as &char + 1) as &i128) as u128;
            v6 = v4 as i8;
            v11 = serde_json::value::Value::get(&v6, "version");
            if !v11 || *(v11 as &i8) != 3 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            starship::modules::package::format_version(a0, *((v11 + 16) as &i64), *((v11 + 24) as &i64), *((a2 + 48) as &i64), *((a2 + 56) as &i64));
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
