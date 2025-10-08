fn starship::modules::git_commit::module(a0: i64, a1: u64) -> int {
    let v0: struct32;  // [bp-0x668]
    let v1: struct32;  // [bp-0x660]
    let v2: struct32;  // [bp-0x650]
    let v3: struct48;  // [bp-0x648]
    let v4: struct56;  // [bp-0x638]
    let v5: &str;  // [bp-0x630]
    let v6: struct72;  // [bp-0x628]
    let v7: Result<struct96, struct80>;  // [bp-0x620], Other Possible Types: struct40
    let v8: struct24;  // [bp-0x618]
    let v9: Result<struct24, struct24>;  // [bp-0x610]
    let v10: Result<struct24, struct24>;  // [bp-0x608]
    let v11: struct16;  // [bp-0x600]
    let v12: u128;  // [bp-0x5f8]
    let v13: iNone;  // [bp-0x5e8]
    let v14: iNone;  // [bp-0x5d8]
    let v15: struct40;  // [bp-0x5c8]
    let v16: struct92;  // [bp-0x5a0]
    let v17: struct24;  // [bp-0x5a0]
    let v18: iNone;  // [bp-0x590]
    let v19: struct24;  // [bp-0x580]
    let v20: struct24;  // [bp-0x570]
    let v21: iNone;  // [bp-0x560]
    let v22: u64;  // [bp-0x548]
    let v23: struct40;  // [bp-0x540]
    let v24: struct72;  // [bp-0x538]
    let v25: struct56;  // [bp-0x528]
    let v26: struct72;  // [bp-0x518]
    let v27: struct92;  // [bp-0x508]
    let v28: Option<struct137>;  // [bp-0x4f8]
    let v29: struct72;  // [bp-0x4e8]
    let v30: Result<struct72, struct24>;  // [bp-0x4a0]
    let v31: u128;  // [bp-0x498]
    let v32: struct328;  // [bp-0x458]
    let v34: u64;  // rdx

    v16 = starship::context::Context::new_module(a1, "git_commit");
    v29 = starship::config::ModuleConfig::try_load(v22);
    if ((!v34 | starship::context::Context::get_repo(a1)) & 1) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v32 = starship::context::Repo::open(v34);
    v16 as u1152 = gix::repository::reference::<impl gix::types::Repository>::head(&v32);
    match v16 as u1152 {
        Err(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Ok(_) => {
            v28 = v14;
            v27 = v13;
            v26 = v12;
            v25 = *((&v7 as &char + 24) as &i128);
            v24 = *((&v7 as &char + 8) as &i128);
            v23 = v7 as i64;
            if let Ok(_) = v16 as u1152 {
                if v29.field_64 as i8 {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
            }
            v30 = starship::formatter::string_formatter::StringFormatter::new(v29.field_0 as i64, *((&v29.field_0 as &char + 8) as &i64));
            match v30 {
                Err(_) => {
                    v2 = *((&v30 as &char + 24) as &i64);
                    v1 = v31;
                },
                Ok(_) => {
                    v0 = starship::modules::git_commit::module::{{closure}}(&v29, a1, &v30);
                    if v0.field_0 as i32 != 1 {
                        v17 = starship::module::Module::set_segments(&v0 as u8);
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
            v4 = v2;
            v3 = v1;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v5 = &v3;
            v6 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v7 = "Error in module `git_commit`:\n";
            v8 = 1;
            v11 = 0;
            v9 = &v5;
            v10 = 1;
            v15 = struct40 {
                field_0: "starship::modules::git_commit"
                field_16: "starship::modules::git_commit"
                field_32: log::__private_api::loc("src/modules/git_commit.rs")
            };
            log::__private_api::log(&v7, 2, &v15);
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
