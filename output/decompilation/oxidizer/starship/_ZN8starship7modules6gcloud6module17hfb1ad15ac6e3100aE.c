fn starship::modules::gcloud::module(a0: u32, a1: u64) -> void {
    let v0: u128;  // [bp-0x3b8]
    let v1: u64;  // [bp-0x3b0]
    let v2: Result<struct72, struct24>;  // [bp-0x3a8]
    let v3: u128;  // [bp-0x398]
    let v4: i64;  // [bp-0x390]
    let v5: Result<struct88, struct82>;  // [bp-0x388]
    let v6: Option<struct80>;  // [bp-0x378], Other Possible Types: struct72, u128
    let v7: Result<struct16, struct5>;  // [bp-0x370]
    let v8: Result<struct16, struct5>;  // [bp-0x368], Other Possible Types: u64
    let v9: struct16;  // [bp-0x360]
    let v10: struct16;  // [bp-0x358], Other Possible Types: u128
    let v11: i64;  // [bp-0x350]
    let v12: struct32;  // [bp-0x328]
    let v13: struct24;  // [bp-0x320]
    let v14: struct24;  // [bp-0x310]
    let v15: struct40;  // [bp-0x308]
    let v16: struct40;  // [bp-0x2f8]
    let v17: Result<struct72, struct24>;  // [bp-0x2e8], Other Possible Types: struct40
    let v18: struct24;  // [bp-0x2d0]
    let v19: iNone;  // [bp-0x2b8]
    let v20: u64;  // [bp-0x2a8]
    let v21: i64;  // [bp-0x2a0]
    let v22: u64;  // [bp-0x298]
    let v23: struct72;  // [bp-0x290]
    let v24: u32;  // [bp-0x270]
    let v25: struct64;  // [bp-0x268]
    let v26: struct92;  // [bp-0x228]
    let v27: struct24;  // [bp-0x228]
    let v28: struct32;  // [bp-0x218]
    let v29: struct92;  // [bp-0x208]
    let v30: iNone;  // [bp-0x1f8]
    let v31: struct24;  // [bp-0x1e8]
    let v32: u64;  // [bp-0x1d0]
    let v33: Option<struct169>;  // [bp-0x1c8]
    let v34: u64;  // [bp-0x1c0]
    let v35: u64;  // [bp-0x1b8]
    let v36: u64;  // [bp-0x1b0]
    let v37: u64;  // [bp-0x1a8]
    let v38: u128;  // [bp-0x1a0]
    let v39: Option<struct48>;  // [bp-0x118], Other Possible Types: struct52
    let v40: u128;  // [bp-0x108]
    let v42: struct40;  // xmm0
    let v43: iNone;  // xmm1

    v26 = starship::context::Context::new_module(a1, "gcloud");
    v33 = starship::config::ModuleConfig::try_load(v32);
    if !starship::context::Context::detect_env_vars(a0, v34, v35) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v39 = starship::modules::gcloud::get_current_config(a1);
    if (((0 ^ v39 as i64) & (0 ^ -(v39 as i64))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v10 = *((&v39 as &char + 32) as &i128);
    v8 = v40;
    v6 = v39 as i128;
    v5 = v8;
    v3 = v39 as i128;
    v2 = v11;
    v0 = *((&v8 as &char + 8) as &i128);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "NONE") {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v39 = starship::modules::gcloud::GcloudContext::new(v4, v5 as u32, v1, v2 as u32);
    v24 = 0;
    v23 = &v39;
    v17 = starship::formatter::string_formatter::StringFormatter::new(v36, v37);
    v25 = struct64 {
        field_0: v38
        field_16: &v33 as u8
        field_24: &v33 as u8
        field_32: &v33 as u8
        field_40: &v23
        field_48: &v39
        field_56: a1
    };
    match v17 {
        Err(_) => {
            v14 = v18;
            v13 = *((&v17 as &char + 8) as &i128);
        },
        Ok(_) => {
            v42 = v17 as i128;
            v43 = *((&v17 as &char + 16) as &i128);
            v6 = struct72 {
                field_0: v42
                field_16: v43
                field_32: *((&v17 as &char + 32) as &i128)
                field_48: v19
                field_64: v20
            };
            v12 = starship::modules::gcloud::module::{{closure}}(&v25, &v6);
            if v12.field_0 as i32 != 1 {
                v27 = starship::module::Module::set_segments(&v12 as u8);
                return struct96 {
                    field_0: v26.field_0
                    field_16: v28
                    field_32: v29
                    field_48: v30
                    field_64: v31
                    field_80: *(&v26.field_80 as &i128)
                };
            }
        },
    }
    v16 = v14;
    v15 = v13;
    if !core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v21 = &v15;
    v22 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v6 = "Error in module `gcloud`: \n";
    v7 = 1;
    v10 = 0;
    v8 = &v21;
    v9 = 1;
    v17 = struct40 {
        field_0: "starship::modules::gcloud"
        field_16: "starship::modules::gcloud"
        field_32: log::__private_api::loc("src/modules/gcloud.rs")
    };
    log::__private_api::log(&v6, 1, &v17);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
