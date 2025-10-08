fn starship::modules::cmd_duration::module(a0: u64, a1: u64) -> int {
    let v0: struct32;  // [bp-0x1e8], Other Possible Types: struct8, u64
    let v1: struct24;  // [bp-0x1e0], Other Possible Types: u64
    let v2: Result<struct224, struct16>;  // [bp-0x1d8], Other Possible Types: struct_0 *, u64
    let v3: core::fmt::Arguments;  // [bp-0x1d0], Other Possible Types: u64
    let v4: void*;  // [bp-0x1c8], Other Possible Types: struct16
    let v5: struct32;  // [bp-0x1b0], Other Possible Types: struct_1 *
    let v6: struct40;  // [bp-0x1a8], Other Possible Types: u64
    let v7: struct88;  // [bp-0x198]
    let v8: struct40;  // [bp-0x190]
    let v9: Result<struct4, struct8>;  // [bp-0x168]
    let v10: struct16;  // [bp-0x158]
    let v11: u64;  // [bp-0x148]
    let v12: u64;  // [bp-0x140]
    let v13: struct8;  // [bp-0x138]
    let v14: struct8;  // [bp-0x130]
    let v15: struct32;  // [bp-0x128]
    let v16: Result<struct68, struct55>;  // [bp-0x108]
    let v17: u64;  // [bp-0x100]
    let v18: u64;  // [bp-0xf8]
    let v19: Result<struct72, struct24>;  // [bp-0xc8]
    let v20: u64;  // [bp-0xc8]
    let v21: iNone;  // [bp-0xc0]
    let v22: struct92;  // [bp-0x80]
    let v23: struct24;  // [bp-0x80]

    v22 = starship::context::Context::new_module(a1, "cmd_duration");
    v16 = starship::config::ModuleConfig::try_load(v22.field_88);
    if !((*((&v16 as &char + 40) as &i64) - 0 >> 63) as char) {
        v0 = starship::context::Context::get_cmd_duration(a1);
        if (v0.field_0 as i8 & 1) {
            v11 = v2;
            v12 = v3;
            if !(_ccall(2, 16, v12, *((&v16 as &char + 40) as &i64) >> 63 ^ (v11 < *((&v16 as &char + 40) as &i64)) as u8 as u64, (v11 < *((&v16 as &char + 40) as &i64)) as u8 as u64) as char) {
                v19 = starship::formatter::string_formatter::StringFormatter::new(v17, v18);
                v15 = struct32 {
                    field_0: &v16 as u8
                    field_8: &v16 as u8
                    field_16: &v11
                    field_24: a1
                };
                if (((0 ^ v19 as i64) & (0 ^ -(v20))) >> 63) as char {
                    v7 = *((&v19 as &char + 24) as &i64);
                    v6 = v21;
                } else {
                    v5 = starship::modules::cmd_duration::module::{{closure}}(&v15, &v19);
                    if !(v5.field_0 as i8 & 1) {
                        v23 = starship::module::Module::set_segments(&v5 as u8);
                        starship::modules::cmd_duration::undistract_me(a0, &v23 as u8, &v16 as u8, v11, v12);
                        return;
                    }
                }
                v10 = v7;
                v9 = v6;
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
                v13 = &v9;
                v14 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v0 = "Error in module `cmd_duration`: \n";
                v1 = 1;
                v4 = 0;
                v2 = &v13;
                v3 = 1;
                v8 = struct40 {
                    field_0: "starship::modules::cmd_duration"
                    field_16: "starship::modules::cmd_duration"
                    field_32: log::__private_api::loc("src/modules/cmd_duration.rs")
                };
                log::__private_api::log(&v0, 2, &v8);
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
        }
    } else if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
        v5 = &v16 as u8;
        v6 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v0 = "min_time in [cmd_duration] (";
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        v8 = struct40 {
            field_0: "starship::modules::cmd_duration"
            field_16: "starship::modules::cmd_duration"
            field_32: log::__private_api::loc("src/modules/cmd_duration.rs")
        };
        log::__private_api::log(&v0, 2, &v8);
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
