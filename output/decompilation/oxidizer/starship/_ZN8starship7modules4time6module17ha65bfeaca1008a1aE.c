fn starship::modules::time::module(a0: i64, a1: u64) -> void {
    let v0: struct16;  // [bp-0x220]
    let v1: u64;  // [bp-0x220]
    let v2: Result<struct24, struct24>;  // [bp-0x220]
    let v3: u8;  // [bp-0x220]
    let v4: i8;  // [bp-0x218], Other Possible Types: u64
    let v5: struct72;  // [bp-0x214], Other Possible Types: char
    let v6: i64;  // [bp-0x210], Other Possible Types: struct_1 *
    let v7: i32;  // [bp-0x20c]
    let v8: struct40;  // [bp-0x208]
    let v9: struct56;  // [bp-0x200], Other Possible Types: struct92
    let v10: Result<struct72, struct24>;  // [bp-0x1f0]
    let v11: struct92;  // [bp-0x1e8]
    let v12: struct12;  // [bp-0x1e0], Other Possible Types: struct40
    let v13: struct40;  // [bp-0x1dc]
    let v14: struct32;  // [bp-0x1b8], Other Possible Types: struct88
    let v15: struct72;  // [bp-0x1b0]
    let v16: struct24;  // [bp-0x1b0]
    let v17: struct88;  // [bp-0x1a0]
    let v18: u8;  // [bp-0x198]
    let v21: struct40;  // [bp-0x178]
    let v22: struct72;  // [bp-0x170]
    let v23: struct24;  // [bp-0x168]
    let v24: Option<struct24>;  // [bp-0x160]
    let v25: Result<struct32, struct9>;  // [bp-0x158]
    let v26: struct24;  // [bp-0x148]
    let v27: Option<struct48>;  // [bp-0x140]
    let v28: Result<struct72, struct24>;  // [bp-0x138]
    let v29: struct24;  // [bp-0x130]
    let v30: struct24;  // [bp-0x118]
    let v31: Result<struct88, struct74>;  // [bp-0x118]
    let v32: i64;  // [bp-0x110]
    let v33: u64;  // [bp-0x108]
    let v34: u64;  // [bp-0x100]
    let v35: u64;  // [bp-0xe8]
    let v36: u64;  // [bp-0xe0]
    let v37: i64;  // [bp-0xd8]
    let v38: u64;  // [bp-0xd0]
    let v39: struct32;  // [bp-0xc8]
    let v40: struct92;  // [bp-0xc0]
    let v41: struct24;  // [bp-0xc0]
    let v42: iNone;  // [bp-0xb0]
    let v43: struct40;  // [bp-0xa0]
    let v44: struct40;  // [bp-0x90]
    let v45: u128;  // [bp-0x80]
    let v46: i64;  // [bp-0x68]
    let v47: Result<struct72, struct24>;  // [bp-0x60]
    let v48: u128;  // [bp-0x58]
    let v50: u64;  // rdx
    let v51: Option<struct48>;  // rcx, Other Possible Types: struct24

    v40 = starship::context::Context::new_module(a1, "time");
    v40 as u1152 = starship::config::ModuleConfig::try_load(v46);
    if *((&v31 as &char + 81) as &i8) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    starship::modules::time::parse_time_range(&v3, v37, v38);
    v22 = *(&v4 as &i32);
    v21 = *(&v3 as &i64);
    v23 = *(&v5 as &i64);
    v24 = v7;
    v1 = chrono::offset::local::Local::now();
    v14 = *((&v0.field_0 as &char + 4) as &i64);
    v12 = chrono::naive::time::NaiveTime::overflowing_add_offset(&v14, v5 as u64);
    if starship::modules::time::is_inside_time_range(v12.field_0, v13 as u64, &v21, &v23) {
        v50 = (v39 ? &g_541ee2 : &g_541ee0);
        match v40 as u1152 {
            Ok(_) => {
                v51 = v32;
                if let Err(_) = v40 as u1152 {
                    goto LABEL_bbf64f;
                }
LABEL_bbf64e:
            },
            Err(_) => {
                if let Ok(_) = v40 as u1152 {
                    goto LABEL_bbf64e;
                }
LABEL_bbf64f:
                v30 = v50;
            },
        }
        v10 = v30;
        v11 = v51;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
            v14 = &v10;
            v15 = <&T as core::fmt::Display>::fmt;
            *(&v1 as &&str) = "Timer module is enabled with format string: ";
            v4 = 1;
            v9 = 0;
            *(&v6 as &&struct88) = &v14;
            v8 = 1;
            v12 = struct40 {
                field_0: "starship::modules::time"
                field_16: "starship::modules::time"
                field_32: log::__private_api::loc("src/modules/time.rs")
            };
            log::__private_api::log(&v1, 5, &v12);
        }
        v12 = chrono::offset::utc::Utc::now();
        v1 = starship::modules::time::create_offset_time_string(&v12, v35, v36, v10, v11);
        if (((0 ^ v2 as i64) & (0 ^ -(v2 as i64))) >> 63) as char {
            starship::modules::time::module::{{closure}}(&v18, v10, v11);
        }
        v47 = starship::formatter::string_formatter::StringFormatter::new(v33, v34);
        v29 = struct24 {
            field_0: &v31 as u8
            field_8: &v18
            field_16: a1
        };
        match v47 {
            Err(_) => {
                v17 = *((&v47 as &char + 24) as &i64);
                v16 = v48;
            },
            Ok(_) => {
                v14 = starship::modules::time::module::{{closure}}(&v29, &v47);
                if !(v14.field_0 as i8 & 1) {
                    v41 = starship::module::Module::set_segments(&v16);
                    return struct96 {
                        field_0: v40.field_0
                        field_16: v42
                        field_32: v43
                        field_48: v44
                        field_64: v45
                        field_80: *(&v40.field_80 as &i128)
                    };
                }
            },
        }
        v26 = v17;
        v25 = v16;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v27 = &v25;
        v28 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        *(&v1 as &&str) = "Error in module `time`: \n";
        v4 = 1;
        v9 = 0;
        *(&v6 as &&Option<struct48>) = &v27;
        v8 = 1;
        v12 = struct40 {
            field_0: "starship::modules::time"
            field_16: "starship::modules::time"
            field_32: log::__private_api::loc("src/modules/time.rs")
        };
        log::__private_api::log(&v1, 2, &v12);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
