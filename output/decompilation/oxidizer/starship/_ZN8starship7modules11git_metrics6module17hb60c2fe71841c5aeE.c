fn starship::modules::git_metrics::module(a0: i64, a1: u64) -> int {
    let v0: struct16;  // [bp-0x5588], Other Possible Types: u64
    let v1: i64;  // [bp-0x5588]
    let v2: iNone;  // [bp-0x5578], Other Possible Types: struct48
    let v4: iNone;  // [bp-0x5560]
    let v6: iNone;  // [bp-0x5548]
    let v7: iNone;  // [bp-0x5538]
    let v8: struct56;  // [bp-0x5528]
    let v9: u128;  // [bp-0x5518]
    let v10: u64;  // [bp-0x5508]
    let v11: u64;  // [bp-0x5500]
    let v12: u8;  // [bp-0x54f7]
    let v13: struct56;  // [bp-0x54f0]
    let v14: struct92;  // [bp-0x54b8]
    let v15: struct24;  // [bp-0x54b8]
    let v16: u128;  // [bp-0x54a8]
    let v17: u128;  // [bp-0x5498]
    let v18: u128;  // [bp-0x5488]
    let v19: u128;  // [bp-0x5478]
    let v20: u64;  // [bp-0x5460]
    let v21: struct92;  // [bp-0x5458]
    let v22: u64;  // [bp-0x5400]
    let v23: Result<struct72, struct24>;  // [bp-0x53f8]
    let v24: u128;  // [bp-0x53f0]
    let v25: struct242;  // [bp-0x53b0]
    let v26: struct1088;  // [bp-0x52b8], Other Possible Types: struct_1 *
    let v27: u64;  // [bp-0x52b0]
    let v28: void*;  // [bp-0x5030]
    let v29: u64;  // [bp-0x4ec0]
    let v30: void*;  // [bp-0x4eb8]
    let v31: u8;  // [bp-0x4eb0]
    let v32: struct784;  // [bp-0x4e78], Other Possible Types: u64
    let v33: u128;  // [bp-0x4e70]
    let v34: u64;  // [bp-0x4b68]
    let v35: u128;  // [bp-0x4b68]
    let v36: i64;  // [bp-0x4b60], Other Possible Types: u8
    let v37: u64;  // [bp-0x4b58]
    let v38: u8;  // [bp-0x40a8]
    let v39: u32;  // [bp-0x40a7]
    let v40: u32;  // [bp-0x40a4]
    let v41: u64;  // [bp-0x4098]
    let v42: struct32;  // [bp-0x4098]
    let v43: u128;  // [bp-0x4090]
    let v44: u64;  // [bp-0x4090]
    let v45: u64;  // [bp-0x4088]
    let v46: u64;  // [bp-0x4080]
    let v47: void*;  // [bp-0x4030]
    let v48: u8;  // [bp-0x35d8]
    let v49: u32;  // [bp-0x35d7]
    let v50: u32;  // [bp-0x35d4]
    let v51: struct328;  // [bp-0x35c8]
    let v52: u8;  // [bp-0x32b8]
    let v53: u8;  // [bp-0x31d0]
    let v54: Result<struct128, struct16>;  // [bp-0x3188], Other Possible Types: struct24, u64
    let v55: Option<struct48>;  // [bp-0x3188], Other Possible Types: struct144
    let v56: struct144;  // [bp-0x3188]
    let v57: core::fmt::Arguments;  // [bp-0x3180], Other Possible Types: u64
    let v58: i64;  // [bp-0x3178], Other Possible Types: u64
    let v59: u64;  // [bp-0x3170]
    let v60: void*;  // [bp-0x3168]
    let v61: void*;  // [bp-0x3030]
    let v62: i8;  // [bp-0x26c7]
    let v63: i8;  // [bp-0x26c4]
    let v64: void*;  // [bp-0x2030]
    let v65: u64;  // [bp-0x18e8]
    let v66: u64;  // [bp-0x18e0]
    let v67: core::fmt::Arguments;  // [bp-0x18d8], Other Possible Types: struct40, struct48, u64
    let v68: struct24;  // [bp-0x18d8], Other Possible Types: u128
    let v69: struct72;  // [bp-0x18d0], Other Possible Types: u64
    let v70: u64;  // [bp-0x18c8]
    let v71: u128;  // [bp-0x18c0]
    let v72: u64;  // [bp-0x18b0]
    let v73: u8;  // [bp-0x15c8]
    let v74: void*;  // [bp-0x1030]
    let v75: u8;  // [bp-0xb00]
    let v77: i64;  // rdx
    let v78: struct24;  // rax
    let v79: u32;  // ecx
    let v80: Option<struct24>;  // rax
    let v81: u32;  // ecx
    let v83: i64;  // rax
    let v84: struct72;  // xmm0
    let v85: core::result::Result<(), core::fmt::Error>;  // rax
    let v86: core::result::Result<(), core::fmt::Error>;  // rax

    v74 = 0;
    v64 = 0;
    v61 = 0;
    v47 = 0;
    v28 = 0;
    v14 = starship::context::Context::new_module(a1, "git_metrics");
    v8 = starship::config::ModuleConfig::try_load(v20);
    if v12 || ((!v77 | starship::context::Context::get_repo(a1)) & 1) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v51 = starship::context::Repo::open(v77);
    if gix::repository::worktree::<impl gix::types::Repository>::is_bare(*(&v52 as &i32), *(&v53 as &i64)) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v21 = starship::context::Context::new_module(a1, "git_status");
    v25 = starship::config::ModuleConfig::try_load(v22);
    if *((v77 + 904) as &i8) || *((&(&v25)[30].field_0 as &char + 2) as &i8) == 1 {
LABEL_b980b9:
        alloc::alloc::Global::alloc_impl(8, 32, 0);
        *(v83 as &&u8) = &g_526eec;
        *((v83 + 8) as &i64) = 4;
        *((v83 + 16) as &&u8) = &g_53fa4e;
        *((v83 + 24) as &i64) = 11;
        v34 = 2;
        v36 = v83;
        v37 = 2;
        if v8.field_50 {
            alloc::vec::Vec<T,A>::push(&v34, "--ignore-submodules", "src/modules/git_metrics.rs");
            v83 = v36;
        }
        v55 = starship::context::Repo::exec_git(v77, a1, v83, 2);
        match v55 {
            None => {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            },
            Some(_) => {
                v72 = *((&v55 as &char + 40) as &i64);
                v84 = *((&v55 as &char + 8) as &i128);
                v71 = *((&v55 as &char + 24) as &i128) as u128;
                v69 = v84;
                v67 = v55 as i64;
                v41 = v67;
                v44 = v69;
                v45 = v70;
                v2 = starship::modules::git_metrics::GitDiff::parse(v44, v45);
            },
        }
    } else {
        v54 = gix::repository::index::<impl gix::types::Repository>::index_or_empty(&v51);
        if let Ok(_) = v54 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v67 = v57;
        if *((v57 + 560) as &i8) {
            goto LABEL_b980b9;
        }
        v78 = starship::modules::git_status::get_static_repo_status(a1, v77, &v25);
        if !v78 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v0 = struct16 {
            field_0: v78
            field_8: v78
        };
        memcpy(&v54, &v51, 1088);
        v26 = gix::repository::cache::<impl gix::types::Repository>::with_object_memory(&v54);
        v54 = gix::repository::object::<impl gix::types::Repository>::write_blob(&v26);
        match v54 {
            Err(_) => {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            },
            Ok(_) => {
                v67 = struct48 {
                    field_0: 0x8000000000000000
                    field_16: <UNKNOWN>
                    field_24: 0x8000000000000000
                    field_32: v7
                };
                v55 = gix::repository::diff::<impl gix::types::Repository>::diff_resource_cache(&v26, 2, &v67);
                if v55.field_0 == 2 {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
                memcpy(&v36, &v56 as u64, 2744);
                v79 = *(&v63 as &i32);
                v39 = *(&v62 as &i32) as u32;
                v40 = v79;
                v34 = v55.field_0;
                v38 = 0;
                v32 = 0x8000000000000000;
                *(&v33 as void*) = v7;
                if v29 == 0x8000000000000000 {
                    v6 = v7;
                } else {
                    v68 = std::path::Path::to_path_buf(v30, *(&v31 as &i64));
                }
                v67 = struct48 {
                    field_0: *(&v32 as &i128)
                    field_16: *((&v33 as &char + 8) as &i64)
                    field_24: v80
                    field_32: v6
                };
                v56 = gix::repository::diff::<impl gix::types::Repository>::diff_resource_cache(&v26, 2, &v67);
                if v56.field_0 == 2 {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
                memcpy(&v43, &v56 as u64, 2744);
                v81 = *(&(&v62)[3] as &i32);
                v49 = *(&v62 as &i32) as u32;
                v50 = v81;
                v41 = v56.field_0;
                v48 = 0;
                v0 = *((v0.field_0 + 64) as &i64);
                memcpy(&v56, &v26, 1088);
                v32 = gix::repository::init::<impl gix::types::Repository>::into_sync(&v56);
                memcpy(&v67, &v32, 784);
                memcpy(&v73, &v34, 2760);
                memcpy(&v75, &v41, 2760);
                v65 = *((v1 + 56) as &i64);
                v66 = v0;
                memcpy(&v56, &v67, 6304);
                v86 = core::fmt::num::imp::<impl usize>::_fmt(rayon::iter::reduce::reduce(&v56), &v32) as u64;
                v54 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v86 as &i64), v77);
                v70 = v58;
                v68 = v54.field_0;
                v85 = core::fmt::num::imp::<impl usize>::_fmt(v77, &v32) as u64;
                v54 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v85 as &i64), v77);
            },
        }
    }
    v23 = starship::formatter::string_formatter::StringFormatter::new(v10, v11);
    v13 = struct56 {
        field_0: &v8
        field_8: v9
        field_24: &v8 as u8
        field_32: &v2
        field_40: &v4
        field_48: a1
    };
    match v23 {
        Err(_) => {
            v46 = *((&v23 as &char + 24) as &i64);
            v43 = v24;
        },
        Ok(_) => {
            v42 = starship::modules::git_metrics::module::{{closure}}(&v13, &v23);
            if !(v42.field_0 as i8 & 1) {
                v15 = starship::module::Module::set_segments(&v43);
                return struct96 {
                    field_0: v14.field_0
                    field_16: v16
                    field_32: v17
                    field_48: v18
                    field_64: v19
                    field_80: *(&v14.field_80 as &i128)
                };
                return;
            }
        },
    }
    v37 = v46;
    v35 = v42.field_8;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v26 = &v35;
    v27 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v54 = "Error in module `git_metrics`:\n";
    v57 = 1;
    v60 = 0;
    v58 = &v26;
    v59 = 1;
    v67 = struct40 {
        field_0: "starship::modules::git_metrics"
        field_16: "starship::modules::git_metrics"
        field_32: log::__private_api::loc("src/modules/git_metrics.rs")
    };
    log::__private_api::log(&v54, 2, &v67);
    return struct8 {
        field_0: 0x8000000000000000
    };
    return struct8 {
        field_0: 0x8000000000000000
    };
}
