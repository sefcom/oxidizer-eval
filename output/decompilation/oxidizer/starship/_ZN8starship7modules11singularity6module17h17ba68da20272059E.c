fn starship::modules::singularity::module(a0: i64, a1: u64) -> int {
    let v0: Result<struct32, struct9>;  // [bp-0x1d8]
    let v1: struct40;  // [bp-0x1c8]
    let v2: struct32;  // [bp-0x1b8]
    let v3: struct24;  // [bp-0x1b0]
    let v4: struct73;  // [bp-0x1a0]
    let v5: struct56;  // [bp-0x198]
    let v6: struct92;  // [bp-0x188]
    let v7: Result<struct72, struct24>;  // [bp-0x180], Other Possible Types: struct40
    let v8: i64;  // [bp-0x168]
    let v9: u128;  // [bp-0x150]
    let v10: struct17;  // [bp-0x140]
    let v11: struct40;  // [bp-0x138]
    let v12: &str;  // [bp-0x130]
    let v13: struct48;  // [bp-0x128], Other Possible Types: struct72
    let v14: struct128;  // [bp-0x120]
    let v15: struct24;  // [bp-0x118]
    let v16: struct16;  // [bp-0x110]
    let v17: struct328;  // [bp-0x108]
    let v18: Option<struct24>;  // [bp-0xd8], Other Possible Types: struct24
    let v19: struct92;  // [bp-0xd8]
    let v20: &mut [u8];  // [bp-0xc8]
    let v21: iNone;  // [bp-0xb8]
    let v22: struct92;  // [bp-0xa8]
    let v23: struct24;  // [bp-0x98]
    let v24: u64;  // [bp-0x80]
    let v25: struct40;  // [bp-0x78]
    let v26: Result<struct57, struct49>;  // [bp-0x50]
    let v27: u64;  // [bp-0x40]
    let v28: u64;  // [bp-0x38]
    let v30: Option<struct48>;  // xmm0

    v18 = starship::context_env::Env::get_env("SINGULARITY_NAME");
    if (((0 ^ v18 as i64) & (0 ^ -(v18 as i64))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v1 = *((&v18 as &char + 16) as &i64);
    v0 = v18 as i128;
    v19 = starship::context::Context::new_module(a1, "singularity");
    v26 = starship::config::ModuleConfig::try_load(v24);
    v7 = starship::formatter::string_formatter::StringFormatter::new(v27, v28);
    v25 = struct40 {
        field_0: v26 as i128
        field_16: &v26 as u8
        field_24: &v0
        field_32: a1
    };
    match v7 {
        Err(_) => {
            v4 = v8;
            v3 = *((&v7 as &char + 8) as &i128);
        },
        Ok(_) => {
            v30 = v7 as i128;
            v13 = struct72 {
                field_0: v30
                field_16: *((&v7 as &char + 16) as &i128)
                field_32: *((&v7 as &char + 32) as &i128)
                field_48: v9
                field_64: v10
            };
            v2 = starship::modules::singularity::module::{{closure}}(&v25, &v13);
            if v2.field_0 as i32 != 1 {
                v18 = starship::module::Module::set_segments(&v2 as u8);
                return struct96 {
                    field_0: v19.field_0
                    field_16: v20
                    field_32: v21
                    field_48: v22
                    field_64: v23
                    field_80: *(&v19.field_80 as &i128)
                };
            }
        },
    }
    v6 = v4;
    v5 = v3;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v11 = &v5;
    v12 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v13 = "Error in module `singularity`: \n";
    v14 = 1;
    v17 = 0;
    v15 = &v11;
    v16 = 1;
    v7 = struct40 {
        field_0: "starship::modules::singularity"
        field_16: "starship::modules::singularity"
        field_32: log::__private_api::loc("src/modules/singularity.rs")
    };
    log::__private_api::log(&v13, 2, &v7);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
