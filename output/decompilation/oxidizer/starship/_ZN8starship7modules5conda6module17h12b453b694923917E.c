fn starship::modules::conda::module(a0: i64, a1: u64) -> void {
    let v0: u128;  // [bp-0x238]
    let v3: Result<struct24, struct16>;  // [bp-0x228]
    let v5: Option<struct24>;  // [bp-0x1f8], Other Possible Types: struct40, struct72
    let v7: struct16;  // [bp-0x1f0]
    let v8: core::fmt::Arguments;  // [bp-0x1e0]
    let v9: struct64;  // [bp-0x1d8]
    let v10: struct32;  // [bp-0x1a8]
    let v11: struct48;  // [bp-0x1a0]
    let v12: struct40;  // [bp-0x190]
    let v13: struct24;  // [bp-0x188]
    let v14: struct24;  // [bp-0x178]
    let v15: Result<struct72, struct24>;  // [bp-0x168], Other Possible Types: struct40
    let v16: u64;  // [bp-0x150]
    let v17: iNone;  // [bp-0x138]
    let v18: struct8;  // [bp-0x128]
    let v19: Result<struct88, struct82>;  // [bp-0x120]
    let v20: u64;  // [bp-0x118]
    let v21: u64;  // [bp-0x110]
    let v22: u64;  // [bp-0x108]
    let v23: u64;  // [bp-0x100]
    let v24: struct24;  // [bp-0xf8]
    let v25: struct24;  // [bp-0xd8]
    let v26: struct272;  // [bp-0xc8]
    let v27: Option<struct24>;  // [bp-0xc0]
    let v28: Option<struct24>;  // [bp-0xb8], Other Possible Types: struct24
    let v29: struct92;  // [bp-0xb8]
    let v30: u128;  // [bp-0xa8]
    let v31: u128;  // [bp-0x98]
    let v32: u128;  // [bp-0x88]
    let v33: u128;  // [bp-0x78]
    let v34: u64;  // [bp-0x60]
    let v35: struct40;  // [bp-0x58]
    let v37: struct16;  // r12
    let v38: struct24;  // r15
    let v39: u64;  // rdx
    let v40: Result<(), Error>;  // rdi
    let v41: iNone;  // xmm0
    let v42: &str;  // rax:rdx
    let v43: iNone;  // [bp-0x218]
    let v44: i64;  // [bp-0x1e8]

    v28 = starship::context_env::Env::get_env("CONDA_DEFAULT_ENV");
    if !((((0 ^ v28 as i64) & (0 ^ -(v28 as i64))) >> 63) as char) {
        v0 = v28 as i128;
        v38 = *((&v28 as &char + 16) as &i64);
        v3 = *((&v28 as &char + 16) as &i64);
    }
    v42 = core::str::<impl str>::trim_matches(v37, v38, v39);
    if !v42.length {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v29 = starship::context::Context::new_module(a1, "conda");
    v19 = starship::config::ModuleConfig::try_load(v34);
    if *((&v19 as &char + 80) as &i8) && <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v37, v38, "base") || !starship::context::Context::detect_env_vars(v40, v20, v21) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v5 = starship::modules::utils::directory::truncate(v37, v38, v25);
    v15 = starship::formatter::string_formatter::StringFormatter::new(v22, v23);
    v35 = struct40 {
        field_0: v24
        field_16: &v19 as u8
        field_24: &v43
        field_32: a1
    };
    match v15 {
        Err(_) => {
            v12 = v16;
            v11 = *((&v15 as &char + 8) as &i128);
        },
        Ok(_) => {
            v41 = v15 as i128;
            v5 = struct72 {
                field_0: v41
                field_16: *((&v15 as &char + 16) as &i128)
                field_32: *((&v15 as &char + 32) as &i128)
                field_48: v17
                field_64: v18
            };
            v10 = starship::modules::conda::module::{{closure}}(&v35, &v5);
            if v10.field_0 as i32 != 1 {
                v28 = starship::module::Module::set_segments(&v10 as u8);
                return struct96 {
                    field_0: v29.field_0
                    field_16: v30
                    field_32: v31
                    field_48: v32
                    field_64: v33
                    field_80: *(&v29.field_80 as &i128)
                };
            }
        },
    }
    v14 = v12;
    v13 = v11;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v26 = &v13;
    v27 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v5 = "Error in module `conda`:\n";
    v7 = 1;
    v9 = 0;
    v44 = &v26;
    v8 = 1;
    v15 = struct40 {
        field_0: "starship::modules::conda"
        field_16: "starship::modules::conda"
        field_32: log::__private_api::loc("src/modules/conda.rs")
    };
    log::__private_api::log(&v5, 2, &v15);
    return struct8 {
        field_0: 0x8000000000000000
    };
    return struct8 {
        field_0: 0x8000000000000000
    };
}
