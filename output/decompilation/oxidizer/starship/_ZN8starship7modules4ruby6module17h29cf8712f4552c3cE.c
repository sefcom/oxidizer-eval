fn starship::modules::ruby::module(a0: i64, a1: u64) -> void {
    let v0: Result<struct72, struct24>;  // [bp-0x230], Other Possible Types: struct40
    let v1: u64;  // [bp-0x230]
    let v2: struct72;  // [bp-0x230]
    let v3: struct24;  // [bp-0x218]
    let v4: struct48;  // [bp-0x200]
    let v5: i64;  // [bp-0x1f0]
    let v6: Option<struct56>;  // [bp-0x1e8], Other Possible Types: Result<struct72, struct24>, struct64, struct72
    let v7: struct24;  // [bp-0x1e0]
    let v8: struct72;  // [bp-0x1d8]
    let v9: struct56;  // [bp-0x1d0]
    let v10: struct32;  // [bp-0x1c8]
    let v11: struct32;  // [bp-0x198]
    let v12: &mut [u8];  // [bp-0x190]
    let v13: struct24;  // [bp-0x180]
    let v14: struct24;  // [bp-0x178]
    let v15: Result<struct72, struct24>;  // [bp-0x168]
    let v16: Option<struct56>;  // [bp-0x160]
    let v17: Option<struct137>;  // [bp-0x158]
    let v18: struct92;  // [bp-0x150]
    let v19: struct24;  // [bp-0x150]
    let v20: iNone;  // [bp-0x140]
    let v21: iNone;  // [bp-0x130]
    let v22: struct92;  // [bp-0x120]
    let v23: struct24;  // [bp-0x110]
    let v24: u64;  // [bp-0xf8]
    let v25: struct48;  // [bp-0xf0]
    let v26: Option<struct161>;  // [bp-0xc0]
    let v27: i64;  // [bp-0x70]
    let v28: struct24;  // [bp-0x68]
    let v29: u64;  // [bp-0x60]
    let v30: u64;  // [bp-0x58]
    let v31: struct24;  // [bp-0x50]
    let v32: struct32;  // [bp-0x40]
    let v34: core::option::Option<(&str, &str)>;  // xmm0
    let v35: struct32;  // xmm2
    let v36: &str;  // al
    let v37: Option<struct24>;  // xmm0

    v18 = starship::context::Context::new_module(a1, "ruby");
    v26 = starship::config::ModuleConfig::try_load(v24);
    v6 = starship::context::Context::try_begin_scan(a1);
    if let None = v6 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v34 = *((&v26 as &char + 8) as &i128);
    v35 = *((&v26 as &char + 56) as &i128);
    v2 = struct72 {
        field_0: v6 as i64
        field_8: *((&v26 as &char + 32) as &i64)
        field_16: *((&v26 as &char + 40) as &i64)
        field_24: v35
        field_40: v34
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    v36 = starship::context::ScanDir::is_match(&v2);
    v6 = struct64 {
        field_0: v27
        field_8: v28 * 16 + v27
        field_16: <UNKNOWN>
        field_24: <UNKNOWN>
        field_32: <UNKNOWN>
        field_40: <UNKNOWN>
        field_48: <UNKNOWN>
        field_56: <UNKNOWN>
    };
    if (v36 | <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6)) == 1 {
        v0 = starship::formatter::string_formatter::StringFormatter::new(v29, v30);
        v25 = struct48 {
            field_0: v31
            field_16: v32
            field_32: &v26 as u8
            field_40: a1
        };
        if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
            v13 = v3;
            v12 = *((&v0 as &char + 8) as &i128);
        } else {
            v37 = v0 as i128;
            v6 = struct72 {
                field_0: v37
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: *((&v0 as &char + 32) as &i128)
                field_48: v4
                field_64: v5
            };
            v11 = starship::modules::ruby::module::{{closure}}(&v25, &v6);
            if v11.field_0 as i32 != 1 {
                v19 = starship::module::Module::set_segments(&v11 as u8);
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
        v15 = v13;
        v14 = v12;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v16 = &v14;
        v17 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v6 = "Error in module `ruby`:\n";
        v7 = 1;
        v10 = 0;
        v8 = &v16;
        v9 = 1;
        v0 = struct40 {
            field_0: "starship::modules::ruby"
            field_16: "starship::modules::ruby"
            field_32: log::__private_api::loc("src/modules/ruby.rs")
        };
        log::__private_api::log(&v6, 2, &v0);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
