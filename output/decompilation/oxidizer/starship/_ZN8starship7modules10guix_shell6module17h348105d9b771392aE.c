fn starship::modules::guix_shell::module(a0: i64, a1: u64) -> int {
    let v0: struct32;  // [bp-0x1b8]
    let v1: struct40;  // [bp-0x1b0]
    let v2: u64;  // [bp-0x1a0]
    let v3: iNone;  // [bp-0x198]
    let v4: u64;  // [bp-0x188]
    let v5: Option<struct24>;  // [bp-0x178], Other Possible Types: struct72, u64
    let v6: u64;  // [bp-0x178]
    let v7: u64;  // [bp-0x170]
    let v8: struct280;  // [bp-0x168]
    let v9: struct160;  // [bp-0x160]
    let v10: void*;  // [bp-0x158]
    let v11: Result<struct72, struct24>;  // [bp-0x128], Other Possible Types: struct40
    let v12: u64;  // [bp-0x110]
    let v13: u128;  // [bp-0xf8]
    let v14: u64;  // [bp-0xe8]
    let v15: i64;  // [bp-0xe0]
    let v16: u64;  // [bp-0xd8]
    let v17: struct32;  // [bp-0xd0]
    let v18: struct92;  // [bp-0xb0]
    let v19: struct8;  // [bp-0xa0]
    let v20: struct8;  // [bp-0x90]
    let v21: struct24;  // [bp-0x80]
    let v22: iNone;  // [bp-0x70]
    let v23: u64;  // [bp-0x58]
    let v24: Result<struct57, struct49>;  // [bp-0x50]
    let v25: i64;  // [bp-0x48]
    let v26: struct24;  // [bp-0x40]
    let v28: struct24;  // xmm0
    let v29: struct24;  // rax

    v18 = starship::context::Context::new_module(a1, "guix_shell");
    v24 = starship::config::ModuleConfig::try_load(v23);
    v5 = starship::context_env::Env::get_env("GUIX_ENVIRONMENT");
    if (((0 ^ v5 as i64) & (0 ^ -(v6))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v11 = starship::formatter::string_formatter::StringFormatter::new(v24 as i64, v25);
    v17 = struct32 {
        field_0: v26
        field_16: &v24 as u8
        field_24: a1
    };
    match v11 {
        Err(_) => {
            v2 = v12;
            v1 = *((&v11 as &char + 8) as &i128);
        },
        Ok(_) => {
            v28 = v11 as i128;
            v5 = struct72 {
                field_0: v28
                field_16: *((&v11 as &char + 16) as &i128)
                field_32: *((&v11 as &char + 32) as &i128)
                field_48: v13
                field_64: v14
            };
            v0 = starship::modules::guix_shell::module::{{closure}}(&v17, &v5);
            if v0.field_0 as i32 != 1 {
                v29 = starship::module::Module::set_segments(&v0 as u8);
                return struct96 {
                    field_0: v18.field_0
                    field_16: v19
                    field_32: v20
                    field_48: v21
                    field_64: v22
                    field_80: *(&v18.field_80 as &i128)
                };
            }
        },
    }
    v4 = v2;
    v3 = v1;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v15 = &v3;
    v16 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v5 = "Error in module `guix_shell`:\n";
    v7 = 1;
    v10 = 0;
    v8 = &v15;
    v9 = 1;
    v11 = struct40 {
        field_0: "starship::modules::guix_shell"
        field_16: "starship::modules::guix_shell"
        field_32: log::__private_api::loc("src/modules/guix_shell.rs")
    };
    log::__private_api::log(&v5, 2, &v11);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
