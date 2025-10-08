fn uu_du::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x7a8], Other Possible Types: unsigned long
    let v1: u8;  // [bp-0x7a8]
    let v2: u8;  // [bp-0x7a0]
    let v3: u8;  // [bp-0x7a0]
    let v4: u8;  // [bp-0x798]
    let v5: u64;  // [bp-0x790]
    let v6: void*;  // [bp-0x788]
    let v7: iNone;  // [bp-0x780]
    let v8: iNone;  // [bp-0x770]
    let v9: u64;  // [bp-0x760]
    let v10: u64;  // [bp-0x758]
    let v11: u64;  // [bp-0x750]
    let v12: u8;  // [bp-0x750]
    let v13: u128;  // [bp-0x748]
    let v14: u64;  // [bp-0x740]
    let v15: u64;  // [bp-0x738]
    let v16: u64;  // [bp-0x728]
    let v17: u64;  // [bp-0x720]
    let v18: void*;  // [bp-0x718]
    let v19: u64;  // [bp-0x710]
    let v20: iNone;  // [bp-0x708]
    let v21: u64;  // [bp-0x6f8]
    let v22: u8;  // [bp-0x6f0]
    let v23: u8;  // [bp-0x6ef]
    let v24: u8;  // [bp-0x6ee]
    let v25: u8;  // [bp-0x6ed]
    let v26: u8;  // [bp-0x6ec]
    let v27: struct16;  // [bp-0x6e8], Other Possible Types: struct24, void*, u64
    let v28: Result<struct144, struct24>;  // [bp-0x6e8], Other Possible Types: u64
    let v29: u128;  // [bp-0x6e8]
    let v30: u128;  // [bp-0x6e8]
    let v31: u128;  // [bp-0x6e8]
    let v33: void*;  // [bp-0x6e0]
    let v34: u128;  // [bp-0x6e0]
    let v35: u64;  // [bp-0x6d8]
    let v36: u8;  // [sp-0x6d8]
    let v37: u8;  // [sp-0x6d0]
    let v38: i8;  // [bp-0x6c8], Other Possible Types: u128
    let v39: u8;  // [bp-0x6c0]
    let v40: i8;  // [bp-0x6b8], Other Possible Types: u128
    let v41: u128;  // [bp-0x6a8]
    let v42: iNone;  // [bp-0x698]
    let v43: iNone;  // [bp-0x688]
    let v44: iNone;  // [bp-0x678]
    let v45: Result<struct144, struct24>;  // [bp-0x668]
    let v46: u64;  // [bp-0x658]
    let v47: u64;  // [bp-0x658]
    let v48: iNone;  // [bp-0x658]
    let v49: iNone;  // [bp-0x648]
    let v50: iNone;  // [bp-0x638]
    let v51: iNone;  // [bp-0x628]
    let v52: u64;  // [bp-0x618]
    let v53: u64;  // [bp-0x610]
    let v54: u64;  // [bp-0x608]
    let v55: void*;  // [bp-0x600]
    let v56: u64;  // [bp-0x5f8]
    let v57: u64;  // [bp-0x5f0]
    let v58: u64;  // [bp-0x5e8]
    let v59: u64;  // [bp-0x5e0]
    let v60: u64;  // [bp-0x5d8]
    let v61: iNone;  // [bp-0x5d0]
    let v62: u64;  // [bp-0x5c0]
    let v63: u8;  // [bp-0x5b8]
    let v64: u8;  // [bp-0x5b7]
    let v65: u8;  // [bp-0x5b6]
    let v66: u8;  // [bp-0x5b5]
    let v67: u8;  // [bp-0x5b4]
    let v68: u8;  // [bp-0x5b3]
    let v69: Option<struct24>;  // [bp-0x5b0]
    let v70: u64;  // [bp-0x5a8]
    let v71: u64;  // [bp-0x5a0]
    let v72: Result<struct113, struct16>;  // [bp-0x598], Other Possible Types: struct24
    let v73: u64;  // [bp-0x588]
    let v74: u64;  // [bp-0x580]
    let v75: u64;  // [bp-0x578]
    let v76: iNone;  // [bp-0x570]
    let v77: u64;  // [bp-0x560]
    let v78: u64;  // [bp-0x558]
    let v79: u64;  // [bp-0x550]
    let v80: iNone;  // [bp-0x548]
    let v81: iNone;  // [bp-0x538]
    let v82: iNone;  // [bp-0x528]
    let v83: iNone;  // [bp-0x518]
    let v84: struct24;  // [bp-0x500]
    let v85: struct24;  // [bp-0x500]
    let v86: struct32;  // [bp-0x4e8], Other Possible Types: struct48, struct56, struct712, struct72, struct24, Result<struct16, struct16>, u128
    let v87: struct96;  // [bp-0x4e8]
    let v88: u128;  // [bp-0x4e8]
    let v89: struct32;  // [bp-0x4e8]
    let v90: struct144;  // [bp-0x4e8]
    let v91: struct32;  // [bp-0x4e8]
    let v92: struct48;  // [bp-0x4e8]
    let v93: void*;  // [bp-0x4e8]
    let v94: Result<struct16, struct16>;  // [bp-0x4e8]
    let v95: struct24;  // [bp-0x4e8], Other Possible Types: u192
    let v96: Result<struct40, struct16>;  // [bp-0x4e8]
    let v97: struct24;  // [bp-0x4e8]
    let v98: void*;  // [bp-0x4e0]
    let v99: u64;  // [bp-0x4d8]
    let v100: u64;  // [bp-0x4d8]
    let v101: u64;  // [bp-0x4d8]
    let v102: u64;  // [bp-0x4d8]
    let v103: u64;  // [bp-0x4d8]
    let v104: u32;  // [bp-0x4d0]
    let v106: u64;  // [bp-0x4c8]
    let v107: iNone;  // [bp-0x4c8], Other Possible Types: u64
    let v109: iNone;  // [bp-0x4b8]
    let v110: u128;  // [bp-0x4a8]
    let v111: iNone;  // [bp-0x498]
    let v112: iNone;  // [bp-0x488]
    let v113: iNone;  // [bp-0x478]
    let v114: iNone;  // [bp-0x468]
    let v115: void*;  // [bp-0x458]
    let v116: struct32;  // [bp-0x220]
    let v117: alloc::string::String;  // [bp-0x200]
    let v118: u64;  // [bp-0x1f0]
    let v119: struct64;  // [bp-0x1e8]
    let v120: u128;  // [bp-0x1d8]
    let v121: u128;  // [bp-0x1c8]
    let v122: u128;  // [bp-0x1b8]
    let v123: alloc::string::String;  // [bp-0x1a8]
    let v124: alloc::string::String;  // [bp-0x190]
    let v125: Result<struct160, struct16>;  // [bp-0x178]
    let v126: Result<struct160, struct16>;  // [bp-0xd8]
    let v131: void*;  // rsi
    let v132: u64;  // rdx
    let v133: void*;  // r15
    let v134: i64;  // rbx
    let v135: u64;  // r14
    let v136: u64;  // r12
    let v137: i64;  // rax
    let v138: void*;  // rax
    let v139: iNone;  // xmm0
    let v140: u128;  // xmm1
    let v142: void*;  // rbx
    let v143: iNone;  // xmm0
    let v144: u64;  // rbx
    let v145: i64;  // r14
    let v146: void*;  // rsi
    let v147: u64;  // rdx
    let v148: void*;  // r13, Other Possible Types: u64
    let v149: u64;  // rdx
    let v150: u8;  // al
    let v151: u8;  // al
    let v153: u8;  // al
    let v154: u64;  // rbx
    let v156: void*;  // rsi
    let v157: u64;  // rdx
    let v158: u8;  // al
    let v159: u8;  // bpl
    let v160: i64;  // rax
    let v164: void*;  // rdx
    let v166: iNone;  // xmm1
    let v172: u64;  // rbp
    let v173: u64;  // rsi
    let v174: void*;  // rdi
    let v175: u64;  // r14
    let v176: void*;  // rdi
    let v179: u64;  // rsi
    let v188: u64;  // rdx
    let v191: iNone;  // xmm0
    let v194: u64;  // [bp-0x598]
    let v195: void*;  // [bp-0x590]

    v86 = uu_du::uu_app();
    v29 = clap_builder::builder::command::Command::try_get_matches_from(&v86, a0, a1);
    if (((0 ^ v27.field_0) & (0 ^ -(v28))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    }
    v9 = *(&v40 as &i64);
    v8 = *(&v38 as &i128);
    v7 = *(&v36 as &i128);
    v5 = v27.field_0;
    v6 = v33;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "s");
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "l");
    v86 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "d");
    clap_builder::parser::error::MatchesError::unwrap("d", &v86);
    v86 = uu_du::parse_depth(v131, v132, v1);
    v133 = v98;
    match v86 {
        Err(_) => {
            return v133;
        },
        Ok(_) => {
            v86 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "files0-from");
            v134 = clap_builder::parser::error::MatchesError::unwrap("files0-from", &v86);
            if v134 {
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v134 + 8) as &i64), *((v134 + 16) as &i64), "-") as u8 {
                    v86 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "FILE");
                    if clap_builder::parser::error::MatchesError::unwrap("FILE", &v86) {
                        v86 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "FILE");
                        v137 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v86);
                        core::option::unwrap(v137);
                        v27 = 0;
                        v34 = *((v137 + 8) as &i64);
                        v36 = *((v137 + 16) as &i64);
                        v37 = 1;
                        v123 = format!("extra operand {}\nfile operands cannot be combined with --files0-from", &v27);
                        std::io::error::Error::_new(40, alloc::boxed::Box<T>::new(&v123), &g_5444c0);
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v138);
                        return v133;
                    }
                }
                v86 = uu_du::read_files_from(v135, v136);
                match v86 {
                    Err(_) => {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v138);
                        return v133;
                    },
                    Ok(_) => {
                        v15 = v86 as i64;
                        v138 = v98;
                        v16 = v102;
                        v103 = v102;
                    },
                }
            } else {
                v86 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5);
                v119 = clap_builder::parser::error::MatchesError::unwrap(&v86);
                if !v119.field_0 as i64 {
                    v142 = alloc::alloc::Global::alloc_impl(8, 24, 0);
                    v86 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(".");
                    v36 = v102;
                    v143 = *(&v86.field_0 as &i128);
                    *(&v30 as void*) = v143;
                    *(&v142[16] as &u64) = v102;
                    *(v142) = v143;
                    v15 = 1;
                    v138 = v142;
                    v16 = 1;
                    v103 = v102;
                } else if v3 {
                    core::iter::traits::iterator::Iterator::collect(&v15 as u8, &v119);
                    v103 = v102;
                } else {
                    v92 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
                    v139 = v92.field_0;
                    v140 = v92.field_16;
                    v38 = *(&v92.field_32 as &i128) as u128;
                    v36 = v140;
                    *(&v29 as void*) = v139;
                    v86 = struct72 {
                        field_0: v119.field_0
                        field_16: v120
                        field_32: v121
                        field_48: v122
                        field_64: &v29
                    };
                    core::iter::traits::iterator::Iterator::collect(&v15 as u8, &v86);
                    v103 = v102;
                }
            }
            v103 = v103;
            v4 = 3;
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v5, "time") as u8 {
                v4 = uu_du::uumain::uumain::{{closure}}(&v5) as u8;
            }
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "h") as u8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "si") as u8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "b") as u8 {
                v10 = 0x400;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "k") as u8 {
                    v10 = 0x100000;
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "m") as u8 {
                        v86 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "block-size");
                        v145 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v86);
                        v93 as u640 = uu_du::read_block_size(v146, v147);
                        if let Ok(_) = v93 as u640 {
                            return v148;
                        }
                        v10 = v98;
                        if !v98 {
                            v27 = 0;
                            v34 = core::option::Option<T>::map_or(v145);
                            v36 = v149;
                            v37 = 1;
                            v124 = format!("invalid --{} argument {}", "block-size", &v27);
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(std::io::error::Error::_new(40, alloc::boxed::Box<T>::new(&v124), &g_5444c0));
                            v133 = v148;
                            return v133;
                        }
                    }
                }
            }
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "all") as u8;
            v150 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "S") as u32 as u8;
            v151 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "one-file-system") as u32 as u8;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "dereference") as u8 && clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "dereference-args") as u8 {
                <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v93 as u640, v138, v16);
                v36 = v103;
                v31 = v94 as i128 as u128;
            }
            v53 = v144;
            v54 = v102;
            v153 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "verbose") as u32 as u8;
            uu_du::build_exclude_patterns(&v93 as u640, &v5);
            v148 = v98;
            v154 = v103;
            if let Ok(_) = v93 as u640 {
                v22 = v12;
                v23 = v150;
                v24 = v151;
                v20 = v31;
                v21 = v36;
                v25 = v3;
                v26 = v153;
                v17 = v94 as i64;
                v18 = v148;
                v19 = v154;
                if v4 == 3 {
                    v95 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("%Y-%m-%d %H:%M");
                    goto LABEL_483583;
                } else {
                    v86 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "time-style");
                    clap_builder::parser::error::MatchesError::unwrap("time-style", &v86);
                    v86 = uu_du::parse_time_style(v156, v157);
                    v148 = v98;
                    v154 = v103;
                    if let Ok(_) = v86 {
                        v95 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v98, v103);
LABEL_483583:
                        v52 = v103;
                        v51 = v95 as i128;
                        v158 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "c") as u32 as u8;
                        v159 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "inodes") as u32 as u8;
                        v96 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, "threshold");
                        v160 = clap_builder::parser::error::MatchesError::unwrap("threshold", &v96);
                        if v160 {
                            v97 = uu_du::uumain::uumain::{{closure}}(*((v160 + 8) as &i64), *((v160 + 16) as &i64));
                            v148 = v93;
                            if v97.field_0 != 2 {
                                v148 = v98;
                            }
                            v154 = v103;
                            if (v97.field_0 as u8 & 1) {
                                return v148;
                            }
                        }
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "apparent-size") as u8 {
                            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "b");
                        }
                        v63 = v158;
                        v64 = v159;
                        v55 = v133;
                        v56 = v54;
                        v57 = v148;
                        v58 = v154;
                        v65 = 1;
                        v59 = v53;
                        v60 = v10;
                        v67 = v4;
                        v61 = v51;
                        v62 = v52;
                        v68 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "0") as u8 ? 0 : 10);
                        v66 = v1;
                        v99 = v103;
                        if v159 {
                            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "apparent-size") as u8 {
                                v99 = v103;
                                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, "b") as u8 {
                                    goto LABEL_483886;
                                }
                            }
                            v27 = uucore::util_name();
                            v33 = v164;
                            eprint!("{}: warning: ", &v27);
                            eprintln!("options --apparent-size and -b are ineffective with --inodes");
                            v99 = v100;
                        }
LABEL_483886:
                        v86 = std::sync::mpmc::channel();
                        v166 = *(&v86.field_16 as &i128);
                        v13 = *(&v86.field_0 as &i128) as u128;
                        v87 = struct96 {
                            field_0: *(&v55 as &i128)
                            field_16: *(&v57 as &i128)
                            field_32: *(&v59 as &i128)
                            field_48: v61
                            field_64: *(&v62 as &i128)
                            field_80: v166
                        };
                        v35 = 0x8000000000000000;
                        v27 = 0;
                        v39 = 0;
                        v72 = std::thread::Builder::spawn_unchecked(&v27, &v87);
                        v84 = core::result::Result<T,E>::expect(&v72);
                        v116 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v15);
                        v69 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v116);
                        if let Some(_) = v69 {
                            do {
                                v173 = v70;
                                v0 = v173;
                                if v19 {
                                    alloc::string::String::from_utf8_lossy(&v194, v0, v71);
                                    v174 = v18;
                                    v175 = v19 * 56 + v174;
                                    do {
                                        if v176 == v175 {
                                            if v176 != v175 {
                                                continue;
                                            }
                                            goto LABEL_483bf3;
                                        } else if v176 == v175 {
LABEL_483bf3:
                                            v173 = v0;
                                            goto LABEL_483bfe;
                                        }
                                    } while (!glob::Pattern::matches(v176, v195, v73));
                                    v100 = v99;
                                    if v26 {
                                        v27 = 0;
                                        v33 = v195;
                                        v35 = v73;
                                        v37 = 1;
                                        println!("{} ignored", &v27);
                                        v100 = v101;
                                        v106 = v107;
                                        v46 = v47;
                                    }
                                    v100 = v100;
                                    v106 = v106;
                                    v46 = v46;
                                    continue;
                                }
LABEL_483bfe:
                                v72 = uu_du::Stat::new(v173, v71, 0, &v17);
                                if UnaryOp GetMSBs == 65535 {
                                    alloc::string::String::from_utf8_lossy(&v72, v0, v71);
                                    v27 = 0;
                                    v34 = *((&v72 as &char + 8) as &i128) as u128;
                                    v37 = 1;
                                    v117 = format!("cannot access {}: No such file or directory", &v27);
                                    v104 = 1;
                                    v88 = *(&v117.vec.buf.inner.cap as &i128) as u128;
                                    v100 = v118;
                                    v89 = struct32 {
                                        field_0: ""
                                        field_16: alloc::boxed::Box<T>::new(&v88 as u384) as u64
                                        field_24: &g_544560
                                    };
                                    v126 = std::sync::mpmc::Sender<T>::send(v13 as i64, v14, &v89);
                                    v100 = v101;
                                    v106 = v107;
                                    v46 = v47;
                                    if UnaryOp GetMSBs == 65535 {
                                        continue;
                                    }
                                    uu_du::uumain::uumain::{{closure}}(&v126);
                                    v100 = v101;
                                    v106 = v107;
                                    v46 = v47;
                                    if !v133 {
                                        continue;
                                    }
                                    goto LABEL_4840bc;
                                }
                                v4 = v78;
                                v11 = v79;
                                v86 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
                                v50 = *(&v86.field_32 as &i128);
                                v49 = v86.field_16;
                                *(&v48 as &u128) = v86.field_0;
                                if (v72 as i64 as i8 & 1) {
                                    hashbrown::map::HashMap<K,V,S,A>::insert(&v46, v73, v74, v75);
                                }
                                v90 = struct144 {
                                    field_0: v72 as i64
                                    field_8: v195
                                    field_16: v73
                                    field_24: v74
                                    field_32: v75
                                    field_40: v76
                                    field_56: v77
                                    field_64: v4
                                    field_72: v11
                                    field_80: v80
                                    field_96: v81
                                    field_112: v82
                                    field_128: v83 as i128
                                };
                                v45 as u1152 = uu_du::du(&v90, &v17, 0, &v46, &v13 as u8);
                                if UnaryOp GetMSBs == 65535 {
                                    uu_du::uumain::uumain::{{closure}}(v101);
LABEL_4840bc:
                                    core::mem::drop(v172, v179);
                                    return v133;
                                }
                                v188 = *((&(&v45)[-2] as &char + 72) as &i64);
                                v114 = v45;
                                v113 = v44;
                                v112 = v43;
                                v191 = *((&v28 as &char + 32) as &i128);
                                v111 = v42;
                                v110 = v41;
                                *(&v109 as &u128) = v40;
                                v107 = v191;
                                v91 = struct32 {
                                    field_0: 0
                                    field_8: v33
                                    field_16: v35
                                    field_24: v188
                                };
                                v115 = 0;
                                v125 = std::sync::mpmc::Sender<T>::send(v13 as i64, v14, &v91);
                                if UnaryOp GetMSBs != 65535 {
                                    uu_du::uumain::uumain::{{closure}}(&v125);
                                    if v133 {
                                        goto LABEL_4840bc;
                                    }
                                }
                                v100 = v101;
                                v106 = v107;
                                v99 = v100;
                                core::mem::drop(v172, v0);
                                v69 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v116);
                            } while (v69 as i64 != 0x8000000000000000);
                        }
                        v86 = v13;
                        v86 = v85;
                        v27 = std::thread::JoinInner<T>::join(&v86);
                        v133 = v33;
                        if v27.field_0 as i32 != 1 {
                            return 0;
                        }
                        uu_du::uumain::uumain::{{closure}}(v133, v35);
                        return v133;
                    }
                }
            }
        },
    }
}
