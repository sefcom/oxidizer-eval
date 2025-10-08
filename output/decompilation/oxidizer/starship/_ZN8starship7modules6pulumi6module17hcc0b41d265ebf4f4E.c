fn starship::modules::pulumi::module(a0: i64, a1: i64) -> void {
    let v0: Result<struct72, struct24>;  // [bp-0x210], Other Possible Types: struct40
    let v1: struct72;  // [bp-0x210]
    let v2: u64;  // [bp-0x1f8]
    let v3: struct48;  // [bp-0x1e0]
    let v4: struct32;  // [bp-0x1d0]
    let v5: struct72;  // [bp-0x1c8], Other Possible Types: Option<struct56>
    let v6: u64;  // [bp-0x1c8]
    let v7: Result<struct72, struct24>;  // [bp-0x1c0]
    let v8: struct32;  // [bp-0x1b8], Other Possible Types: u64
    let v9: Option<struct56>;  // [bp-0x1b0]
    let v10: struct24;  // [bp-0x1a8]
    let v11: struct72;  // [bp-0x178]
    let v12: struct92;  // [bp-0x168]
    let v13: struct32;  // [bp-0x158]
    let v14: struct72;  // [bp-0x150]
    let v15: struct92;  // [bp-0x140]
    let v16: Result<struct72, struct24>;  // [bp-0x138]
    let v17: Option<struct137>;  // [bp-0x128]
    let v18: struct32;  // [bp-0x118]
    let v19: Option<struct56>;  // [bp-0x110]
    let v20: struct92;  // [bp-0x108]
    let v21: struct24;  // [bp-0x108]
    let v22: <anon>;  // [bp-0xf8]
    let v23: iNone;  // [bp-0xe8]
    let v24: struct92;  // [bp-0xd8]
    let v25: struct40;  // [bp-0xc8]
    let v26: i64;  // [bp-0xb0]
    let v27: struct64;  // [bp-0xa8]
    let v28: struct72;  // [bp-0x68]
    let v29: u64;  // [bp-0x60]
    let v30: struct24;  // [bp-0x58]
    let v31: struct32;  // [bp-0x48]
    let v33: core::option::Option<(&str, &str)>;  // xmm0
    let v34: Option<struct24>;  // xmm0
    let v35: iNone;  // xmm1

    v20 = starship::context::Context::new_module(a1, "pulumi");
    v28 = starship::config::ModuleConfig::try_load(v26);
    v5 = starship::context::Context::try_begin_scan(a1);
    if let None = v5 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v33 = *((&v5 as &char + 24) as &i128);
    v1 = struct72 {
        field_0: v5 as i64
        field_8: "Pulumi.yaml"
        field_16: 2
        field_24: v33
        field_40: *((&v5 as &char + 40) as &i128)
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    if starship::context::ScanDir::is_match(&v1) || v28.field_65 == 1 {
        starship::modules::pulumi::find_package_file(&v5, *((a1 + 208) as &i64), *((a1 + 216) as &i64));
        if (((0 ^ v5 as i64) & (0 ^ -(v6))) >> 63) as char {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v12 = v8;
        v11 = v5 as i128;
        v0 = starship::formatter::string_formatter::StringFormatter::new(v28.field_0, v29);
        v27 = struct64 {
            field_0: v30
            field_16: v31
            field_32: &v28 as u8
            field_40: a1
            field_48: &v20
            field_56: &v11
        };
        match v0 {
            Err(_) => {
                v15 = v2;
                v14 = *((&v0 as &char + 8) as &i128);
            },
            Ok(_) => {
                v34 = v0 as i128;
                v35 = *((&v0 as &char + 16) as &i128);
                v5 = struct72 {
                    field_0: v34
                    field_16: v35
                    field_32: *((&v0 as &char + 32) as &i128)
                    field_48: v3
                    field_64: v4
                };
                v13 = starship::modules::pulumi::module::{{closure}}(&v27, &v5);
                if v13.field_0 as i32 != 1 {
                    v21 = starship::module::Module::set_segments(&v13 as u8);
                    return struct96 {
                        field_0: v20.field_0
                        field_16: v22
                        field_32: v23
                        field_48: v24
                        field_64: v25
                        field_80: *(&v20.field_80 as &i128)
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
        v5 = "Error in module `pulumi`:\n";
        v7 = 1;
        v10 = 0;
        v8 = &v18;
        v9 = 1;
        v0 = struct40 {
            field_0: "starship::modules::pulumi"
            field_16: "starship::modules::pulumi"
            field_32: log::__private_api::loc("src/modules/pulumi.rs")
        };
        log::__private_api::log(&v5, 2, &v0);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
