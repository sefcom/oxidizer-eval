fn starship::modules::git_branch::module(a0: i64, a1: u64) -> void {
    let v0: u8;  // [bp-0x6cc]
    let v1: u16;  // [bp-0x6cb]
    let v2: struct92;  // [bp-0x6c9]
    let v3: void*;  // [bp-0x6c8], Other Possible Types: u128
    let v4: u64;  // [bp-0x6c0]
    let v5: void*;  // [bp-0x6b8], Other Possible Types: u64
    let v6: core::fmt::rt::Argument;  // [bp-0x6a8], Other Possible Types: u128
    let v7: u64;  // [bp-0x6a0]
    let v8: core::fmt::Arguments;  // [bp-0x698], Other Possible Types: u64
    let v9: u64;  // [bp-0x680]
    let v10: u8;  // [bp-0x678]
    let v11: i64;  // [bp-0x670]
    let v12: u64;  // [bp-0x668]
    let v13: Result<struct72, struct24>;  // [bp-0x660], Other Possible Types: struct40
    let v14: Result<struct24, struct16>;  // [bp-0x660]
    let v15: Result<struct96, struct80>;  // [bp-0x660]
    let v16: struct24;  // [bp-0x658]
    let v17: void*;  // [bp-0x650]
    let v18: u64;  // [bp-0x620]
    let v20: iNone;  // [bp-0x608]
    let v21: u64;  // [bp-0x5f8]
    let v22: struct32;  // [bp-0x5e8], Other Possible Types: struct_7 *
    let v23: struct24;  // [bp-0x5e0], Other Possible Types: u64
    let v24: iNone;  // [bp-0x5e0]
    let v25: iNone;  // [bp-0x5e0]
    let v26: u64;  // [bp-0x5d0]
    let v30: i64;  // [bp-0x590]
    let v31: u64;  // [bp-0x588]
    let v32: Result<struct104, struct99>;  // [bp-0x580]
    let v33: u64;  // [bp-0x578]
    let v34: u64;  // [bp-0x570]
    let v35: u64;  // [bp-0x568]
    let v36: u64;  // [bp-0x560]
    let v37: u128;  // [bp-0x558]
    let v38: u64;  // [bp-0x538]
    let v39: u32;  // [bp-0x530]
    let v40: u64;  // [bp-0x528]
    let v42: u8;  // [bp-0x520]
    let v43: struct64;  // [bp-0x518]
    let v44: struct92;  // [bp-0x4d8]
    let v45: struct24;  // [bp-0x4d8]
    let v46: u128;  // [bp-0x4c8]
    let v47: u128;  // [bp-0x4b8]
    let v48: u128;  // [bp-0x4a8]
    let v49: u128;  // [bp-0x498]
    let v50: u64;  // [bp-0x480]
    let v51: void*;  // [bp-0x478], Other Possible Types: struct16, struct328, struct72, u64
    let v52: void*;  // [bp-0x478]
    let v53: u64;  // [bp-0x470]
    let v54: Result<struct24, struct16>;  // [bp-0x468], Other Possible Types: struct_3 *, struct_8 *
    let v55: u64;  // [bp-0x460]
    let v56: void*;  // [bp-0x458]
    let v57: struct32;  // [bp-0x448]
    let v58: &str;  // [bp-0x440], Other Possible Types: Option<struct56>, u64
    let v59: void*;  // [bp-0x438]
    let v60: u8;  // [bp-0x430]
    let v61: struct40;  // [bp-0x42f], Other Possible Types: struct72, u16
    let v62: struct72;  // [bp-0x42d], Other Possible Types: struct92
    let v63: u32;  // [bp-0x42c]
    let v64: u8;  // [bp-0x428]
    let v65: void*;  // [sp-0x420]
    let v66: void*;  // [sp-0x410]
    let v67: void*;  // [sp-0x400]
    let v68: &str;  // [sp-0x3f0], Other Possible Types: Option<struct56>, u64
    let v69: &str;  // [sp-0x3e8], Other Possible Types: Option<struct56>, u64
    let v70: void*;  // [sp-0x3e0]
    let v71: u8;  // [sp-0x3d8]
    let v72: struct40;  // [sp-0x3d7], Other Possible Types: struct72, u16
    let v73: struct72;  // [sp-0x3d5], Other Possible Types: struct92
    let v74: u32;  // [sp-0x3d4]
    let v75: u8;  // [sp-0x3d0]
    let v76: core::fmt::rt::Argument;  // [sp-0x3c8], Other Possible Types: u64
    let v77: &str;  // [sp-0x3c0], Other Possible Types: Option<struct56>, u64
    let v82: i64;  // rdx
    let v83: Result<struct224, struct16>;  // rcx
    let v84: core::fmt::rt::Argument;  // rax
    let v87: Option<struct56>;  // rcx
    let v90: &str;  // rcx
    let v93: struct24;  // rbp
    let v94: struct72;  // rax
    let v95: i64;  // rdx
    let v96: struct40;  // r15
    let v97: struct24;  // rax
    let v98: struct72;  // rdx
    let v99: u64;  // rax
    let v100: Option<struct24>;  // rdx
    let v101: core::option::Option<&str>;  // al

    v44 = starship::context::Context::new_module(a1, "git_branch");
    v32 = starship::config::ModuleConfig::try_load(v50);
    v9 = starship::modules::git_branch::get_first_grapheme(v38, v39);
    if false && core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
        v22 = &v40;
        v23 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v51 = "\"truncation_length\" should be a positive value, found ";
        v53 = 1;
        v56 = 0;
        v54 = &v22;
        v55 = 1;
        v13 = struct40 {
            field_0: "starship::modules::git_branch"
            field_16: "starship::modules::git_branch"
            field_32: log::__private_api::loc("src/modules/git_branch.rs")
        };
        log::__private_api::log(&v51, 2, &v13);
    }
    if ((!v82 | starship::context::Context::get_repo(a1)) & 1) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    if v42 {
        v51 = starship::context::Repo::open(v82);
        v15 = gix::repository::reference::<impl gix::types::Repository>::head(&v51);
        if v15 as i64 == 9223372036854775810 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        } else if v15 as i64 == 9223372036854775809 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    v62 = v2;
    v61 = v1;
    v72 = v1;
    v73 = v2;
    v76 = v84;
    v77 = v83;
    v51 = 0;
    v54 = 0;
    v56 = 0;
    v57 = 0;
    v58 = v83;
    v59 = 0;
    v60 = 2;
    v63 = 268566529;
    v64 = &g_10.field_0;
    v65 = 0;
    v66 = 0;
    v67 = 0;
    v68 = v83;
    v69 = v83;
    v70 = 0;
    v71 = 2;
    v74 = 268566529;
    v75 = &g_10.field_0;
    core::iter::traits::iterator::Iterator::collect(&v10, &v51);
    v51 = struct16 {
        field_0: v33
        field_8: v34 * &g_10.field_0 + v33
    };
    if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v51, v84, v83) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v6 = 0;
    v7 = &g_8.field_0;
    v8 = 0;
    v3 = 0;
    v4 = &g_8.field_0;
    v5 = 0;
    if !((((0 ^ *((v82 + 856) as &i64)) & (0 ^ -(*((v82 + 856) as &i64)))) >> 63) as char) {
        if *((v82 + 856) as &i64) == 9223372036854775809 {
            goto LABEL_b96d9b;
        }
        v87 = *((v82 + 872) as &i64);
        v62 = v2;
        v61 = v1;
        v72 = v1;
        v73 = v2;
        v76 = *((v82 + 864) as &i64);
        v77 = v87;
        v52 = 0;
        v54 = 0;
        v56 = 0;
        v57 = 0;
        v58 = v87;
        v59 = 0;
        v60 = 2;
        v63 = 268566529;
        v64 = &g_10.field_0;
        v65 = 0;
        v66 = 0;
        v67 = 0;
        v68 = v87;
        v69 = v87;
        v70 = 0;
        v71 = 2;
        v74 = 268566529;
        v75 = &g_10.field_0;
        core::iter::traits::iterator::Iterator::collect(&v15, &v52);
        v8 = v17;
        v6 = v15 as i128;
    }
    if *((v82 + 880) as &i64) != 0x8000000000000000 {
        v90 = *((v82 + 896) as &i64);
        v62 = v2;
        v61 = v1;
        v72 = v1;
        v73 = v2;
        v76 = *((v82 + 888) as &i64);
        v77 = v90;
        v52 = 0;
        v54 = 0;
        v56 = 0;
        v57 = 0;
        v58 = v90;
        v59 = 0;
        v60 = 2;
        v63 = 268566529;
        v64 = &g_10.field_0;
        v65 = 0;
        v66 = 0;
        v67 = 0;
        v68 = v90;
        v69 = v90;
        v70 = 0;
        v71 = 2;
        v74 = 268566529;
        v75 = &g_10.field_0;
        core::iter::traits::iterator::Iterator::collect(&v14, &v52);
        v5 = v17;
        v3 = v14 as i128;
    }
LABEL_b96d9b:
    v94 = core::cmp::Ord::min(-1, v93);
    if v94 < v12 {
        v95 = v94 * &g_10.field_0;
        *((v11 + v95) as &u64) = v9;
        *((v11 + v95 + &g_8.field_0) as &struct_4 *) = v82;
        v12 = v94 + 1;
    }
    v97 = core::cmp::Ord::min(-1, v96);
    if v97 < v8 {
        v98 = v97 * &g_10.field_0;
        *(&g_8.field_0 + v98) = v9;
        *((&g_8.field_0 + v98 + &g_8.field_0) as &struct_4 *) = v82;
        v8 = v97 + 1;
    }
    v99 = core::cmp::Ord::min(-1, v5);
    if v99 < v5 {
        v100 = v99 * &g_10.field_0;
        *(&g_8.field_0 + v100) = v9;
        *((&g_8.field_0 + v100 + &g_8.field_0) as &struct_4 *) = v82;
        v5 = v99 + 1;
    }
    v0 = v101;
    v13 = starship::formatter::string_formatter::StringFormatter::new(v35, v36);
    v43 = struct64 {
        field_0: v37
        field_16: &v32 as u8
        field_24: &v10
        field_32: &v0
        field_40: &v6
        field_48: &v3
        field_56: a1
    };
    match v13 {
        Err(_) => {
            v23 = v16;
        },
        Ok(_) => {
            v51 = struct72 {
                field_0: v13 as i128
                field_16: *((&v13 as &char + 16) as &i128)
                field_32: *((&v13 as &char + 32) as &i128)
                field_48: *((&v13 as &char + 48) as &i128)
                field_64: v18
            };
            v22 = starship::modules::git_branch::module::{{closure}}(&v43, &v51);
            if !(v22.field_0 as i8 & 1) {
                v45 = starship::module::Module::set_segments(&v24);
                return struct96 {
                    field_0: v44.field_0
                    field_16: v46
                    field_32: v47
                    field_48: v48
                    field_64: v49
                    field_80: *(&v44.field_80 as &i128)
                };
            }
        },
    }
    v21 = v26;
    v20 = v25;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v30 = &v20;
    v31 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v51 = "Error in module `git_branch`: \n";
    v53 = 1;
    v56 = 0;
    v54 = &v30;
    v55 = 1;
    v13 = struct40 {
        field_0: "starship::modules::git_branch"
        field_16: "starship::modules::git_branch"
        field_32: log::__private_api::loc("src/modules/git_branch.rs")
    };
    log::__private_api::log(&v51, 2, &v13);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
