fn starship::modules::os::module(a0: i64, a1: u64) -> void {
    let v0: struct32;  // [bp-0x258]
    let v1: struct16;  // [bp-0x250]
    let v2: struct24;  // [bp-0x240]
    let v3: struct92;  // [bp-0x238]
    let v4: Option<struct56>;  // [bp-0x228]
    let v5: Result<struct72, struct24>;  // [bp-0x220], Other Possible Types: struct40
    let v6: u64;  // [bp-0x220]
    let v7: struct24;  // [bp-0x208]
    let v8: u128;  // [bp-0x1f0]
    let v9: i64;  // [bp-0x1e0]
    let v10: struct72;  // [bp-0x1d8]
    let v11: struct40;  // [bp-0x1d0]
    let v12: &str;  // [bp-0x1c8], Other Possible Types: struct72
    let v13: struct48;  // [bp-0x1c0]
    let v14: struct24;  // [bp-0x1b8]
    let v15: struct24;  // [bp-0x1b0]
    let v16: struct128;  // [bp-0x1a8]
    let v17: struct24;  // [bp-0x178]
    let v18: struct92;  // [bp-0x160]
    let v19: struct24;  // [bp-0x160]
    let v20: struct92;  // [bp-0x150]
    let v21: struct72;  // [bp-0x140]
    let v22: struct40;  // [bp-0x130]
    let v23: struct32;  // [bp-0x120]
    let v24: u64;  // [bp-0x108]
    let v25: struct112;  // [bp-0x100]
    let v26: u64;  // [bp-0xb8]
    let v27: struct112;  // [bp-0x90]
    let v29: core::option::Option<(&str, &str)>;  // xmm0

    v18 = starship::context::Context::new_module(a1, "os");
    v25 = starship::config::ModuleConfig::try_load(v24);
    if v25.field_104 as i8 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v27 = os_info::get();
    v5 = starship::formatter::string_formatter::StringFormatter::new(v26, *((&v25.field_72 as &char + 8) as &i64));
    v17 = struct24 {
        field_0: &v25
        field_8: &v27
        field_16: a1
    };
    if (((0 ^ v5 as i64) & (0 ^ -(v6))) >> 63) as char {
        v2 = v7;
        v1 = *((&v5 as &char + 8) as &i128);
    } else {
        v29 = v5 as i128;
        v12 = struct72 {
            field_0: v29
            field_16: *((&v5 as &char + 16) as &i128)
            field_32: *((&v5 as &char + 32) as &i128)
            field_48: v8
            field_64: v9
        };
        v0 = starship::modules::os::module::{{closure}}(&v17, &v12);
        if v0.field_0 as i32 != 1 {
            v19 = starship::module::Module::set_segments(&v0 as u8);
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
    v4 = v2;
    v3 = v1;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v10 = &v3;
    v11 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v12 = "Error in module `os`:\n";
    v13 = 1;
    v16 = 0;
    v14 = &v10;
    v15 = 1;
    v5 = struct40 {
        field_0: "starship::modules::os"
        field_16: "starship::modules::os"
        field_32: log::__private_api::loc("src/modules/os.rs")
    };
    log::__private_api::log(&v12, 2, &v5);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
