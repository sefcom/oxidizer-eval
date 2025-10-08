fn starship::modules::username::module(a0: u32, a1: u64) -> int {
    let v0: Result<struct57, struct49>;  // [bp-0x279]
    let v1: u128;  // [bp-0x278]
    let v2: i64;  // [bp-0x270]
    let v3: Option<struct56>;  // [bp-0x268], Other Possible Types: struct40
    let v4: struct12;  // [bp-0x258], Other Possible Types: struct24, struct40, u8
    let v5: Result<struct72, struct24>;  // [bp-0x250]
    let v6: struct24;  // [bp-0x248], Other Possible Types: unsigned long
    let v7: struct40;  // [bp-0x240]
    let v8: struct92;  // [bp-0x238]
    let v9: struct40;  // [bp-0x228], Other Possible Types: u128
    let v10: struct40;  // [bp-0x218]
    let v11: struct32;  // [bp-0x1f8]
    let v12: iNone;  // [bp-0x1f0]
    let v13: struct40;  // [bp-0x1e0]
    let v14: struct32;  // [bp-0x1d8]
    let v15: Result<struct24, struct24>;  // [bp-0x1c8]
    let v16: struct12;  // [bp-0x1b8]
    let v17: struct16;  // [bp-0x1b0]
    let v18: struct92;  // [bp-0x1a8]
    let v19: struct24;  // [bp-0x1a8]
    let v20: struct24;  // [bp-0x198]
    let v21: struct16;  // [bp-0x188]
    let v22: struct92;  // [bp-0x178]
    let v23: struct40;  // [bp-0x168]
    let v24: u64;  // [bp-0x150]
    let v25: struct16;  // [bp-0x148]
    let v26: u64;  // [bp-0x148]
    let v27: struct40;  // [bp-0x130]
    let v28: struct24;  // [bp-0x108], Other Possible Types: u128
    let v29: Option<struct146>;  // [bp-0x108]
    let v30: Result<struct72, struct24>;  // [bp-0x108], Other Possible Types: struct16, u64
    let v31: Result<struct24, struct16>;  // [bp-0x108]
    let v32: u64;  // [bp-0x100]
    let v33: u64;  // [bp-0x100]
    let v34: u64;  // [bp-0xf8]
    let v35: struct92;  // [bp-0xf8]
    let v36: u64;  // [bp-0xa8]
    let v37: u64;  // [bp-0xa0]
    let v38: i8;  // [bp-0x88]
    let v39: u8;  // [bp-0x78]
    let v40: Result<struct72, struct24>;  // [bp-0x70]
    let v41: iNone;  // [bp-0x68]
    let v43: struct16;  // rax
    let v44: struct40;  // bpl
    let v45: struct24;  // al
    let v46: core::str::pattern::CharSearcher;  // rax
    let v47: struct24;  // [bp-0x1a8]

    v25 = whoami::os::target::<impl whoami::os::Target for whoami::os::Os>::username();
    if (((0 ^ v25.field_0) & (0 ^ -(v26))) >> 63) as char {
        v33 = v25.field_8;
        v30 = 0x8000000000000000;
    } else {
        v31 = whoami::conversions::string_from_os(&v25);
    }
    vvar_586{stack -264} = struct16 OrderedDict([(0, 𝜙@64b [((12321075, None), None), ((12321049, None), vvar_494{stack -264})]), (8, 𝜙@64b [((12321075, None), None), ((12321049, None), vvar_493{stack -256})])])
    v19 = core::result::Result<T,E>::inspect_err(&v30);
    if v19.field_0 as i64 == 0x8000000000000000 {
        v30 = 0x8000000000000000;
    } else {
        v35 = v19.field_16;
        v28 = v19.field_0;
    }
    vvar_587{stack -264} = struct24 OrderedDict([(0, 𝜙@64b [((12321149, None), vvar_499{stack -264}), ((12321151, None), vvar_336{stack -264})]), (8, 𝜙@64b [((12321149, None), vvar_334{stack -256}), ((12321151, None), vvar_334{stack -256})]), (16, 𝜙@64b [((12321149, None), None), ((12321151, None), vvar_502{stack -248})])])
    v43 = core::option::Option<T>::or_else(&v4, &v28);
    if v4 == 0x8000000000000000 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v3 = v6;
    v1 = *(&v4.field_0 as &i128);
    v18 = starship::context::Context::new_module(a1, "username");
    v29 = starship::config::ModuleConfig::try_load(v24);
    v44 = starship::context::Context::detect_env_vars2(a0, v32, v34);
    v0 = starship::modules::username::is_root_user();
    if !v0 && !v39 && starship::modules::username::is_login_user(v2, v3) {
        v45 = starship::modules::username::is_ssh_session();
        if v44 == 1 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        if !v44 == 2 && !v45 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    } else if v44 == 1 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v46 = indexmap::map::IndexMap<K,V,S>::get(&v29 as u8, &v1);
    if v46 {
        v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(v46 as &i64), *((v46 + 8) as &i64));
        v10 = v6;
        v9 = v4.field_0;
        v3 = v10;
        v1 = v9;
    }
    v40 = starship::formatter::string_formatter::StringFormatter::new(v36, v37);
    v27 = struct40 {
        field_0: &v0
        field_8: &v29 as u8
        field_16: &v38
        field_24: &v1 as u8
        field_32: a1
    };
    match v40 {
        Err(_) => {
            v13 = *((&v40 as &char + 24) as &i64);
            v12 = v41;
        },
        Ok(_) => {
            v11 = starship::modules::username::module::{{closure}}(&v27, &v40);
            if !(v11.field_0 as i8 & 1) {
                v47 = starship::module::Module::set_segments(&v11 as u8);
                return struct96 {
                    field_0: v18.field_0
                    field_16: v20
                    field_32: v21
                    field_48: v22
                    field_64: v23
                    field_80: *(&v18.field_80 as &i128)
                };
            }
        },
    }
    v15 = v13;
    v14 = v12;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v16 = &v14;
    v17 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v4 = "Error in module `username`:\n";
    v5 = 1;
    v8 = 0;
    v6 = &v16;
    v7 = 1;
    v9 = struct40 {
        field_0: "starship::modules::username"
        field_16: "starship::modules::username"
        field_32: log::__private_api::loc("src/modules/username.rs")
    };
    log::__private_api::log(&v4, 2, &v9);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
