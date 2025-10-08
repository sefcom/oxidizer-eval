fn starship::modules::spack::module(a0: i64, a1: u64) -> void {
    let v0: u128;  // [bp-0x218]
    let v3: struct8;  // [bp-0x208]
    let v5: Option<struct24>;  // [bp-0x1d8], Other Possible Types: struct72
    let v7: struct40;  // [bp-0x1d0]
    let v8: struct64;  // [bp-0x1c0]
    let v9: struct72;  // [bp-0x1b8]
    let v10: struct32;  // [bp-0x188]
    let v11: Option<struct56>;  // [bp-0x180]
    let v12: struct128;  // [bp-0x170]
    let v13: Option<struct56>;  // [bp-0x168]
    let v14: struct32;  // [bp-0x158]
    let v15: Result<struct72, struct24>;  // [bp-0x148], Other Possible Types: struct40
    let v16: u64;  // [bp-0x130]
    let v17: struct32;  // [bp-0x118]
    let v18: struct40;  // [bp-0x108]
    let v19: struct72;  // [bp-0x100]
    let v20: struct56;  // [bp-0xf8]
    let v21: Option<struct24>;  // [bp-0xf0], Other Possible Types: struct24
    let v22: struct92;  // [bp-0xf0]
    let v23: struct8;  // [bp-0xe0]
    let v24: iNone;  // [bp-0xd0]
    let v25: iNone;  // [bp-0xc0]
    let v26: iNone;  // [bp-0xb0]
    let v27: i64;  // [bp-0x98]
    let v28: struct40;  // [bp-0x90]
    let v29: Result<struct65, struct57>;  // [bp-0x68]
    let v30: u64;  // [bp-0x60]
    let v31: u128;  // [bp-0x58]
    let v33: u64;  // r12
    let v34: struct8;  // r15
    let v35: u64;  // rdx
    let v36: Option<struct24>;  // xmm0
    let v37: &str;  // rax:rdx
    let v38: struct32;  // [bp-0x1f8]
    let v39: struct40;  // [bp-0x1c8]

    v21 = starship::context_env::Env::get_env("SPACK_ENV");
    if !((((0 ^ v21 as i64) & (0 ^ -(v21 as i64))) >> 63) as char) {
        v0 = v21 as i128;
        v34 = *((&v21 as &char + 16) as &i64);
        v3 = *((&v21 as &char + 16) as &i64);
    }
    v37 = core::str::<impl str>::trim_matches(v33, v34, v35);
    if !v37.length {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v22 = starship::context::Context::new_module(a1, "spack");
    v29 = starship::config::ModuleConfig::try_load(v27);
    v5 = starship::modules::utils::directory::truncate(v33, v34, *((&v29 as &char + 48) as &i64));
    v15 = starship::formatter::string_formatter::StringFormatter::new(v29 as i64, v30);
    v28 = struct40 {
        field_0: v31
        field_16: &v29 as u8
        field_24: &v38
        field_32: a1
    };
    match v15 {
        Err(_) => {
            v12 = v16;
            v11 = *((&v15 as &char + 8) as &i128);
        },
        Ok(_) => {
            v36 = v15 as i128;
            v5 = struct72 {
                field_0: v36
                field_16: *((&v15 as &char + 16) as &i128)
                field_32: *((&v15 as &char + 32) as &i128)
                field_48: v17
                field_64: v18
            };
            v10 = starship::modules::spack::module::{{closure}}(&v28, &v5);
            if v10.field_0 as i32 != 1 {
                v21 = starship::module::Module::set_segments(&v10 as u8);
                return struct96 {
                    field_0: v22.field_0
                    field_16: v23
                    field_32: v24
                    field_48: v25
                    field_64: v26
                    field_80: *(&v22.field_80 as &i128)
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
    v19 = &v13;
    v20 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v5 = "Error in module `spack`:\n";
    v7 = 1;
    v9 = 0;
    v39 = &v19;
    v8 = 1;
    v15 = struct40 {
        field_0: "starship::modules::spack"
        field_16: "starship::modules::spack"
        field_32: log::__private_api::loc("src/modules/spack.rs")
    };
    log::__private_api::log(&v5, 2, &v15);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
