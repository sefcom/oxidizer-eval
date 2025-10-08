fn starship::modules::netns::module(a0: i64, a1: u64) -> void {
    let v0: struct24;  // [bp-0x1d8]
    let v1: struct24;  // [bp-0x1c8]
    let v2: Option<struct137>;  // [bp-0x1b8], Other Possible Types: struct32
    let v3: Option<struct24>;  // [bp-0x1b8]
    let v4: u64;  // [bp-0x1b8]
    let v5: Result<struct72, struct24>;  // [bp-0x1b0]
    let v6: struct24;  // [bp-0x1a8], Other Possible Types: struct92, u128
    let v7: struct72;  // [bp-0x1a0]
    let v8: struct24;  // [bp-0x198]
    let v9: struct24;  // [bp-0x188]
    let v10: &str;  // [bp-0x178]
    let v11: u8;  // [bp-0x168]
    let v12: struct72;  // [bp-0x160]
    let v13: struct92;  // [bp-0x150]
    let v14: Option<struct24>;  // [bp-0x148]
    let v15: Result<struct4, struct8>;  // [bp-0x138]
    let v16: Result<struct72, struct24>;  // [bp-0x130], Other Possible Types: struct40
    let v17: i64;  // [bp-0x118]
    let v18: u128;  // [bp-0x100]
    let v19: u64;  // [bp-0xf0]
    let v20: struct8;  // [bp-0xe8]
    let v21: struct8;  // [bp-0xe0]
    let v22: struct40;  // [bp-0xd8]
    let v23: struct92;  // [bp-0xb0]
    let v24: struct24;  // [bp-0xb0]
    let v25: struct40;  // [bp-0xa0]
    let v26: struct72;  // [bp-0x90]
    let v27: struct40;  // [bp-0x80]
    let v28: struct92;  // [bp-0x70]
    let v29: u64;  // [bp-0x58]
    let v30: Result<struct57, struct49>;  // [bp-0x50]
    let v31: u64;  // [bp-0x48]
    let v32: u128;  // [bp-0x40]
    let v34: struct32;  // xmm0

    v23 = starship::context::Context::new_module(a1, "netns");
    v30 = starship::config::ModuleConfig::try_load(v29);
    if *((&v30 as &char + 48) as &i8) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v3 = starship::modules::netns::module::netns_name(a1);
    if (((0 ^ v3 as i64) & (0 ^ -(v4))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v1 = v6;
    v0 = v3 as i128;
    v16 = starship::formatter::string_formatter::StringFormatter::new(v30 as i64, v31);
    v22 = struct40 {
        field_0: v32
        field_16: &v30 as u8
        field_24: &v0
        field_32: a1
    };
    match v16 {
        Err(_) => {
            v13 = v17;
            v12 = *((&v16 as &char + 8) as &i128);
        },
        Ok(_) => {
            v10 = v19;
            v34 = v16 as i128;
            v9 = v18;
            v8 = *((&v16 as &char + 32) as &i128);
            v6 = *((&v16 as &char + 16) as &i128) as u128;
            v2 = v34;
            starship::modules::netns::module::{{closure}}(&v11, &v22, &v3);
            if *(&v11 as &i32) != 1 {
                v24 = starship::module::Module::set_segments(&v12 as u8);
                return struct96 {
                    field_0: v23.field_0
                    field_16: v25
                    field_32: v26
                    field_48: v27
                    field_64: v28
                    field_80: *(&v23.field_80 as &i128)
                };
            }
        },
    }
    v15 = v13;
    v14 = v12;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v20 = &v14;
    v21 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v2 = "Error in module `netns`: \n";
    v5 = 1;
    v8 = 0;
    v6 = &v20;
    v7 = 1;
    v16 = struct40 {
        field_0: "starship::modules::netns"
        field_16: "starship::modules::netns"
        field_32: log::__private_api::loc("src/modules/netns.rs")
    };
    log::__private_api::log(&v2, 2, &v16);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
