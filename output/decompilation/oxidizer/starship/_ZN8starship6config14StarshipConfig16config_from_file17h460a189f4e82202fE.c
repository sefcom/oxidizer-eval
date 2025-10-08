fn starship::config::StarshipConfig::config_from_file(a1: i64, a2: i64) -> Option<struct80> {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0x150], Other Possible Types: struct_4 *
    let v1: u64;  // [bp-0x148]
    let v2: struct40;  // [bp-0x140]
    let v3: Option<struct24>;  // [bp-0x118], Other Possible Types: struct88, u128
    let v4: u128;  // [bp-0x108]
    let v5: iNone;  // [bp-0xf8]
    let v6: iNone;  // [bp-0xe8]
    let v7: iNone;  // [bp-0xd8]
    let v8: i64;  // [bp-0xc0]
    let v9: u64;  // [bp-0xb8]
    let v10: u64;  // [bp-0xb0]
    let v11: i64;  // [bp-0xa8], Other Possible Types: struct_1 *
    let v12: u64;  // [bp-0xa0]
    let v13: void*;  // [bp-0x98]
    let v14: u128;  // [bp-0x88]
    let v15: u64;  // [bp-0x80]
    let v16: u64;  // [bp-0x78]
    let v17: struct88;  // [bp-0x70]
    let v18: struct88;  // [bp-0x70]
    let v20: u64;  // rdx

    v3 = starship::config::StarshipConfig::read_config_content_as_str(a1, a2);
    if (((0 ^ v3 as i64) & (0 ^ -(v3 as i64))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v20 = *((&v3 as &char + 16) as &i64);
    v16 = *((&v3 as &char + 16) as &i64);
    v14 = v3 as i128;
    v18 = toml::de::from_str(v15, v20);
    if v18.field_0 as i32 == 2 {
        v7 = *((&v18.field_64 as &char + 8) as &i128);
        v6 = *((&v18.field_48 as &char + 8) as &i128);
        v5 = *((&v18.field_32 as &char + 8) as &i128);
        v4 = *((&v18.field_16 as &char + 8) as &i128);
        v3 = *((&v18.field_0 as &char + 8) as &i128);
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 4 {
            return Some(struct80 {
                field_0: v3
                field_16: v4
                field_32: v5
                field_48: v6
                field_64: v7
            });
        }
        v8 = &v3;
        v0 = &v8;
        v1 = <&T as core::fmt::Debug>::fmt;
        v9 = "Config parsed: ";
        v10 = 1;
        v13 = 0;
        v11 = &v0;
        v12 = 1;
        v2 = struct40 {
            field_0: "starship::config"
            field_16: "starship::config"
            field_32: log::__private_api::loc("src/config.rs")
        };
        log::__private_api::log(&v9, 4, &v2);
        return Some(struct80 {
            field_0: v3
            field_16: v4
            field_32: v5
            field_48: v6
            field_64: v7
        });
    } else {
        v3 = v17;
        if !core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v0 = &v3;
        v1 = <toml::de::error::Error as core::fmt::Display>::fmt;
        v9 = "Unable to parse the config file: ";
        v10 = 1;
        v13 = 0;
        v11 = &v0;
        v12 = 1;
        v2 = struct40 {
            field_0: "starship::config"
            field_16: "starship::config"
            field_32: log::__private_api::loc("src/config.rs")
        };
        log::__private_api::log(&v9, 1, &v2);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
