fn uu_cp::Options::from_matches(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i32;  // [sp-0x2ec]
    let v1: i16;  // [sp-0x2e8]
    let v2: i32;  // [sp-0x2e4]
    let v3: i8;  // [sp-0x2e0]
    let v4: i8;  // [sp-0x2df]
    let v5: i8;  // [sp-0x2de]
    let v6: i8;  // [sp-0x2dd]
    let v7: i8;  // [sp-0x2dc]
    let v8: i8;  // [sp-0x2db]
    let v9: i8;  // [sp-0x2da]
    let v10: i8;  // [sp-0x2d9]
    let v11: i8;  // [sp-0x2d8]
    let v12: i8;  // [sp-0x2d7]
    let v13: i8;  // [sp-0x2d6]
    let v14: i8;  // [sp-0x2d5]
    let v15: i8;  // [sp-0x2d4]
    let v16: i8;  // [sp-0x2d3]
    let v17: i8;  // [sp-0x2d2]
    let v18: i32;  // [sp-0x2c4]
    let v19: i32;  // [sp-0x2c0]
    let v20: i16;  // [sp-0x2bc]
    let v21: i8;  // [sp-0x2ba]
    let v22: i8;  // [sp-0x2b9]
    let v23: i32;  // [sp-0x2b8]
    let v24: struct12;  // [sp-0x2b4], Other Possible Types: i96
    let v25: i320;  // [sp-0x2a8], Other Possible Types: Result<struct68, struct20>, struct24, struct12, struct32
    let v26: i128;  // [bp-0x2a0]
    let v27: i64;  // [sp-0x298]
    let v28: i64;  // [sp-0x290]
    let v29: i64;  // [sp-0x288]
    let v30: i64;  // [sp-0x280]
    let v31: i64;  // [sp-0x278]
    let v32: i64;  // [sp-0x270]
    let v33: i64;  // [sp-0x268]
    let v34: i64;  // [sp-0x260]
    let v35: i64;  // [sp-0x258]
    let v36: i64;  // [sp-0x250]
    let v37: i96;  // [sp-0x248], Other Possible Types: struct12, struct32
    let v38: i64;  // [sp-0x240]
    let v39: i64;  // [sp-0x238]
    let v40: i64;  // [sp-0x228], Other Possible Types: struct48, struct24, struct40, struct32
    let v41: i8;  // [bp-0x210]
    let v42: i128;  // [bp-0x1f8]
    let v43: i64;  // [sp-0x1e8]
    let v44: i64;  // [sp-0x1e0]
    let v45: i32;  // [sp-0x1d8]
    let v46: i64;  // [bp-0x1d0]
    let v47: i32;  // [sp-0x1c8]
    let v48: i128;  // [sp-0x1c0], Other Possible Types: struct16
    let v49: i64;  // [sp-0x1b8]
    let v50: i64;  // [sp-0x1b0]
    let v51: i128;  // [sp-0x1a8]
    let v52: i64;  // [sp-0x198]
    let v53: i256;  // [sp-0x188], Other Possible Types: struct32, struct9
    let v54: i64;  // [sp-0x168]
    let v55: struct24;  // [sp-0x160], Other Possible Types: i192
    let v56: i128;  // [sp-0x148]
    let v57: i64;  // [sp-0x138]
    let v58: i128;  // [sp-0x130]
    let v59: i64;  // [sp-0x120]
    let v60: i32;  // [sp-0x118]
    let v61: i16;  // [sp-0x114]
    let v62: i192;  // [sp-0x108], Other Possible Types: struct24
    let v63: i192;  // [sp-0xf0], Other Possible Types: Option<struct24>
    let v64: i128;  // [sp-0xd8]
    let v65: i64;  // [sp-0xc8]
    let v66: i192;  // [sp-0xb8]
    let v67: i192;  // [sp-0xa0]
    let v68: i192;  // [sp-0x88]
    let v69: Result<struct40, struct16>;  // [sp-0x70], Other Possible Types: i320
    let v70: struct24;  // [sp-0x48], Other Possible Types: i192
    let v72: i64;  // rax
    let v73: struct8;  // rax
    let v75: i64;  // r15
    let v76: i64;  // rdx
    let v77: i64;  // r15
    let v79: i8;  // bpl
    let v82: i64;  // rax
    let v83: i128;  // xmm0
    let v84: i256;  // ymm0
    let v85: i256;  // ymm0
    let v86: i64;  // rcx
    let v87: i64;  // r13
    let v89: i64;  // rax
    let v90: i128;  // xmm0
    let v91: i128;  // xmm0
    let v92: i8;  // r13b
    let v93: i8;  // bpl
    let v94: i64;  // rbx
    let v95: i64;  // r15
    let v96: i128;  // xmm0
    let v97: i64;  // rax
    let v98: i128;  // xmm0
    let v99: i128;  // xmm1
    let v100: i64;  // rdx
    let v101: i128;  // xmm0
    let v102: i128;  // xmm1
    let v103: i128;  // xmm0
    let v104: i64;  // rsi
    let v105: i64;  // rax
    let v106: i64;  // rcx
    let v107: i128;  // xmm0
    let v108: i64;  // rdi
    let v109: i64;  // rax
    let v110: i64;  // rcx
    let v113: i64;  // rax
    let v115: i64;  // rbx
    let v116: i64;  // r15
    let v117: i128;  // xmm0
    let v118: i128;  // xmm0

    v72 = alloc::alloc::Global::alloc_impl();
    *(v72 as &&i64) = &g_42bdb1;
    *((v72 + 8) as &i64) = 7;
    v70 = alloc::slice::hack::into_vec(v72, 1);
    v25 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v70);
    v73 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if v73 {
        do {
            v75 = v77;
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, v73, v75) as i8 && clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, v73, v75) as i8 == 2 {
                v40 = <T as alloc::slice::hack::ConvertVec>::to_vec(v73, v75);
                a0 = a0;
                *((a0 + 32) as &struct24) = v40.field_16;
                *((a0 + 16) as &i192) = v40;
                *((a0 + 8) as &i64) = 10;
                *(a0 as &i64) = 0x8000000000000000;
                return a0;
            }
        } while ((v73 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(), v73));
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "recursive") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "archive");
    }
    v53 = uucore::features::backup_control::determine_backup_mode(a1);
    if v37 {
        v37 = v53;
        v38 = v53;
        v66 = format!("{:?}", &v37);
        a0 = a0;
        *((a0 + 32) as &i64) = *((&v66 as &char + 16) as &i64);
        *((a0 + 16) as &i192) = v66;
        *((a0 + 8) as &i64) = 11;
        *(a0 as &i64) = 0x8000000000000000;
        return a0;
    }
    v79 = *((&v53 as &char + 8) as &i8);
    v55 = uucore::features::backup_control::determine_backup_suffix(a1);
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-target-directory") as i8;
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "target-directory");
    v82 = clap_builder::parser::error::MatchesError::unwrap("target-directory", &v25);
    if !v82 {
        v42 = 0x8000000000000000;
        goto LABEL_501527;
    }
    v25 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v82);
    v43 = v25.field_16;
    v83 = v25;
    v85 = v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83;
    v42 = v83;
    if v42 != 0x8000000000000000 && !std::path::Path::is_dir(*((&v42 as &char + 8) as &i64), v43) as i8 {
        v25 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v42);
        v86 = a0;
        *((v86 + 32) as &struct24) = v25.field_16;
        *((v86 + 16) as &i192) = v25;
        *((v86 + 8) as &i64) = 12;
    }
LABEL_501527:
    v14 = uu_cp::OverwriteMode::from_matches(a1) as i32;
    v15 = uucore::features::update_control::determine_update_mode(a1) as i32;
    v16 = v79;
    v5 = 1;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v25 = &g_41e158;
    v26 = 8;
    v27 = &g_42ca48;
    v28 = 11;
    v29 = &g_42cb52;
    v30 = 7;
    v31 = &g_42c9f6;
    v32 = 27;
    v33 = &g_42cb73;
    v34 = 29;
    v35 = 0;
    v36 = 5;
    loop {
        v40 = v40;
        v87 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v25);
        if !v87 {
            break;
        }
        v69 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, v87, v76);
        if v69 != 2 || clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, v87) != 1 || !((v89 = *((&v69 as &char + 8) as &i64), v89)) {
            v40 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_occurrences(a1, v87, v76);
            v62 = clap_builder::parser::error::MatchesError::unwrap(v87, v76, &v40);
            v63 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, v87, v76);
            if v62 && v63 {
                v65 = *((&v62 as &char + 16) as &i64);
                v90 = v62;
                v64 = v90;
                v39 = *((&v63 as &char + 16) as &i64);
                v91 = v63;
                v85 = v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v91;
                v37 = v91;
                v40 = struct32 {
                    field_0: &v37
                    field_8: &v48
                    field_16: v87
                    field_24: v76
                };
                core::iter::traits::iterator::Iterator::fold(&v64, &v40, v76);
                v40 = v40;
            }
        } else if *(v89 as &i8) {
            *(&v40.field_0 as &struct48) = struct48 {
                field_0: v87
                field_8: v76
                field_16: v76
                field_24: 0
                field_32: 8
                field_40: 0
            };
            v48 = alloc::vec::Vec<T,A>::push(&v40, v76);
            v40 = v40;
        }
    }
    alloc::slice::<impl [T]>::sort_by(v48.field_8, v50);
    v1 = 0;
    v0 = 0;
    v53 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v48);
    v40 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v53);
    v92 = 0;
    v93 = 0;
    v2 = 0;
    if *((&v40 as &char + 24) as &i64) != 0x8000000000000000 {
        v2 = 0;
        v93 = 0;
        v92 = 0;
        do {
            v94 = v40;
            v95 = v40.8;
            v52 = v40.40;
            v96 = *((&v40 as &char + 24) as &i128);
            v85 = v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v96;
            v51 = v96;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v94, v95, "archive") as i8 {
                v1 = 257;
                v0 = 16843009;
                v2 = 65793;
                v92 = 0;
                v93 = 0;
                goto LABEL_501bd9;
            }
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v94, v95, "preserve-default-attributes") as i8 {
                *(&v25.field_0 as &struct12) = struct12 {
                    field_0: v0
                    field_4: v1
                    field_6: v92
                    field_7: v93
                    field_8: v2
                };
                v37 = uu_cp::Attributes::union(&v25);
                goto LABEL_501ba5;
            } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v94, v95, "no-dereference-preserve-links") as i8 {
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v94, v95, "preserve") as i8 {
                    v20 = v1;
                    v19 = v0;
                    v21 = v92;
                    v22 = v93;
                    v23 = v2;
                    v37 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v51);
                    v25 = uu_cp::Attributes::parse_iter(&v37, v76);
                    v97 = v25;
                    v44 = *((&v25 as &char + 8) as &i64);
                    v45 = *((&v25 as &char + 16) as &i32);
                    match v25 {
                        Err(_) => {
                            v24 = uu_cp::Attributes::union(&v19, &v44);
                            goto LABEL_501d7b;
                        },
                        Ok(_) => {
                            v98 = *((&v25 as &char + 20) as &i128);
                            v99 = *((&v25 as &char + 36) as &i128);
                            v100 = a0;
                            *((v100 + 56) as &i128) = *((&v25 as &char + 48) as &i128);
                            *((v100 + 44) as &i128) = v99;
                            *((v100 + 28) as &i128) = v98;
                            *((v100 + 24) as &i32) = v45;
                            goto LABEL_502256;
                        },
                    }
                }
                if (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v94, v95, "no-preserve") as i8 & v52) != 1 {
LABEL_501bd9:
                } else {
                    v20 = v1;
                    v19 = v0;
                    v21 = v92;
                    v22 = v93;
                    v23 = v2;
                    v37 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v51);
                    v25 = uu_cp::Attributes::parse_iter(&v37, v76);
                    v97 = v25;
                    v44 = *((&v25 as &char + 8) as &i64);
                    v47 = *((&v25 as &char + 16) as &i32);
                    match v25 {
                        Err(_) => {
                            v24 = uu_cp::Attributes::diff(&v19, &v46);
                        },
                        Ok(_) => {
                            v101 = *((&v25 as &char + 20) as &i128);
                            v102 = *((&v25 as &char + 36) as &i128);
                            v100 = a0;
                            *((v100 + 56) as &i128) = *((&v25 as &char + 48) as &i128);
                            *((v100 + 44) as &i128) = v102;
                            *((v100 + 28) as &i128) = v101;
                            *((v100 + 24) as &i32) = v47;
LABEL_502256:
                            *((v100 + 16) as &i64) = v44;
                            *((v100 + 8) as &i64) = v97;
                            *(v100 as &i64) = 0x8000000000000000;
                        },
                    }
LABEL_501d7b:
                    v0 = v24;
                    v1 = *((&v24 as &char + 4) as &i16);
                    v92 = *((&v24 as &char + 6) as &i8);
                    v93 = *((&v24 as &char + 7) as &i8);
                    v2 = *((&v24 as &char + 8) as &i32);
                }
            } else {
                *(&v25.field_0 as &struct12) = struct12 {
                    field_0: v0
                    field_4: v1
                    field_6: v92
                    field_7: v93
                    field_8: v2
                };
                v37 = uu_cp::Attributes::union(&v25);
LABEL_501ba5:
                v0 = v37;
                v1 = *((&v37 as &char + 4) as &i16);
                v92 = *((&v37 as &char + 6) as &i8);
                v93 = *((&v37 as &char + 7) as &i8);
                v2 = *((&v37 as &char + 8) as &i32);
                goto LABEL_501bd9;
            }
        } while ((v73 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(), v73));
    }
    if (v92 & 1) {
        v40 = <T as alloc::slice::hack::ConvertVec>::to_vec("SELinux was not enabled during the compile time!");
        v28 = v40.field_16;
        v103 = v40;
        v85 = v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v103;
        v26 = v103;
        v25 = 4;
        if (v93 & 1) {
            v105 = v25;
            v106 = v26;
            v107 = *((&v25 as &char + 32) as &i128);
            v108 = a0;
            *((v108 + 56) as &i128) = *((&v25 as &char + 48) as &i128);
            *((v108 + 40) as &i128) = v107;
            *((v108 + 24) as &i64) = v27;
            *((v108 + 32) as &i64) = v28;
            *((v108 + 8) as &i64) = v105;
            *((v108 + 16) as &i64) = v106;
            *(v108 as &i64) = 0x8000000000000000;
        } else {
            uu_cp::show_error_if_needed(&v25, v104, v76);
        }
    }
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "attributes-only") as i8;
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "copy-contents") as i8;
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "cli-symbolic-links") as i8;
    v10 = uu_cp::CopyMode::from_matches(a1) as i8;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-dereference") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-dereference-preserve-links") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "archive") as i8 || (v3 = 1, v5 && uu_cp::CopyMode::from_matches(a1) as i8) {
        v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "dereference") as i8;
    }
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "one-file-system") as i8;
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "parents") as i8;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "debug") as i8;
    v4 = 1;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "verbose") as i8 {
        v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "debug") as i8;
    }
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "strip-trailing-slashes") as i8;
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "reflink");
    v109 = clap_builder::parser::error::MatchesError::unwrap("reflink", &v25);
    v18 = v110 | -0x100 | 1;
    if !v109 {
LABEL_501e37:
        v25 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "sparse");
        v113 = clap_builder::parser::error::MatchesError::unwrap("sparse", &v25);
        if v113 {
            v54 = v113;
            v115 = *((v113 + 8) as &i64);
            v116 = *((v113 + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v115, v116, "always") as i8 {
                goto LABEL_501edb;
            }
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v115, v116, "auto") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v115, v116, "never") as i8 {
                v68 = format!("invalid argument {:?} for 'sparse'", &v54);
                v86 = a0;
                *((v86 + 32) as &i64) = *((&v68 as &char + 16) as &i64);
                goto LABEL_50219c;
            }
        }
LABEL_501edb:
        v40.field_16 = (stack_base)[336] as i64;
        v117 = v55;
        v40 = v117;
        v27 = v43;
        v118 = v42;
        v25 = v118;
        v61 = v1;
        v60 = v0;
        v56 = v40;
        v57 = v40.field_16;
        v59 = v27;
        v58 = v25;
        a0 = a0;
        *((a0 + 46) as &i64) = *((&v59 as &char + 6) as &i64);
        *((a0 + 32) as &i64) = *((&v58 as &char + 8) as &i64);
        *((a0 + 40) as &i64) = v59;
        *((a0 + 16) as &i64) = v57;
        *((a0 + 24) as &i128) = v58;
        *(a0 as &i128) = v56;
        *((a0 + 54) as &i8) = v92;
        *((a0 + 55) as &i8) = v93;
        *((a0 + 56) as &i32) = v2;
        *((a0 + 60) as &i8) = v14;
        *((a0 + 61) as &u8) = v76;
        *((a0 + 62) as &u64) = v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v117 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v118 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v3 * 0x1000000 | v11 * 0x10000 | v12 * 0x100 | v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT ((v9 * 0x100 | v17) & 65535) * 0x100000000) | (v3 * 0x1000000 | v11 * 0x10000 | v12 * 0x100 | v13) & 340282366920938463463374325961086468095 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT ((v6 * 0x100 | v8) & 65535) * 0x1000000000000) | ((0 CONCAT ((v9 * 0x100 | v17) & 65535) * 0x100000000) | (v3 * 0x1000000 | v11 * 0x10000 | v12 * 0x100 | v13) & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495;
        *((a0 + 70) as &i8) = v5;
        *((a0 + 71) as &i8) = v7;
        *((a0 + 72) as &i8) = v4;
        *((a0 + 73) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "progress") as i8;
        *((a0 + 74) as &i8) = 1;
        *((a0 + 75) as &i8) = v18;
        *((a0 + 76) as &i8) = v16;
        *((a0 + 77) as &i8) = v15;
        *((a0 + 78) as &i8) = v10;
        return a0;
    }
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v109 + 8) as &i64), *((v109 + 16) as &i64), "always") as i8 {
        v18 = 0;
        goto LABEL_501e37;
    }
    if (v73 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(), v73) {
        goto LABEL_501e37;
    }
    v40 = 0;
    v40.8 = vvar_889{reg 40};
    v40.field_16 = vvar_890{reg 136};
    v41 = 1;
    v67 = format!("invalid argument {:?} for 'reflink'", &v40);
    v86 = a0;
    *((v86 + 32) as &i64) = *((&v67 as &char + 16) as &i64);
LABEL_50219c:
    *((v86 + 16) as &i192) = v67;
    *((v86 + 8) as &i64) = 9;
}
