fn starship::modules::ocaml::module(a0: i64, a1: u64) -> void {
    let v0: Result<struct72, struct24>;  // [bp-0x290], Other Possible Types: struct40
    let v1: u64;  // [bp-0x290]
    let v2: struct72;  // [bp-0x290]
    let v3: i64;  // [bp-0x278]
    let v4: u128;  // [bp-0x260]
    let v5: struct72;  // [bp-0x250]
    let v6: struct32;  // [bp-0x248]
    let v7: struct92;  // [bp-0x240]
    let v8: struct32;  // [bp-0x230]
    let v9: struct92;  // [bp-0x228]
    let v10: Option<struct56>;  // [bp-0x218]
    let v11: Option<struct56>;  // [bp-0x208], Other Possible Types: struct40, struct72
    let v12: struct92;  // [bp-0x200]
    let v13: struct24;  // [bp-0x1f8]
    let v14: struct32;  // [bp-0x1f0]
    let v15: struct72;  // [bp-0x1e8]
    let v16: struct56;  // [bp-0x1c0]
    let v17: struct72;  // [bp-0x1b8]
    let v18: struct40;  // [bp-0x1b0]
    let v19: struct92;  // [bp-0x190]
    let v20: struct92;  // [bp-0x188]
    let v21: struct24;  // [bp-0x188]
    let v22: struct32;  // [bp-0x178]
    let v23: struct72;  // [bp-0x168]
    let v24: struct16;  // [bp-0x158]
    let v25: struct24;  // [bp-0x148]
    let v26: i64;  // [bp-0x130]
    let v27: struct96;  // [bp-0x128]
    let v28: Option<struct169>;  // [bp-0xc8]
    let v29: u128;  // [bp-0x90]
    let v30: u64;  // [bp-0x80]
    let v31: u64;  // [bp-0x78]
    let v32: iNone;  // [bp-0x70]
    let v33: iNone;  // [bp-0x60]
    let v34: struct32;  // [bp-0x50]
    let v35: struct24;  // [bp-0x40]
    let v37: struct4;  // xmm0
    let v38: struct16;  // xmm0

    v20 = starship::context::Context::new_module(a1, "ocaml");
    v28 = starship::config::ModuleConfig::try_load(v26);
    v11 = starship::context::Context::try_begin_scan(a1);
    if let None = v11 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v37 = *((&v28 as &char + 8) as &i128);
    v2 = struct72 {
        field_0: v11 as i64
        field_8: *((&v28 as &char + 32) as &i64)
        field_16: *((&v28 as &char + 40) as &i64)
        field_24: v29
        field_40: v37
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    if starship::context::ScanDir::is_match(&v2) {
        v19 = 0;
        v18 = a1;
        v0 = starship::formatter::string_formatter::StringFormatter::new(v30, v31);
        v27 = struct96 {
            field_0: v32
            field_16: v33
            field_32: v34
            field_48: v35
            field_64: &v30 as u8
            field_72: &v18
            field_80: a1
            field_88: &v20
        };
        if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
            v8 = v3;
            v7 = *((&v0 as &char + 8) as &i128);
        } else {
            v38 = v0 as i128;
            v11 = struct72 {
                field_0: v38
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: *((&v0 as &char + 32) as &i128)
                field_48: v4
                field_64: v5
            };
            v6 = starship::modules::ocaml::module::{{closure}}(&v27, &v11);
            if v6.field_0 as i32 != 1 {
                v21 = starship::module::Module::set_segments(&v6 as u8);
                return struct96 {
                    field_0: v20.field_0
                    field_16: v22
                    field_32: v23
                    field_48: v24
                    field_64: v25
                    field_80: *(&v20.field_80 as &i128)
                };
            }
        }
        v10 = v8;
        v9 = v7;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v16 = &v9;
        v17 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v11 = "Error in module `ocaml`: \n";
        v12 = 1;
        v15 = 0;
        v13 = &v16;
        v14 = 1;
        v0 = struct40 {
            field_0: "starship::modules::ocaml"
            field_16: "starship::modules::ocaml"
            field_32: log::__private_api::loc("src/modules/ocaml.rs")
        };
        log::__private_api::log(&v11, 2, &v0);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
