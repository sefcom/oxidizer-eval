fn uu_du::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i32;  // [bp-0x730]
    let v1: i8;  // [sp-0x72b]
    let v2: i8;  // [sp-0x72a]
    let v3: i8;  // [sp-0x729]
    let v4: i8;  // [bp-0x728]
    let v5: i64;  // [sp-0x720]
    let v6: i64;  // [sp-0x718]
    let v7: i128;  // [sp-0x710]
    let v8: i128;  // [sp-0x700]
    let v9: i64;  // [sp-0x6f0]
    let v10: i64;  // [sp-0x6e8]
    let v11: i8;  // [bp-0x6e0]
    let v12: i128;  // [sp-0x6d8]
    let v13: i64;  // [sp-0x6c8]
    let v14: i128;  // [sp-0x6b8]
    let v15: i64;  // [sp-0x6a8], Other Possible Types: struct24
    let v16: i64;  // [sp-0x6a0]
    let v17: i64;  // [sp-0x698]
    let v18: i192;  // [sp-0x690]
    let v19: i64;  // [sp-0x688]
    let v20: i64;  // [sp-0x680]
    let v21: i128;  // [sp-0x678]
    let v22: i64;  // [sp-0x668]
    let v23: i8;  // [sp-0x660]
    let v24: i8;  // [sp-0x65f]
    let v25: i8;  // [sp-0x65e]
    let v26: i8;  // [sp-0x65d]
    let v27: i8;  // [sp-0x65c]
    let v28: i128;  // [sp-0x658]
    let v29: i64;  // [sp-0x648]
    let v30: i192;  // [sp-0x638], Other Possible Types: Result<struct160, struct8>, struct24, struct64, struct8
    let v31: i128;  // [sp-0x630]
    let v32: i64;  // [sp-0x628]
    let v33: i8;  // [sp-0x620]
    let v34: i8;  // [bp-0x5f8]
    let v38: i8;  // [bp-0x5b8]
    let v39: i64;  // [sp-0x598]
    let v40: i64;  // [sp-0x590]
    let v41: i64;  // [sp-0x588]
    let v42: i64;  // [sp-0x580]
    let v43: i64;  // [sp-0x578]
    let v44: i64;  // [sp-0x570]
    let v45: i64;  // [sp-0x568]
    let v46: i128;  // [sp-0x560]
    let v47: i64;  // [sp-0x550]
    let v48: i8;  // [sp-0x548]
    let v49: i8;  // [sp-0x547]
    let v50: i8;  // [sp-0x546]
    let v51: i8;  // [sp-0x545]
    let v52: i8;  // [sp-0x544]
    let v53: i8;  // [sp-0x543]
    let v54: i192;  // [sp-0x540], Other Possible Types: Option<struct24>
    let v55: i128;  // [sp-0x528], Other Possible Types: struct16, struct24
    let v56: i64;  // [sp-0x520]
    let v57: i128;  // [sp-0x518]
    let v58: i128;  // [sp-0x508]
    let v59: struct24;  // [sp-0x4f0]
    let v60: i64;  // [sp-0x4d8], Other Possible Types: struct24
    let v61: i64;  // [bp-0x4d0]
    let v62: i8;  // [sp-0x4c0]
    let v63: i8;  // [bp-0x4b8]
    let v64: i64;  // [sp-0x440]
    let v65: i64;  // [sp-0x438]
    let v66: i8;  // [bp-0x430]
    let v67: i8;  // [bp-0x420]
    let v68: i328;  // [sp-0x418], Other Possible Types: Result<struct40, struct8>, struct24, struct32, struct56, struct712, struct16, struct96, struct48, Arguments
    let v69: i64;  // [sp-0x410]
    let v70: i64;  // [sp-0x408]
    let v71: i64;  // [bp-0x400]
    let v72: i64;  // [bp-0x3f8]
    let v73: i128;  // [sp-0x3e8]
    let v74: i128;  // [sp-0x3d8]
    let v75: i128;  // [sp-0x3c8]
    let v76: i128;  // [sp-0x3b8]
    let v77: i128;  // [sp-0x3a8]
    let v78: i128;  // [sp-0x398]
    let v79: i64;  // [sp-0x388]
    let v80: i256;  // [sp-0x148], Other Possible Types: struct32
    let v81: i64;  // [bp-0x128]
    let v82: i8;  // [bp-0x90]
    let v83: struct64;  // [bp-0x78]
    let v85: i64;  // rax
    let v86: i128;  // xmm0
    let v87: i256;  // ymm0
    let v88: i256;  // ymm0
    let v89: i128;  // xmm1
    let v90: i256;  // ymm1
    let v91: i256;  // ymm1
    let v92: i64;  // rax
    let v93: i64;  // rsi
    let v95: i64;  // rax
    let v96: i64;  // rbx
    let v97: i64;  // r14
    let v98: i64;  // r14
    let v99: i64;  // rax
    let v100: struct24;  // rax
    let v101: i256;  // ymm2
    let v102: i256;  // ymm2
    let v103: i256;  // ymm3
    let v104: i256;  // ymm3
    let v106: i128;  // xmm0
    let v107: i64;  // rbx
    let v109: i64;  // rdx
    let v113: i64;  // rax
    let v114: i128;  // xmm0
    let v117: i64;  // r12
    let v118: i128;  // xmm0
    let v119: i64;  // rax
    let v120: i64;  // rsi
    let v122: struct24;  // rax
    let v123: i128;  // xmm0
    let v124: i8;  // bpl
    let v125: i64;  // rax
    let v127: i64;  // r12
    let v128: i64;  // rax
    let v129: i128;  // xmm0
    let v131: i128;  // xmm0
    let v132: i256;  // ymm0
    let v133: i128;  // xmm0
    let v134: i256;  // ymm1
    let v135: i256;  // ymm0
    let v136: i256;  // ymm2
    let v137: i256;  // ymm3
    let v138: i64;  // r14
    let v139: i128;  // xmm0
    let v140: i256;  // ymm0
    let v141: struct8;  // rax
    let v142: i128;  // xmm0
    let v143: i128;  // xmm0
    let v144: i128;  // xmm0
    let v145: i256;  // ymm0
    let v146: i128;  // xmm0
    let v147: i128;  // xmm0
    let v148: i128;  // xmm1
    let v149: i128;  // xmm2
    let v150: i128;  // xmm0
    let v152: i128;  // xmm0
    let v153: i128;  // xmm0
    let v154: i128;  // xmm0
    let v155: i128;  // xmm0
    let v156: i128;  // xmm0
    let v157: i128;  // xmm0
    let v158: i128;  // xmm0
    let v159: i128;  // xmm0
    let v160: i128;  // xmm1
    let v161: i128;  // xmm2
    let v162: i128;  // xmm3
    let v163: i128;  // xmm0
    let v164: i128;  // xmm0
    let v165: i128;  // xmm0
    let v166: i128;  // xmm0
    let v167: i128;  // xmm0
    let v168: i64;  // [sp-0x120]

    v68 = uu_du::uu_app();
    v30 = clap_builder::builder::command::Command::try_get_matches_from(&v68, a0, a1);
    if v5 == 0x8000000000000000 {
        v85 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        return v85;
    }
    v9 = *((&v30 as &char + 48) as &i64);
    v86 = *((&v30 as &char + 16) as &i128);
    v88 = v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86;
    v89 = *((&v30 as &char + 32) as &i128);
    v91 = v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89;
    v8 = v89;
    v7 = v86;
    v5 = v30;
    v6 = v31;
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "s") as i8;
    v68 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "d");
    v92 = clap_builder::parser::error::MatchesError::unwrap("d", &v68);
    if v92 {
        v93 = *((v92 + 8) as &i64);
    } else {
        v93 = 0;
    }
    v68 = uu_du::parse_depth(v93, *((v92 + 16) as &i64), v11);
    v85 = v69;
    if !v68 {
        v68 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "files0-from");
        v95 = clap_builder::parser::error::MatchesError::unwrap("files0-from", &v68);
        if !v95 {
            v68 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "FILE");
            if !clap_builder::parser::error::MatchesError::unwrap("FILE", &v68) {
                v98 = alloc::alloc::Global::alloc_impl();
                v68 = std::sys::os_str::bytes::Slice::to_owned(".");
                v32 = v70;
                v106 = v68;
                v88 = v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v106;
                v30 = v106;
                *((v98 + 16) as &i64) = v32;
                *(v98 as &i128) = v106;
                v100 = alloc::slice::hack::into_vec(v98, 1);
            } else {
                v68 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, "FILE");
                v30 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v68);
                if !v30 {
                    core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/du/src/du.rs"); /* do not return */
                }
                v88 = v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
                v91 = v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v30 as &char + 16) as &i128);
                v102 = v101 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v30 as &char + 32) as &i128);
                v104 = v103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v30 as &char + 48) as &i128);
                v83 = struct64 {
                    field_0: v87 as u128
                    field_16: v90 as u128
                    field_32: v101 as u128
                    field_48: v103 as u128
                };
                v100 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v83);
                goto LABEL_4906f1;
            }
            goto LABEL_4906f1;
        } else {
            v96 = *((v95 + 8) as &i64);
            v97 = *((v95 + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v96, v97, "-") as i8 {
                v68 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "FILE");
                if !clap_builder::parser::error::MatchesError::unwrap("FILE", &v68) {
                    goto LABEL_49052d;
                }
                v68 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "FILE");
                v99 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v68);
                if !v99 {
                    core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/du/src/du.rs"); /* do not return */
                }
                v30 = 0;
                v31 = *((v99 + 8) as &i128);
                v33 = 1;
                v60 = &v30;
                v61 = <os_display::Quoted as core::fmt::Display>::fmt;
                v68 = "extra operand ";
                v69 = 2;
                v72 = 0;
                v70 = &v60;
                v71 = 1;
                core::option::Option<T>::map_or_else();
LABEL_490564:
                v85 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(std::io::error::Error::new(39, &v82));
LABEL_491689:
            } else {
LABEL_49052d:
                v68 = uu_du::read_files_from(v96, v97);
                v100 = v68;
                if v15 == 0x8000000000000000 {
                    goto LABEL_490564;
                }
                v15 = v100;
                v16 = v69;
                v17 = v70;
LABEL_4906f1:
                v0 = (v100 | -0x100 | 1) as u32;
                v4 = 3;
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v5, "time") as i8 {
                    v4 = uu_du::uumain::uumain::{{closure}}(&v5) as i8;
                }
                v107 = 1;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "h") as i8 {
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "si") as i8 {
                        v107 = 0;
                    } else {
                        v10 = 1;
                        v107 = 2;
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "b") as i8 {
                            v10 = 0x400;
                            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "k") as i8 {
                                v10 = 0x100000;
                                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "m") as i8 {
                                    v68 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "block-size");
                                    v68 = uu_du::read_block_size((!clap_builder::parser::error::MatchesError::unwrap("block-size", &v68) ? 0 : core::ops::function::FnOnce::call_once()), v109);
                                    if !(!v68) {
                                        goto LABEL_0x49167c;
                                    }
                                    v10 = v69;
                                }
                            }
                        }
                    }
                }
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "dereference") as i8 {
                    v113 = 0x8000000000000000;
                    goto LABEL_490939;
                } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "dereference-args") as i8 {
                    v68 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v15);
                    v32 = v70;
                    v114 = v68;
                    v88 = v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v114;
                    v30 = v114;
                } else {
                    v113 = 9223372036854775810;
LABEL_490939:
                    v30 = v113;
                }
                v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "one-file-system") as i32;
                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "S") as i32;
                v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "all") as i32;
                v39 = v107;
                v68 = uu_du::build_exclude_patterns(&v5);
                v23 = v3;
                v24 = v2;
                v25 = v1;
                v118 = v30;
                v21 = v118;
                v22 = v32;
                v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "l") as i32;
                v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "verbose") as i32;
                if v4 == 3 {
                    v68 = <T as alloc::slice::hack::ConvertVec>::to_vec("%Y-%m-%d %H:%M");
                    goto LABEL_490af9;
                }
                v68 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "time-style");
                v119 = clap_builder::parser::error::MatchesError::unwrap("time-style", &v68);
                if v119 {
                    v120 = *((v119 + 8) as &i64);
                } else {
                    v120 = 0;
                }
                v122 = uu_du::parse_time_style(v120, *((v119 + 16) as &i64));
                v85 = v69;
                v117 = v70;
                if v68 {
                    v0 = (v122 | -0x100 | 1) as u32;
                    goto LABEL_49166b;
                }
                v68 = <T as alloc::slice::hack::ConvertVec>::to_vec(v85, v117);
LABEL_490af9:
                v29 = v70;
                v123 = v68;
                v28 = v123;
                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "c") as i8;
                v124 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "inodes") as i32;
                v68 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "threshold");
                v125 = clap_builder::parser::error::MatchesError::unwrap("threshold", &v68);
                if !v125 {
                    goto LABEL_490be9;
                }
                v68 = uu_du::uumain::uumain::{{closure}}(*((v125 + 8) as &i64), *((v125 + 16) as &i64));
                v128 = v68;
                if v128 == 2 {
                    v70 = v70;
LABEL_490be9:
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "apparent-size") as i8 {
                        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "b");
                    }
                    v70 = v29;
                    v129 = v28;
                    v68 = v129;
                    v48 = v0;
                    v49 = v124;
                    v40 = v85;
                    v41 = v70;
                    v42 = 2;
                    v43 = v127;
                    v50 = 1;
                    v44 = v39;
                    v45 = v10;
                    v52 = v4;
                    v131 = v68;
                    v132 = v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v118 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v123 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v129 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v131;
                    v46 = v131;
                    v47 = v70;
                    v53 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "0") as i8 ? 0 : 10);
                    v51 = v11;
                    if v124 && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "apparent-size") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "b") as i8) {
                        v30 = uucore::util_name();
                        v31 = v109;
                        eprint!("{:?}: warning: ", &v30);
                        v132 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        eprintln!("options --apparent-size and -b are ineffective with --inodes");
                    }
                    v68 = std::sync::mpmc::channel();
                    v133 = v68;
                    v134 = v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v68 as &char + 16) as &i128);
                    v14 = v133;
                    v135 = v132 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v133 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
                    v136 = v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42;
                    v137 = v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44;
                    v68 = struct96 {
                        field_0: v87 as u128
                        field_16: v101 as u128
                        field_32: v103 as u128
                        field_48: v46
                        field_64: v87 as u128
                        field_80: v90 as u128
                    };
                    v32 = 0x8000000000000000;
                    v30 = struct8 {
                        field_0: 0
                    };
                    v60 = std::thread::Builder::spawn_unchecked(&v30, &v68);
                    v59 = core::result::Result<T,E>::expect(&v60);
                    v80 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v15);
                    v54 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v80);
                    match v54 {
                        Some(_) => {
                            v138 = &v81;
                            do {
                                v13 = *((&v54 as &char + 16) as &i64);
                                v139 = v54;
                                v140 = v135 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v139 as u128 as u256;
                                v12 = v139;
                                if v20 {
                                    v60 = std::sys::os_str::bytes::Slice::to_string_lossy(*((&v12 as &char + 8) as &i64), v13);
                                    v55 = v19;
                                    v56 = v20 * 56 + v55;
                                    loop {
                                        v141 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                                        if !v141 {
                                            break;
                                        }
                                        if glob::Pattern::matches(v141, *((&v60 as &char + 8) as &i64), *((&v60 as &char + 16) as &i64)) as i8 {
                                            if v27 {
                                                v142 = *((&v60 as &char + 8) as &i128);
                                                v140 = v140 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v142 as u128 as u256;
                                                v30 = 0;
                                                v31 = v142;
                                                v33 = 1;
                                                v81 = &v30;
                                                v168 = <os_display::Quoted as core::fmt::Display>::fmt;
                                                v68 = Arguments {
                                                    pieces: ["", " ignored\n"]
                                                    args: &[Argument] {
                                                        ptr: v138
                                                        len: 1
                                                    }
                                                    fmt: 0
                                                };
                                                std::io::stdio::_print(&v68);
                                            }
                                        }
                                    }
                                }
                                uu_du::Stat::new(v138, *((&v12 as &char + 8) as &i64), v13, 0, &v18);
                                v11 = v168;
                                v143 = v81;
                                v144 = BinaryOp CmpEQV;
                                v145 = v140 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v143 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v144 as u128 as u256;
                                if UnaryOp GetMSBs == 65535 {
                                    v55 = std::sys::os_str::bytes::Slice::to_string_lossy(*((&v12 as &char + 8) as &i64), v13);
                                    v146 = *((&v55 as &char + 8) as &i128);
                                    v60 = 0;
                                    v61 = v146;
                                    v62 = 1;
                                    v64 = &v60;
                                    v65 = <os_display::Quoted as core::fmt::Display>::fmt;
                                    v68 = "cannot access ";
                                    v69 = 2;
                                    v72 = 0;
                                    v70 = &v64;
                                    v71 = 1;
                                    core::option::Option<T>::map_or_else();
                                    v70 = v67;
                                    v150 = v66;
                                    v68 = v150;
                                    v71 = 1;
                                    v70 = alloc::boxed::Box<T>::new(&v68);
                                    v68 = struct32 {
                                        field_0: 2
                                        field_8: 0
                                        field_16: v70
                                        field_24: v151
                                    };
                                    v30 = std::sync::mpmc::Sender<T>::send(&v14, &v68);
                                    v152 = v30;
                                    v153 = BinaryOp CmpEQV;
                                    if UnaryOp GetMSBs != 65535 {
                                        memcpy(&v68, &v30, 160);
                                        v85 = uu_du::uumain::uumain::{{closure}}(&v68);
                                        if v85 {
                                            if UnaryOp GetMSBs != 65535 {
LABEL_49162c:
                                                goto LABEL_491661;
                                            }
LABEL_491610:
                                            goto LABEL_49162c;
                                        }
                                    }
                                    v165 = v81;
                                    v166 = BinaryOp CmpEQV;
                                    v140 = v145 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v146 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v150 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v152 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v153 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v165 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v166 as u128 as u256;
                                    v138 = &v81;
                                    if UnaryOp GetMSBs == 65535 {
                                        goto LABEL_0x490fe2;
                                    }
                                    goto LABEL_490fea;
                                }
                                v4 = v81;
                                memcpy(&v60, v138, 144);
                                v68 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
                                v147 = v68;
                                v148 = *((&v68 as &char + 16) as &i128);
                                v149 = *((&v68 as &char + 32) as &i128);
                                v58 = v149;
                                v57 = v148;
                                v55 = v147;
                                if !(!v60) || !(!*((&v60 as &char + 8) as &i64)) {
                                    v55 = hashbrown::map::HashMap<K,V,S,A>::insert(*((&v60 as &char + 16) as &i64), v62, v63);
                                }
                                memcpy(&v68, &v60, 144);
                                v30 = uu_du::du(&v68, &v18, 0, &v55, &v14);
                                v154 = v30;
                                v155 = BinaryOp CmpEQV;
                                if UnaryOp GetMSBs == 65535 {
                                    v85 = uu_du::uumain::uumain::{{closure}}(v70);
LABEL_4915c6:
                                    if (v54 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v80), v54 != 0x8000000000000000) {
                                        goto LABEL_49162c;
                                    }
                                    goto LABEL_491610;
                                } else {
                                    v156 = v38;
                                    v78 = v156;
                                    v157 = *((&v30 as &char + 112) as &i128);
                                    v77 = v157;
                                    v158 = *((&v30 as &char + 96) as &i128);
                                    v76 = v158;
                                    v159 = *((&v30 as &char + 32) as &i128);
                                    v160 = *((&v30 as &char + 48) as &i128);
                                    v134 = v134 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v148 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v160 as u128 as u256;
                                    v161 = v34;
                                    v136 = v136 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v149 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v161 as u128 as u256;
                                    v162 = *((&v30 as &char + 80) as &i128);
                                    v137 = v137 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v162 as u128 as u256;
                                    v75 = v162;
                                    v74 = v161;
                                    v73 = v160;
                                    v72 = v159;
                                    v68 = struct32 {
                                        field_0: v30
                                        field_8: v31
                                        field_16: v32
                                        field_24: v109
                                    };
                                    v79 = 0;
                                    v30 = std::sync::mpmc::Sender<T>::send(&v14, &v68);
                                    v163 = v30;
                                    v164 = BinaryOp CmpEQV;
                                    if UnaryOp GetMSBs != 65535 {
                                        memcpy(&v68, &v30, 160);
                                        v85 = uu_du::uumain::uumain::{{closure}}(&v68);
                                        if (v54 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v80), v54 != 0x8000000000000000) {
                                            goto LABEL_4915c6;
                                        }
                                    }
                                    v138 = &v81;
                                    v167 = v81;
                                    v140 = ...;
LABEL_490fea:
                                }
                            } while ((v54 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v80), v54 != 0x8000000000000000));
                        },
                        None => {
                            v68 = v14;
                            *(&v68.field_0 as &struct24) = struct24 {
                                field_0: v59
                                field_16: *((&v59 as &char + 16) as &i64)
                            };
                            v30 = std::thread::JoinInner<T>::join(&v68);
                            v85 = v31;
                        },
                    }
                    if v30 {
                        v85 = uu_du::uumain::uumain::{{closure}}(v85, v32);
                    } else if !v85 {
                        v0 = 0;
                        return 0;
                    }
LABEL_491661:
                    v0 = 0;
                } else {
                    v85 = v69;
                    v127 = v70;
                    if (v54 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v80), v54 != 0x8000000000000000) {
                        goto LABEL_490be9;
                    }
                    v0 = core::ptr::drop_in_place<alloc::string::String>(&v28) | -0x100 | 1;
                }
LABEL_49166b:
                goto LABEL_491689;
            }
        }
    }
    return v85;
}
