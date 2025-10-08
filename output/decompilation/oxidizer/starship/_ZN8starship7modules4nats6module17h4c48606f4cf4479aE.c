fn starship::modules::nats::module(a0: i64, a1: u64) -> void {
    let v0: Result<struct72, struct24>;  // [bp-0x208], Other Possible Types: struct24, struct40, u128
    let v1: &str;  // [bp-0x1f8], Other Possible Types: u128
    let v2: u64;  // [bp-0x1f0]
    let v3: struct72;  // [bp-0x1e8]
    let v4: iNone;  // [bp-0x1d8]
    let v5: struct24;  // [bp-0x1b8]
    let v6: struct24;  // [bp-0x1a8]
    let v7: struct24;  // [bp-0x198]
    let v8: struct32;  // [bp-0x198]
    let v9: u128;  // [bp-0x190]
    let v10: struct24;  // [bp-0x180]
    let v11: Result<struct32, struct9>;  // [bp-0x178], Other Possible Types: struct40, struct72, u64
    let v12: Option<struct48>;  // [bp-0x178]
    let v13: struct40;  // [bp-0x170], Other Possible Types: u64
    let v14: i64;  // [bp-0x168]
    let v15: u64;  // [bp-0x160]
    let v16: void*;  // [bp-0x158], Other Possible Types: u128
    let v17: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x128]
    let v18: u128;  // [bp-0x127]
    let v19: struct72;  // [bp-0x118]
    let v20: struct72;  // [bp-0x108]
    let v21: struct88;  // [bp-0xf8]
    let v22: struct72;  // [bp-0xe8]
    let v23: struct56;  // [bp-0xe0]
    let v24: struct40;  // [bp-0xd8]
    let v25: struct92;  // [bp-0xb0]
    let v26: struct24;  // [bp-0xb0]
    let v27: struct24;  // [bp-0xa0]
    let v28: struct24;  // [bp-0x90]
    let v29: u128;  // [bp-0x80]
    let v30: struct24;  // [bp-0x70]
    let v31: u64;  // [bp-0x58]
    let v32: Result<struct57, struct49>;  // [bp-0x50]
    let v33: i64;  // [bp-0x48]
    let v34: struct24;  // [bp-0x40]
    let v36: struct24;  // xmm0
    let v37: u8;  // dl
    let v38: &str;  // xmm1
    let v39: struct72;  // xmm0

    v25 = starship::context::Context::new_module(a1, "nats");
    v32 = starship::config::ModuleConfig::try_load(v31);
    if *((&v32 as &char + 48) as &i8) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v12 = starship::context::Context::exec_cmd(a1, "nats", "context", 3);
    if (((0 ^ v12 as i64) & (0 ^ -(v11))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v36 = v12 as i128;
    v3 = v16;
    v1 = *((&v12 as &char + 16) as &i128);
    v0 = v36;
    v5 = v36;
    v6 = v1;
    v7 = struct24 {
        field_0: *(&v5.field_8 as &i128)
        field_16: 0
    };
    v11 = serde_json::de::from_trait(&v7, v37);
    match v11 {
        Err(_) => {
            starship::modules::nats::module::{{closure}}(v13);
        },
        Ok(_) => {
            v38 = *((&v11 as &char + 16) as &i128);
            v0 = v11 as i128 as u128;
            v1 = v38;
            if v0 != 6 {
                v19 = *(&v1.data_ptr as &i128);
                v18 = *((&v0 as &char + 1) as &i128) as u128;
                v17 = v0;
                v0 = starship::formatter::string_formatter::StringFormatter::new(v32 as i64, v33);
                v24 = struct40 {
                    field_0: v34
                    field_16: &v32 as u8
                    field_24: &v17
                    field_32: a1
                };
                match v0 {
                    Err(_) => {
                        v10 = v2;
                        v9 = *((&v0 as &char + 8) as &i128) as u128;
                    },
                    Ok(_) => {
                        v39 = v0 as i128;
                        v11 = struct72 {
                            field_0: v39
                            field_16: *((&v0 as &char + 16) as &i128)
                            field_32: v3
                            field_48: v4
                            field_64: *((&v0 as &char + 64) as &i64)
                        };
                        v8 = starship::modules::nats::module::{{closure}}(&v24, &v11);
                        if v8.field_0 as i32 != 1 {
                            v26 = starship::module::Module::set_segments(&v8 as u8);
                            return struct96 {
                                field_0: v25.field_0
                                field_16: v27
                                field_32: v28
                                field_48: v29
                                field_64: v30
                                field_80: *(&v25.field_80 as &i128)
                            };
                        }
                    },
                }
                v21 = v10;
                v20 = v8.field_8;
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
                v22 = &v20;
                v23 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v11 = "Error in module `nats`:\n";
                v13 = 1;
                v16 = 0;
                v14 = &v22;
                v15 = 1;
                v0 = struct40 {
                    field_0: "starship::modules::nats"
                    field_16: "starship::modules::nats"
                    field_32: log::__private_api::loc("src/modules/nats.rs")
                };
                log::__private_api::log(&v11, 2, &v0);
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
        },
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
