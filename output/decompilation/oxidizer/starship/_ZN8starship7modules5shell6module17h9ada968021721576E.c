fn starship::modules::shell::module(a0: i64, a1: i64) -> double {
    let v0: struct24;  // [bp-0x300]
    let v1: struct32;  // [bp-0x2f8]
    let v2: struct24;  // [bp-0x2f0]
    let v3: struct328;  // [bp-0x2e0]
    let v4: struct128;  // [bp-0x2d8]
    let v5: Option<struct56>;  // [bp-0x2c8]
    let v6: struct40;  // [bp-0x2c0], Other Possible Types: u64
    let v7: Result<struct72, struct24>;  // [bp-0x2c0]
    let v8: u64;  // [bp-0x2a8]
    let v9: struct8;  // [bp-0x290]
    let v10: struct24;  // [bp-0x280]
    let v11: struct24;  // [bp-0x278]
    let v12: &mut [u8];  // [bp-0x270]
    let v13: Option<struct56>;  // [bp-0x268], Other Possible Types: struct72
    let v14: struct92;  // [bp-0x260]
    let v15: struct40;  // [bp-0x258]
    let v16: struct128;  // [bp-0x250]
    let v17: struct72;  // [bp-0x248]
    let v18: struct92;  // [bp-0x220]
    let v19: struct24;  // [bp-0x220]
    let v20: iNone;  // [bp-0x210]
    let v21: iNone;  // [bp-0x200]
    let v22: iNone;  // [bp-0x1f0]
    let v23: struct40;  // [bp-0x1e0]
    let v24: u64;  // [bp-0x1c8]
    let v25: struct200;  // [bp-0x1c0]
    let v26: struct224;  // [bp-0xf8]
    let v27: u64;  // [bp-0xf0]
    let v28: u128;  // [bp-0xd8]
    let v29: u128;  // [bp-0xc8]
    let v30: u128;  // [bp-0xb8]
    let v31: u128;  // [bp-0xa8]
    let v32: iNone;  // [bp-0x98]
    let v33: struct44;  // [bp-0x88]
    let v34: iNone;  // [bp-0x78]
    let v35: iNone;  // [bp-0x68]
    let v36: iNone;  // [bp-0x58]
    let v37: struct73;  // [bp-0x48]
    let v38: u8;  // [bp-0x18]
    let v40: &str;  // xmm0
    let v41: Option<struct48>;  // xmm0
    let v42: core::str::pattern::CharSearcher;  // xmm0lq

    v18 = starship::context::Context::new_module(a1, "shell");
    v26 = starship::config::ModuleConfig::try_load(v24);
    if v38 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v0 = a1 + 1736;
    v7 = starship::formatter::string_formatter::StringFormatter::new(v26.field_0, v27);
    v25 = struct200 {
        field_0: &v0
        field_8: &v26 as u8
        field_16: v28
        field_32: v29
        field_48: v30
        field_64: &v28 as u8
        field_72: v31
        field_88: v32
        field_104: v33
        field_120: v34
        field_136: v35
        field_152: v36
        field_168: v37
        field_184: &v26 as u8
        field_192: a1
    };
    if (((0 ^ v7 as i64) & (0 ^ -(v6))) >> 63) as char {
        v3 = v8;
        v2 = *((&v7 as &char + 8) as &i128);
    } else {
        v40 = v7 as i128;
        v13 = struct72 {
            field_0: v40
            field_16: *((&v7 as &char + 16) as &i128)
            field_32: *((&v7 as &char + 32) as &i128)
            field_48: v9
            field_64: v10
        };
        v1 = starship::modules::shell::module::{{closure}}(&v25, &v13);
        if v1.field_0 as i32 != 1 {
            v19 = starship::module::Module::set_segments(&v1 as u8);
            return struct96 {
                field_0: v18.field_0
                field_16: v20
                field_32: v21
                field_48: v22
                field_64: v23
                field_80: *(&v18.field_80 as &i128)
            };
        }
    }
    v5 = v3;
    v41 = v2;
    v42 = v41 as u64;
    v4 = v41;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v11 = &v4;
    v12 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v13 = "Error in module `shell`: \n";
    v14 = 1;
    v17 = 0;
    v15 = &v11;
    v16 = 1;
    v6 = struct40 {
        field_0: "starship::modules::shell"
        field_16: "starship::modules::shell"
        field_32: log::__private_api::loc("src/modules/shell.rs")
    };
    log::__private_api::log(&v13, 2, &v6);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
