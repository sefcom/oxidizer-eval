fn starship::modules::hg_branch::module(a0: i64, a1: i64) -> void {
    let v0: struct48;  // [bp-0x258], Other Possible Types: struct72, struct24, u64
    let v1: u64;  // [bp-0x250]
    let v2: u64;  // [bp-0x250]
    let v3: Option<struct169>;  // [bp-0x248], Other Possible Types: struct_1 *
    let v4: u64;  // [bp-0x248]
    let v5: struct24;  // [bp-0x240], Other Possible Types: u64
    let v6: void*;  // [bp-0x238]
    let v7: struct24;  // [bp-0x208], Other Possible Types: u128
    let v8: void*;  // [bp-0x200]
    let v9: struct40;  // [bp-0x1f8]
    let v10: struct24;  // [bp-0x1f0]
    let v11: Result<struct72, struct24>;  // [bp-0x1d8], Other Possible Types: struct40
    let v12: u64;  // [bp-0x1d8]
    let v13: u64;  // [bp-0x1d0]
    let v14: i64;  // [bp-0x1c0]
    let v15: struct92;  // [bp-0x1a8]
    let v16: struct24;  // [bp-0x198]
    let v17: struct32;  // [bp-0x190], Other Possible Types: struct72
    let v18: struct40;  // [bp-0x188]
    let v19: u64;  // [bp-0x188]
    let v20: Result<struct72, struct24>;  // [bp-0x178]
    let v21: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x170]
    let v22: u128;  // [bp-0x168]
    let v23: i64;  // [bp-0x160]
    let v24: struct48;  // [bp-0x158]
    let v25: struct40;  // [bp-0x148]
    let v26: struct40;  // [bp-0x138]
    let v27: &str;  // [bp-0x130]
    let v28: struct24;  // [bp-0x128]
    let v29: Result<struct81, struct73>;  // [bp-0x110]
    let v30: i64;  // [bp-0xf0]
    let v31: u64;  // [bp-0xe8]
    let v32: u64;  // [bp-0xe0]
    let v33: u64;  // [bp-0xd8]
    let v34: struct40;  // [bp-0xd0]
    let v35: struct40;  // [bp-0xd0]
    let v36: struct48;  // [bp-0xc0]
    let v37: struct92;  // [bp-0x90]
    let v38: struct24;  // [bp-0x90]
    let v39: u128;  // [bp-0x80]
    let v40: u128;  // [bp-0x70]
    let v41: u128;  // [bp-0x60]
    let v42: u128;  // [bp-0x50]
    let v44: struct40;  // r15
    let v45: Result<struct72, struct24>;  // r13
    let v46: iNone;  // xmm0
    let v47: iNone;  // xmm1
    let v48: Option<struct56>;  // [bp-0x1f0]

    v37 = starship::context::Context::new_module(a1, "hg_branch");
    v37 as u1152 = starship::config::ModuleConfig::try_load(v37.field_88);
    if *((&v29 as &char + 72) as &i8) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v35 = v34;
    if v35 <= 0 {
        v44 = -1;
        v35 = -1;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
            v17 = &v34;
            v19 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
            v0 = "\"truncation_length\" should be a positive value, found ";
            v2 = 1;
            v6 = 0;
            v3 = &v17;
            v5 = 1;
            v11 = struct40 {
                field_0: "starship::modules::hg_branch"
                field_16: "starship::modules::hg_branch"
                field_32: log::__private_api::loc("src/modules/hg_branch.rs")
            };
            log::__private_api::log(&v0, 2, &v11);
            v35 = v44;
        }
    }
    v0 = struct48 {
        field_0: *((a1 + 184) as &i128)
        field_16: ""
        field_32: ".hg"
        field_40: 1
    };
    starship::context::ScanAncestors::scan(&v12, &v0);
    if (((0 ^ v12) & (0 ^ -(v12))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v22 = *(&v13 as &i128);
    v21 = v12;
    v45 = v22 as i64;
    v0 = starship::modules::hg_branch::get_hg_current_bookmark(v45, v23);
    if v0.field_0 as i64 == 0x8000000000000000 {
        v7 = starship::modules::hg_branch::module::{{closure}}(v45, v23, v1);
    } else {
        v9 = v4;
        v7 = v0.field_0;
    }
    v28 = starship::modules::utils::truncate::truncate_text(v8, v9, v35, v32, v33);
    v0 = starship::modules::hg_branch::get_hg_topic_name(v45, v23);
    if v0.field_0 as i64 != 0x8000000000000000 {
        v10 = starship::modules::utils::truncate::truncate_text(v1, v4, v35, v32, v33);
    }
    v11 = starship::formatter::string_formatter::StringFormatter::new(v30, v31);
    v36 = struct48 {
        field_0: v29 as i128
        field_16: &v29 as u8
        field_24: &v28
        field_32: &v48
        field_40: a1
    };
    match v11 {
        Err(_) => {
            v20 = v14;
            v18 = *((&v11 as &char + 8) as &i128);
        },
        Ok(_) => {
            v46 = v11 as i128;
            v47 = *((&v11 as &char + 16) as &i128);
            v0 = struct72 {
                field_0: v46
                field_16: v47
                field_32: *((&v11 as &char + 32) as &i128)
                field_48: v15
                field_64: v16
            };
            v17 = starship::modules::hg_branch::module::{{closure}}(&v36, &v0);
            if !(v17.field_0 as i8 & 1) {
                v38 = starship::module::Module::set_segments(&v18);
                return struct96 {
                    field_0: v37.field_0
                    field_16: v39
                    field_32: v40
                    field_48: v41
                    field_64: v42
                    field_80: *(&v37.field_80 as &i128)
                };
            }
        },
    }
    v25 = v20;
    v24 = v18;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v26 = &v24;
    v27 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v0 = "Error in module `hg_branch`:\n";
    v1 = 1;
    v6 = 0;
    v3 = &v26;
    v5 = 1;
    v11 = struct40 {
        field_0: "starship::modules::hg_branch"
        field_16: "starship::modules::hg_branch"
        field_32: log::__private_api::loc("src/modules/hg_branch.rs")
    };
    log::__private_api::log(&v0, 2, &v11);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
