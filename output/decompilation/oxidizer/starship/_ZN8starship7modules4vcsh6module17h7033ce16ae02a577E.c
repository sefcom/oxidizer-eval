fn starship::modules::vcsh::module(a0: i64, a1: u64) -> void {
    let v0: struct24;  // [bp-0x1d8], Other Possible Types: u128
    let v1: i64;  // [bp-0x1d0]
    let v2: struct44;  // [bp-0x1c8]
    let v3: struct32;  // [bp-0x1b8]
    let v4: struct40;  // [bp-0x1b0]
    let v5: struct56;  // [bp-0x1a0]
    let v6: struct8;  // [bp-0x198]
    let v7: struct8;  // [bp-0x188]
    let v8: Result<struct72, struct24>;  // [bp-0x180], Other Possible Types: struct40
    let v9: u64;  // [bp-0x168]
    let v10: struct24;  // [bp-0x150]
    let v11: &str;  // [bp-0x140]
    let v12: Result<struct72, struct24>;  // [bp-0x138]
    let v13: struct24;  // [bp-0x130]
    let v14: struct32;  // [bp-0x128], Other Possible Types: struct72
    let v15: Option<struct56>;  // [bp-0x120]
    let v16: &mut [u8];  // [bp-0x118]
    let v17: Option<struct56>;  // [bp-0x110]
    let v18: struct128;  // [bp-0x108]
    let v19: Option<struct24>;  // [bp-0xd8], Other Possible Types: struct24
    let v20: struct92;  // [bp-0xd8]
    let v21: struct24;  // [bp-0xc8]
    let v22: struct40;  // [bp-0xb8]
    let v23: struct40;  // [bp-0xa8]
    let v24: struct72;  // [bp-0x98]
    let v25: u64;  // [bp-0x80]
    let v26: struct40;  // [bp-0x78]
    let v27: Result<struct57, struct49>;  // [bp-0x50]
    let v28: u64;  // [bp-0x30]
    let v30: u64;  // rdx
    let v31: u64;  // rdx
    let v35: &str;  // rax:rdx
    let v36: &str;  // rax:rdx
    let v37: struct24;  // [bp-0x1d8]

    v19 = starship::context_env::Env::get_env("VCSH_REPO_NAME");
    if (((0 ^ v19 as i64) & (0 ^ -(v19 as i64))) >> 63) as char {
        v0 = struct24 {
            field_0: 0
            field_8: ""
        };
        v36 = core::str::<impl str>::trim_matches(1, None, v30);
        if !v36.length {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    } else {
        v0 = v19 as i128;
        v2 = *((&v19 as &char + 16) as &i64);
        v35 = core::str::<impl str>::trim_matches(v1, *((&v19 as &char + 16) as &i64), v31);
        if !v35.length {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    v20 = starship::context::Context::new_module(a1, "vcsh");
    v27 = starship::config::ModuleConfig::try_load(v25);
    v8 = starship::formatter::string_formatter::StringFormatter::new(v28, *((&v27 as &char + 40) as &i64));
    v26 = struct40 {
        field_0: v27 as i128
        field_16: &v27 as u8
        field_24: &v37
        field_32: a1
    };
    match v8 {
        Err(_) => {
            v5 = v9;
            v4 = *((&v8 as &char + 8) as &i128);
        },
        Ok(_) => {
            v14 = struct72 {
                field_0: v8 as i128
                field_16: *((&v8 as &char + 16) as &i128)
                field_32: *((&v8 as &char + 32) as &i128)
                field_48: v10
                field_64: v11
            };
            v3 = starship::modules::vcsh::module::{{closure}}(&v26, &v14);
            if v3.field_0 as i32 != 1 {
                v19 = starship::module::Module::set_segments(&v3 as u8);
                return struct96 {
                    field_0: v20.field_0
                    field_16: v21
                    field_32: v22
                    field_48: v23
                    field_64: v24
                    field_80: *(&v20.field_80 as &i128)
                };
            }
        },
    }
    v7 = v5;
    v6 = v4;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v12 = &v6;
    v13 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v14 = "Error in module `vcsh`:\n";
    v15 = 1;
    v18 = 0;
    v16 = &v12;
    v17 = 1;
    v8 = struct40 {
        field_0: "starship::modules::vcsh"
        field_16: "starship::modules::vcsh"
        field_32: log::__private_api::loc("src/modules/vcsh.rs")
    };
    log::__private_api::log(&v14, 2, &v8);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
