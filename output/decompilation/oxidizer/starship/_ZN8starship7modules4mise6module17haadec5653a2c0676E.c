fn starship::modules::mise::module(a0: i64, a1: u64) -> void {
    let v0: struct32;  // [bp-0x248]
    let v5: struct40;  // [bp-0x210], Other Possible Types: struct72
    let v8: &str;  // [bp-0x1c8]
    let v9: Option<struct56>;  // [bp-0x1c8]
    let v13: struct92;  // [bp-0x190]
    let v14: struct24;  // [bp-0x190]
    let v15: u128;  // [bp-0x180]
    let v16: u128;  // [bp-0x170]
    let v17: u128;  // [bp-0x160]
    let v18: u128;  // [bp-0x150]
    let v19: u64;  // [bp-0x138]
    let v20: struct56;  // [bp-0x130]
    let v21: Option<struct153>;  // [bp-0xf8]
    let v22: u128;  // [bp-0xc0]
    let v23: u64;  // [bp-0xb0]
    let v24: u64;  // [bp-0xa8]
    let v25: u128;  // [bp-0x80]
    let v26: u128;  // [bp-0x70]
    let v27: u64;  // [bp-0x58]
    let v28: Result<struct72, struct24>;  // [bp-0x58]
    let v31: &str;  // xmm0

    v13 = starship::context::Context::new_module(a1, "mise");
    v21 = starship::config::ModuleConfig::try_load(v19);
    if *((&v21 as &char + 152) as &i8) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v9 = starship::context::Context::try_begin_scan(a1);
    if let Some(_) = v9 {
        v31 = *((&v21 as &char + 8) as &i128);
        v5 = struct72 {
            field_0: v9 as i64
            field_8: *((&v21 as &char + 32) as &i64)
            field_16: *((&v21 as &char + 40) as &i64)
            field_24: v22
            field_40: v31
            field_56: <UNKNOWN>
            field_64: <UNKNOWN>
        };
        if starship::context::ScanDir::is_match(&v5) as u8 {
            v28 = starship::formatter::string_formatter::StringFormatter::new(v23, v24);
            v20 = struct56 {
                field_0: &v21 as u8
                field_8: &v21 as u8
                field_16: v25
                field_32: v26
                field_48: a1
            };
            if !((((0 ^ v28 as i64) & (0 ^ -(v27))) >> 63) as char) {
                v0 = starship::modules::mise::module::{{closure}}(&v20, &v28);
                if v0.field_0 as i32 != 1 {
                    v14 = starship::module::Module::set_segments(&v0 as u8);
                    return struct96 {
                        field_0: v13.field_0
                        field_16: v15
                        field_32: v16
                        field_48: v17
                        field_64: v18
                        field_80: *(&v13.field_80 as &i128)
                    };
                }
            }
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v5 = struct40 {
                field_0: "starship::modules::mise"
                field_16: "starship::modules::mise"
                field_32: log::__private_api::loc("src/modules/mise.rs")
            };
            log::__private_api::log(&v8 as u64, 2, &v5);
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
