fn starship::modules::elixir::module(a0: i64, a1: u64) -> void {
    let v0: Result<struct72, struct24>;  // [bp-0x260], Other Possible Types: struct40
    let v1: u64;  // [bp-0x260]
    let v2: struct72;  // [bp-0x260]
    let v3: u64;  // [bp-0x248]
    let v4: struct92;  // [bp-0x230]
    let v5: i64;  // [bp-0x220]
    let v6: struct32;  // [bp-0x218]
    let v7: Result<struct68, struct55>;  // [bp-0x210]
    let v8: struct16;  // [bp-0x200]
    let v9: iNone;  // [bp-0x1f8]
    let v10: struct16;  // [bp-0x1e8]
    let v11: Option<struct56>;  // [bp-0x1d8], Other Possible Types: struct72, u64
    let v12: u64;  // [bp-0x1d0]
    let v13: i64;  // [bp-0x1c8]
    let v14: u64;  // [bp-0x1c0]
    let v15: void*;  // [bp-0x1b8]
    let v16: i64;  // [bp-0x190]
    let v17: u64;  // [bp-0x188]
    let v18: struct92;  // [bp-0x180]
    let v19: struct24;  // [bp-0x180]
    let v20: struct40;  // [bp-0x170]
    let v21: iNone;  // [bp-0x160]
    let v22: struct32;  // [bp-0x150]
    let v23: struct56;  // [bp-0x140]
    let v24: u64;  // [bp-0x128]
    let v25: struct64;  // [bp-0x120]
    let v26: u64;  // [bp-0xe0]
    let v27: u32;  // [bp-0xb0]
    let v28: Option<struct137>;  // [bp-0xa8]
    let v29: u128;  // [bp-0x70]
    let v30: u64;  // [bp-0x60]
    let v31: u64;  // [bp-0x58]
    let v32: u128;  // [bp-0x50]
    let v33: u128;  // [bp-0x40]
    let v35: Result<struct32, struct16>;  // xmm0
    let v36: Result<struct16, struct64>;  // xmm0

    v18 = starship::context::Context::new_module(a1, "elixir");
    v28 = starship::config::ModuleConfig::try_load(v24);
    v11 = starship::context::Context::try_begin_scan(a1);
    if let None = v11 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v35 = *((&v28 as &char + 8) as &i128);
    v2 = struct72 {
        field_0: v11 as i64
        field_8: *((&v28 as &char + 32) as &i64)
        field_16: *((&v28 as &char + 40) as &i64)
        field_24: v29
        field_40: v35
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    if starship::context::ScanDir::is_match(&v2) {
        v27 = 0;
        v26 = a1;
        v0 = starship::formatter::string_formatter::StringFormatter::new(v30, v31);
        v25 = struct64 {
            field_0: v32
            field_16: v33
            field_32: &v28 as u8
            field_40: &v26
            field_48: &v18
            field_56: a1
        };
        if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
            v8 = v3;
            v7 = *((&v0 as &char + 8) as &i128);
        } else {
            v36 = v0 as i128;
            v11 = struct72 {
                field_0: v36
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: *((&v0 as &char + 32) as &i128)
                field_48: v4
                field_64: v5
            };
            v6 = starship::modules::elixir::module::{{closure}}(&v25, &v11);
            if v6.field_0 as i32 != 1 {
                v19 = starship::module::Module::set_segments(&v6 as u8);
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
        v10 = v8;
        v9 = v7;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v16 = &v9;
        v17 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v11 = "Error in module `elixir`:\n";
        v12 = 1;
        v15 = 0;
        v13 = &v16;
        v14 = 1;
        v0 = struct40 {
            field_0: "starship::modules::elixir"
            field_16: "starship::modules::elixir"
            field_32: log::__private_api::loc("src/modules/elixir.rs")
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
