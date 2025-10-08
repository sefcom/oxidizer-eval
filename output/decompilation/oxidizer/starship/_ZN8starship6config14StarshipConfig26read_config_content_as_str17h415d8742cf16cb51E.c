fn starship::config::StarshipConfig::read_config_content_as_str(a1: i64, a2: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0xd8], Other Possible Types: u64
    let v1: struct40;  // [bp-0xd0]
    let v2: i64;  // [bp-0xa8], Other Possible Types: u128
    let v3: u64;  // [bp-0xa0]
    let v4: u64;  // [bp-0x98]
    let v5: u64;  // [bp-0x88]
    let v6: u64;  // [bp-0x80]
    let v7: i64;  // [bp-0x78], Other Possible Types: struct_5 *, u64
    let v8: u64;  // [bp-0x70]
    let v9: void*;  // [bp-0x68]
    let v10: i64;  // [bp-0x58], Other Possible Types: struct_1 *
    let v11: u64;  // [bp-0x50]
    let v12: struct24;  // [bp-0x48]
    let v13: u64;  // [bp-0x40]
    let v14: u64;  // [bp-0x38]
    let v15: struct16;  // [bp-0x30]
    let v17: u64;  // r14

    v15 = struct16 {
        field_0: a1
        field_8: a2
    };
    if a1 {
        v12 = starship::utils::read_file(&v15);
        if v12.field_0 as i64 == 0x8000000000000000 {
            v0 = v13;
            v17 = (!std::io::error::Error::kind(v13) as u8) * 3 + 1;
            if v17 > core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v10 = &v0;
            v2 = &v10;
            v3 = <&T as core::fmt::Display>::fmt;
            v5 = "Unable to read config file content: ";
            v6 = 1;
            v9 = 0;
            v7 = &v2;
            v8 = 1;
            v1 = struct40 {
                field_0: "starship::config"
                field_16: "starship::config"
                field_32: log::__private_api::loc("src/config.rs")
            };
            log::__private_api::log(&v5, v17, &v1);
            return struct8 {
                field_0: 0x8000000000000000
            };
        } else {
            v4 = v14;
            v2 = v12.field_0;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 5 {
                return Some(struct24 {
                    field_0: v2
                    field_16: v4
                });
            }
            v0 = &v2;
            v10 = &v0;
            v11 = <&T as core::fmt::Display>::fmt;
            v5 = "Config file content: \"\n";
            v6 = 2;
            v9 = 0;
            v7 = &v10;
            v8 = 1;
            v1 = struct40 {
                field_0: "starship::config"
                field_16: "starship::config"
                field_32: log::__private_api::loc("src/config.rs")
            };
            log::__private_api::log(&v5, 5, &v1);
            return Some(struct24 {
                field_0: v2
                field_16: v4
            });
        }
    } else {
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 <= 3 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v5 = "Unable to determine `config_file_path`. Perhaps `utils::home_dir` is not defined on your platform?";
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v1 = struct40 {
            field_0: "starship::config"
            field_16: "starship::config"
            field_32: log::__private_api::loc("src/config.rs")
        };
        log::__private_api::log(&v5, 4, &v1);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
