fn starship::modules::hg_state::module(a0: i64, a1: i64) -> void {
    let v0: Result<struct72, struct24>;  // [bp-0x250], Other Possible Types: struct40, u64
    let v1: &u8;  // [bp-0x240]
    let v2: u64;  // [bp-0x238]
    let v3: u128;  // [bp-0x220]
    let v4: u64;  // [bp-0x210]
    let v5: u128;  // [bp-0x208]
    let v6: u64;  // [bp-0x200]
    let v7: struct32;  // [bp-0x1f8]
    let v8: Option<struct56>;  // [bp-0x1e8], Other Possible Types: struct48, struct72
    let v9: struct92;  // [bp-0x1e0]
    let v10: struct56;  // [bp-0x1d8]
    let v11: struct72;  // [bp-0x1d0]
    let v12: struct72;  // [bp-0x1c8]
    let v13: struct32;  // [bp-0x198]
    let v14: struct40;  // [bp-0x190]
    let v15: struct72;  // [bp-0x180]
    let v16: Option<struct137>;  // [bp-0x178]
    let v17: Result<struct24, struct16>;  // [bp-0x168]
    let v18: struct24;  // [bp-0x160]
    let v19: struct32;  // [bp-0x158]
    let v20: struct32;  // [bp-0x150]
    let v21: struct92;  // [bp-0x130]
    let v22: struct24;  // [bp-0x130]
    let v23: struct56;  // [bp-0x120]
    let v24: struct48;  // [bp-0x110]
    let v25: struct40;  // [bp-0x100]
    let v26: iNone;  // [bp-0xf0]
    let v27: i64;  // [bp-0xd8]
    let v28: struct161;  // [bp-0xd0]
    let v29: u64;  // [bp-0x40]
    let v30: u64;  // [bp-0x38]
    let v32: struct24;  // rax
    let v33: u64;  // rdx
    let v34: struct32;  // xmm0
    let v35: Option<struct24>;  // xmm1

    v21 = starship::context::Context::new_module(a1, "hg_state");
    v28 = starship::config::ModuleConfig::try_load(v27);
    if v28.field_160 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v8 = struct48 {
        field_0: *((a1 + 184) as &i128)
        field_16: ""
        field_32: ".hg"
        field_40: 1
    };
    starship::context::ScanAncestors::scan(&v0, &v8);
    if (((0 ^ v0) & (0 ^ -(v0))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v7 = v1;
    v5 = *(&v0 as &i128);
    v32 = starship::modules::hg_state::get_state_description(v6, v1, &v28);
    if !v32 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v0 = starship::formatter::string_formatter::StringFormatter::new(v29, v30);
    v20 = struct32 {
        field_0: v32
        field_8: v33
        field_16: &v28 as u8
        field_24: a1
    };
    match v0 {
        Err(_) => {
            v15 = v2;
            v14 = *((&v0 as &char + 8) as &i128);
        },
        Ok(_) => {
            v34 = v0 as i128;
            v35 = *((&v0 as &char + 16) as &i128);
            v8 = struct72 {
                field_0: v34
                field_16: v35
                field_32: *((&v0 as &char + 32) as &i128)
                field_48: v3
                field_64: v4
            };
            v13 = starship::modules::hg_state::module::{{closure}}(&v20, &v8);
            if v13.field_0 as i32 != 1 {
                v22 = starship::module::Module::set_segments(&v13 as u8);
                return struct96 {
                    field_0: v21.field_0
                    field_16: v23
                    field_32: v24
                    field_48: v25
                    field_64: v26
                    field_80: *(&v21.field_80 as &i128)
                };
            }
        },
    }
    v17 = v15;
    v16 = v14;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v18 = &v16;
    v19 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v8 = "Error in module `hg_state`:\n";
    v9 = 1;
    v12 = 0;
    v10 = &v18;
    v11 = 1;
    v0 = struct40 {
        field_0: "starship::modules::hg_state"
        field_16: "starship::modules::hg_state"
        field_32: log::__private_api::loc("src/modules/hg_state.rs")
    };
    log::__private_api::log(&v8, 2, &v0);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
