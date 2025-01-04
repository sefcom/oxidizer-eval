fn uu_cp::Options::from_matches(a0: &Result<struct81, struct40>, a1: &struct56, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
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
    let v25: i96;  // [sp-0x2a8], Other Possible Types: Result<struct68, struct20>, struct24, struct32
    let v26: i64;  // [bp-0x2a0]
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
    let v37: i128;  // [sp-0x248], Other Possible Types: struct12, struct32
    let v38: i64;  // [sp-0x240]
    let v39: i64;  // [sp-0x238]
    let v40: i320;  // [sp-0x228], Other Possible Types: struct48, struct24, struct40, struct32
    let v41: i64;  // [sp-0x220]
    let v42: i64;  // [sp-0x218]
    let v43: i8;  // [bp-0x210]
    let v44: i64;  // [sp-0x200]
    let v45: i128;  // [bp-0x1f8]
    let v46: i64;  // [sp-0x1e8]
    let v47: i64;  // [sp-0x1e0]
    let v48: i32;  // [sp-0x1d8]
    let v49: i64;  // [bp-0x1d0]
    let v50: i32;  // [sp-0x1c8]
    let v51: i64;  // [sp-0x1c0], Other Possible Types: struct16
    let v52: i64;  // [sp-0x1b8]
    let v53: i64;  // [sp-0x1b0]
    let v54: i128;  // [sp-0x1a8]
    let v55: i64;  // [sp-0x198]
    let v56: i256;  // [sp-0x188], Other Possible Types: Result<struct16, struct9>, struct32
    let v57: i64;  // [sp-0x168]
    let v58: struct24;  // [sp-0x160], Other Possible Types: i192
    let v59: i192;  // [bp-0x148]
    let v60: i64;  // [sp-0x138]
    let v61: i128;  // [sp-0x130]
    let v62: i64;  // [sp-0x120]
    let v63: i32;  // [sp-0x118]
    let v64: i16;  // [sp-0x114]
    let v65: i192;  // [sp-0x108], Other Possible Types: struct24
    let v66: i192;  // [sp-0xf0], Other Possible Types: Option<struct24>
    let v67: i128;  // [sp-0xd8]
    let v68: i64;  // [sp-0xc8]
    let v69: i192;  // [sp-0xb8]
    let v70: i192;  // [sp-0xa0]
    let v71: i192;  // [sp-0x88]
    let v72: i320;  // [sp-0x70], Other Possible Types: Result<struct40, struct16>
    let v73: struct24;  // [sp-0x48], Other Possible Types: i192
    let v75: i64;  // rax
    let v76: struct8;  // rax
    let v78: i64;  // r15
    let v79: i64;  // rdx
    let v80: i64;  // r15
    let v82: i8;  // bpl
    let v85: i64;  // rax
    let v86: i128;  // xmm0
    let v87: i256;  // ymm0
    let v88: i256;  // ymm0
    let v89: i64;  // rcx
    let v90: i64;  // r13
    let v92: i64;  // rax
    let v93: i128;  // xmm0
    let v94: i128;  // xmm0
    let v95: i8;  // r13b
    let v96: i8;  // bpl
    let v97: i64;  // rbx
    let v98: i64;  // r15
    let v99: i128;  // xmm0
    let v100: i64;  // rax
    let v101: i128;  // xmm0
    let v102: i128;  // xmm1
    let v103: i64;  // rdx
    let v104: i128;  // xmm0
    let v105: i128;  // xmm1
    let v106: i128;  // xmm0
    let v107: i64;  // rsi
    let v108: i64;  // rax
    let v109: i64;  // rcx
    let v110: i128;  // xmm0
    let v111: i64;  // rdi
    let v112: i64;  // rax
    let v113: i64;  // rcx
    let v114: i64;  // rbx
    let v115: i64;  // r15
    let v116: i64;  // rax
    let v118: i64;  // rbx
    let v119: i64;  // r15
    let v120: i128;  // xmm0
    let v121: i128;  // xmm0

    v75 = alloc::alloc::Global::alloc_impl();
    *(v75 as &&i64) = &g_42bfb1;
    *((v75 + 8) as &i64) = 7;
    v73 = alloc::slice::hack::into_vec(v75, 1);
    v25 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v73);
    v76 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if v76 {
        do {
            v78 = v80;
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, v76, v78) as i8 && clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, v76, v78) as i8 == 2 {
                v40 = <T as alloc::slice::hack::ConvertVec>::to_vec(v76, v78);
                a0 = a0;
                *((a0 + 32) as &i64) = v42;
                *((a0 + 16) as &i192) = v40;
                *((a0 + 8) as &i64) = 10;
                *(a0 as &i64) = 0x8000000000000000;
                return a0;
            }
        } while ((v76 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(), v80 = v79, v76));
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "recursive") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "archive");
    }
    v56 = uucore::features::backup_control::determine_backup_mode(a1);
    match v56 {
        Ok(_) => {
            v37 = v56;
            v38 = *((&v56 as &char + 8) as &i64);
            v69 = format!("{:?}", &v37);
            a0 = a0;
            *((a0 + 32) as &i64) = *((&v69 as &char + 16) as &i64);
            *((a0 + 16) as &i192) = v69;
            *((a0 + 8) as &i64) = 11;
            *(a0 as &i64) = 0x8000000000000000;
            return a0;
        },
        Err(_) => {
            v82 = *((&v56 as &char + 8) as &i8);
            v58 = uucore::features::backup_control::determine_backup_suffix(a1);
            v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-target-directory") as i8;
            v25 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "target-directory");
            v85 = clap_builder::parser::error::MatchesError::unwrap("target-directory", &v25);
        },
    }
    if !v85 {
        v45 = 0x8000000000000000;
        goto LABEL_501e57;
    }
    v25 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v85);
    v46 = v27;
    v86 = v25;
    v88 = v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86;
    v45 = v86;
    if v45 != 0x8000000000000000 && !std::path::Path::is_dir(*((&v45 as &char + 8) as &i64), v46) as i8 {
        v25 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v45);
        v89 = a0;
        *((v89 + 32) as &i64) = v27;
        *((v89 + 16) as &i192) = v25;
        *((v89 + 8) as &i64) = 12;
    }
LABEL_501e57:
    v14 = uu_cp::OverwriteMode::from_matches(a1);
    v15 = uucore::features::update_control::determine_update_mode(a1);
    v16 = v82;
    v5 = 1;
    v51 = 0;
    v52 = 8;
    v53 = 0;
    v25 = &g_41e340;
    v26 = 8;
    v27 = &g_42cc48;
    v28 = 11;
    v29 = &g_42cd52;
    v30 = 7;
    v31 = &g_42cbf6;
    v32 = 27;
    v33 = &g_42cd73;
    v34 = 29;
    v35 = 0;
    v36 = 5;
    loop {
        v44 = v44;
        v42 = v42;
        v41 = v41;
        v40 = v40;
        v90 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v25);
        if !v90 {
            break;
        }
        v72 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, v90, v79);
        if v72 != 2 || clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, v90) != 1 || !((v92 = *((&v72 as &char + 8) as &i64), v92)) {
            v40 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_occurrences(a1, v90, v79);
            v65 = clap_builder::parser::error::MatchesError::unwrap(v90, v79, &v40);
            v66 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, v90, v79);
            if v65 && v66 {
                v68 = *((&v65 as &char + 16) as &i64);
                v93 = v65;
                v67 = v93;
                v39 = *((&v66 as &char + 16) as &i64);
                v94 = v66;
                v88 = v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v93 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v94;
                v37 = v94;
                v40 = struct32 {
                    field_0: &v37
                    field_8: &v51
                    field_16: v90
                    field_24: v79
                };
                core::iter::traits::iterator::Iterator::fold(&v67, &v40, v79);
                v40 = v40;
                v41 = v41;
                v42 = v42;
            }
        } else if *(v92 as &i8) {
            *(&v40.field_0 as &struct48) = struct48 {
                field_0: v90
                field_8: v79
                field_16: v79
                field_24: 0
                field_32: 8
                field_40: 0
            };
            v51 = alloc::vec::Vec<T,A>::push(&v40, v79);
            v40 = v40;
            v41 = v41;
            v42 = v42;
            v44 = v44;
        }
    }
    alloc::slice::<impl [T]>::sort_by(v52, v53);
    v1 = 0;
    v0 = 0;
    v56 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v51);
    v40 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v56);
    v95 = 0;
    v96 = 0;
    v2 = 0;
    if *((&v40 as &char + 24) as &i64) != 0x8000000000000000 {
        v2 = 0;
        v96 = 0;
        v95 = 0;
        do {
            v97 = v40;
            v98 = v41;
            v55 = v44;
            v99 = *((&v40 as &char + 24) as &i128);
            v88 = v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v99;
            v54 = v99;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v97, v98, "archive") as i8 {
                v1 = 257;
                v0 = 16843009;
                v2 = 65793;
                v95 = 0;
                v96 = 0;
                goto LABEL_502509;
            }
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v97, v98, "preserve-default-attributes") as i8 {
                v25 = v0;
                v37 = uu_cp::Attributes::union(&v25);
                goto LABEL_5024d5;
            } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v97, v98, "no-dereference-preserve-links") as i8 {
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v97, v98, "preserve") as i8 {
                    v20 = v1;
                    v19 = v0;
                    v21 = v95;
                    v22 = v96;
                    v23 = v2;
                    v37 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v54);
                    v25 = uu_cp::Attributes::parse_iter(&v37, v79);
                    v100 = v25;
                    v47 = *((&v25 as &char + 8) as &i64);
                    v48 = *((&v25 as &char + 16) as &i32);
                    match v25 {
                        Ok(_) => {
                            v101 = *((&v25 as &char + 20) as &i128);
                            v102 = *((&v25 as &char + 36) as &i128);
                            v103 = a0;
                            *((v103 + 56) as &i128) = *((&v25 as &char + 48) as &i128);
                            *((v103 + 44) as &i128) = v102;
                            *((v103 + 28) as &i128) = v101;
                            *((v103 + 24) as &i32) = v48;
                            goto LABEL_502b86;
                        },
                        Err(_) => {
                            v24 = uu_cp::Attributes::union(&v19, &v47);
                            goto LABEL_5026ab;
                        },
                    }
                }
                if (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v97, v98, "no-preserve") as i8 & v55) != 1 {
LABEL_502509:
                } else {
                    v20 = v1;
                    v19 = v0;
                    v21 = v95;
                    v22 = v96;
                    v23 = v2;
                    v37 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v54);
                    v25 = uu_cp::Attributes::parse_iter(&v37, v79);
                    v100 = v25;
                    v47 = *((&v25 as &char + 8) as &i64);
                    v50 = *((&v25 as &char + 16) as &i32);
                    match v25 {
                        Err(_) => {
                            v24 = uu_cp::Attributes::diff(&v19, &v49);
                        },
                        Ok(_) => {
                            v104 = *((&v25 as &char + 20) as &i128);
                            v105 = *((&v25 as &char + 36) as &i128);
                            v103 = a0;
                            *((v103 + 56) as &i128) = *((&v25 as &char + 48) as &i128);
                            *((v103 + 44) as &i128) = v105;
                            *((v103 + 28) as &i128) = v104;
                            *((v103 + 24) as &i32) = v50;
LABEL_502b86:
                            *((v103 + 16) as &i64) = v47;
                            *((v103 + 8) as &i64) = v100;
                            *(v103 as &i64) = 0x8000000000000000;
                        },
                    }
LABEL_5026ab:
                    v0 = v24;
                    v1 = *((&v24 as &char + 4) as &i16);
                    v95 = *((&v24 as &char + 6) as &i8);
                    v96 = *((&v24 as &char + 7) as &i8);
                    v2 = *((&v24 as &char + 8) as &i32);
                }
            } else {
                v25 = v0;
                v37 = uu_cp::Attributes::union(&v25);
LABEL_5024d5:
                v0 = v37;
                v1 = *((&v37 as &char + 4) as &i16);
                v95 = *((&v37 as &char + 6) as &i8);
                v96 = *((&v37 as &char + 7) as &i8);
                v2 = *((&v37 as &char + 8) as &i32);
                goto LABEL_502509;
            }
        } while ((v76 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(), v80 = v79, v76));
    }
    if (v95 & 1) {
        v40 = <T as alloc::slice::hack::ConvertVec>::to_vec("SELinux was not enabled during the compile time!");
        v28 = v42;
        v106 = v40;
        v88 = v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v106;
        v26 = v106;
        v25 = 4;
        if (v96 & 1) {
            v108 = v25;
            v109 = v26;
            v110 = *((&v25 as &char + 32) as &i128);
            v111 = a0;
            *((v111 + 56) as &i128) = *((&v25 as &char + 48) as &i128);
            *((v111 + 40) as &i128) = v110;
            *((v111 + 24) as &i64) = v27;
            *((v111 + 32) as &i64) = v28;
            *((v111 + 8) as &i64) = v108;
            *((v111 + 16) as &i64) = v109;
            *(v111 as &i64) = 0x8000000000000000;
        } else {
            uu_cp::show_error_if_needed(&v25, v107, v79);
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
    v112 = clap_builder::parser::error::MatchesError::unwrap("reflink", &v25);
    v18 = v113 | -0x100 | 1;
    if !v112 {
LABEL_502767:
        v25 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "sparse");
        v116 = clap_builder::parser::error::MatchesError::unwrap("sparse", &v25);
        if v116 {
            v57 = v116;
            v118 = *((v116 + 8) as &i64);
            v119 = *((v116 + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v118, v119, "always") as i8 {
                goto LABEL_50280b;
            }
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v118, v119, "auto") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v118, v119, "never") as i8 {
                v71 = format!("invalid argument {:?} for 'sparse'", &v57);
                v89 = a0;
                *((v89 + 32) as &i64) = *((&v71 as &char + 16) as &i64);
                goto LABEL_502acc;
            }
        }
LABEL_50280b:
        v42 = *((&v58 as &char + 16) as &i64);
        v120 = v58;
        v40 = v120;
        v27 = v46;
        v121 = v45;
        v25 = v121;
        v64 = v1;
        v63 = v0;
        v59 = v40;
        v62 = v27;
        v61 = v25;
        a0 = a0;
        *((a0 + 46) as &i64) = *((&v62 as &char + 6) as &i64);
        *((a0 + 32) as &i64) = *((&v61 as &char + 8) as &i64);
        *((a0 + 40) as &i64) = v62;
        *((a0 + 16) as &i64) = v60;
        *((a0 + 24) as &i128) = v61;
        *(a0 as &i128) = v59;
        *((a0 + 54) as &i8) = v95;
        *((a0 + 55) as &i8) = v96;
        *((a0 + 56) as &i32) = v2;
        *((a0 + 60) as &i8) = v14;
        *((a0 + 61) as &u8) = v79;
        *((a0 + 62) as &u64) = v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v120 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v121 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v3 * 0x1000000 | v11 * 0x10000 | v12 * 0x100 | v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT ((v9 * 0x100 | v17) & 65535) * 0x100000000) | (v3 * 0x1000000 | v11 * 0x10000 | v12 * 0x100 | v13) & 340282366920938463463374325961086468095 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT ((v6 * 0x100 | v8) & 65535) * 0x1000000000000) | ((0 CONCAT ((v9 * 0x100 | v17) & 65535) * 0x100000000) | (v3 * 0x1000000 | v11 * 0x10000 | v12 * 0x100 | v13) & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495;
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
    v114 = *((v112 + 8) as &i64);
    v115 = *((v112 + 16) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v114, v115, "always") as i8 {
        v18 = 0;
        goto LABEL_502767;
    }
    if (v76 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(), v80 = v79, v76) {
        goto LABEL_502767;
    }
    v40 = 0;
    v41 = v114;
    v42 = v115;
    v43 = 1;
    v70 = format!("invalid argument {:?} for 'reflink'", &v40);
    v89 = a0;
    *((v89 + 32) as &i64) = *((&v70 as &char + 16) as &i64);
LABEL_502acc:
    *((v89 + 16) as &i192) = v70;
    *((v89 + 8) as &i64) = 9;
}
