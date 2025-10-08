fn starship::modules::hostname::module(a0: u32) -> void {
    let v0: struct72;  // [bp-0x290]
    let v1: u128;  // [bp-0x288]
    let v2: &mut [u8];  // [bp-0x280], Other Possible Types: u64
    let v3: Result<struct72, struct24>;  // [bp-0x278], Other Possible Types: struct40
    let v4: struct24;  // [bp-0x278]
    let v5: u64;  // [bp-0x260]
    let v6: struct40;  // [bp-0x248]
    let v7: u64;  // [bp-0x238]
    let v8: struct40;  // [bp-0x230]
    let v9: struct16;  // [bp-0x228], Other Possible Types: u128
    let v10: Option<struct32>;  // [bp-0x218], Other Possible Types: Result<struct24, struct16>, struct72, u64
    let v11: &mut [u8];  // [bp-0x210], Other Possible Types: u64
    let v12: i64;  // [bp-0x208]
    let v13: u64;  // [bp-0x200]
    let v14: void*;  // [bp-0x1f8]
    let v15: struct32;  // [bp-0x1c8]
    let v16: struct48;  // [bp-0x1c0]
    let v17: struct48;  // [bp-0x1b0]
    let v18: iNone;  // [bp-0x1a8]
    let v19: struct48;  // [bp-0x198]
    let v20: Option<struct24>;  // [bp-0x190]
    let v21: i64;  // [bp-0x178]
    let v22: u64;  // [bp-0x170]
    let v23: struct48;  // [bp-0x168]
    let v24: struct92;  // [bp-0x138]
    let v25: struct24;  // [bp-0x138]
    let v26: u128;  // [bp-0x128]
    let v27: iNone;  // [bp-0x118]
    let v28: iNone;  // [bp-0x108]
    let v29: u128;  // [bp-0xf8]
    let v30: u64;  // [bp-0xe0]
    let v31: Option<struct162>;  // [bp-0xd8]
    let v32: u64;  // [bp-0xd0]
    let v33: u64;  // [bp-0xc8]
    let v34: struct88;  // [bp-0x78]
    let v35: struct56;  // [bp-0x68]
    let v36: struct192;  // [bp-0x60]
    let v37: u64;  // [bp-0x58]
    let v38: u64;  // [bp-0x50]
    let v40: u64;  // rsi
    let v41: u64;  // r13
    let v42: &mut [u8];  // r12
    let v43: u64;  // rdx
    let v44: struct40;  // rsi
    let v45: &str;  // rax
    let v46: struct32;  // xmm0
    let v47: Result<struct57, struct49>;  // [bp-0x228]

    v24 = starship::context::Context::new_module(v40, "hostname");
    v31 = starship::config::ModuleConfig::try_load(v30);
    v20 = starship::context_env::Env::get_env("SSH_CONNECTION");
    if *((&v31 as &char + 160) as &i8) == 1 && v20 as i64 == 0x8000000000000000 || !starship::context::Context::detect_env_vars(a0, v32, v33) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v10 = whoami::os::target::<impl whoami::os::Target for whoami::os::Os>::hostname();
    v4 = core::result::Result<T,E>::inspect_err(&v10);
    if v4.field_0 as i64 != 0x8000000000000000 {
        v1 = *((&v4.field_0 as &char + 8) as &i128);
        v0 = v4.field_0 as i64;
        if v36 {
            v41 = v1;
            v42 = v2;
            if (core::str::<impl str>::find(v41, v2, v35, v36) & 1) {
                v8 = v41;
                v10 = core::str::<impl str>::split_at_checked(v41, v2, v43);
                v42 = v11;
            } else {
                v44 = v41;
            }
        } else {
            v44 = v1 as i64;
            v42 = v2;
        }
        v9 = struct16 {
            field_0: v44
            field_8: v42
        };
        v45 = indexmap::map::IndexMap<K,V,S>::get(&v31 as u8, v44, v42, v36);
        if v45 {
            v9 = *(v45 as &i128);
        }
        v3 = starship::formatter::string_formatter::StringFormatter::new(v37, v38);
        v23 = struct48 {
            field_0: &v20
            field_8: v34
            field_24: &v32 as u8
            field_32: &v47
            field_40: v40
        };
        match v3 {
            Err(_) => {
                v17 = v5;
                v16 = *((&v3 as &char + 8) as &i128);
            },
            Ok(_) => {
                v46 = v3 as i128;
                v10 = struct72 {
                    field_0: v46
                    field_16: *((&v3 as &char + 16) as &i128)
                    field_32: *((&v3 as &char + 32) as &i128)
                    field_48: v6
                    field_64: v7
                };
                v15 = starship::modules::hostname::module::{{closure}}(&v23, &v10);
                if !(v15.field_0 as i8 & 1) {
                    v25 = starship::module::Module::set_segments(&v15 as u8);
                    return struct96 {
                        field_0: v24.field_0
                        field_16: v26
                        field_32: v27
                        field_48: v28
                        field_64: v29
                        field_80: *(&v24.field_80 as &i128)
                    };
                }
            },
        }
        v19 = v17;
        v18 = v16;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v21 = &v18;
        v22 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v10 = "Error in module `hostname`:\n";
        v11 = 1;
        v14 = 0;
        v12 = &v21;
        v13 = 1;
        v3 = struct40 {
            field_0: "starship::modules::hostname"
            field_16: "starship::modules::hostname"
            field_32: log::__private_api::loc("src/modules/hostname.rs")
        };
        log::__private_api::log(&v10, 2, &v3);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
