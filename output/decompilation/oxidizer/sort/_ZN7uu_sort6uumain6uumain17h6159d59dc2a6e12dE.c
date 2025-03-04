fn uu_sort::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct64;  // [sp-0x618], Other Possible Types: int, struct24
    let v1: i64;  // [bp-0x618], Other Possible Types: Result<struct16, struct10>, struct16, int, char, struct24
    let v2: iNone;  // [sp-0x618], Other Possible Types: struct16
    let v3: struct56;  // [sp-0x618], Other Possible Types: struct64, int
    let v4: i64;  // [sp-0x610], Other Possible Types: int
    let v5: i8;  // [bp-0x608], Other Possible Types: unsigned long
    let v6: i8;  // [sp-0x600]
    let v7: i8;  // [bp-0x5f8]
    let v8: i8;  // [bp-0x5e8]
    let v9: iNone;  // [sp-0x5d8]
    let v10: iNone;  // [sp-0x5c8]
    let v11: iNone;  // [sp-0x5b8]
    let v12: i64;  // [sp-0x5a8]
    let v13: struct16;  // [sp-0x598], Other Possible Types: struct56, int, struct17, unsigned long
    let v14: i64;  // [sp-0x590]
    let v15: i64;  // [bp-0x588]
    let v16: i64;  // [sp-0x580]
    let v17: i64;  // [sp-0x558], Other Possible Types: struct16
    let v18: i64;  // [sp-0x550], Other Possible Types: int
    let v19: i64;  // [sp-0x548]
    let v20: i64;  // [sp-0x540]
    let v21: i64;  // [sp-0x538], Other Possible Types: int
    let v22: i64;  // [sp-0x530]
    let v23: i64;  // [sp-0x528], Other Possible Types: struct16
    let v24: i64;  // [sp-0x520]
    let v25: i64;  // [sp-0x518]
    let v26: struct8;  // [sp-0x510], Other Possible Types: Result<struct8, struct1>
    let v27: i8;  // [bp-0x500]
    let v28: struct16;  // [sp-0x4f8], Other Possible Types: struct25, unsigned long
    let v29: i64;  // [sp-0x4f0]
    let v30: iNone;  // [bp-0x4e8]
    let v31: struct24;  // [bp-0x4e0]
    let v32: i64;  // [sp-0x4d8]
    let v33: i64;  // [sp-0x4d0]
    let v34: i64;  // [sp-0x4c8]
    let v35: iNone;  // [sp-0x4c0]
    let v36: iNone;  // [bp-0x4b0]
    let v37: iNone;  // [sp-0x4a7]
    let v38: i64;  // [sp-0x490]
    let v39: i64;  // [sp-0x488]
    let v40: i32;  // [sp-0x480]
    let v41: i8;  // [bp-0x47c], Other Possible Types: unsigned long
    let v42: i8;  // [sp-0x47b]
    let v43: i8;  // [sp-0x47a]
    let v44: i8;  // [sp-0x479]
    let v45: i8;  // [sp-0x478]
    let v46: i8;  // [sp-0x477]
    let v47: i8;  // [sp-0x476]
    let v48: i8;  // [sp-0x475]
    let v49: i8;  // [sp-0x474]
    let v50: i16;  // [bp-0x473], Other Possible Types: char, unsigned int
    let v51: i8;  // [sp-0x471]
    let v52: struct16;  // [sp-0x470], Other Possible Types: int
    let v53: i8;  // [bp-0x460], Other Possible Types: unsigned short
    let v54: i8;  // [sp-0x45f]
    let v55: struct24;  // [sp-0x458], Other Possible Types: struct64
    let v56: i64;  // [sp-0x418]
    let v57: i64;  // [sp-0x410]
    let v58: i64;  // [sp-0x408]
    let v59: i64;  // [sp-0x400]
    let v60: Result<struct16, struct10>;  // [sp-0x3f8], Other Possible Types: int, struct24, unsigned long, struct56, struct64, struct16, struct712
    let v61: i64;  // [sp-0x3f8]
    let v62: i64;  // [sp-0x3f0], Other Possible Types: struct16
    let v63: iNone;  // [sp-0x3e8], Other Possible Types: unsigned long
    let v64: i64;  // [bp-0x3e0]
    let v65: iNone;  // [bp-0x3d8]
    let v66: iNone;  // [sp-0x3c8]
    let v67: iNone;  // [sp-0x3b8]
    let v68: iNone;  // [sp-0x3a8]
    let v69: i64;  // [sp-0x398]
    let v70: i8;  // [sp-0x390]
    let v71: String;  // [sp-0x130]
    let v72: String;  // [sp-0x118]
    let v73: struct24;  // [sp-0x100]
    let v74: i8;  // [bp-0xe8]
    let v75: i64;  // [sp-0xe0]
    let v76: iNone;  // [sp-0xd8]
    let v77: iNone;  // [bp-0xc8]
    let v78: i64;  // [sp-0xb9]
    let v79: i8;  // [sp-0xb1]
    let v80: struct56;  // [sp-0xb0]
    let v81: iNone;  // [sp-0x78]
    let v82: i64;  // [sp-0x68]
    let v83: i8;  // [bp-0x60], Other Possible Types: String
    let v84: i8;  // [bp-0x48], Other Possible Types: String
    let v86: iNone;  // xmm0
    let v87: iNone;  // ymm0
    let v88: iNone;  // ymm0
    let v89: iNone;  // xmm1
    let v90: iNone;  // ymm1
    let v91: iNone;  // ymm1
    let v92: iNone;  // xmm2
    let v93: iNone;  // ymm2
    let v94: iNone;  // ymm2
    let v101: iNone;  // xmm0
    let v103: i64;  // rax
    let v104: i64;  // rcx
    let v105: iNone;  // xmm0
    let v106: struct8;  // rax
    let v107: i64;  // r12
    let v108: iNone;  // xmm0
    let v109: iNone;  // xmm1
    let v110: iNone;  // xmm2
    let v111: i64;  // rdx
    let v112: iNone;  // xmm0
    let v113: i64;  // rdx
    let v115: i64;  // rax
    let v116: i64;  // rax
    let v117: i64;  // rax
    let v118: i64;  // rax
    let v119: i64;  // rax
    let v120: i64;  // rax
    let v121: i64;  // rax
    let v122: i64;  // r15
    let v123: i64;  // rax
    let v124: i64;  // rax
    let v125: iNone;  // xmm0
    let v126: iNone;  // ymm0
    let v129: i64;  // rbx
    let v131: i64;  // rax
    let v132: i64;  // r14
    let v133: i64;  // r15
    let v134: i64;  // rax
    let v136: i64;  // r14
    let v137: i64;  // r14
    let v138: i64;  // r15
    let v139: i8;  // al
    let v140: iNone;  // xmm0
    let v141: iNone;  // ymm0
    let v142: iNone;  // xmm1
    let v143: iNone;  // ymm1
    let v144: struct8;  // rax
    let v145: i8;  // al
    let v146: iNone;  // xmm0
    let v147: iNone;  // xmm1
    let v148: iNone;  // xmm0
    let v149: i64;  // rax
    let v150: i64;  // rcx
    let v151: struct8;  // rax
    let v152: i64;  // rax
    let v153: i64;  // rsi
    let v156: i64;  // rcx
    let v157: iNone;  // xmm0

    *(&v53 as &i16) = 2566;
    *(&v41 as &i64) = 0;
    *(&v50 as &i32) = 0;
    v28 = 0;
    v29 = 8;
    *(&v30 as &i128) = 0;
    v40 = 0x110000;
    v32 = 1;
    v33 = 0;
    v38 = 0x3b9aca00;
    v34 = 0x8000000000000000;
    v39 = 32;
    *(&v36 as &i128) = 0;
    v37 = 0;
    v60 = uu_sort::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v1, &v60, a0, a1);
    if v1 != 0x8000000000000000 {
        v12 = *(&v8 as &i64);
        v86 = *(&v1 as &i128);
        v88 = v87 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86 as u256;
        v89 = *(&v5 as &i128);
        v91 = v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89 as u256;
        v92 = *(&v7 as &i128);
        v94 = v93 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v92 as u256;
        v11 = v92;
        v10 = v89;
        v9 = v86;
        v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "debug") as i8;
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v9, "files0-from") as i8 {
            v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, "files0-from");
            v0 = clap_builder::parser::error::MatchesError::unwrap("files0-from", &v60);
            if !v1 || (v91 = v91 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_16 as u256, v94 = v94 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_32 as u256, v60 = struct64 {
    field_0: v95
    field_16: v96
    field_32: v97
    field_48: v0.field_48
}, v55 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v60), v101 = *(&v55.field_8 as &i128), v88 = (v88 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_0 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v101 as u256, v60 = v101, v20 == 0x8000000000000000) {
                v20 = 0;
                v21 = 8;
                v22 = 0;
                v103 = 8;
                v104 = 0;
            } else {
                v105 = v60 as i128;
                v88 = v88 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v105 as u256;
                v21 = v105;
                v20 = v55.field_0;
                v103 = v21;
                v104 = v22;
            }
            v23 = 0;
            v24 = 8;
            v25 = 0;
            v57 = v103;
            v58 = v103 + v104 * 24;
            v106 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if v106 {
                v56 = 9223372036854775809;
                do {
                    v60 = uu_sort::open(v106);
                    if v60 {
                        return v107;
                    }
                    v80 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v107, v63);
                    v69 = v80.field_64;
                    v108 = *(&v80.field_0 as &i128);
                    v88 = v88 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v108 as u256;
                    v109 = *(&v80.field_16 as &i128);
                    v91 = v91 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v109 as u256;
                    v110 = *(&v80.field_32 as &i128);
                    v94 = v94 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v110 as u256;
                    v68 = v110;
                    v67 = v109;
                    v66 = v108;
                    v60 = v56;
                    v64 = v60;
                    v70 = 0;
                    loop {
                        v26 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v60);
                        if v26.field_0 == 0x8000000000000000 {
                            break;
                        }
                        v111 = *(&v27 as &i64);
                        *(&v15 as &i64) = *(&v27 as &i64);
                        v112 = *(&v26 as &i128);
                        v13 = v112;
                        v1 = core::str::converts::from_utf8(v14, v111);
                        v0 = std::sys::os_str::bytes::Slice::to_owned(core::result::Result<T,E>::expect(&v0), v113);
                        v88 = (v88 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v112 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v0.field_0 as &i128);
                        *(&v55.field_0 as &struct24) = struct24 {
                            field_0: v114
                            field_16: v0.field_16
                        };
                        v23 = alloc::vec::Vec<T,A>::push(&v55);
                    }
                    v106 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                } while (v106);
            }
        } else {
            v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, "files");
            v0 = clap_builder::parser::error::MatchesError::unwrap("files", &v60);
            if !v1 || (v91 = v91 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_16 as u256, v60 = struct64 {
    field_0: v98
    field_16: v99
    field_32: v0.field_32
    field_48: v0.field_48
}, v55 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v60), *(&v60 as &i128) = *(&v55.field_8 as &i128), v17 == 0x8000000000000000) {
                v17 = 0;
                v18 = 8;
                v19 = 0;
            } else {
                *(&v18 as &i128) = v60 as i128;
                v17 = v55.field_0;
            }
        }
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "human-numeric-sort") as i8 {
            v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "sort");
            v115 = clap_builder::parser::error::MatchesError::unwrap("sort", &v60);
            if (!v115 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v115 + 8) as &i64), *((v115 + 16) as &i64), "human-numeric") as i8) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "month-sort") as i8 {
                v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "sort");
                v116 = clap_builder::parser::error::MatchesError::unwrap("sort", &v60);
                if (!v116 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v116 + 8) as &i64), *((v116 + 16) as &i64), "month") as i8) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "general-numeric-sort") as i8 {
                    v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "sort");
                    v117 = clap_builder::parser::error::MatchesError::unwrap("sort", &v60);
                    if !v117 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v117 + 8) as &i64), *((v117 + 16) as &i64), "general-numeric") as i8 {
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "numeric-sort") as i8 {
LABEL_4bd3b0:
                        } else {
                            v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "sort");
                            v118 = clap_builder::parser::error::MatchesError::unwrap("sort", &v60);
                            if !(!v118 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v118 + 8) as &i64), *((v118 + 16) as &i64), "numeric") as i8) {
                                goto LABEL_4bd3b0;
                            }
                            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "version-sort") as i8 {
                                v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "sort");
                                v119 = clap_builder::parser::error::MatchesError::unwrap("sort", &v60);
                                if !v119 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v119 + 8) as &i64), *((v119 + 16) as &i64), "version") as i8 {
                                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "random-sort") as i8 {
LABEL_4bd4ab:
                                        v60 = uu_sort::get_rand_string();
                                        v52 = v60;
                                        v51 = 1;
                                    } else {
                                        v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "sort");
                                        v120 = clap_builder::parser::error::MatchesError::unwrap("sort", &v60);
                                        if v120 && <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v120 + 8) as &i64), *((v120 + 16) as &i64), "random") as i8 {
                                            goto LABEL_4bd4ab;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        v53 = 1;
        v44 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "dictionary-order") as i8;
        v45 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "ignore-nonprinting") as i8;
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v9, "parallel") as i8 {
            v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "parallel");
            v121 = clap_builder::parser::error::MatchesError::unwrap("parallel", &v60);
            if !v121 || (v60 = core::ops::function::FnOnce::call_once(v121), *(&v1 as &i128) = *(&v60.field_8 as &i128), v60 == 0x8000000000000000) {
                v60 = <T as alloc::slice::hack::ConvertVec>::to_vec("0");
            }
            *(&v31.field_0 as &struct24) = struct24 {
                field_0: v122
                field_8: v55
            };
            std::env::set_var("RAYON_NUM_THREADS", &v31);
        }
        v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "buffer-size");
        v62 = 0x3b9aca00;
        v60 = 0;
        v2 = core::option::Option<T>::map_or(clap_builder::parser::error::MatchesError::unwrap(&g_424e14, 11, &v60), &v60);
        if v1 {
            return v107;
        }
        v38 = v4;
        v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "temporary-directory");
        v123 = clap_builder::parser::error::MatchesError::unwrap("temporary-directory", &v60);
        if !v123 || (v60 = core::ops::function::FnOnce::call_once(*((v123 + 8) as &i64), *((v123 + 16) as &i64)), *(&v2 as &i128) = *(&v60.field_8 as &i128), v60 == 0x8000000000000000) {
            v60 = core::ops::function::FnOnce::call_once();
            v61 = v60;
        } else {
            v62 = v2;
            v60 = v60;
            v61 = v60;
        }
        v55 = uu_sort::tmp_dir::TmpDirWrapper::new(&v61);
        v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "compress-program");
        v124 = clap_builder::parser::error::MatchesError::unwrap("compress-program", &v60);
        if v124 {
            v60 = core::ops::function::FnOnce::call_once(v124);
            *(&v2 as &i128) = *(&v60.field_8 as &i128);
        }
        v34 = v122;
        v125 = v2 as i128;
        v126 = v87 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v125 as u256;
        v35 = v125;
        v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "batch-size");
        if !v59 {
LABEL_4bdbd5:
            v54 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "zero-terminated") as i8 ? 0 : 10);
            v46 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "merge") as i8;
            *(&v50 as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v9, "check") as i8;
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "check-silent") as i8 {
LABEL_4bdcd0:
                *(&v50 as &i16) = 257;
            } else {
                v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "check");
                v131 = clap_builder::parser::error::MatchesError::unwrap("check", &v60);
                if v131 {
                    v132 = *((v131 + 8) as &i64);
                    v133 = *((v131 + 16) as &i64);
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v132, v133, "silent") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v132, v133, "quiet") as i8 {
                        goto LABEL_4bdcd0;
                    }
                }
            }
            v43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "ignore-case") as i8;
            v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "ignore-leading-blanks") as i8;
            v47 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "reverse") as i8;
            v48 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "stable") as i8;
            v49 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "unique") as i8;
            v134 = v19;
            if !v134 {
                v73 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
                v126 = v126 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v73.field_0 as &i128);
                *(&v60.field_0 as &struct24) = struct24 {
                    field_0: v135
                    field_16: v73.field_16
                };
                v17 = alloc::vec::Vec<T,A>::push(&v60);
                goto LABEL_4bdeb1;
            } else {
                if !(v134 != 1) || !(v50 as i8) {
LABEL_4bdeb1:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v61, &v9, "field-separator");
                    v136 = clap_builder::parser::error::MatchesError::unwrap("field-separator", &v61);
                    if v136 {
                        v60 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((v136 + 8) as &i64), *((v136 + 16) as &i64));
                        if v61 {
                            uu_sort::uumain::uumain::{{closure}}(*((v136 + 8) as &i64), *((v136 + 16) as &i64));
                            return v107;
                        }
                        v137 = v62;
                        v138 = v63;
                        v139 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v137, v138, "\0") as i8;
                        if v139 {
                            v137 = &g_425069;
                        }
                        if (v138 == 1 | v139) != 1 {
                            v1 = 0;
                            v4 = v137;
                            v5 = v138;
                            v6 = 1;
                            v72 = format!("separator must be exactly one character long: {}", &v1);
                            v60 = *(&v72 as &i224);
                            alloc::boxed::Box<T>::new(&v60);
                            return v107;
                        }
                        v61 = v137;
                        v62 = v137 + 1;
                        if !(core::str::validations::next_code_point(&v61) as i32) || !(v113 as u32 != 0x110000) {
                            core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/sort/src/sort.rs"); /* do not return */
                        }
                        v40 = v113 as u32;
                    }
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v61, &v9, "key");
                    v3 = clap_builder::parser::error::MatchesError::unwrap("key", &v61);
                    if v1 {
                        v140 = v3.field_0;
                        v141 = v126 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v140 as u256;
                        v142 = v3.field_16;
                        v143 = v91 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v142 as u256;
                        v66 = v3.field_48;
                        *(&v65 as &u128) = v3.field_32;
                        v63 = v142;
                        v60 = v140;
                        loop {
                            v144 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
                            if !v144 {
                                break;
                            }
                            v13 = uu_sort::FieldSelector::parse(*((v144 + 8) as &i64), *((v144 + 16) as &i64), &v28);
                            v145 = *((&v13.field_64 as &char + 7) as &i8);
                            if v79 == 2 {
                                return v107;
                            }
                            v78 = *((&v13.field_48 as &char + 7) as &i64);
                            v146 = *(&v13.field_16 as &i128);
                            v141 = v141 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v146 as u256;
                            v147 = *(&v13.field_32 as &i128);
                            v143 = v143 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v147 as u256;
                            v77 = v147;
                            v76 = v146;
                            v75 = v14;
                            v79 = v145;
                            if *((&v78 as &char + 6) as &i8) == 5 && !v51 {
                                v13 = uu_sort::get_rand_string();
                                v148 = *(&v13.field_0 as &i128);
                                v141 = v141 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v148 as u256;
                                v52 = v148;
                                v51 = 1;
                            }
                            v28 = alloc::vec::Vec<T,A>::push(&v74);
                        }
                    }
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v9, "key") as i8 {
                        v149 = *(&v42 as &i32);
                        v150 = *(&v53 as &i32);
                        v13 = struct17 {
                            field_0: 1
                            field_8: 1
                            field_16: v149 as u8
                        };
                        *(&v5 as &i8) = 2;
                        v60 = uu_sort::FieldSelector::new(&v13, &v3, v150 * 0x10000000000 | v149 | v47 * 0x100000000);
                        v3 = core::result::Result<T,E>::unwrap(&v60);
                        v28 = alloc::vec::Vec<T,A>::push(&v3);
                    }
                    v1 = v18;
                    v4 = v1 + v19 * 24;
                    loop {
                        v151 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                        if !v151 {
                            break;
                        }
                        v60 = uu_sort::open(v151);
                        if v61 {
                            return v107;
                        }
                    }
                    v60 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "output");
                    v152 = clap_builder::parser::error::MatchesError::unwrap("output", &v60);
                    if v152 {
                        v153 = *((v152 + 8) as &i64);
                    } else {
                        v153 = 0;
                    }
                    v1 = uu_sort::Output::new(v153, *((v152 + 16) as &i64));
                    if v13 != 9223372036854775809 {
                        v156 = (&v3)[24] as i64;
                        v13 = v1;
                        v14 = v4;
                        *(&v15 as &i64) = *((&v1 as &char + 16) as &i64);
                        v16 = v156;
                        v28 = uu_sort::GlobalSettings::init_precomputed();
                        v157 = *(&v13 as &i128);
                        *(&v63 as &i128) = *(&v15 as &i128);
                        v60 = v157;
                        uu_sort::exec(v18, v19, &v28, &v60, &v55);
                        uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal(&v55);
                        return v107;
                    }
                    return v107;
                }
                v1 = 1;
                *(&v4 as &i128) = *((v18 + 32) as &i128);
                v6 = 1;
                v71 = format!("extra operand {} not allowed with -c", &v1);
                v60 = *(&v71 as &i224);
                alloc::boxed::Box<T>::new(&v60);
            }
        } else {
            v59 = clap_builder::parser::error::MatchesError::unwrap("batch-size", &v60);
            v26 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v59 + 8) as &i64), *((v59 + 16) as &i64));
            match (v26 as i8) {
                0 => {
                    if v39 >= 2 {
                        v39 = *((&v26 as &char + 8) as &i64);
                        goto LABEL_4bdbd5;
                    } else {
                        v4 = v113;
                        show_error!("invalid --batch-size argument '{}'", &v59);
                        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("minimum --batch-size argument is '2'");
                        v60 = v0 as i224;
                        alloc::boxed::Box<T>::new(&v60);
                        break;
                    }
                }
                2 => {
                    v4 = v113;
                    v1 = 0;
                    *(&v4 as &i128) = *((v59 + 8) as &i128);
                    v6 = 1;
                    show_error!("--batch-size argument {} too large", &v1);
                    v1 = uu_sort::get_rlimit();
                    if v1 {
                        return v107;
                    }
                    v23 = v4;
                    v129 = &v83;
                    v83 = format!("maximum --batch-size argument with current rlimit is {}", &v23);
                    goto LABEL_4bdb89;
                    goto LABEL_4bdb89;
                }
                _ => {
                    v1 = 0;
                    *(&v4 as &i128) = *((v59 + 8) as &i128);
                    v6 = 1;
                    v129 = &v84;
                    v84 = format!("invalid --batch-size argument {}", &v1);
LABEL_4bdb89:
                    v82 = *((v129 + 16) as &i64);
                    v81 = *(v129 as &i128);
                    v60 = v81 as i224;
                    alloc::boxed::Box<T>::new(&v60);
                    break;
                }
            }
        }
        return v107;
    } else {
        v60 = v4;
        core::result::Result<T,E>::unwrap(clap_builder::error::Error<F>::print(&v60));
        if (*((v60 + 213) as &i8) & 29) == 12 {
            return v107;
        }
        uucore::mods::error::set_exit_code(2);
    }
}
