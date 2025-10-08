fn starship::modules::pixi::module(a0: i64, a1: u64) -> void {
    let v1: Result<struct72, struct24>;  // [bp-0x278], Other Possible Types: struct40, struct72, u128
    let v3: Option<struct137>;  // [bp-0x268]
    let v4: struct92;  // [bp-0x260]
    let v5: struct40;  // [bp-0x248]
    let v6: struct48;  // [bp-0x238]
    let v7: Option<struct24>;  // [bp-0x230]
    let v8: u64;  // [bp-0x230]
    let v12: struct72;  // [bp-0x218]
    let v14: Option<struct56>;  // [bp-0x1f8], Other Possible Types: struct24, struct72, u64
    let v15: u64;  // [bp-0x1f0]
    let v16: struct40;  // [bp-0x1e8], Other Possible Types: struct_0 *
    let v17: u64;  // [bp-0x1e0]
    let v18: void*;  // [bp-0x1d8]
    let v19: struct32;  // [bp-0x1a8]
    let v20: Option<struct169>;  // [bp-0x1a0]
    let v21: struct24;  // [bp-0x190]
    let v22: iNone;  // [bp-0x188]
    let v23: struct24;  // [bp-0x178]
    let v24: i64;  // [bp-0x168]
    let v25: u64;  // [bp-0x160]
    let v26: struct32;  // [bp-0x158]
    let v27: struct92;  // [bp-0x138]
    let v28: struct24;  // [bp-0x138]
    let v29: iNone;  // [bp-0x128]
    let v30: struct92;  // [bp-0x118]
    let v31: struct96;  // [bp-0x108]
    let v32: iNone;  // [bp-0xf8]
    let v33: u64;  // [bp-0xe0]
    let v34: Option<struct162>;  // [bp-0xd8]
    let v35: u128;  // [bp-0x88]
    let v36: u64;  // [bp-0x78]
    let v38: struct24;  // xmm0
    let v39: struct32;  // xmm0

    v27 = starship::context::Context::new_module(a1, "pixi");
    v34 = starship::config::ModuleConfig::try_load(v33);
    v7 = starship::context_env::Env::get_env("PIXI_ENVIRONMENT_NAME");
    if (((0 ^ v7 as i64) & (0 ^ -(v8))) >> 63) as char {
        v14 = starship::context::Context::try_begin_scan(a1);
        if let None = v14 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v38 = *((&v34 as &char + 32) as &i128);
        v1 = struct72 {
            field_0: v14 as i64
            field_8: *((&v34 as &char + 56) as &i64)
            field_16: *((&v34 as &char + 64) as &i64)
            field_24: v35
            field_40: v38
            field_56: <UNKNOWN>
            field_64: <UNKNOWN>
        };
        if starship::context::ScanDir::is_match(&v1) {
            goto LABEL_bb2d93;
        }
        return struct8 {
            field_0: 0x8000000000000000
        };
    } else {
LABEL_bb2d93:
        if !*((&v34 as &char + 160) as &i8) {
            v14 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("default");
            v3 = v16;
            v1 = *(&v14.field_0 as &i128);
        }
        v1 = starship::formatter::string_formatter::StringFormatter::new(v36, *((&v34 as &char + 104) as &i64));
        v26 = struct32 {
            field_0: &v34
            field_8: &v12
            field_16: a1
            field_24: &v27
        };
        match v1 {
            Err(_) => {
                v21 = v4;
                v20 = *((&v1 as &char + 8) as &i128);
            },
            Ok(_) => {
                v39 = v1 as i128;
                v14 = struct72 {
                    field_0: v39
                    field_16: *((&v1 as &char + 16) as &i128)
                    field_32: *((&v1 as &char + 32) as &i128)
                    field_48: v5
                    field_64: v6
                };
                v19 = starship::modules::pixi::module::{{closure}}(&v26, &v14);
                if v19.field_0 as i32 != 1 {
                    v28 = starship::module::Module::set_segments(&v19 as u8);
                    return struct96 {
                        field_0: v27.field_0
                        field_16: v29
                        field_32: v30
                        field_48: v31
                        field_64: v32
                        field_80: *(&v27.field_80 as &i128)
                    };
                }
            },
        }
        v23 = v21;
        v22 = v20;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v24 = &v22;
        v25 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v14 = "Error in module `pixi`:\n";
        v15 = 1;
        v18 = 0;
        v16 = &v24;
        v17 = 1;
        v1 = struct40 {
            field_0: "starship::modules::pixi"
            field_16: "starship::modules::pixi"
            field_32: log::__private_api::loc("src/modules/pixi.rs")
        };
        log::__private_api::log(&v14, 2, &v1);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
