fn uu_du::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i32;  // [bp-0x730], Other Possible Types: char
    let v1: i8;  // [sp-0x72b]
    let v2: i8;  // [sp-0x72a]
    let v3: i8;  // [sp-0x729]
    let v4: i64;  // [bp-0x728]
    let v5: i8;  // [bp-0x728]
    let v6: i64;  // [sp-0x720]
    let v7: i64;  // [sp-0x718]
    let v8: iNone;  // [sp-0x710]
    let v9: iNone;  // [sp-0x700]
    let v10: i64;  // [sp-0x6f0]
    let v11: i64;  // [sp-0x6e8]
    let v12: i64;  // [bp-0x6e0], Other Possible Types: char
    let v13: iNone;  // [sp-0x6d8]
    let v14: i64;  // [sp-0x6c8]
    let v15: iNone;  // [sp-0x6b8]
    let v16: struct24;  // [sp-0x6a8]
    let v17: i64;  // [sp-0x6a0]
    let v18: i64;  // [sp-0x698]
    let v19: i64;  // [sp-0x690], Other Possible Types: struct24
    let v20: i64;  // [sp-0x688]
    let v21: i64;  // [sp-0x680]
    let v22: iNone;  // [sp-0x678]
    let v23: i64;  // [sp-0x668]
    let v24: i8;  // [sp-0x660]
    let v25: i8;  // [sp-0x65f]
    let v26: i8;  // [sp-0x65e]
    let v27: i8;  // [sp-0x65d]
    let v28: i8;  // [sp-0x65c]
    let v29: iNone;  // [sp-0x658]
    let v30: i64;  // [sp-0x648]
    let v31: i64;  // [sp-0x638], Other Possible Types: struct24
    let v32: i64;  // [bp-0x638], Other Possible Types: struct8
    let v33: i64;  // [sp-0x630], Other Possible Types: int
    let v34: i64;  // [sp-0x630], Other Possible Types: int
    let v35: i64;  // [sp-0x628]
    let v36: i8;  // [sp-0x620], Other Possible Types: int, Result<struct160, struct8>, unsigned long, struct64
    let v37: i8;  // [sp-0x620]
    let v41: i8;  // [bp-0x5c8]
    let v43: i64;  // [sp-0x598]
    let v44: i64;  // [sp-0x590]
    let v45: i64;  // [sp-0x588]
    let v46: i64;  // [sp-0x580]
    let v47: i64;  // [sp-0x578]
    let v48: i64;  // [sp-0x570]
    let v49: i64;  // [sp-0x568]
    let v50: iNone;  // [sp-0x560]
    let v51: i64;  // [sp-0x550]
    let v52: i8;  // [sp-0x548]
    let v53: i8;  // [sp-0x547]
    let v54: i8;  // [sp-0x546]
    let v55: i8;  // [sp-0x545]
    let v56: i8;  // [sp-0x544]
    let v57: i8;  // [sp-0x543]
    let v58: Option<struct24>;  // [sp-0x540], Other Possible Types: int
    let v59: struct24;  // [sp-0x528], Other Possible Types: unsigned long
    let v60: iNone;  // [bp-0x528], Other Possible Types: struct16
    let v61: i64;  // [sp-0x520]
    let v62: iNone;  // [sp-0x518]
    let v63: iNone;  // [sp-0x508]
    let v64: struct24;  // [sp-0x4f0]
    let v65: struct24;  // [sp-0x4d8], Other Possible Types: int, unsigned long
    let v66: iNone;  // [bp-0x4d0]
    let v67: i8;  // [sp-0x4c0]
    let v68: i8;  // [bp-0x4b8]
    let v69: String;  // [sp-0x430]
    let v70: Result<struct40, struct8>;  // [sp-0x418], Other Possible Types: struct24, unsigned long, int, struct16, struct32, struct712, struct48, struct56, struct96, Arguments
    let v71: struct24;  // [sp-0x418], Other Possible Types: int
    let v72: i64;  // [sp-0x410]
    let v73: i64;  // [sp-0x408]
    let v74: i32;  // [bp-0x400]
    let v75: iNone;  // [bp-0x3f8]
    let v76: iNone;  // [sp-0x3e8]
    let v77: iNone;  // [sp-0x3d8]
    let v78: iNone;  // [sp-0x3c8]
    let v79: iNone;  // [sp-0x3b8]
    let v80: iNone;  // [sp-0x3a8]
    let v81: iNone;  // [sp-0x398]
    let v82: i64;  // [sp-0x388]
    let v83: struct32;  // [sp-0x148]
    let v84: i64;  // [bp-0x128], Other Possible Types: char
    let v85: i64;  // [sp-0x120]
    let v86: String;  // [sp-0x90]
    let v87: struct64;  // [bp-0x78]
    let v89: iNone;  // xmm0
    let v90: iNone;  // ymm0
    let v91: iNone;  // ymm0
    let v92: iNone;  // xmm1
    let v93: iNone;  // ymm1
    let v94: iNone;  // ymm1
    let v95: i64;  // r13
    let v96: i64;  // rax
    let v97: i64;  // rsi
    let v99: i64;  // rax
    let v100: i64;  // rbx
    let v101: i64;  // r14
    let v103: i64;  // r14
    let v104: i64;  // rax
    let v105: struct24;  // rax
    let v106: i64;  // rdi
    let v110: iNone;  // ymm2
    let v111: iNone;  // ymm2
    let v113: iNone;  // ymm3
    let v114: iNone;  // ymm3
    let v116: iNone;  // xmm0
    let v117: i64;  // r14
    let v118: i64;  // rbx
    let v119: i64;  // rax
    let v121: i64;  // rdx
    let v122: i64;  // r14
    let v126: i64;  // rax
    let v127: iNone;  // xmm0
    let v131: i64;  // r12
    let v132: iNone;  // xmm0
    let v133: i64;  // rax
    let v134: i64;  // rsi
    let v136: struct24;  // rax
    let v137: iNone;  // xmm0
    let v138: i8;  // bpl
    let v139: i64;  // rax
    let v140: i64;  // r14
    let v141: i64;  // r12
    let v142: i64;  // r14
    let v145: iNone;  // xmm0
    let v147: iNone;  // xmm0
    let v148: iNone;  // ymm0
    let v149: iNone;  // xmm0
    let v151: iNone;  // ymm1
    let v154: iNone;  // ymm0
    let v156: iNone;  // ymm2
    let v158: iNone;  // ymm3
    let v159: i64;  // r14
    let v161: iNone;  // xmm0
    let v162: struct8;  // rax
    let v163: iNone;  // xmm0
    let v164: iNone;  // xmm0
    let v165: iNone;  // ymm0
    let v167: iNone;  // xmm0
    let v168: iNone;  // xmm0
    let v169: iNone;  // xmm0
    let v170: iNone;  // xmm1
    let v171: iNone;  // xmm2
    let v172: iNone;  // xmm0
    let v173: iNone;  // xmm0
    let v174: iNone;  // xmm0
    let v175: iNone;  // xmm0
    let v177: iNone;  // xmm0
    let v178: iNone;  // xmm0
    let v179: iNone;  // xmm0
    let v180: iNone;  // xmm0
    let v181: iNone;  // xmm1
    let v182: iNone;  // xmm2
    let v183: iNone;  // xmm3
    let v184: iNone;  // xmm0
    let v185: iNone;  // xmm0
    let v186: iNone;  // ymm0
    let v187: iNone;  // xmm0
    let v188: iNone;  // xmm0
    let v189: iNone;  // xmm0
    let v191: i64;  // r14

    v70 = uu_du::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v36, &v70, a0, a1);
    if v6 == 0x8000000000000000 {
        v95 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
        return v95;
    }
    v10 = *(&v36 as &i64);
    v89 = *(&v36 as &i128);
    v91 = v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89 as u256;
    v92 = *(&v36 as &i128);
    v94 = v93 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v92 as u256;
    v9 = v92;
    v8 = v89;
    v6 = v31;
    v7 = v33;
    *(&v12 as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "s") as i8;
    v70 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "d");
    v96 = clap_builder::parser::error::MatchesError::unwrap("d", &v70);
    if v96 {
        v97 = *((v96 + 8) as &i64);
    } else {
        v97 = 0;
    }
    v70 = uu_du::parse_depth(v97, *((v96 + 16) as &i64), v12);
    v95 = v72;
    if v70 {
        return v95;
    }
    v70 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "files0-from");
    v99 = clap_builder::parser::error::MatchesError::unwrap("files0-from", &v70);
    if !v99 {
        v70 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "FILE");
        if !clap_builder::parser::error::MatchesError::unwrap("FILE", &v70) {
            v103 = alloc::alloc::Global::alloc_impl(24);
            v70 = std::sys::os_str::bytes::Slice::to_owned(".");
            v36 = v73;
            v116 = *(&v70.field_0 as &i128);
            v91 = v91 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v116 as u256;
            v36 = v116;
            *((v103 + 16) as &unsigned long) = v36;
            *(v103 as void*) = v116;
            v105 = alloc::slice::hack::into_vec(v103, 1);
        } else {
            v70 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, "FILE");
            v36 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v70);
            if !v31 {
                core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/du/src/du.rs"); /* do not return */
            }
            v91 = v91 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36.field_0;
            v94 = v94 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36.field_16;
            v111 = v110 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36.field_32;
            v114 = v113 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36.field_48;
            v87 = struct64 {
                field_0: v107
                field_16: v108
                field_32: v109
                field_48: v112
            };
            v105 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v87);
            goto LABEL_4906f1;
        }
        goto LABEL_4906f1;
    }
    v100 = *((v99 + 8) as &i64);
    v101 = *((v99 + 16) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v100, v101, "-") as i8 {
        v70 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "FILE");
        if !clap_builder::parser::error::MatchesError::unwrap("FILE", &v70) {
            goto LABEL_49052d;
        }
        v70 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "FILE");
        v104 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v70);
        if !v104 {
            core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/du/src/du.rs"); /* do not return */
        }
        v31 = 0;
        *(&v33 as &i128) = *((v104 + 8) as &i128);
        v37 = 1;
        v86 = format!("extra operand {}
file operands cannot be combined with --files0-from", &v31);
        v106 = std::io::error::Error::new(39, &v86);
LABEL_490564:
        v117 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v106);
    } else {
LABEL_49052d:
        v70 = uu_du::read_files_from(v100, v101);
        v105 = v70;
        v106 = v72;
        if v16 == 0x8000000000000000 {
            goto LABEL_490564;
        }
        v16 = v105;
        v17 = v106;
        v18 = v73;
LABEL_4906f1:
        *(&v0 as &u32) = (v105 & -0x100 | 1) as u32;
        *(&v5 as &i8) = 3;
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v6, "time") as i8 {
            *(&v5 as &i8) = uu_du::uumain::uumain::{{closure}}(&v6) as i8;
        }
        v118 = 1;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "h") as i8 {
LABEL_490863:
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "dereference") as i8 {
                v126 = 0x8000000000000000;
                goto LABEL_490939;
            } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "dereference-args") as i8 {
                v70 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v16);
                v36 = v73;
                v127 = *(&v70.field_0 as &i128);
                v91 = v91 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v127 as u256;
                v34 = v127;
            } else {
                v126 = 9223372036854775810;
LABEL_490939:
                v34 = v126;
            }
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "one-file-system") as i32;
            v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "S") as i32;
            v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "all") as i32;
            v43 = v118;
            v70 = uu_du::build_exclude_patterns(&v6);
            v131 = v73;
            if v19 == 0x8000000000000000 {
                return v95;
            }
            v24 = v3;
            v25 = v2;
            v26 = v1;
            v132 = v34 as i128;
            v22 = v132;
            v23 = v36;
            v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "l") as i32;
            v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "verbose") as i32;
            v19 = v70;
            if v5 == 3 {
                v71 = <T as alloc::slice::hack::ConvertVec>::to_vec("%Y-%m-%d %H:%M");
                goto LABEL_490af9;
            }
            v70 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "time-style");
            v133 = clap_builder::parser::error::MatchesError::unwrap("time-style", &v70);
            if v133 {
                v134 = *((v133 + 8) as &i64);
            } else {
                v134 = 0;
            }
            v136 = uu_du::parse_time_style(v134, *((v133 + 16) as &i64));
            v131 = v73;
            if v70 {
                *(&v0 as &u32) = (v136 & -0x100 | 1) as u32;
                goto LABEL_491678;
            }
            v71 = <T as alloc::slice::hack::ConvertVec>::to_vec(v72, v131);
LABEL_490af9:
            v30 = v73;
            v137 = v71 as i128;
            v29 = v137;
            *(&v0 as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "c") as i8;
            v138 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "inodes") as i32;
            v70 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "threshold");
            v139 = clap_builder::parser::error::MatchesError::unwrap("threshold", &v70);
            if !v139 {
                v140 = 2;
                goto LABEL_490be9;
            }
            v70 = uu_du::uumain::uumain::{{closure}}(*((v139 + 8) as &i64), *((v139 + 16) as &i64));
            if v142 == 2 {
                v73 = v73;
LABEL_490be9:
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "apparent-size") as i8 {
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "b");
                }
                v73 = v30;
                v145 = v29;
                v70 = v145;
                v52 = v0;
                v53 = v138;
                v44 = v95;
                v45 = v73;
                v46 = v140;
                v47 = v141;
                v54 = 1;
                v48 = v43;
                v49 = v11;
                v56 = v5;
                v147 = v70 as i128;
                v148 = (((v91 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v132 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v137 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v145 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v147 as u256;
                v50 = v147;
                v51 = v73;
                v57 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "0") as i8 ? 0 : 10);
                v55 = v12;
                if v138 && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "apparent-size") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "b") as i8) {
                    v34 = v121;
                    v148 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    show_warning!("options --apparent-size and -b are ineffective with --inodes");
                }
                v70 = std::sync::mpmc::channel();
                v149 = *(&v70.field_0 as &i128);
                v151 = v94 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v70.field_16 as &i128);
                v15 = v149;
                v154 = ((v148 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v149 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v51 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v44 as &i128);
                v156 = v111 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v46 as &i128);
                v158 = v114 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v48 as &i128);
                v70 = struct96 {
                    field_0: v153
                    field_16: v155
                    field_32: v157
                    field_48: v50
                    field_64: v152
                    field_80: v150
                };
                v35 = 0x8000000000000000;
                v32 = struct8 {
                    field_0: 0
                };
                v65 = std::thread::Builder::spawn_unchecked(&v32, &v70);
                v64 = core::result::Result<T,E>::expect(&v65);
                v83 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v16);
                v58 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v83);
                match v58 {
                    Some(_) => {
                        v159 = &v84;
                        do {
                            v14 = (&v58)[16] as i64;
                            v161 = v58 as i128;
                            v13 = v161;
                            if v21 {
                                v65 = std::sys::os_str::bytes::Slice::to_string_lossy((&v13)[8] as i64, v14);
                                v59 = v20;
                                v61 = v21 * 56 + v59;
                                loop {
                                    v162 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                                    if !v162 {
                                        break;
                                    }
                                    if glob::Pattern::matches(v162, v65.field_8, v65.field_16) as i8 {
                                        if v28 {
                                            v31 = 0;
                                            *(&v33 as &i128) = *(&v65.field_8 as &i128);
                                            v36 = 1;
                                            v84 = &v31;
                                            v85 = <os_display::Quoted as core::fmt::Display>::fmt;
                                            v70 = Arguments {
                                                pieces: ["", " ignored\n"]
                                                args: &[Argument] {
                                                    ptr: v159
                                                    len: 1
                                                }
                                                fmt: 0
                                            };
                                            std::io::stdio::_print(&v70);
                                        }
                                        v35 = v35;
                                        v32 = v31;
                                        v33 = v33;
                                        v84 = v84;
                                        v85 = v85;
                                    }
                                }
                            }
                            uu_du::Stat::new(v159, (&v13)[8] as i64, v14, 0, &v19);
                            v12 = v85;
                            v163 = *(&v84 as &i128);
                            v164 = BinaryOp CmpEQV;
                            v165 = ((v154 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v161 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v163 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v164 as u256;
                            if UnaryOp GetMSBs == 65535 {
                                v59 = std::sys::os_str::bytes::Slice::to_string_lossy((&v13)[8] as i64, v14);
                                v167 = *(&v59.field_8 as &i128);
                                v65 = 0;
                                v66 = v167;
                                v67 = 1;
                                v69 = format!("cannot access {}: No such file or directory", &v65);
                                v73 = v69.len;
                                v168 = *(&v69.ptr as &i128);
                                v70 = v168;
                                *(&v74 as &i32) = 1;
                                v73 = alloc::boxed::Box<T>::new(&v70);
                                v70 = struct32 {
                                    field_0: 2
                                    field_8: 0
                                    field_16: v73
                                    field_24: v160
                                };
                                v36 = std::sync::mpmc::Sender<T>::send(&v15, &v70);
                                v172 = v36 as i128;
                                v173 = BinaryOp CmpEQV;
                                if UnaryOp GetMSBs != 65535 {
                                    memcpy(&v70, &v36, 160);
                                    if uu_du::uumain::uumain::{{closure}}(&v70) {
                                        if !(UnaryOp GetMSBs == 65535) {
                                            goto LABEL_491661;
                                        }
LABEL_49161d:
                                        goto LABEL_491661;
                                    }
                                }
                                v184 = *(&v84 as &i128);
                                v185 = BinaryOp CmpEQV;
                                v186 = (((((v165 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v167 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v168 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v172 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v173 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v184 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v185 as u256;
                                v159 = &v84;
                                v35 = v35;
                                v31 = v31;
                                v33 = v34;
                                v84 = v84;
                                v85 = v85;
                                if UnaryOp GetMSBs != 65535 {
                                    v35 = v35;
                                    v32 = v31;
                                    v33 = v34;
                                    v84 = v84;
                                    v85 = v85;
                                }
                                continue;
                            }
                            v4 = v84;
                            memcpy(&v65, v159, 144);
                            v70 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
                            v169 = v70.field_0;
                            v170 = v70.field_16;
                            v171 = *(&v70.field_32 as &i128);
                            v63 = v171;
                            v62 = v170;
                            v60 = v169;
                            if !(!v65) || !(!(&v65)[8] as i64) {
                                v60 = hashbrown::map::HashMap<K,V,S,A>::insert((&v65)[16] as i64, *(&v67 as &i64), *(&v68 as &i64));
                            }
                            memcpy(&v70, &v65, 144);
                            v31 = uu_du::du(&v70, &v19, 0, &v60, &v15);
                            v174 = *(&v31.field_0 as &i128);
                            v175 = BinaryOp CmpEQV;
                            if UnaryOp GetMSBs == 65535 {
                                uu_du::uumain::uumain::{{closure}}(v73);
LABEL_4915d6:
                                if UnaryOp GetMSBs == 65535 {
                                    goto LABEL_49161d;
                                }
                                goto LABEL_491661;
                            } else {
                                v177 = (&v36)[128] as i128;
                                v81 = v177;
                                v178 = *(&v41 as &i128);
                                v80 = v178;
                                v179 = (&v36)[96] as i128;
                                v79 = v179;
                                v180 = (&v36)[32] as i128;
                                v181 = v36.field_48;
                                v151 = (v151 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v170 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v181 as u256;
                                v182 = (&v36)[64] as i128;
                                v156 = (v156 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v171 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v182 as u256;
                                v183 = (&v36)[80] as i128;
                                v158 = v158 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v183 as u256;
                                v78 = v183;
                                v77 = v182;
                                v76 = v181;
                                v75 = v180;
                                v70 = v36 as i256;
                                v82 = 0;
                                v36 = std::sync::mpmc::Sender<T>::send(&v15, &v70);
                                v187 = v36 as i128;
                                v188 = BinaryOp CmpEQV;
                                if UnaryOp GetMSBs != 65535 {
                                    memcpy(&v70, &v36, 160);
                                    if !(!uu_du::uumain::uumain::{{closure}}(&v70)) {
                                        goto LABEL_4915d6;
                                    }
                                }
                                v159 = &v84;
                                v189 = *(&v84 as &i128);
                                v35 = v35;
                                v31 = v31;
                                v33 = v34;
                                v84 = v84;
                                v85 = v85;
                            }
                        } while ((v85 = v85, v84 = v84, v34 = v33, v31 = v32, v35 = v35, v58 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v83), v58 as i64 != 0x8000000000000000));
                    },
                    None => {
                        std::thread::JoinInner<T>::join(&v32, &v70);
                        v191 = v33;
                    },
                }
                if v31 {
                    uu_du::uumain::uumain::{{closure}}(v191, v35);
                } else if !v191 {
                    return 0;
                }
LABEL_491661:
                *(&v0 as &i32) = 0;
            } else {
                v140 = v72;
                v141 = v73;
                if !(v142 == 1) {
                    goto LABEL_490be9;
                }
                *(&v0 as &i32) = core::ptr::drop_in_place<alloc::string::String>(&v29) & -0x100 | 1;
            }
LABEL_491678:
        } else {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "si") as i8 {
                v118 = 0;
                goto LABEL_490863;
            }
            v11 = 1;
            v118 = 2;
            if !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "b") as i8) {
                goto LABEL_490863;
            }
            v11 = 0x400;
            if !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "k") as i8 && (v11 = 0x100000, !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "m") as i8)) {
                goto LABEL_490863;
            }
            v70 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "block-size");
            v119 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v70);
            v70 = uu_du::read_block_size((!v119 ? 0 : core::ops::function::FnOnce::call_once(*((v119 + 8) as &i64), *((v119 + 16) as &i64))), v121);
            v122 = v70;
            if !v122 {
                v11 = v72;
                goto LABEL_490863;
            }
        }
    }
    v95 = v117;
    return v95;
}
