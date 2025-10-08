fn starship::modules::azure::module(a0: i64, a1: u64) -> void {
    let v0: Result<struct72, struct24>;  // [bp-0x270], Other Possible Types: struct40
    let v1: u64;  // [bp-0x258]
    let v2: struct8;  // [bp-0x240]
    let v3: struct16;  // [bp-0x230]
    let v4: Result<struct24, struct24>;  // [bp-0x228], Other Possible Types: struct72, u64
    let v5: struct32;  // [bp-0x220], Other Possible Types: u64
    let v6: struct8;  // [bp-0x218], Other Possible Types: u64
    let v7: Result<struct168, struct40>;  // [bp-0x210], Other Possible Types: u128
    let v8: struct40;  // [bp-0x208]
    let v9: struct32;  // [bp-0x1d8]
    let v10: struct16;  // [bp-0x1d0]
    let v11: struct80;  // [bp-0x1c0]
    let v12: struct24;  // [bp-0x1b8]
    let v13: struct80;  // [bp-0x1a8]
    let v14: Result<struct24, struct24>;  // [bp-0x198]
    let v15: Result<struct24, struct24>;  // [bp-0x190]
    let v16: u64;  // [bp-0x188]
    let v17: iNone;  // [bp-0x180]
    let v18: u128;  // [bp-0x170]
    let v19: iNone;  // [bp-0x160]
    let v20: Option<struct56>;  // [bp-0x150]
    let v21: u64;  // [bp-0x150]
    let v22: iNone;  // [bp-0x148]
    let v23: iNone;  // [bp-0x138]
    let v24: iNone;  // [bp-0x128]
    let v25: struct56;  // [bp-0x118]
    let v26: struct92;  // [bp-0xe0]
    let v27: struct24;  // [bp-0xe0]
    let v28: struct24;  // [bp-0xd0]
    let v29: u128;  // [bp-0xc0]
    let v30: core::fmt::Arguments;  // [bp-0xb0]
    let v31: core::fmt::Arguments;  // [bp-0xa0]
    let v32: u64;  // [bp-0x88]
    let v33: Result<struct105, struct97>;  // [bp-0x80]
    let v34: i64;  // [bp-0x78]
    let v35: iNone;  // [bp-0x70]
    let v37: iNone;  // xmm0

    v26 = starship::context::Context::new_module(a1, "azure");
    v33 = starship::config::ModuleConfig::try_load(v32);
    if *((&v33 as &char + 96) as &i8) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v20 = starship::modules::azure::get_azure_profile_info(a1);
    if (((0 ^ v20 as i64) & (0 ^ -(v21))) >> 63) as char {
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 3 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v4 = "Could not find Subscriptions in azureProfile.json";
        v5 = 1;
        v6 = 8;
        v7 = 0;
        v0 = struct40 {
            field_0: "starship::modules::azure"
            field_16: "starship::modules::azure"
            field_32: log::__private_api::loc("src/modules/azure.rs")
        };
        log::__private_api::log(&v4, 3, &v0);
        return struct8 {
            field_0: 0x8000000000000000
        };
    } else {
        v19 = v24;
        v18 = v23;
        v17 = v22;
        v16 = v20 as i64;
        v0 = starship::formatter::string_formatter::StringFormatter::new(v33 as i64, v34);
        v25 = struct56 {
            field_0: v35
            field_16: &v33 as u8
            field_24: &v33 as u8
            field_32: &v16
            field_40: &v18
            field_48: a1
        };
        match v0 {
            Err(_) => {
                v11 = v1;
                v10 = *((&v0 as &char + 8) as &i128);
            },
            Ok(_) => {
                v37 = v0 as i128;
                v4 = struct72 {
                    field_0: v37
                    field_16: *((&v0 as &char + 16) as &i128)
                    field_32: *((&v0 as &char + 32) as &i128)
                    field_48: v2
                    field_64: v3
                };
                v9 = starship::modules::azure::module::{{closure}}(&v25, &v4);
                if v9.field_0 as i32 != 1 {
                    v27 = starship::module::Module::set_segments(&v9 as u8);
                    return struct96 {
                        field_0: v26.field_0
                        field_16: v28
                        field_32: v29
                        field_48: v30
                        field_64: v31
                        field_80: *(&v26.field_80 as &i128)
                    };
                }
            },
        }
        v13 = v11;
        v12 = v10;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v14 = &v12;
        v15 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v4 = "Error in module `azure`:\n";
        v5 = 1;
        v8 = 0;
        v6 = &v14;
        v7 = 1;
        v0 = struct40 {
            field_0: "starship::modules::azure"
            field_16: "starship::modules::azure"
            field_32: log::__private_api::loc("src/modules/azure.rs")
        };
        log::__private_api::log(&v4, 2, &v0);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
