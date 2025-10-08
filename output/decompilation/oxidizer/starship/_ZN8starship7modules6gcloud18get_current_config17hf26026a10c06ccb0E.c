fn starship::modules::gcloud::get_current_config(a0: i64, a1: u64) -> int {
    let v0: Option<struct32>;  // [bp-0xd8], Other Possible Types: u128
    let v1: u64;  // [bp-0xd8]
    let v2: struct24;  // [bp-0xd0]
    let v3: struct24;  // [bp-0xc8], Other Possible Types: struct40, unsigned long
    let v4: u64;  // [bp-0xc0]
    let v5: struct160;  // [bp-0xb8]
    let v6: u64;  // [bp-0xb0]
    let v7: u128;  // [bp-0xa8]
    let v8: u64;  // [bp-0xa0]
    let v9: <anon>;  // [bp-0x98]
    let v10: core::option::Option<&str>;  // [bp-0x88]
    let v11: Option<struct48>;  // [bp-0x78]
    let v12: struct176;  // [bp-0x68], Other Possible Types: struct24
    let v13: struct24;  // [bp-0x60]
    let v14: u64;  // [bp-0x58]
    let v15: u8;  // [bp-0x50]
    let v16: void*;  // [bp-0x48]
    let v17: &u8;  // [bp-0x40]
    let v18: u8;  // [bp-0x38]
    let v20: u64;  // rdx

    v0 = starship::modules::gcloud::get_config_dir(a1);
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v9 = v3;
    v7 = v0 as i128;
    v0 = starship::modules::gcloud::get_active_config(v8, v3);
    match v0 {
        Some(_) => {
            v11 = v3;
            v10 = v0 as i128;
            std::path::Path::join(&v15, v8, v3, "configurations");
            v12 = &v10;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = "config_";
            v2 = 1;
            v5 = 0;
            v3 = &v12;
            v4 = 1;
            core::option::Option<T>::map_or_else(&v18, 0, v20, &v0);
            v12 = std::path::Path::join(v16, v17, &v18);
            v3 = v11;
            *(&v0 as &core::option::Option<&str>) = v10;
            v6 = v14;
            v4 = v12.field_0;
            return struct48 {
                field_0: v10
                field_16: v3
                field_24: v4
                field_32: 0
                field_40: v6
            };
        },
        None => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
