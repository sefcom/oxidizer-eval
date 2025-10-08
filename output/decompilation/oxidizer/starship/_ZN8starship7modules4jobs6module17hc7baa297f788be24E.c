fn starship::modules::jobs::module(a0: i64, a1: void*) -> void {
    let v0: struct24;  // [bp-0x218], Other Possible Types: struct243, struct40, struct72, struct48, u64
    let v1: struct24;  // [bp-0x218]
    let v2: struct40;  // [bp-0x210], Other Possible Types: struct24, u64
    let v3: struct92;  // [bp-0x208], Other Possible Types: struct_0 *, struct_1 *, Result<struct72, struct24>
    let v4: struct24;  // [bp-0x200], Other Possible Types: struct72, u128
    let v5: struct24;  // [bp-0x1f8], Other Possible Types: struct48, void*
    let v6: struct24;  // [bp-0x1c8], Other Possible Types: u128
    let v7: struct24;  // [bp-0x1c8]
    let v8: u64;  // [bp-0x1b8]
    let v9: Result<struct72, struct24>;  // [bp-0x1a8], Other Possible Types: struct40
    let v10: struct92;  // [bp-0x1a8]
    let v11: struct40;  // [bp-0x190]
    let v12: struct32;  // [bp-0x178]
    let v13: &str;  // [bp-0x168]
    let v14: struct24;  // [bp-0x160], Other Possible Types: struct32, struct_2 *, struct_3 *
    let v15: Result<struct72, struct24>;  // [bp-0x158], Other Possible Types: u64
    let v16: Option<struct56>;  // [bp-0x148]
    let v17: u64;  // [bp-0x140]
    let v18: struct92;  // [bp-0x138]
    let v19: Result<struct26, struct32>;  // [bp-0x128]
    let v20: Result<struct81, struct73>;  // [bp-0x118]
    let v21: u64;  // [bp-0x110]
    let v22: u64;  // [bp-0x108]
    let v23: u64;  // [bp-0x100]
    let v24: struct24;  // [bp-0xe8]
    let v25: struct24;  // [bp-0xe0]
    let v26: struct72;  // [bp-0xc8]
    let v27: struct40;  // [bp-0xc0]
    let v28: struct40;  // [bp-0xb8]
    let v29: struct92;  // [bp-0x90]
    let v30: struct24;  // [bp-0x90]
    let v31: u128;  // [bp-0x80]
    let v32: u128;  // [bp-0x70]
    let v33: u128;  // [bp-0x60]
    let v34: u128;  // [bp-0x50]
    let v36: struct32;  // rax
    let v37: u64;  // r15
    let v38: &str;  // r12
    let v40: u64;  // r13
    let v42: &str;  // r12
    let v43: iNone;  // xmm0

    v29 = starship::context::Context::new_module(a1, "jobs");
    v20 = starship::config::ModuleConfig::try_load(v29.field_88);
    if v24 >= 0 {
        if v25 >= 0 {
            v36 = *((&v20 as &char + 64) as &i64);
            if v36 >= 0 {
                v37 = a1[168] as i64;
                if !v25 || !v36 || !v24 || v37 {
                    v7 = struct24 {
                        field_0: 0
                        field_8: ""
                    };
                    if v24 == 1 {
                        if v37 >= v36 {
                            v0 = <i64 as alloc::string::SpecToString>::spec_to_string(v37);
                            v8 = v3;
                            v6 = v0.field_0;
                        }
                    } else {
                        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
                            v0 = "`threshold` in [jobs] is deprecated . Please remove it and use `symbol_threshold` and `number_threshold`.";
                            v2 = 1;
                            v3 = 8;
                            v4 = 0;
                            v9 = struct40 {
                                field_0: "starship::modules::jobs"
                                field_16: "starship::modules::jobs"
                                field_32: log::__private_api::loc("src/modules/jobs.rs")
                            };
                            log::__private_api::log(&v0, 2, &v9);
                        }
                        v17 = v22;
                        v40 = (v37 > 0 ? v17 : 1);
                        v38 = (v37 > 0 ? v23 : 0);
                        if !v24 || v24 < v37 {
                            v1 = <i64 as alloc::string::SpecToString>::spec_to_string(v37);
                            v8 = v3;
                            v6 = v1.field_0;
                            v40 = v17;
                            v38 = v42;
                        }
                    }
                    v9 = starship::formatter::string_formatter::StringFormatter::new(v20 as i64, v21);
                    v28 = struct40 {
                        field_0: v40
                        field_8: v38
                        field_16: &v20 as u8
                        field_24: &v6
                        field_32: a1
                    };
                    if (((0 ^ v9 as i64) & (0 ^ -(v10))) >> 63) as char {
                        v16 = v11;
                        v15 = *((&v9 as &char + 8) as &i128);
                    } else {
                        v43 = v9 as i128;
                        v0 = struct72 {
                            field_0: v43
                            field_16: *((&v9 as &char + 16) as &i128)
                            field_32: *((&v9 as &char + 32) as &i128)
                            field_48: v12
                            field_64: v13
                        };
                        v14 = starship::modules::jobs::module::{{closure}}(&v28, &v0);
                        if !(v14.field_0 as i8 & 1) {
                            v30 = starship::module::Module::set_segments(&v14 as u8);
                            return struct96 {
                                field_0: v29.field_0
                                field_16: v31
                                field_32: v32
                                field_48: v33
                                field_64: v34
                                field_80: *(&v29.field_80 as &i128)
                            };
                        }
                    }
                    v19 = v16;
                    v18 = v15;
                    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                        return struct8 {
                            field_0: 0x8000000000000000
                        };
                    }
                    v26 = &v18;
                    v27 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v0 = "Error in module `jobs`:\n";
                    v2 = 1;
                    v5 = 0;
                    v3 = &v26;
                    v4 = 1;
                    v9 = struct40 {
                        field_0: "starship::modules::jobs"
                        field_16: "starship::modules::jobs"
                        field_32: log::__private_api::loc("src/modules/jobs.rs")
                    };
                    log::__private_api::log(&v0, 2, &v9);
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
            } else {
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
                    v14 = &v20 as u8;
                    v15 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
                    v0 = "number_threshold in [jobs] (";
                    v2 = 2;
                    v5 = 0;
                    v3 = &v14;
                    v4 = 1;
                    v9 = struct40 {
                        field_0: "starship::modules::jobs"
                        field_16: "starship::modules::jobs"
                        field_32: log::__private_api::loc("src/modules/jobs.rs")
                    };
                    log::__private_api::log(&v0, 2, &v9);
                }
            }
        } else if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
            v14 = &v20 as u64;
            v15 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
            v0 = "symbol_threshold in [jobs] (";
            v2 = 2;
            v5 = 0;
            v3 = &v14;
            v4 = 1;
            v9 = struct40 {
                field_0: "starship::modules::jobs"
                field_16: "starship::modules::jobs"
                field_32: log::__private_api::loc("src/modules/jobs.rs")
            };
            log::__private_api::log(&v0, 2, &v9);
        }
    } else {
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
            v14 = &v20 as u64;
            v15 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
            v0 = "threshold in [jobs] (";
            v2 = 2;
            v5 = 0;
            v3 = &v14;
            v4 = 1;
            v9 = struct40 {
                field_0: "starship::modules::jobs"
                field_16: "starship::modules::jobs"
                field_32: log::__private_api::loc("src/modules/jobs.rs")
            };
            log::__private_api::log(&v0, 2, &v9);
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
