fn starship::modules::rust::module(a0: i64, a1: u64) -> void {
    let v0: struct32;  // [bp-0x308], Other Possible Types: struct72
    let v1: struct92;  // [bp-0x300]
    let v2: struct40;  // [bp-0x2f8]
    let v3: struct40;  // [bp-0x2f0]
    let v4: struct32;  // [bp-0x2e8]
    let v5: struct32;  // [bp-0x2b8]
    let v6: struct48;  // [bp-0x2b0]
    let v7: struct32;  // [bp-0x2a0]
    let v8: struct48;  // [bp-0x298]
    let v9: struct72;  // [bp-0x288]
    let v10: Result<struct72, struct24>;  // [bp-0x280], Other Possible Types: struct40
    let v11: u64;  // [bp-0x280]
    let v12: i64;  // [bp-0x268]
    let v13: iNone;  // [bp-0x250]
    let v14: struct72;  // [bp-0x240]
    let v15: struct32;  // [bp-0x238]
    let v16: struct24;  // [bp-0x230]
    let v17: struct24;  // [bp-0x228]
    let v18: struct92;  // [bp-0x210]
    let v19: struct24;  // [bp-0x210]
    let v20: iNone;  // [bp-0x200]
    let v21: iNone;  // [bp-0x1f0]
    let v22: struct24;  // [bp-0x1e0]
    let v23: u128;  // [bp-0x1d0]
    let v24: i64;  // [bp-0x1b8]
    let v25: Option<struct137>;  // [bp-0x1b0]
    let v26: struct32;  // [bp-0x178]
    let v27: u64;  // [bp-0x168]
    let v28: Option<struct56>;  // [bp-0x120]
    let v29: Option<struct56>;  // [bp-0xa8]
    let v30: struct92;  // [bp-0x88]
    let v31: struct72;  // [bp-0x60]
    let v32: struct40;  // [bp-0x28]
    let v34: struct24;  // xmm0
    let v35: struct24;  // xmm0
    let v36: Option<struct24>;  // xmm1

    v18 = starship::context::Context::new_module(a1, "rust");
    v25 = starship::config::ModuleConfig::try_load(v24);
    v28 = starship::context::Context::try_begin_scan(a1);
    if let None = v28 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v34 = *((&v25 as &char + 8) as &i128);
    v0 = struct72 {
        field_0: v28 as i64
        field_8: *((&v25 as &char + 32) as &i64)
        field_16: *((&v25 as &char + 40) as &i64)
        field_24: v26
        field_40: v34
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    if starship::context::ScanDir::is_match(&v0) {
        v29 = 0;
        v30 = 0;
        v31 = 0;
        v32 = 0;
        v10 = starship::formatter::string_formatter::StringFormatter::new(v27, *((&v25 as &char + 80) as &i64));
        v17 = struct24 {
            field_0: &v25
            field_8: a1
            field_16: &v28
        };
        if (((0 ^ v10 as i64) & (0 ^ -(v11))) >> 63) as char {
            v7 = v12;
            v6 = *((&v10 as &char + 8) as &i128);
        } else {
            v35 = v10 as i128;
            v36 = *((&v10 as &char + 16) as &i128);
            v0 = struct72 {
                field_0: v35
                field_16: v36
                field_32: *((&v10 as &char + 32) as &i128)
                field_48: v13
                field_64: v14
            };
            v5 = starship::modules::rust::module::{{closure}}(&v17, &v0);
            if v5.field_0 as i32 != 1 {
                v19 = starship::module::Module::set_segments(&v5 as u8);
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
        v9 = v7;
        v8 = v6;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v15 = &v8;
        v16 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v0 = "Error in module `rust`:\n";
        v1 = 1;
        v4 = 0;
        v2 = &v15;
        v3 = 1;
        v10 = struct40 {
            field_0: "starship::modules::rust"
            field_16: "starship::modules::rust"
            field_32: log::__private_api::loc("src/modules/rust.rs")
        };
        log::__private_api::log(&v0, 2, &v10);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
