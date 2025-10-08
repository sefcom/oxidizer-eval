fn starship::modules::pijul_channel::module(a0: i64, a1: u64) -> int {
    let v0: u128;  // [bp-0x218]
    let v1: void*;  // [bp-0x210]
    let v2: struct40;  // [bp-0x208]
    let v3: Option<struct24>;  // [bp-0x1f8], Other Possible Types: struct72
    let v4: u64;  // [bp-0x1f8]
    let v5: struct64;  // [bp-0x1f0]
    let v6: struct16;  // [bp-0x1e8], Other Possible Types: u64
    let v7: <anon>;  // [bp-0x1e0]
    let v8: struct72;  // [bp-0x1d8]
    let v9: struct32;  // [bp-0x1a8]
    let v10: struct24;  // [bp-0x1a0]
    let v11: struct40;  // [bp-0x190]
    let v12: struct40;  // [bp-0x188]
    let v13: struct72;  // [bp-0x178]
    let v14: Result<struct72, struct24>;  // [bp-0x170], Other Possible Types: struct40
    let v15: i64;  // [bp-0x158]
    let v16: struct32;  // [bp-0x140]
    let v17: i64;  // [bp-0x130]
    let v18: struct72;  // [bp-0x128]
    let v19: Result<struct81, struct73>;  // [bp-0x128]
    let v20: u64;  // [bp-0xf8]
    let v21: u64;  // [bp-0xf0]
    let v22: u64;  // [bp-0xe8]
    let v23: Option<struct56>;  // [bp-0xd0]
    let v24: struct92;  // [bp-0xc8]
    let v25: Option<struct56>;  // [bp-0xc0], Other Possible Types: struct24
    let v26: struct92;  // [bp-0xc0]
    let v27: struct24;  // [bp-0xb0]
    let v28: iNone;  // [bp-0x90]
    let v29: iNone;  // [bp-0x80]
    let v30: u64;  // [bp-0x68]
    let v31: struct24;  // [bp-0x60]
    let v32: struct40;  // [bp-0x48]
    let v34: &str;  // xmm0
    let v35: struct24;  // xmm2

    v25 = starship::context::Context::try_begin_scan(a1);
    if let None = v25 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v18 = struct72 {
        field_0: v25 as i64
        field_8: *((&v25 as &char + 8) as &i64)
        field_16: *((&v25 as &char + 16) as &i64)
        field_24: ".pijul"
        field_40: *((&v25 as &char + 40) as &i128)
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    if starship::context::ScanDir::is_match(&v18) {
        v26 = starship::context::Context::new_module(a1, "pijul_channel");
        v26 as u1152 = starship::config::ModuleConfig::try_load(v30);
        if *((&v19 as &char + 72) as &i8) {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v3 = starship::modules::pijul_channel::get_pijul_current_channel(a1);
        if (((0 ^ v3 as i64) & (0 ^ -(v4))) >> 63) as char {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v2 = v6;
        v0 = v3 as i128;
        v31 = starship::modules::utils::truncate::truncate_text(v1, v6, v22, v20, v21);
        v14 = starship::formatter::string_formatter::StringFormatter::new(0x1, *((&v19 as &char + 40) as &i64));
        v32 = struct40 {
            field_0: *((&v14 as &char + 72) as &i128)
            field_16: &v19 as u64
            field_24: &v31
            field_32: a1
        };
        match v14 {
            Err(_) => {
                v11 = v15;
                v10 = *((&v14 as &char + 8) as &i128);
            },
            Ok(_) => {
                v34 = v14 as i128;
                v3 = struct72 {
                    field_0: v34
                    field_16: *((&v14 as &char + 16) as &i128)
                    field_32: *((&v14 as &char + 32) as &i128)
                    field_48: v16
                    field_64: v17
                };
                v9 = starship::modules::pijul_channel::module::{{closure}}(&v32, &v3);
                if v9.field_0 as i32 != 1 {
                    v25 = starship::module::Module::set_segments(&v9 as u8);
                    v35 = *((&v26.field_24 as &char + 8) as &i128);
                    return struct96 {
                        field_0: v26.field_0
                        field_16: v27
                        field_32: v35
                        field_48: v28
                        field_64: v29
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
        v23 = &v12;
        v24 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v3 = "Error in module `pijul_channel`:\n";
        v5 = 1;
        v8 = 0;
        v6 = &v23;
        v7 = 1;
        v14 = struct40 {
            field_0: "starship::modules::pijul_channel"
            field_16: "starship::modules::pijul_channel"
            field_32: log::__private_api::loc("src/modules/pijul_channel.rs")
        };
        log::__private_api::log(&v3, 2, &v14);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
