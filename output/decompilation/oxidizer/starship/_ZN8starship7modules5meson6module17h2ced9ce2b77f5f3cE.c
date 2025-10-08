fn starship::modules::meson::module(a0: i64, a1: u64) -> int {
    let v0: u128;  // [bp-0x238]
    let v1: u64;  // [bp-0x230]
    let v2: struct24;  // [bp-0x228]
    let v3: u128;  // [bp-0x218]
    let v4: void*;  // [bp-0x210]
    let v5: struct24;  // [bp-0x208]
    let v6: struct32;  // [bp-0x1f8]
    let v7: struct32;  // [bp-0x1f0]
    let v8: struct24;  // [bp-0x1e0]
    let v9: struct24;  // [bp-0x1d8]
    let v10: struct24;  // [bp-0x1c8]
    let v11: Result<struct72, struct24>;  // [bp-0x1c0], Other Possible Types: struct40
    let v12: struct24;  // [bp-0x1a8]
    let v13: struct24;  // [bp-0x190]
    let v14: u64;  // [bp-0x180]
    let v15: Option<struct24>;  // [bp-0x178], Other Possible Types: struct24
    let v16: struct92;  // [bp-0x178]
    let v17: Option<struct24>;  // [bp-0x178]
    let v18: u128;  // [bp-0x168]
    let v19: iNone;  // [bp-0x158]
    let v20: iNone;  // [bp-0x148]
    let v21: u128;  // [bp-0x138]
    let v22: u64;  // [bp-0x120]
    let v23: struct24;  // [bp-0x118]
    let v24: struct40;  // [bp-0x110]
    let v25: struct40;  // [bp-0x108], Other Possible Types: struct72
    let v26: struct40;  // [bp-0x100]
    let v27: i64;  // [bp-0xf8]
    let v28: u64;  // [bp-0xf0]
    let v29: void*;  // [bp-0xe8]
    let v30: struct24;  // [bp-0xb8]
    let v31: struct40;  // [bp-0xa0]
    let v32: Result<struct72, struct69>;  // [bp-0x78]
    let v33: u64;  // [bp-0x70]
    let v34: u64;  // [bp-0x68]
    let v35: u64;  // [bp-0x60]
    let v36: u128;  // [bp-0x58]
    let v38: u64;  // rdx
    let v39: Option<struct24>;  // xmm0
    let v40: &str;  // rax:rdx

    v15 = starship::context_env::Env::get_env("MESON_DEVENV");
    if (((0 ^ v15 as i64) & (0 ^ -(v15 as i64))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v2 = *((&v15 as &char + 16) as &i64);
    v0 = v15 as i128;
    v17 = starship::context_env::Env::get_env("MESON_PROJECT_NAME");
    match v17 {
        None => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Some(_) => {
            v5 = *((&v17 as &char + 16) as &i64);
            v3 = v17 as i128 as u128;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, "1") as u8 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v40 = core::str::<impl str>::trim_matches(v4, v5, v38);
            if v40.length {
                v16 = starship::context::Context::new_module(a1, "meson");
                v32 = starship::config::ModuleConfig::try_load(v22);
                v30 = starship::modules::utils::truncate::truncate_text(v4, v5, *((&v32 as &char + 64) as &i32) as u32 as u64, v32 as i64, v33);
                v11 = starship::formatter::string_formatter::StringFormatter::new(v34, v35);
                v31 = struct40 {
                    field_0: v36
                    field_16: &v32 as u8
                    field_24: &v30
                    field_32: a1
                };
                match v11 {
                    Err(_) => {
                        v8 = v12;
                        v7 = *((&v11 as &char + 8) as &i128);
                    },
                    Ok(_) => {
                        v39 = v11 as i128;
                        v25 = struct72 {
                            field_0: v39
                            field_16: *((&v11 as &char + 16) as &i128)
                            field_32: *((&v11 as &char + 32) as &i128)
                            field_48: v13
                            field_64: v14
                        };
                        v6 = starship::modules::meson::module::{{closure}}(&v31, &v25);
                        if v6.field_0 as i32 != 1 {
                            v15 = starship::module::Module::set_segments(&v6 as u8);
                            return struct96 {
                                field_0: v16.field_0
                                field_16: v18
                                field_32: v19
                                field_48: v20
                                field_64: v21
                                field_80: *(&v16.field_80 as &i128)
                            };
                        }
                    },
                }
                v10 = v8;
                v9 = v7;
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
                v23 = &v9;
                v24 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v25 = "Error in module `meson`:\n";
                v26 = 1;
                v29 = 0;
                v27 = &v23;
                v28 = 1;
                v11 = struct40 {
                    field_0: "starship::modules::meson"
                    field_16: "starship::modules::meson"
                    field_32: log::__private_api::loc("src/modules/meson.rs")
                };
                log::__private_api::log(&v25, 2, &v11);
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
