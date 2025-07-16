fn uu_cp::Options::from_matches(a1: &struct32) -> Result<struct16, struct24> {
    let a0: u64;  // rsi
    let v0: u32;  // [bp-0x2ec]
    let v1: u16;  // [bp-0x2e8]
    let v2: u32;  // [bp-0x2e4]
    let v3: u8;  // [bp-0x2e0]
    let v4: u8;  // [bp-0x2df]
    let v5: u8;  // [bp-0x2de]
    let v6: u8;  // [bp-0x2dd]
    let v7: u8;  // [bp-0x2dc]
    let v8: u8;  // [bp-0x2db]
    let v9: u8;  // [bp-0x2da]
    let v10: u8;  // [bp-0x2d9]
    let v11: u8;  // [bp-0x2d8]
    let v12: u8;  // [bp-0x2d7]
    let v13: u8;  // [bp-0x2d6]
    let v14: u8;  // [bp-0x2d5]
    let v15: u8;  // [bp-0x2d4]
    let v16: u8;  // [bp-0x2d3]
    let v17: u8;  // [bp-0x2d2]
    let v18: i64;  // [bp-0x2d0]
    let v19: u32;  // [bp-0x2c4]
    let v20: u32;  // [bp-0x2c0], Other Possible Types: struct12
    let v21: u16;  // [bp-0x2bc]
    let v22: u8;  // [bp-0x2ba]
    let v23: u8;  // [bp-0x2b9]
    let v24: u32;  // [bp-0x2b8]
    let v25: u32;  // [bp-0x2b4]
    let v26: u16;  // [bp-0x2b0]
    let v27: u8;  // [bp-0x2ae]
    let v28: u8;  // [bp-0x2ad]
    let v29: u32;  // [bp-0x2ac]
    let v30: u128;  // [bp-0x2a8]
    let v31: struct24;  // [bp-0x2a8], Other Possible Types: u64
    let v32: u128;  // [bp-0x2a8]
    let v33: struct32;  // [bp-0x2a8]
    let v34: Result<struct40, struct16>;  // [bp-0x2a8]
    let v35: struct24;  // [bp-0x2a8]
    let v36: u64;  // [bp-0x2a8]
    let v37: u64;  // [bp-0x2a0]
    let v38: u64;  // [bp-0x2a0]
    let v39: i64;  // [bp-0x298], Other Possible Types: u64
    let v40: u64;  // [bp-0x298]
    let v41: u64;  // [bp-0x290]
    let v42: void*;  // [bp-0x288], Other Possible Types: u64
    let v43: u64;  // [bp-0x280]
    let v44: u64;  // [bp-0x278]
    let v45: u64;  // [bp-0x270]
    let v46: u64;  // [bp-0x268]
    let v47: u64;  // [bp-0x260]
    let v48: void*;  // [bp-0x258]
    let v49: u64;  // [bp-0x250]
    let v50: struct12;  // [bp-0x248], Other Possible Types: u96
    let v51: struct32;  // [bp-0x248], Other Possible Types: u64
    let v53: i64;  // [bp-0x248]
    let v54: u128;  // [bp-0x248]
    let v55: u16;  // [bp-0x244]
    let v56: u8;  // [bp-0x242]
    let v57: u8;  // [bp-0x241]
    let v58: u64;  // [bp-0x240]
    let v59: u64;  // [bp-0x238]
    let v60: u384;  // [bp-0x228], Other Possible Types: struct48, struct24, struct_0 *, void*, struct40
    let v61: void*;  // [bp-0x228]
    let v62: u64;  // [bp-0x220]
    let v63: u64;  // [bp-0x220]
    let v64: u64;  // [bp-0x218]
    let v65: u64;  // [bp-0x218]
    let v66: u64;  // [bp-0x210]
    let v67: u64;  // [bp-0x210]
    let v69: struct584;  // [bp-0x200]
    let v70: u64;  // [bp-0x1f8]
    let v71: u64;  // [bp-0x1f0]
    let v72: u64;  // [bp-0x1e8]
    let v73: u64;  // [bp-0x1e0]
    let v74: u32;  // [bp-0x1d8]
    let v75: u64;  // [bp-0x1d0]
    let v76: u32;  // [bp-0x1c8]
    let v77: void*;  // [bp-0x1c0]
    let v78: struct16;  // [bp-0x1c0]
    let v79: u64;  // [bp-0x1b8]
    let v80: void*;  // [bp-0x1b0]
    let v81: u8;  // [bp-0x1a8]
    let v82: u64;  // [bp-0x198]
    let v83: struct32;  // [bp-0x188], Other Possible Types: Result<struct16, struct9>
    let v84: i64;  // [bp-0x168]
    let v85: struct24;  // [bp-0x160]
    let v86: u64;  // [bp-0x150]
    let v87: u128;  // [bp-0x148]
    let v88: u64;  // [bp-0x138]
    let v89: u64;  // [bp-0x130]
    let v90: u64;  // [bp-0x128]
    let v91: u64;  // [bp-0x120]
    let v92: u32;  // [bp-0x118]
    let v93: u16;  // [bp-0x114]
    let v94: u192;  // [bp-0x108]
    let v95: u64;  // [bp-0xe0]
    let v96: u192;  // [bp-0xd8]
    let v97: u128;  // [bp-0xb8]
    let v98: u64;  // [bp-0xa8]
    let v100: u64;  // [bp-0x90]
    let v101: u128;  // [bp-0x88]
    let v102: u64;  // [bp-0x78]
    let v103: u64;  // [bp-0x70]
    let v104: u256;  // [bp-0x68]
    let v105: struct24;  // [bp-0x48]
    let v107: i64;  // rdi
    let v108: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v109: u64;  // rax
    let v110: u64;  // rdx
    let v112: u64;  // r15
    let v113: u64;  // rcx
    let v114: u8;  // bpl
    let v115: u8;  // al
    let v116: u8;  // al
    let v117: &u64;  // rax
    let v118: i64;  // rcx
    let v119: u64;  // r13
    let v120: u64;  // rax
    let v121: u8;  // r13b
    let v122: u8;  // bpl
    let v123: u64;  // rax
    let v124: u128;  // xmm0
    let v125: u128;  // xmm1
    let v126: i64;  // rdx
    let v127: u64;  // rcx
    let v128: u128;  // xmm0
    let v129: u128;  // xmm1
    let v130: u64;  // rax
    let v131: u64;  // rdx
    let v132: u128;  // xmm0
    let v133: u64;  // r8
    let v134: i64;  // rax
    let v135: u32;  // ecx
    let v136: u64;  // rbx
    let v137: u64;  // r15
    let v138: i64;  // rax
    let v140: u8;  // r12b
    let v141: void*;  // rbx
    let v142: u32;  // r15d
    let v143: u8;  // al
    let v145: void*;  // [bp-0x228]
    let v146: struct24;  // [bp-0x108]
    let v148: struct24;  // [bp-0xf0]

    v108 = alloc::alloc::Global::alloc_impl(v107) as u64;
    *(v108 as &&u8) = &g_42bfb1;
    *((v108 + 8) as &i64) = 7;
    v105 = alloc::slice::hack::into_vec(v108, 1);
    v33 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v105);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v33);
    if v109 {
        do {
            v112 = v110;
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, v109, v112) as i8 && clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a0, v109, v112) as i8 == 2 {
                v60 = <T as alloc::slice::hack::ConvertVec>::to_vec(v109, v112);
                *((v18 + 32) as &u64) = v64;
                *((v18 + 16) as &i128) = *(&v60.field_0 as &i128);
                *((v18 + 8) as &i64) = 10;
                *(v18 as &i64) = 0x8000000000000000;
                return;
            }
            <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v33);
        } while (v109);
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "recursive") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "archive");
    }
    v83 = uucore::features::backup_control::determine_backup_mode(a0);
    match v83 {
        Ok(_) => {
            v113 = *((&v83 as &char + 8) as &i64);
            v51 = v83 as i64 as u64;
            v58 = v113;
            v60 = &v51 as u8;
            v62 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v31 = &g_41e7f0 as u64;
            v37 = 1;
            v42 = 0 as void*;
            *(&v39 as &&struct_0 *) = &v60;
            v41 = 1;
            v31 = core::option::Option<T>::map_or_else(a1);
            *((v18 + 32) as &u64) = v98;
            *((v18 + 16) as &u128) = v97;
            *((v18 + 8) as &i64) = 11;
            *(v18 as &i64) = 0x8000000000000000;
            return;
        },
        Err(_) => {
            v114 = *((&v83 as &char + 8) as &i8);
            v115 = uucore::features::update_control::determine_update_mode(a0) as i32 as i8;
            v85 = uucore::features::backup_control::determine_backup_suffix(a0);
            v116 = uu_cp::OverwriteMode::from_matches(a0) as i32 as i8;
            v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "no-target-directory") as i8;
            v34 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "target-directory");
            v117 = clap_builder::parser::error::MatchesError::unwrap("target-directory", &v34);
            if v117 && !((v36 as u192 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v117), v72 = v35.field_16, v70 = *(&v35.field_0 as &i128) as u128, v70 == 0x8000000000000000 || std::path::Path::is_dir(v71, v72) as u8)) {
                v31 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v70 as u8);
                v118 = v107;
                *((v18 + 32) as &u64) = v31.field_16;
                *((v18 + 16) as &i128) = *(&v31.field_0 as &i128);
                *((v18 + 8) as &i64) = 12;
            } else {
                v14 = v116;
                v15 = v115;
                v16 = v114;
                v5 = 1;
                v77 = 0;
                v79 = 8;
                v80 = 0;
                v36 = &g_41e340 as u64;
                v38 = 8;
                v40 = &g_42cc48 as u64;
                v41 = 11;
                v42 = &g_42cd52 as u64;
                v43 = 7;
                v44 = &g_42cbf6;
                v45 = 27;
                v46 = &g_42cd73;
                v47 = 29;
                v48 = 0;
                v49 = 5;
                loop {
                    v119 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v36 as u192);
                    if !v119 {
                        break;
                    }
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v103, a0, v119, v110);
                    v120 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a0, v119, v110);
                    if !(v103 as i32 == 2 && v120 == 1 && v104 as i64) {
                        v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_occurrences(a0, v119, v110);
                        v146 = clap_builder::parser::error::MatchesError::unwrap(v119, v110, &v60);
                        v148 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a0, v119, v110);
                        if v146.field_0 && v148.field_0 {
                            v96 = v94;
                            v59 = v95;
                            v54 = *(&v148.field_0 as &i128) as u128;
                            v60 = struct32 {
                                field_0: &v54 as u8
                                field_8: &v77
                                field_16: v119
                                field_24: v110
                            };
                            core::iter::traits::iterator::Iterator::fold(&v96, &v60);
                            v145 = v61;
                            v64 = v65;
                            v63 = v62;
                            v67 = v66;
                        }
                    } else if *(v104 as i64 as &i8) {
                        v60 = struct48 {
                            field_0: v119
                            field_8: v110
                            field_16: v110
                            field_24: 0
                            field_32: 8
                            field_40: 0
                        };
                        v78 = alloc::vec::Vec<T,A>::push(&v60);
                        v145 = v61;
                        v64 = v65;
                        v63 = v62;
                        v67 = v66;
                    }
                }
                alloc::slice::<impl [T]>::sort_by(8, None);
                v1 = 0;
                v0 = 0;
                v83 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v77);
                v60 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v83);
                v2 = 0;
                if v67 != 0x8000000000000000 {
                    do {
                        v82 = v69;
                        memcpy(&v81, &v67, 16);
                        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v145, v63 as u32, "archive") as i8 {
                            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v145, v63 as u32, "preserve-default-attributes") as i8 {
                                v38 = v2;
                                v32 = struct16 {
                                    field_0: v0
                                    field_4: v1
                                    field_6: v121
                                    field_7: v122
                                    field_8: v37 & -0x100000000 | v38 as u64
                                };
                                v50 = uu_cp::Attributes::union(&v32);
                                v38 = v37;
                            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v145, v63 as u32, "no-dereference-preserve-links") as i8 {
                                v38 = v2;
                                v30 = struct16 {
                                    field_0: v0
                                    field_4: v1
                                    field_6: v121
                                    field_7: v122
                                    field_8: v37 & -0x100000000 | v38 as u64
                                };
                                v50 = uu_cp::Attributes::union(&v30);
                                v38 = v37;
                            } else {
                                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v145, v63 as u32, "preserve") as i8 {
                                    v21 = v1;
                                    v20 = v0;
                                    v22 = v121;
                                    v23 = v122;
                                    v24 = v2;
                                    v51 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v81 as u128);
                                    uu_cp::Attributes::parse_iter(&v32, &v51);
                                    v73 = v38;
                                    v74 = v40 as i32;
                                    if v123 != 13 {
                                        v124 = *((&v40 as &char + 4) as &i128);
                                        v125 = *((&v42 as &char + 4) as &i128);
                                        v126 = v107;
                                        *((v18 + 56) as &i128) = *(&v44 as &i128);
                                        *((v18 + 44) as &u128) = v125;
                                        *((v18 + 28) as &u128) = v124;
                                        *((v18 + 24) as &u32) = v74;
                                        v127 = v73;
                                        *((v126 + 16) as &u64) = v127;
                                        *((v126 + 8) as &u64) = v123;
                                        *(v126 as &i64) = 0x8000000000000000;
                                        return;
                                    }
                                    v20 = uu_cp::Attributes::union(&v73, v40 as i32);
                                } else {
                                    if !((<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v145, v63 as u32, "no-preserve") as i8 & (v82) as u8 as u8) == 1) {
                                        continue;
                                    }
                                    v21 = v1;
                                    v20 = v0;
                                    v22 = v121;
                                    v23 = v122;
                                    v24 = v2;
                                    v53 as u256 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v81 as u128);
                                    uu_cp::Attributes::parse_iter(&v32, &v53 as u256);
                                    v75 = v38;
                                    v76 = v40 as i32;
                                    if v123 != 13 {
                                        v128 = *((&v40 as &char + 4) as &i128);
                                        v129 = *((&v42 as &char + 4) as &i128);
                                        v126 = v107;
                                        *((v18 + 56) as &i128) = *(&v44 as &i128);
                                        *((v18 + 44) as &u128) = v129;
                                        *((v18 + 28) as &u128) = v128;
                                        *((v18 + 24) as &u32) = v76;
                                        v127 = v75;
                                        *((v126 + 16) as &u64) = v127;
                                        *((v126 + 8) as &u64) = v123;
                                        *(v126 as &i64) = 0x8000000000000000;
                                        return;
                                    }
                                    v20 = uu_cp::Attributes::diff(&v75, v40 as i32);
                                }
                                v0 = v25;
                                v1 = v26;
                                v121 = v27;
                                v122 = v28;
                                v2 = v29;
                                continue;
                            }
                            v0 = v50 as i32;
                            v1 = v55;
                            v121 = v56;
                            v122 = v57;
                            v2 = *((&v50 as &char + 8) as &i32);
                        }
                    } while ((v60 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v83), v67 != 0x8000000000000000));
                }
                if (v121 & 1) {
                    v60 = <T as alloc::slice::hack::ConvertVec>::to_vec("SELinux was not enabled during the compile time!");
                    v41 = v64;
                    v37 = *(&v60.field_0 as &i128) as u128;
                    v31 = 4 as u64;
                    if (v122 & 1) {
                        v130 = v31;
                        v131 = *((&v37 as &char + 8) as &i64);
                        v132 = *(&v42 as &i128);
                        *((v18 + 56) as &i128) = *(&v44 as &i128);
                        *((v18 + 40) as &u128) = v132;
                        *((v18 + 24) as &u64) = v131;
                        *((v18 + 32) as &u64) = v41;
                        *((v18 + 8) as &u64) = v130;
                        *((v18 + 16) as &u64) = v38;
                        *(v18 as &i64) = 0x8000000000000000;
                        return;
                    }
                    uu_cp::show_error_if_needed(&v32);
                }
                v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "attributes-only") as i8;
                v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "copy-contents") as i8;
                v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "cli-symbolic-links") as i8;
                v10 = uu_cp::CopyMode::from_matches(a0) as i8;
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "no-dereference") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "no-dereference-preserve-links") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "archive") as i8 || (v3 = 1, v5 && uu_cp::CopyMode::from_matches(a0) as i8) {
                    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "dereference") as i8;
                }
                v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "one-file-system") as i8;
                v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "parents") as i8;
                v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "debug") as i8;
                v4 = 1;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "verbose") as i8 {
                    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "debug") as i8;
                }
                v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "strip-trailing-slashes") as i8;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "reflink", v133);
                v134 = clap_builder::parser::error::MatchesError::unwrap("reflink", &v32);
                v19 = v135 & -0x100 | 1;
                if !v134 || (v136 = *((v134 + 8) as &i64), v137 = *((v134 + 16) as &i64), <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v136, v137 as u32, "always") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v136, v137 as u32, "auto") as i8 || (v19 = v135 & -0x100 | 2, <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v136, v137 as u32, "never") as i8)) {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "sparse", v133);
                    v138 = clap_builder::parser::error::MatchesError::unwrap("sparse", &v32);
                    if !v138 || !((v84 = v138, v141 = *((v138 + 8) as &i64), v142 = *((v138 + 16) as &i64) as i32, !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v141, v142, "always") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v141, v142, "auto") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v141, v142, "never") as i8)) {
                        v64 = v86;
                        v60 = *(&v85.field_0 as &i128) as u128;
                        v39 = v72;
                        v32 = v70;
                        v143 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "progress") as i8;
                        v93 = v1;
                        v92 = v0;
                        memcpy(&v83, &v60, 16);
                        v88 = v64;
                        v91 = v39;
                        memcpy(&v89, &v32, 16);
                        *((v18 + 46) as &i64) = *((&v91 as &char + 6) as &i64);
                        *((v18 + 32) as &u64) = v90;
                        *((v18 + 40) as &u64) = v91;
                        *((v18 + 16) as &u64) = v88;
                        *((v18 + 24) as &u64) = v89;
                        *(v18 as &u128) = v87;
                        *((v18 + 54) as &u8) = v121;
                        *((v18 + 55) as &u8) = v122;
                        *((v18 + 56) as &u32) = v2;
                        *((v18 + 60) as &u8) = v14;
                        *((v18 + 61) as &u8) = v110 as u8;
                        *((v18 + 62) as &u64) = (0 CONCAT (v6 as u16 * 0x100 | v8 as u16) as u64 * 0x1000000000000) as u64 | ((0 CONCAT (v9 as u16 * 0x100 | v17 as u16) as u64 * 0x100000000) as u64 | (v3 as u32 * 0x1000000 | v11 as u32 * 0x10000 | v12 as u32 * 0x100 | v13 as u32) as u64) & 281474976710655;
                        *((v18 + 70) as &u8) = v5;
                        *((v18 + 71) as &u8) = v7;
                        *((v18 + 72) as &u8) = v4;
                        *((v18 + 73) as &u8) = v143;
                        *((v18 + 74) as &u8) = v140;
                        *((v18 + 75) as &u8) = v19 as u8;
                        *((v18 + 76) as &u8) = v16;
                        *((v18 + 77) as &u8) = v15;
                        *((v18 + 78) as &u8) = v10;
                        return;
                    }
                    v60 = &v84;
                    v62 = <&T as core::fmt::Display>::fmt;
                    *(&v31 as &&str) = "invalid argument ";
                    v38 = 2;
                    v42 = 0 as void*;
                    *(&v39 as &&struct_0 *) = &v60;
                    v41 = 1;
                    v31 = core::option::Option<T>::map_or_else(a1);
                    v118 = v107;
                    *((v18 + 32) as &u64) = v102;
                } else {
                    v60 = 0;
                    v62 = v136;
                    v64 = v137;
                    v66 = 1;
                    *(&v53 as &&void*) = &v60;
                    v58 = <os_display::Quoted as core::fmt::Display>::fmt;
                    *(&v31 as &&str) = "invalid argument ";
                    v38 = 2;
                    v42 = 0 as void*;
                    *(&v39 as &&u256) = &v53 as u256;
                    v41 = 1;
                    v31 = core::option::Option<T>::map_or_else(a1);
                    v118 = v107;
                    *((v18 + 32) as &u64) = v100;
                }
                *((v118 + 16) as &u128) = v101;
                *((v118 + 8) as &i64) = 9;
            }
            *(v118 as &i64) = 0x8000000000000000;
            return;
        },
    }
}
