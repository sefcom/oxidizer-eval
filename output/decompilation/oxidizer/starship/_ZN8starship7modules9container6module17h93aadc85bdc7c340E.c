fn starship::modules::container::module(a0: i64, a1: u64) -> void {
    let v0: u128;  // [bp-0x1d8]
    let v1: u64;  // [bp-0x1c8]
    let v2: Option<struct24>;  // [bp-0x1b8], Other Possible Types: struct72, struct8
    let v3: u64;  // [bp-0x1b8]
    let v4: struct24;  // [bp-0x1b0]
    let v5: i64;  // [bp-0x1a8], Other Possible Types: u64
    let v6: core::fmt::Arguments;  // [bp-0x1a0]
    let v7: struct16;  // [bp-0x198]
    let v8: struct32;  // [bp-0x168]
    let v9: struct49;  // [bp-0x160]
    let v10: struct32;  // [bp-0x150]
    let v11: Result<struct4, struct8>;  // [bp-0x148]
    let v12: struct16;  // [bp-0x138]
    let v13: Result<struct72, struct24>;  // [bp-0x130], Other Possible Types: struct40
    let v14: struct32;  // [bp-0x118]
    let v15: struct88;  // [bp-0x100]
    let v16: u64;  // [bp-0xf0]
    let v17: struct8;  // [bp-0xe8]
    let v18: struct8;  // [bp-0xe0]
    let v19: struct40;  // [bp-0xd8]
    let v20: struct92;  // [bp-0xb0]
    let v21: struct24;  // [bp-0xb0]
    let v22: u128;  // [bp-0xa0]
    let v23: u128;  // [bp-0x90]
    let v24: u128;  // [bp-0x80]
    let v25: u128;  // [bp-0x70]
    let v26: u64;  // [bp-0x58]
    let v27: Result<struct57, struct49>;  // [bp-0x50]
    let v28: u64;  // [bp-0x48]
    let v29: u128;  // [bp-0x40]
    let v31: struct24;  // xmm0

    v20 = starship::context::Context::new_module(a1, "container");
    v27 = starship::config::ModuleConfig::try_load(v26);
    if *((&v27 as &char + 48) as &i8) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v2 = starship::modules::container::module::container_name();
    if (((0 ^ v2 as i64) & (0 ^ -(v3))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v1 = v5;
    v0 = v2 as i128;
    v13 = starship::formatter::string_formatter::StringFormatter::new(v27 as i64, v28);
    v19 = struct40 {
        field_0: v29
        field_16: &v27 as u8
        field_24: &v0
        field_32: a1
    };
    match v13 {
        Err(_) => {
            v10 = v14;
            v9 = *((&v13 as &char + 8) as &i128);
        },
        Ok(_) => {
            v31 = v13 as i128;
            v2 = struct72 {
                field_0: v31
                field_16: *((&v13 as &char + 16) as &i128)
                field_32: *((&v13 as &char + 32) as &i128)
                field_48: v15
                field_64: v16
            };
            v8 = starship::modules::container::module::{{closure}}(&v19, &v2);
            if v8.field_0 as i32 != 1 {
                v21 = starship::module::Module::set_segments(&v8 as u8);
                return struct96 {
                    field_0: v20.field_0
                    field_16: v22
                    field_32: v23
                    field_48: v24
                    field_64: v25
                    field_80: *(&v20.field_80 as &i128)
                };
            }
        },
    }
    v12 = v10;
    v11 = v9;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v17 = &v11;
    v18 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v2 = "Error in module `container`: \n";
    v4 = 1;
    v7 = 0;
    v5 = &v17;
    v6 = 1;
    v13 = struct40 {
        field_0: "starship::modules::container"
        field_16: "starship::modules::container"
        field_32: log::__private_api::loc("src/modules/container.rs")
    };
    log::__private_api::log(&v2, 2, &v13);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
