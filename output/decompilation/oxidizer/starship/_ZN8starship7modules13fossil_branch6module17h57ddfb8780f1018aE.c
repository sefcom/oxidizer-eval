fn starship::modules::fossil_branch::module(a0: i64, a1: i64) -> void {
    let v0: struct24;  // [bp-0x208], Other Possible Types: struct32, struct_1 *, u64
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x200], Other Possible Types: u128
    let v2: struct72;  // [bp-0x1f8]
    let v3: struct24;  // [bp-0x1f0]
    let v4: struct40;  // [bp-0x1e0], Other Possible Types: u64
    let v5: Result<struct72, struct24>;  // [bp-0x1e0]
    let v6: Result<struct72, struct24>;  // [bp-0x1d8], Other Possible Types: u128
    let v7: i8;  // [bp-0x1d8]
    let v8: struct32;  // [bp-0x1d0]
    let v9: struct92;  // [bp-0x1c8], Other Possible Types: u128
    let v10: struct24;  // [bp-0x1b8]
    let v11: u128;  // [bp-0x1b0]
    let v12: u64;  // [bp-0x1a0]
    let v13: Option<struct48>;  // [bp-0x198], Other Possible Types: struct40, struct48, struct72, struct92
    let v14: struct40;  // [bp-0x190]
    let v15: struct40;  // [bp-0x188], Other Possible Types: struct72
    let v16: u64;  // [bp-0x180]
    let v17: void*;  // [bp-0x178], Other Possible Types: struct40
    let v18: &str;  // [bp-0x148]
    let v19: u128;  // [bp-0x148]
    let v20: struct24;  // [bp-0x138]
    let v21: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x130]
    let v22: struct40;  // [bp-0x128]
    let v23: struct24;  // [bp-0x120]
    let v24: Result<struct81, struct73>;  // [bp-0x108]
    let v25: u64;  // [bp-0x100]
    let v26: u128;  // [bp-0xf8]
    let v27: u64;  // [bp-0xd8]
    let v28: u64;  // [bp-0xd0]
    let v29: u64;  // [bp-0xc8]
    let v30: Option<struct24>;  // [bp-0xc8]
    let v31: struct40;  // [bp-0xb8]
    let v32: struct92;  // [bp-0x90]
    let v33: struct24;  // [bp-0x90]
    let v34: struct24;  // [bp-0x80]
    let v35: &str;  // [bp-0x70]
    let v36: &str;  // [bp-0x60]
    let v37: iNone;  // [bp-0x50]
    let v39: struct56;  // r15
    let v40: Result<struct24, struct24>;  // xmm0
    let v41: u32;  // rdx
    let v43: iNone;  // xmm0
    let v44: Result<struct24, struct16>;  // xmm1
    let v45: &str;  // rax:rdx

    v32 = starship::context::Context::new_module(a1, "fossil_branch");
    v24 = starship::config::ModuleConfig::try_load(v32.field_88);
    if *((&v24 as &char + 72) as &i8) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v18 = ".fslckout";
    v13 = struct48 {
        field_0: *((a1 + 184) as &i128)
        field_16: &v19 as u64
        field_24: 1
        field_32: ""
    };
    starship::context::ScanAncestors::scan(&v4, &v13);
    if (((0 ^ v4) & (0 ^ -(v4))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v1 = *(&v7 as &i128);
    v0 = v4;
    v30 = v29;
    if v30 <= 0 {
        v39 = -1;
        v30 = -1;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
            v0 = &v29;
            v1 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
            v13 = "\"truncation_length\" should be a positive value, found ";
            v14 = 1;
            v17 = 0;
            v15 = &v0;
            v16 = 1;
            v4 = struct40 {
                field_0: "starship::modules::fossil_branch"
                field_16: "starship::modules::fossil_branch"
                field_32: log::__private_api::loc("src/modules/fossil_branch.rs")
            };
            log::__private_api::log(&v13, 2, &v4);
            v30 = v39;
        }
    }
    v13 = starship::context::Context::exec_cmd(a1, "fossil", "branch", 2);
    if let Some(_) = v13 {
        v10 = 0;
        v40 = *((&v13 as &char + 8) as &i128);
        v9 = *((&v13 as &char + 24) as &i128) as u128;
        *(&v6 as &Result<struct24, struct24>) = v40;
        v4 = v13 as i64;
        v0 = v4;
        v1 = v6;
        v2 = v8;
        v45 = core::str::<impl str>::trim_matches(v1, v2, v41);
        v23 = starship::modules::utils::truncate::truncate_text(v45.ptr, v41, v30, v27, v28);
        v5 = starship::formatter::string_formatter::StringFormatter::new(v24 as i64, v25);
        v31 = struct40 {
            field_0: v26
            field_16: &v24 as u8
            field_24: &v23
            field_32: a1
        };
        match v5 {
            Err(_) => {
                v3 = v9;
                v1 = *((&v5 as &char + 8) as &i128) as u128;
            },
            Ok(_) => {
                v43 = v5 as i128;
                v44 = *((&v5 as &char + 16) as &i128);
                v13 = struct72 {
                    field_0: v43
                    field_16: v44
                    field_32: *((&v5 as &char + 32) as &i128)
                    field_48: v11
                    field_64: v12
                };
                v0 = starship::modules::fossil_branch::module::{{closure}}(&v31, &v13);
                if !(v0.field_0 as i8 & 1) {
                    v33 = starship::module::Module::set_segments(&v1);
                    return struct96 {
                        field_0: v32.field_0
                        field_16: v34
                        field_32: v35
                        field_48: v36
                        field_64: v37
                        field_80: *(&v32.field_80 as &i128)
                    };
                }
            },
        }
        v20 = v3;
        v19 = v0.field_8;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v21 = &v19 as u64;
        v22 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v13 = "Error in module `fossil_branch`:\n";
        v14 = 1;
        v17 = 0;
        v15 = &v21;
        v16 = 1;
        v4 = struct40 {
            field_0: "starship::modules::fossil_branch"
            field_16: "starship::modules::fossil_branch"
            field_32: log::__private_api::loc("src/modules/fossil_branch.rs")
        };
        log::__private_api::log(&v13, 2, &v4);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
