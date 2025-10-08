fn starship::modules::shlvl::module(a0: i64, a1: i64) -> int {
    let v0: u128;  // [bp-0x208]
    let v1: u64;  // [bp-0x208]
    let v2: u128;  // [bp-0x200]
    let v3: struct40;  // [bp-0x1f8]
    let v4: struct40;  // [bp-0x1f0]
    let v5: struct32;  // [bp-0x1e8]
    let v6: struct40;  // [bp-0x1e0]
    let v7: struct40;  // [bp-0x1d0]
    let v8: struct72;  // [bp-0x1c8]
    let v9: Option<struct24>;  // [bp-0x1b8]
    let v10: Result<struct24, struct16>;  // [bp-0x1a8], Other Possible Types: struct24, struct72
    let v11: struct24;  // [bp-0x1a0]
    let v12: struct32;  // [bp-0x198], Other Possible Types: struct92
    let v13: struct92;  // [bp-0x190]
    let v14: struct24;  // [bp-0x188]
    let v15: Result<struct72, struct24>;  // [bp-0x160], Other Possible Types: struct40
    let v16: struct40;  // [bp-0x148]
    let v17: struct24;  // [bp-0x130]
    let v18: u64;  // [bp-0x120]
    let v19: struct40;  // [bp-0x118]
    let v20: Option<struct162>;  // [bp-0x110]
    let v21: struct72;  // [bp-0x108]
    let v22: u64;  // [bp-0x100]
    let v23: u64;  // [bp-0xf8]
    let v24: i64;  // [bp-0xf0]
    let v25: struct72;  // [bp-0xd8]
    let v26: struct4;  // [bp-0xd0]
    let v27: i8;  // [bp-0xc8]
    let v28: struct24;  // [bp-0xc0]
    let v29: struct32;  // [bp-0xa8]
    let v30: struct92;  // [bp-0x88]
    let v31: struct24;  // [bp-0x88]
    let v32: u128;  // [bp-0x78]
    let v33: iNone;  // [bp-0x68]
    let v34: struct24;  // [bp-0x58]
    let v35: u128;  // [bp-0x48]
    let v37: u32;  // rdx
    let v38: struct40;  // rax
    let v39: struct8;  // cc_ndep
    let v40: struct20;  // xmm0

    if !(core::option::Option<T>::or_else(*(a1 as &i64), *((a1 + 8) as &i64)) & 1) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v30 = starship::context::Context::new_module(a1, "shlvl");
    v21 = starship::config::ModuleConfig::try_load(v30.field_88);
    if v21.field_65 || v37 < v25 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v28 = <i64 as alloc::string::SpecToString>::spec_to_string(v37);
    v4 = &v28;
    if !v27 {
        v38 = 1;
        if !v26 {
            goto LABEL_bbbef4;
        }
    } else if !v26 {
        goto LABEL_bbbeee;
    }
    if _ccall(6, 8, v38, v26, v39) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
LABEL_bbbeee:
    if v38 == 1 {
LABEL_bbbef4:
        v2 = v21.field_16;
        v1 = 0x8000000000000000;
    } else {
        v10 = alloc::slice::<impl [T]>::repeat(v23, v24, v38);
        v3 = v12;
        v0 = v10.field_0;
    }
    v15 = starship::formatter::string_formatter::StringFormatter::new(v21.field_0, v22);
    v29 = struct32 {
        field_0: &v0 as u8
        field_8: &v21 as u8
        field_16: &v4
        field_24: a1
    };
    match v15 {
        Err(_) => {
            v7 = v16;
            v6 = *((&v15 as &char + 8) as &i128);
        },
        Ok(_) => {
            v40 = v15 as i128;
            v10 = struct72 {
                field_0: v40
                field_16: *((&v15 as &char + 16) as &i128)
                field_32: *((&v15 as &char + 32) as &i128)
                field_48: v17
                field_64: v18
            };
            v5 = starship::modules::shlvl::module::{{closure}}(&v29, &v10);
            if v5.field_0 as i32 != 1 {
                v31 = starship::module::Module::set_segments(&v5 as u8);
                return struct96 {
                    field_0: v30.field_0
                    field_16: v32
                    field_32: v33
                    field_48: v34
                    field_64: v35
                    field_80: *(&v30.field_80 as &i128)
                };
            }
        },
    }
    v9 = v7;
    v8 = v6;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v19 = &v8;
    v20 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v10 = "Error in module `shlvl`:\n";
    v11 = 1;
    v14 = 0;
    v12 = &v19;
    v13 = 1;
    v15 = struct40 {
        field_0: "starship::modules::shlvl"
        field_16: "starship::modules::shlvl"
        field_32: log::__private_api::loc("src/modules/shlvl.rs")
    };
    log::__private_api::log(&v10, 2, &v15);
    return struct8 {
        field_0: 0x8000000000000000
    };
    return struct8 {
        field_0: 0x8000000000000000
    };
}
