fn starship::modules::battery::module(a0: i64, a1: i64) -> int {
    let v0: struct24;  // [bp-0x2dd]
    let v1: struct88;  // [bp-0x2d8], Other Possible Types: u128
    let v2: struct72;  // [bp-0x2d0]
    let v3: struct72;  // [bp-0x2c8]
    let v4: struct40;  // [bp-0x2b8], Other Possible Types: u128
    let v5: Option<struct56>;  // [bp-0x2a8]
    let v6: u64;  // [bp-0x2a0]
    let v7: struct24;  // [bp-0x298], Other Possible Types: struct40, struct96, u64
    let v8: struct72;  // [bp-0x298]
    let v9: struct72;  // [bp-0x290], Other Possible Types: u64
    let v10: struct40;  // [bp-0x288], Other Possible Types: struct_0 *
    let v11: struct40;  // [bp-0x280], Other Possible Types: u64
    let v12: void*;  // [bp-0x278], Other Possible Types: struct56
    let v13: struct72;  // [bp-0x238], Other Possible Types: struct40
    let v14: i64;  // [bp-0x1f0]
    let v15: u64;  // [bp-0x1e8]
    let v16: struct92;  // [bp-0x1e0]
    let v17: struct24;  // [bp-0x1e0]
    let v18: struct12;  // [bp-0x1d0]
    let v19: struct16;  // [bp-0x1c0]
    let v20: struct12;  // [bp-0x1b0]
    let v21: struct32;  // [bp-0x1a0]
    let v22: u64;  // [bp-0x188]
    let v23: Result<struct72, struct24>;  // [bp-0x180]
    let v24: u576;  // [bp-0x180]
    let v25: i64;  // [bp-0x168]
    let v26: Result<struct128, struct121>;  // [bp-0x138]
    let v27: struct24;  // [bp-0x130]
    let v28: struct32;  // [bp-0x128]
    let v29: struct92;  // [bp-0x120]
    let v30: struct72;  // [bp-0x110]
    let v31: struct40;  // [bp-0x100]
    let v32: struct72;  // [bp-0xf0]
    let v33: struct40;  // [bp-0xe0]
    let v34: u64;  // [bp-0xd0]
    let v35: struct72;  // [bp-0xb8]
    let v36: struct72;  // [bp-0x70]
    let v38: struct64;  // al
    let v39: core::str::pattern::CharSearcher;  // rax
    let v40: struct24;  // r12

    v38 = starship::modules::battery::get_battery_status(*((a1 + 592) as &i64), *((a1 + 600) as &i64));
    if v38 == 5 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v0 = v38;
    v16 = starship::context::Context::new_module(a1, "battery");
    v26 = starship::config::ModuleConfig::try_load(v22);
    v7 = struct24 {
        field_0: v27
        field_8: v28 * 56 + v7
        field_16: &vvar_104{reg 224}
    };
    v39 = core::iter::traits::iterator::Iterator::reduce(&v7);
    if !v39 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v40 = v39;
    v23 = starship::formatter::string_formatter::StringFormatter::new(v34, *((&v26 as &char + 112) as &i64));
    if (((0 ^ v23 as i64) & (0 ^ -(v24))) >> 63) as char {
        v5 = v25;
        v4 = *((&v23 as &char + 8) as &i128);
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v1 = &v4;
        v2 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v7 = "Cannot load `battery.format`: ";
        v9 = 1;
        v12 = 0;
        v10 = &v1;
        v11 = 1;
        v13 = struct40 {
            field_0: "starship::modules::battery"
            field_16: "starship::modules::battery"
            field_32: log::__private_api::loc("src/modules/battery.rs")
        };
        log::__private_api::log(&v7, 2, &v13);
        return struct8 {
            field_0: 0x8000000000000000
        };
    } else {
        v35 = v24;
        v7 = struct96 {
            field_0: &v0
            field_8: v29
            field_24: v30
            field_40: v31
            field_56: v32
            field_72: v33
            field_88: v40
        };
        v13 = starship::formatter::string_formatter::StringFormatter::map_meta(&v35, &v7);
        v8 = starship::formatter::string_formatter::StringFormatter::map_style(&v13, v40);
        v36 = starship::formatter::string_formatter::StringFormatter::map(&v8, &vvar_104{reg 224});
        v4 = struct40 {
            field_0: starship::formatter::string_formatter::StringFormatter::parse(&v36, &v8 as u64 as u32, a1)
            field_32: 2
        };
        if v4.field_0 as i32 != 1 {
            v17 = starship::module::Module::set_segments(&v4 as u8);
            return struct96 {
                field_0: v16.field_0
                field_16: v18
                field_32: v19
                field_48: v20
                field_64: v21
                field_80: *(&v16.field_80 as &i128)
            };
        }
        v3 = v6;
        v1 = *(&v4.field_8 as &i128);
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v14 = &v1;
        v15 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v7 = "Cannot parse `battery.format`: ";
        v9 = 1;
        v12 = 0;
        v10 = &v14;
        v11 = 1;
        v13 = struct40 {
            field_0: "starship::modules::battery"
            field_16: "starship::modules::battery"
            field_32: log::__private_api::loc("src/modules/battery.rs")
        };
        log::__private_api::log(&v7, 2, &v13);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
