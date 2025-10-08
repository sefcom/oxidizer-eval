fn starship::modules::git_state::module(a0: i64, a1: u64) -> void {
    let v0: struct160;  // [bp-0x268], Other Possible Types: struct72, u8
    let v1: u64;  // [bp-0x260]
    let v2: i64;  // [bp-0x258], Other Possible Types: char
    let v3: Result<struct57, struct49>;  // [bp-0x250]
    let v4: void*;  // [bp-0x248], Other Possible Types: struct48
    let v5: u128;  // [bp-0x238]
    let v6: struct32;  // [bp-0x218]
    let v7: core::fmt::rt::Argument;  // [bp-0x210]
    let v8: struct8;  // [bp-0x200]
    let v9: iNone;  // [bp-0x1f8]
    let v10: struct8;  // [bp-0x1e8]
    let v11: Result<struct72, struct24>;  // [bp-0x1e0], Other Possible Types: struct40
    let v12: u64;  // [bp-0x1c8]
    let v13: u128;  // [bp-0x1b0]
    let v14: u64;  // [bp-0x1a0]
    let v15: i64;  // [bp-0x198]
    let v16: u64;  // [bp-0x190]
    let v17: struct328;  // [bp-0x188]
    let v18: u128;  // [bp-0x178]
    let v19: struct48;  // [bp-0x168]
    let v20: struct24;  // [bp-0x158]
    let v21: struct48;  // [bp-0x140]
    let v22: struct92;  // [bp-0x110]
    let v23: struct24;  // [bp-0x110]
    let v24: struct32;  // [bp-0x100]
    let v25: struct40;  // [bp-0xf0]
    let v26: struct40;  // [bp-0xe0]
    let v27: struct32;  // [bp-0xd0]
    let v28: u64;  // [bp-0xb8]
    let v29: struct145;  // [bp-0xb0]
    let v30: u64;  // [bp-0x30]
    let v32: void*;  // rdx
    let v33: struct24;  // xmm0
    let v34: Result<struct24, struct16>;  // xmm0

    v22 = starship::context::Context::new_module(a1, "git_state");
    v29 = starship::config::ModuleConfig::try_load(v28);
    if ((!v32 | starship::context::Context::get_repo(a1)) & 1) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    starship::modules::git_state::get_state_description(&v0, v32);
    if v0 == 9223372036854775809 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v33 = *(&v0 as &i128);
    v20 = v5;
    v19 = v4;
    v18 = *(&v2 as &i128);
    v17 = v33;
    v11 = starship::formatter::string_formatter::StringFormatter::new(v30, v30);
    v21 = struct48 {
        field_0: v20
        field_16: &v17
        field_24: &v18 as u8
        field_32: &v29 as u8
        field_40: a1
    };
    match v11 {
        Err(_) => {
            v8 = v12;
            v7 = *((&v11 as &char + 8) as &i128);
        },
        Ok(_) => {
            v34 = v11 as i128;
            v0 = struct72 {
                field_0: v34
                field_16: *((&v11 as &char + 16) as &i128)
                field_32: *((&v11 as &char + 32) as &i128)
                field_48: v13
                field_64: v14
            };
            v6 = starship::modules::git_state::module::{{closure}}(&v21, &v0);
            if v6.field_0 as i32 != 1 {
                v23 = starship::module::Module::set_segments(&v6 as u8);
                return struct96 {
                    field_0: v22.field_0
                    field_16: v24
                    field_32: v25
                    field_48: v26
                    field_64: v27
                    field_80: *(&v22.field_80 as &i128)
                };
            }
        },
    }
    v10 = v8;
    v9 = v7;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v15 = &v9;
    v16 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v0 = "Error in module `git_state`:\n";
    v1 = 1;
    v4 = 0;
    v2 = &v15;
    v3 = 1;
    v11 = struct40 {
        field_0: "starship::modules::git_state"
        field_16: "starship::modules::git_state"
        field_32: log::__private_api::loc("src/modules/git_state.rs")
    };
    log::__private_api::log(&v0, 2, &v11);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
