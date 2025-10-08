fn starship::modules::git_status::module(a0: i64, a1: u64) -> int {
    let v0: struct72;  // [bp-0x478], Other Possible Types: struct40, u8
    let v1: struct24;  // [bp-0x470]
    let v2: i64;  // [bp-0x468]
    let v3: u64;  // [bp-0x460]
    let v4: void*;  // [bp-0x458]
    let v5: u8;  // [bp-0x430]
    let v6: u64;  // [bp-0x420]
    let v7: struct32;  // [bp-0x418]
    let v8: struct92;  // [bp-0x410]
    let v9: Option<struct48>;  // [bp-0x400], Other Possible Types: u64
    let v10: struct92;  // [bp-0x3f8]
    let v11: Result<struct26, struct32>;  // [bp-0x3e8]
    let v12: Result<struct72, struct24>;  // [bp-0x3d8], Other Possible Types: struct40
    let v13: i64;  // [bp-0x3c0]
    let v14: struct48;  // [bp-0x3a8]
    let v15: struct24;  // [bp-0x398]
    let v16: struct92;  // [bp-0x390]
    let v17: struct24;  // [bp-0x390]
    let v18: struct24;  // [bp-0x380], Other Possible Types: u128
    let v19: struct24;  // [bp-0x370], Other Possible Types: u128
    let v20: struct32;  // [bp-0x360], Other Possible Types: u128
    let v21: iNone;  // [bp-0x350], Other Possible Types: u128
    let v22: u64;  // [bp-0x338]
    let v23: struct72;  // [bp-0x330]
    let v24: struct40;  // [bp-0x328]
    let v25: struct242;  // [bp-0x320]
    let v26: u64;  // [bp-0x318]
    let v27: u64;  // [bp-0x310]
    let v28: u64;  // [bp-0x308]
    let v29: u128;  // [bp-0x2f0]
    let v30: u128;  // [bp-0x2e0]
    let v31: u128;  // [bp-0x2d0]
    let v32: u128;  // [bp-0x2c0]
    let v33: u128;  // [bp-0x2b0]
    let v34: u128;  // [bp-0x2a0]
    let v35: u128;  // [bp-0x290]
    let v36: u128;  // [bp-0x280]
    let v37: u128;  // [bp-0x270]
    let v38: u128;  // [bp-0x260]
    let v39: u128;  // [bp-0x250]
    let v40: struct216;  // [bp-0x228]
    let v41: struct24;  // [bp-0x150], Other Possible Types: struct64
    let v42: struct40;  // [bp-0x148], Other Possible Types: u32
    let v43: u64;  // [bp-0x140]
    let v44: u128;  // [bp-0x138]
    let v45: u32;  // [bp-0x130]
    let v46: u64;  // [bp-0x128]
    let v47: i64;  // [bp-0x120]
    let v48: struct243;  // [bp-0x118]
    let v50: i64;  // rdx
    let v51: iNone;  // xmm0
    let v52: struct24;  // rax

    v16 = starship::context::Context::new_module(a1, "git_status");
    v25 = starship::config::ModuleConfig::try_load(v22);
    if ((!v50 | starship::context::Context::get_repo(a1)) & 1) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    if *((v50 + 905) as &i8) != 3 {
        starship::modules::git_status::git_status_wsl(&v5, a1, v25.field_0, v26);
        if (((0 ^ *(&v5 as &i64)) & (0 ^ -(*(&v5 as &i64)))) >> 63) as char {
            v48 = <starship::configs::git_status::GitStatusConfig as core::clone::Clone>::clone(&v25);
            v46 = a1;
            v47 = v50;
            v42 = 0;
            v45 = 0;
            v12 = starship::formatter::string_formatter::StringFormatter::new(v27, v28);
            v40 = struct216 {
                field_0: &v25 as u8
                field_8: v29
                field_24: v30
                field_40: v31
                field_56: v32
                field_72: v33
                field_88: v34
                field_104: v35
                field_120: v36
                field_136: v37
                field_152: v38
                field_168: v39
                field_184: v39
                field_200: &v41 as u8
                field_208: a1
            };
            match v12 {
                Err(_) => {
                    v9 = v13;
                    v8 = *((&v12 as &char + 8) as &i128);
                },
                Ok(_) => {
                    v51 = v12 as i128;
                    v0 = struct72 {
                        field_0: v51
                        field_16: *((&v12 as &char + 16) as &i128)
                        field_32: *((&v12 as &char + 32) as &i128)
                        field_48: v14
                        field_64: v15
                    };
                    v7 = starship::modules::git_status::module::{{closure}}(&v40, &v0);
                    if !(v7.field_0 as i8 & 1) {
                        if v9 {
                            v17 = starship::module::Module::set_segments(&v7 as u8);
                            return struct96 {
                                field_0: v16.field_0
                                field_16: v18
                                field_32: v19
                                field_48: v20
                                field_64: v21
                                field_80: *(&v16.field_80 as &i128)
                            };
                        }
                        return struct8 {
                            field_0: 0x8000000000000000
                        };
                    }
                },
            }
            v11 = v9;
            v10 = v8;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v23 = &v10;
            v24 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v0 = "Error in module `git_status`:\n";
            v1 = 1;
            v4 = 0;
            v2 = &v23;
            v3 = 1;
            v12 = struct40 {
                field_0: "starship::modules::git_status"
                field_16: "starship::modules::git_status"
                field_32: log::__private_api::loc("src/modules/git_status.rs")
            };
            log::__private_api::log(&v0, 2, &v12);
            return struct8 {
                field_0: 0x8000000000000000
            };
        } else {
            if v6 {
                v0 = 2;
                v41 = starship::segment::Segment::from_text(&v0, &v5);
                v52 = starship::module::Module::set_segments(&v41);
                return struct96 {
                    field_0: v16.field_0
                    field_16: v18
                    field_32: v19
                    field_48: v20
                    field_64: v21
                    field_80: *(&v16.field_80 as &i128)
                };
            }
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    } else if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 4 {
        v41 = "This is a bare repository, git_status is not applicable";
        v42 = 1;
        v43 = 8;
        v44 = 0;
        v0 = struct40 {
            field_0: "starship::modules::git_status"
            field_16: "starship::modules::git_status"
            field_32: log::__private_api::loc("src/modules/git_status.rs")
        };
        log::__private_api::log(&v41, 4, &v0);
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
