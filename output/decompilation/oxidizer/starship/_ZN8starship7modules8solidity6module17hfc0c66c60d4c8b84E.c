fn starship::modules::solidity::module(a0: i64, a1: u64) -> void {
    let v0: struct40;  // [bp-0x220], Other Possible Types: u64
    let v1: struct72;  // [bp-0x220]
    let v2: Result<struct72, struct24>;  // [bp-0x220]
    let v3: i64;  // [bp-0x208]
    let v4: struct72;  // [bp-0x1f0]
    let v5: struct24;  // [bp-0x1e0]
    let v6: struct32;  // [bp-0x1d8]
    let v7: struct17;  // [bp-0x1d0]
    let v8: struct128;  // [bp-0x1c0]
    let v9: struct24;  // [bp-0x1b8]
    let v10: Result<struct72, struct24>;  // [bp-0x1a8]
    let v11: Option<struct56>;  // [bp-0x198], Other Possible Types: struct72
    let v12: struct40;  // [bp-0x190]
    let v13: struct40;  // [bp-0x188]
    let v14: struct40;  // [bp-0x180]
    let v15: struct40;  // [bp-0x178]
    let v16: struct92;  // [bp-0x150]
    let v17: Option<struct24>;  // [bp-0x148]
    let v18: struct24;  // [bp-0x140]
    let v19: struct92;  // [bp-0x128]
    let v20: struct24;  // [bp-0x128]
    let v21: struct92;  // [bp-0x118]
    let v22: struct32;  // [bp-0x108]
    let v23: struct40;  // [bp-0xf8]
    let v24: struct40;  // [bp-0xe8]
    let v25: u64;  // [bp-0xd0]
    let v26: Option<struct161>;  // [bp-0xc8]
    let v27: struct24;  // [bp-0x78]
    let v28: u64;  // [bp-0x68]
    let v30: struct8;  // xmm0
    let v31: struct24;  // xmm0

    v19 = starship::context::Context::new_module(a1, "solidity");
    v26 = starship::config::ModuleConfig::try_load(v25);
    v11 = starship::context::Context::try_begin_scan(a1);
    if let None = v11 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v30 = *((&v26 as &char + 32) as &i128);
    v1 = struct72 {
        field_0: v11 as i64
        field_8: *((&v26 as &char + 56) as &i64)
        field_16: *((&v26 as &char + 64) as &i64)
        field_24: v27
        field_40: v30
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    if starship::context::ScanDir::is_match(&v1) {
        v2 = starship::formatter::string_formatter::StringFormatter::new(v28, *((&v26 as &char + 104) as &i64));
        v18 = struct24 {
            field_0: &v26
            field_8: a1
            field_16: &v19
        };
        if (((0 ^ v2 as i64) & (0 ^ -(v0))) >> 63) as char {
            v8 = v3;
            v7 = *((&v2 as &char + 8) as &i128);
        } else {
            v31 = v2 as i128;
            v11 = struct72 {
                field_0: v31
                field_16: *((&v2 as &char + 16) as &i128)
                field_32: *((&v2 as &char + 32) as &i128)
                field_48: v4
                field_64: v5
            };
            v6 = starship::modules::solidity::module::{{closure}}(&v18, &v11);
            if v6.field_0 as i32 != 1 {
                v20 = starship::module::Module::set_segments(&v6 as u8);
                return struct96 {
                    field_0: v19.field_0
                    field_16: v21
                    field_32: v22
                    field_48: v23
                    field_64: v24
                    field_80: *(&v19.field_80 as &i128)
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
        v11 = "Error in module 'solidity'\n ";
        v12 = 1;
        v15 = 0;
        v13 = &v16;
        v14 = 1;
        v0 = struct40 {
            field_0: "starship::modules::solidity"
            field_16: "starship::modules::solidity"
            field_32: log::__private_api::loc("src/modules/solidity.rs")
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
