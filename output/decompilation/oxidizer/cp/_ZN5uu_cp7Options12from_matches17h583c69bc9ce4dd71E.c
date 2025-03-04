fn uu_cp::Options::from_matches(a0: &struct81, a1: &struct56) -> u64 {
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
    let v24: struct12;  // [sp-0x2b4], Other Possible Types: int
    let v25: Result<struct40, struct8>;  // [sp-0x2a8], Other Possible Types: int, struct24, struct20, unsigned long, struct32
    let v26: i64;  // [bp-0x2a0], Other Possible Types: int
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
    let v37: struct32;  // [sp-0x248], Other Possible Types: unsigned long, int
    let v38: struct12;  // [sp-0x248], Other Possible Types: int
    let v39: i64;  // [sp-0x240]
    let v40: i64;  // [sp-0x238]
    let v41: struct48;  // [sp-0x228]
    let v42: i64;  // [sp-0x228], Other Possible Types: struct24, struct40, int, struct48, struct32
    let v43: i64;  // [sp-0x220]
    let v44: i64;  // [sp-0x218]
    let v45: i8;  // [bp-0x210]
    let v46: i64;  // [sp-0x200]
    let v48: iNone;  // [bp-0x1f8], Other Possible Types: unsigned long
    let v49: i64;  // [sp-0x1e8]
    let v50: i64;  // [sp-0x1e0]
    let v51: i32;  // [sp-0x1d8]
    let v52: i64;  // [sp-0x1d0]
    let v53: i32;  // [sp-0x1c8]
    let v54: i64;  // [sp-0x1c0], Other Possible Types: int, struct16
    let v55: i64;  // [sp-0x1b0]
    let v56: iNone;  // [sp-0x1a8]
    let v57: i64;  // [sp-0x198]
    let v58: Result<struct16, struct1>;  // [sp-0x188], Other Possible Types: struct32
    let v59: i64;  // [sp-0x168]
    let v60: struct24;  // [sp-0x160]
    let v61: iNone;  // [sp-0x148], Other Possible Types: struct48
    let v62: i64;  // [sp-0x138]
    let v63: i64;  // [sp-0x120]
    let v64: i32;  // [sp-0x118]
    let v65: i16;  // [sp-0x114]
    let v66: struct24;  // [sp-0x108]
    let v67: Option<struct24>;  // [sp-0xf0]
    let v68: struct24;  // [bp-0xd8]
    let v69: String;  // [sp-0xb8]
    let v70: String;  // [sp-0xa0]
    let v71: String;  // [sp-0x88]
    let v72: Result<struct40, struct8>;  // [sp-0x70]
    let v73: struct24;  // [sp-0x48]
    let v75: i64;  // rax
    let v76: struct8;  // rax
    let v77: struct8;  // rbx
    let v78: i64;  // rdx
    let v79: i64;  // r15
    let v81: i8;  // bpl
    let v84: i64;  // rax
    let v85: iNone;  // xmm0
    let v86: iNone;  // ymm0
    let v87: iNone;  // ymm0
    let v88: i64;  // rcx
    let v89: i64;  // r13
    let v91: i64;  // rax
    let v92: iNone;  // xmm0
    let v93: iNone;  // xmm0
    let v94: i8;  // bpl
    let v95: i8;  // r13b
    let v96: i64;  // rbx
    let v97: i64;  // r15
    let v98: iNone;  // xmm0
    let v99: i8;  // r13b
    let v100: iNone;  // xmm0
    let v101: iNone;  // xmm1
    let v102: i64;  // rdx
    let v103: iNone;  // xmm0
    let v104: iNone;  // xmm1
    let v105: i64;  // rdx
    let v106: iNone;  // xmm0
    let v108: i64;  // rax
    let v109: i64;  // rcx
    let v110: iNone;  // xmm0
    let v111: i64;  // rdi
    let v112: i64;  // rax
    let v113: i64;  // rcx
    let v114: i64;  // rbx
    let v115: i64;  // r15
    let v116: i64;  // rax
    let v118: i64;  // rbx
    let v119: i64;  // r15
    let v120: iNone;  // xmm0
    let v121: iNone;  // xmm0
    let v122: i64;  // rbx

    v75 = alloc::alloc::Global::alloc_impl();
    *(v75 as &&i64) = &g_42bfb1;
    *((v75 + 8) as &i64) = 7;
    v73 = alloc::slice::hack::into_vec(v75, 1);
    v25 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v73);
    v76 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if v76 {
        v77 = v76;
        v79 = v78;
        do {
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, v77, v79) as i8 && clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, v77, v79) as i8 == 2 {
                v42 = <T as alloc::slice::hack::ConvertVec>::to_vec(v77, v79);
                return v122;
            }
        } while ((v77 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v25), v79 = v78, v77));
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "recursive") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "archive");
    }
    v58 = uucore::features::backup_control::determine_backup_mode(a1);
    match v58 {
        Ok(_) => {
            v37 = v58 as i64;
            v39 = *((&v58 as &char + 8) as &i64);
            v69 = format!("{}", &v37);
            return v122;
        },
        Err(v81) => {
            v60 = uucore::features::backup_control::determine_backup_suffix(a1);
            v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-target-directory") as i8;
            v25 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "target-directory");
            v84 = clap_builder::parser::error::MatchesError::unwrap("target-directory", &v25);
        },
    }
    if !v84 {
        *(&v48 as &i64) = 0x8000000000000000;
        goto LABEL_501e57;
    }
    v25 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v84);
    v49 = v27;
    v85 = *(&v25.field_0 as &i128);
    v87 = v86 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85 as u256;
    v48 = v85;
    if v48 as i64 != 0x8000000000000000 && !std::path::Path::is_dir((&v48)[8] as i64, v49) as i8 {
        v25 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v48);
        v88 = a0;
        *((v88 + 32) as &unsigned long) = v27;
        *((v88 + 16) as &i128) = *(&v25.field_0 as &i128);
        *((v88 + 8) as &i64) = 12;
    }
LABEL_501e57:
    v14 = uu_cp::OverwriteMode::from_matches(a1) as i32;
    v15 = uucore::features::update_control::determine_update_mode(a1);
    v16 = v81;
    v5 = 1;
    v54 = 0;
    v54 = 8;
    v55 = 0;
    *(&v25 as &&i64) = &g_41e340;
    *(&v26 as &i64) = 8;
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
        v89 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v25);
        if !v89 {
            break;
        }
        v72 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, v89, v78);
        if v72 as i32 != 2 || clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, v89, v78) != 1 || !((v91 = *((&v72 as &char + 8) as &i64), v91)) {
            v42 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_occurrences(a1, v89, v78);
            v66 = clap_builder::parser::error::MatchesError::unwrap(v89, v78, &v42);
            v67 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, v89, v78);
            if v66.field_0 && v67 as i64 {
                v92 = *(&v66.field_0 as &i128);
                *(&v68.field_0 as &struct24) = struct24 {
                    field_0: v92
                    field_16: v66.field_16
                };
                v40 = *((&v67 as &char + 16) as &i64);
                v93 = v67 as i128;
                v87 = (v87 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v92 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v93 as u256;
                v37 = v93;
                v42 = struct32 {
                    field_0: &v37
                    field_8: &v54
                    field_16: v89
                    field_24: v78
                };
                core::iter::traits::iterator::Iterator::fold(&v68, &v42);
            }
        } else if *(v91 as &i8) {
            v42 = struct48 {
                field_0: v89
                field_8: v78
                field_16: v78
                field_24: 0
                field_32: 8
                field_40: 0
            };
            v54 = alloc::vec::Vec<T,A>::push(&v42);
        }
    }
    alloc::slice::<impl [T]>::sort_by(v54, v55);
    v1 = 0;
    v0 = 0;
    v58 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v54);
    v41 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v58);
    v2 = 0;
    if v41.field_24 != 0x8000000000000000 {
        v2 = 0;
        v94 = 0;
        v95 = 0;
        do {
            v96 = v42;
            v97 = v43;
            v57 = v46;
            v98 = *(&v41.field_24 as &i128);
            v87 = v87 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v98 as u256;
            v56 = v98;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v96, v97, "archive") as i8 {
                v1 = 257;
                v0 = 16843009;
                v2 = 65793;
                v95 = 0;
                v94 = 0;
                continue;
            }
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v96, v97, "preserve-default-attributes") as i8 {
                v25 = *(&v0 as &i96);
                v38 = uu_cp::Attributes::union(&v25);
                goto LABEL_5024d5;
            } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v96, v97, "no-dereference-preserve-links") as i8 {
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v96, v97, "preserve") as i8 {
                    if !((<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v96, v97, "no-preserve") as i8 & v57) == 1) {
                        continue;
                    }
                    v20 = v1;
                    v19 = v0;
                    v21 = v95;
                    v22 = v94;
                    v23 = v2;
                    v37 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v56);
                    v25 = uu_cp::Attributes::parse_iter(&v37);
                    v52 = v25.field_8;
                    v53 = v25.field_16;
                    if v25.field_0 == 13 {
                        v24 = uu_cp::Attributes::diff(&v19, &v52);
                    } else {
                        v103 = *((&v27 as &char + 4) as &i128);
                        v104 = *((&v29 as &char + 4) as &i128);
                        v105 = a0;
                        *((v105 + 56) as &i128) = *(&v31 as &i128);
                        *((v105 + 44) as void*) = v104;
                        *((v105 + 28) as void*) = v103;
                        *((v105 + 24) as &unsigned int) = v53;
LABEL_502ba8:
                    }
                } else {
                    v20 = v1;
                    v19 = v0;
                    v21 = v95;
                    v22 = v94;
                    v23 = v2;
                    v37 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v56);
                    v25 = uu_cp::Attributes::parse_iter(&v37);
                    v50 = v25.field_8;
                    v51 = v25.field_16;
                    if v25.field_0 == 13 {
                        v24 = uu_cp::Attributes::union(&v19, &v50);
                    } else {
                        v100 = *((&v27 as &char + 4) as &i128);
                        v101 = *((&v29 as &char + 4) as &i128);
                        v102 = a0;
                        *((v102 + 56) as &i128) = *(&v31 as &i128);
                        *((v102 + 44) as void*) = v101;
                        *((v102 + 28) as void*) = v100;
                        *((v102 + 24) as &unsigned int) = v51;
                        goto LABEL_502ba8;
                    }
                }
                v0 = v24 as i32;
                v1 = (&v24)[4] as i16;
                v95 = (&v24)[6] as i8;
                v94 = (&v24)[7] as i8;
                v2 = (&v24)[8] as i32;
            } else {
                v25 = *(&v0 as &i96);
                v38 = uu_cp::Attributes::union(&v25);
LABEL_5024d5:
                v0 = v38 as i32;
                v1 = (&v38)[4] as i16;
                v95 = (&v38)[6] as i8;
                v94 = (&v38)[7] as i8;
                v2 = (&v38)[8] as i32;
            }
        } while ((v41 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v58), v41.field_24 != 0x8000000000000000));
    }
    if (v99 & 1) {
        v42 = <T as alloc::slice::hack::ConvertVec>::to_vec("SELinux was not enabled during the compile time!");
        v28 = v44;
        v106 = *(&v42.field_0 as &i128);
        v26 = v106;
        *(&v25 as &i64) = 4;
        if !(vvar_96{reg 56} & 1) {
            uu_cp::show_error_if_needed(&v25);
        } else {
            v108 = v25;
            v109 = v26 as i64;
            v110 = *(&v29 as &i128);
            v111 = a0;
            *((v111 + 56) as &i128) = *(&v31 as &i128);
            *((v111 + 40) as void*) = v110;
            *((v111 + 24) as &unsigned long) = v27;
            *((v111 + 32) as &unsigned long) = v28;
            *((v111 + 8) as &unsigned long) = v108;
            *((v111 + 16) as &unsigned long) = v109;
            *(v111 as &i64) = 0x8000000000000000;
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
    v18 = (v113 & -0x100 | 1) as u32;
    if !v112 {
LABEL_502767:
        v25 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "sparse");
        v116 = clap_builder::parser::error::MatchesError::unwrap("sparse", &v25);
        if v116 {
            v59 = v116;
            v118 = *((v116 + 8) as &i64);
            v119 = *((v116 + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v118, v119, "always") as i8 {
                goto LABEL_50280b;
            }
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v118, v119, "auto") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v118, v119, "never") as i8 {
                v71 = format!("invalid argument {} for 'sparse'", &v59);
                v88 = a0;
                *((v88 + 32) as &u64) = v71.len;
                goto LABEL_502acc;
            }
        }
LABEL_50280b:
        v44 = v60.field_16;
        v120 = *(&v60.field_0 as &i128);
        v42 = v120;
        v27 = v49;
        v121 = v48 as i128;
        v25 = v121;
        v65 = v1;
        v64 = v0;
        v61 = v41;
        v122 = a0;
        *((v122 + 46) as &i64) = *((&v61.field_40 as &char + 6) as &i64);
        *((v122 + 32) as &u64) = v61.field_32;
        *((v122 + 40) as &unsigned long) = v63;
        *((v122 + 16) as &unsigned long) = v62;
        *((v122 + 24) as &u64) = v61.field_24;
        *(v122 as void*) = v61;
        *((v122 + 54) as &char) = v99;
        *((v122 + 55) as &i32) = vvar_96{reg 56};
        *((v122 + 56) as &unsigned int) = v2;
        *((v122 + 60) as &char) = v14;
        *((v122 + 61) as &u8) = v78 as u8;
        *((v122 + 62) as &u64) = ((((((v86 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v106 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v120 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v121 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v3 * 0x1000000 | v11 * 0x10000 | v12 * 0x100 | v13) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT ((v9 * 0x100 | v17) & 65535) * 0x100000000) | (v3 * 0x1000000 | v11 * 0x10000 | v12 * 0x100 | v13) & 340282366920938463463374325961086468095) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT ((v6 * 0x100 | v8) & 65535) * 0x1000000000000) | ((0 CONCAT ((v9 * 0x100 | v17) & 65535) * 0x100000000) | (v3 * 0x1000000 | v11 * 0x10000 | v12 * 0x100 | v13) & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495) as u64;
        *((v122 + 70) as &char) = v5;
        *((v122 + 71) as &char) = v7;
        *((v122 + 72) as &char) = v4;
        *((v122 + 73) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "progress") as i8;
        *((v122 + 74) as &i8) = 1;
        *((v122 + 75) as &u8) = v18 as u8;
        *((v122 + 76) as &char) = v16;
        *((v122 + 77) as &char) = v15;
        *((v122 + 78) as &char) = v10;
        return v122;
    }
    v114 = *((v112 + 8) as &i64);
    v115 = *((v112 + 16) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v114, v115, "always") as i8 {
        v18 = 0;
        goto LABEL_502767;
    }
    if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v114, v115, "auto") as i8 && (v18 = (v113 & -0x100 | 2) as u32, !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v114, v115, "never") as i8)) {
        goto LABEL_502767;
    }
    v42 = 0;
    v43 = v114;
    v44 = v115;
    *(&v45 as &i8) = 1;
    v70 = format!("invalid argument {} for 'reflink'", &v42);
    v88 = a0;
    *((v88 + 32) as &u64) = v70.len;
LABEL_502acc:
    *((v88 + 16) as &i128) = *(&v70.ptr as &i128);
    *((v88 + 8) as &i64) = 9;
}
