fn uu_ls::Config::from(a0: u64, a1: u64) -> int {
    let v0: u8;  // [bp-0x454]
    let v1: u8;  // [bp-0x453]
    let v2: u8;  // [bp-0x452]
    let v3: u8;  // [bp-0x451]
    let v4: u32;  // [bp-0x450]
    let v5: u32;  // [sp-0x44c]
    let v6: u64;  // [bp-0x448]
    let v7: u32;  // [bp-0x43c]
    let v8: u32;  // [sp-0x438]
    let v9: u8;  // [bp-0x434]
    let v10: u8;  // [bp-0x433]
    let v11: u8;  // [bp-0x432]
    let v12: u8;  // [bp-0x431]
    let v13: u8;  // [bp-0x430]
    let v14: u8;  // [bp-0x42f]
    let v15: u8;  // [bp-0x42e]
    let v16: std::io::stdio::Stdout;  // [bp-0x42d]
    let v17: u32;  // [bp-0x42c]
    let v18: u32;  // [sp-0x428]
    let v19: u8;  // [bp-0x424]
    let v20: u8;  // [bp-0x424]
    let v21: u32;  // [bp-0x420]
    let v22: u32;  // [bp-0x41c]
    let v23: u8;  // [bp-0x41c]
    let v24: u32;  // [bp-0x418]
    let v25: u8;  // [bp-0x418]
    let v26: u16;  // [bp-0x412]
    let v27: i64;  // [bp-0x410]
    let v28: u64;  // [bp-0x408], Other Possible Types: alloc::borrow::Cow<str>, void*
    let v29: u128;  // [bp-0x408]
    let v30: u64;  // [bp-0x400]
    let v31: u64;  // [bp-0x3f8]
    let v32: u8;  // [bp-0x3f0]
    let v33: u64;  // [bp-0x3e8]
    let v34: u64;  // [bp-0x3e8], Other Possible Types: struct16
    let v35: void*;  // [bp-0x3d8]
    let v36: u144;  // [bp-0x3c8], Other Possible Types: struct_3 *
    let v37: struct16;  // [bp-0x3c8], Other Possible Types: u8
    let v38: u64;  // [bp-0x3c8]
    let v40: u704;  // [bp-0x3c8]
    let v41: Option<struct160>;  // [bp-0x3c8]
    let v42: u8;  // [bp-0x3c8]
    let v43: u8;  // [bp-0x3c8]
    let v44: alloc::string::String;  // [bp-0x3c8], Other Possible Types: u192
    let v45: u128;  // [bp-0x3c0], Other Possible Types: struct_3 *
    let v46: u64;  // [bp-0x3b8], Other Possible Types: void*
    let v47: u128;  // [bp-0x3b4]
    let v48: u128;  // [bp-0x3b0], Other Possible Types: void*
    let v49: u128;  // [bp-0x3a8]
    let v50: u8;  // [bp-0x3a4]
    let v51: u128;  // [bp-0x3a0]
    let v52: u64;  // [bp-0x398], Other Possible Types: void*
    let v53: u32;  // [bp-0x394]
    let v54: u128;  // [bp-0x390]
    let v55: void*;  // [bp-0x380]
    let v56: u128;  // [bp-0x378]
    let v57: u128;  // [bp-0x368]
    let v58: u128;  // [bp-0x358]
    let v59: u64;  // [bp-0x348]
    let v60: void*;  // [bp-0x340]
    let v61: u128;  // [bp-0x338]
    let v62: u128;  // [bp-0x328]
    let v63: u128;  // [bp-0x318]
    let v64: u128;  // [bp-0x310]
    let v65: u64;  // [bp-0x308]
    let v66: u64;  // [bp-0x300]
    let v67: u128;  // [sp-0x2f8]
    let v68: u64;  // [bp-0x2f0]
    let v69: u64;  // [bp-0x2e8]
    let v70: u32;  // [bp-0x2e0]
    let v71: u32;  // [bp-0x2dc]
    let v72: u32;  // [bp-0x2d8]
    let v73: u32;  // [bp-0x2d4]
    let v74: void*;  // [bp-0x2d0]
    let v75: struct16;  // [bp-0x2d0]
    let v76: struct16;  // [bp-0x2d0]
    let v77: struct16;  // [bp-0x2d0]
    let v78: struct16;  // [bp-0x2d0]
    let v79: u64;  // [bp-0x2c8]
    let v80: void*;  // [bp-0x2c0]
    let v81: struct56;  // [bp-0x2b8], Other Possible Types: struct32, u64, struct153, struct24
    let v82: Result<struct56, struct3>;  // [bp-0x2b8]
    let v83: struct57;  // [bp-0x2b8]
    let v84: struct64;  // [bp-0x2b8]
    let v85: struct64;  // [bp-0x2b8]
    let v86: u8;  // [bp-0x2b7]
    let v87: u16;  // [bp-0x2b6]
    let v88: u64;  // [bp-0x2b0]
    let v89: u64;  // [bp-0x2a8]
    let v90: u64;  // [bp-0x2a0]
    let v91: u64;  // [bp-0x298]
    let v92: u64;  // [bp-0x290]
    let v93: u64;  // [bp-0x288]
    let v94: u32;  // [bp-0x284]
    let v95: u64;  // [bp-0x280]
    let v96: u8;  // [bp-0x278]
    let v97: u8;  // [bp-0x218]
    let v98: u64;  // [bp-0x208]
    let v99: u8;  // [bp-0x200]
    let v100: u64;  // [bp-0x1f0]
    let v101: u8;  // [bp-0x1e8]
    let v102: u64;  // [bp-0x1d8]
    let v103: u64;  // [bp-0x1d0]
    let v104: u128;  // [bp-0x1c8]
    let v105: u128;  // [bp-0x1c8]
    let v106: u64;  // [bp-0x1b8]
    let v107: u128;  // [bp-0x1a8]
    let v108: u128;  // [bp-0x198]
    let v109: u128;  // [bp-0x188]
    let v110: u64;  // [bp-0x178]
    let v111: u64;  // [bp-0x170]
    let v112: alloc::string::String;  // [bp-0x168], Other Possible Types: u128
    let v113: u64;  // [bp-0x168]
    let v114: u64;  // [bp-0x168]
    let v115: u64;  // [bp-0x168]
    let v116: u128;  // [bp-0x159]
    let v117: u64;  // [bp-0x158]
    let v118: u8;  // [bp-0xc0]
    let v119: u8;  // [bp-0xa8]
    let v120: u8;  // [bp-0x98]
    let v121: u8;  // [bp-0x88]
    let v122: u64;  // [bp-0x78]
    let v123: u8;  // [bp-0x68]
    let v124: u8;  // [bp-0x58]
    let v125: u8;  // [bp-0x48]
    let v126: u64;  // [bp-0x38]
    let v128: u64;  // r15
    let v129: std::io::stdio::Stdout;  // al
    let v130: void*;  // rdx
    let v132: u64;  // cc_ndep
    let v133: u8;  // al
    let v134: u64;  // r12
    let v135: u64;  // r8
    let v136: i64;  // r14
    let v137: u64;  // rbp
    let v138: i64;  // rax
    let v139: u8;  // r12b
    let v141: i64;  // rax
    let v144: u8;  // r13b
    let v145: u32;  // eax
    let v148: u32;  // eax
    let v149: u32;  // eax
    let v150: u32;  // eax
    let v154: u32;  // ebp
    let v156: u8;  // al
    let v158: u8;  // al
    let v159: u64;  // rax
    let v160: u8;  // al
    let v161: u8;  // al
    let v162: u128;  // xmm0
    let v163: u128;  // xmm2
    let v164: u32;  // ecx
    let v165: u128;  // xmm0
    let v166: u128;  // xmm1
    let v167: u128;  // xmm2
    let v168: core::option::Option<char>;  // rax
    let v171: u64;  // rdx
    let v172: u128;  // xmm0
    let v173: u128;  // xmm1
    let v174: u128;  // xmm2
    let v175: core::option::Option<char>;  // rax
    let v180: u32;  // ebp
    let v181: u64;  // rax
    let v182: void*;  // rdx
    let v185: u64;  // rbx
    let v186: void*;  // rdx
    let v187: u32;  // ebx
    let v188: u8;  // bpl
    let v189: u8;  // r15b
    let v190: u8;  // al
    let v191: u64;  // r14
    let v192: u8;  // al
    let v193: u8;  // al
    let v194: u8;  // r15b
    let v198: u32;  // [bp-0x294]

    v128 = a1;
    v129 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "context") as i32;
    v38 = uu_ls::extract_format(a1);
    v3 = uu_ls::extract_files(a1) as i8;
    v0 = 1;
    v43 = v37;
    if v43 != 1 {
        v115 = v130;
        v81 = &anon.8bf1419b86641518549345aedc57e906.6.llvm.11260003342554782039;
        v88 = 1;
        v89 = &anon.8bf1419b86641518549345aedc57e906.7.llvm.11260003342554782039;
        v90 = 1;
        v91 = &anon.8bf1419b86641518549345aedc57e906.8.llvm.11260003342554782039;
        v92 = 15;
        v93 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.32.llvm.16502254941234113161;
        v95 = 9;
        *(&v36 as &&u8) = &v81;
        v45 = &v96;
        v46 = a1;
        v48 = 0;
        v52 = 0;
        v0 = 1;
        v43 = v37;
        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::adapters::flatten::FlattenCompat<I,U>::iter_try_fold(&v38, &v115) as i32, a1) {
            v81 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "1");
            v43 = v37;
            if v81.field_0 {
                v46 = v81.field_16;
                v36 = *(&v81.field_0 as &i128);
                v43 = v37;
                if clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "1") as i8 == 2 {
                    if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v38, &v115), a1) {
                        v43 = v37;
                    } else {
                        v43 = v37;
                    }
                }
            }
LABEL_5203e8:
            v0 = 2;
            goto LABEL_5203e8;
        }
    }
    v133 = uu_ls::extract_sort(a1) as i32;
    v134 = uu_ls::extract_time(a1);
    v25 = uu_ls::extract_color(a1) as i8;
    v13 = uu_ls::extract_hyperlink(a1) as i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "block-size", v135);
    v136 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v42);
    v16 = v129;
    v15 = v133;
    v14 = v134;
    if v136 {
        v137 = a1;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "block-size", v135);
        v138 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v42);
        if !v138 {
            core::option::unwrap_failed(); /* do not return */
        }
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v138 + 8) as &i64), *((v138 + 16) as &i64), "si") as i8 {
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v137, "si");
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v137, "block-size", v135);
        v141 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v42);
        if !v141 {
            core::option::unwrap_failed(); /* do not return */
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v141 + 8) as &i64), *((v141 + 16) as &i64), "human-readable") as i8 {
            v128 = v137;
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v137, "kibibytes");
        } else {
            v128 = v137;
LABEL_520578:
            v145 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v128, "human-readable") as i32;
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v128, "kibibytes");
        }
        v4 = std::env::var_os(&v97, "BLOCKSIZE") as i32 & -0x100 | 1;
        v5 = std::env::var_os(&v99, "BLOCK_SIZE") as i32 & -0x100 | 1;
        v4 = v5 & -0x100 | 1;
        v8 = std::env::var_os(&v101, "LS_BLOCK_SIZE") as i32 & -0x100 | 1;
        v5 = v8 & -0x100 | 1;
        v4 = v5 & -0x100 | 1;
        v148 = std::env::var_os(&v118, "POSIXLY_CORRECT") as i32;
        if v136 {
            v8 = v148 & -0x100 | 1;
            v5 = v8 & -0x100 | 1;
            v4 = v5 & -0x100 | 1;
            v44 = std::sys::os_str::bytes::Slice::to_owned(*((v136 + 8) as &i64), *((v136 + 16) as &i64));
            goto LABEL_52066a;
        } else if *(&v101 as &i64) != 0x8000000000000000 {
            v69 = v102;
            v67 = v101;
            v18 = v149;
            v7 = 0;
            v8 = 0;
        } else if *(&v99 as &i64) != 0x8000000000000000 {
            v69 = v100;
            v67 = v99;
            v8 = v69 & -0x100 | 1;
            v7 = 0;
            v18 = 0;
            v17 = v150;
            v5 = 0;
        } else if *(&v97 as &i64) == 0x8000000000000000 {
            v8 = 1;
            v5 = 1;
            v4 = 1;
            v44 = std::sys::os_str::bytes::Slice::to_owned(0x1, None);
LABEL_52066a:
            v69 = *((&v44 as &char + 16) as &i64);
            v67 = v44;
            v8 = v149;
            v7 = 0;
            v18 = 0;
        } else {
            v69 = v98;
            v67 = v97;
            v7 = v69 & -0x100 | 1;
            v18 = 0;
            v8 = v7 & 0xffffffffffffff00 | 1;
            v17 = 0;
            v5 = v8 & -0x100 | 1;
            v4 = 0;
        }
        v73 = v145;
        if !v144 && !v139 && v69 {
            v28 = std::sys::os_str::bytes::Slice::to_string_lossy(v68, v69);
            v81 = uucore::parser::parse_size::parse_size_u64(v30, v31);
            if v81.field_0 as i32 != 3 && v136 {
                v112 = <alloc::string::String as core::clone::Clone>::clone(v136);
                v48 = v117;
                v45 = *(&v112.vec.buf.ptr as &i128);
                v36 = 3;
                *((v27 + 8) as &double) = alloc::boxed::Box<T>::new(&v36);
                *((v27 + 16) as &&u8) = &g_612480;
                *(v27 as &i64) = 0x8000000000000000;
                return a0;
            }
        }
        v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v128, "author") as i8;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v128, "no-group") as i8 {
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v128, "o");
        }
        v156 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v128, "g") as i32;
        v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v128, "numeric-uid-gid") as i8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v128, "width", v135);
        v82 = uu_ls::parse_width(clap_builder::parser::error::MatchesError::unwrap("width", &v44));
        v158 = v82 as i8;
        if v158 != 7 {
            v53 = v94;
            memcpy(&v50, &v198, 16);
            v47 = *((&v82 as &char + 20) as &i128);
            v36 = struct17 {
                field_0: v158
                field_1: v86
            };
            alloc::boxed::Box<T>::new(&v36);
            goto LABEL_520a96;
        }
        v26 = v87;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v128, "hide-control-chars") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v128, "show-control-chars") as i32 {
            *(&v36 as &std::io::stdio::Stdout) = std::io::stdio::stdout();
            v160 = std::sys::pal::unix::io::is_terminal() ^ 1;
        }
        v21 = uu_ls::extract_quoting_style(v128, v160) as i32;
        v2 = uu_ls::extract_indicator_style(v128) as i8;
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v128, "dired") as i8;
        if !((v1 ^ 1) & 1) {
            v83 = uu_ls::parse_time_style(v128);
            v161 = v83.field_0;
            if v161 == 7 {
                v103 = 1;
                memcpy(&v104, &v83, 16);
                v106 = v90;
LABEL_520c0a:
                v74 = 0;
                v79 = 8;
                v80 = 0;
                v6 = v128;
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v128, "ignore-backups") as i8 {
                    glob::Pattern::new(&v42, "*~");
                    v81 = core::result::Result<T,E>::unwrap(&v42, "src/uu/ls/src/ls.rs");
                    v75 = alloc::vec::Vec<T,A>::push(&v81);
                    glob::Pattern::new(&v42, ".*~");
                    v81 = core::result::Result<T,E>::unwrap(&v42, "src/uu/ls/src/ls.rs");
                    v76 = alloc::vec::Vec<T,A>::push(&v81);
                }
                v38 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v6, "ignore");
                v85 = clap_builder::parser::error::MatchesError::unwrap("ignore", &v38);
                v72 = v154;
                v111 = 1;
                v10 = v156 ^ 1;
                v164 = v21;
                v71 = v164 >> 8;
                v22 = v164 >> 16;
                v165 = v84.field_0;
                v166 = v84.field_16;
                v167 = v84.field_32;
                v54 = v84.field_48;
                v51 = v167;
                v48 = v166;
                v45 = v165;
                v56 = v107;
                v57 = v108;
                v58 = v109;
                v59 = v110;
                v61 = v107;
                v62 = v108;
                v63 = v109;
                v65 = v110;
                v38 = 1;
                v55 = 0;
                v60 = 0;
                v113 = v115;
                loop {
                    v168 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v38) as u64;
                    if !v168 {
                        break;
                    }
                    uucore::parser::parse_glob::from_str(&v85, *((v168 + 8) as &i64), *((v168 + 16) as &i64));
                    if v84.field_0 as i64 != 0x8000000000000000 {
                        v122 = v84.field_48;
                        memcpy(&v121, &v84, 16);
                        memcpy(&v120, &v84, 16);
                        memcpy(&v119, &v84, 16);
                        v77 = alloc::vec::Vec<T,A>::push(&v119);
                    } else {
                        v28 = uucore::util_name();
                        v30 = v171;
                        eprint!("{}: warning: ", &v28);
                        v28 = 0;
                        v30 = *((v168 + 8) as &i64);
                        v31 = *((v168 + 16) as &i64);
                        v32 = 1;
                        eprintln!("Invalid pattern for ignore: {}", &v28);
                        v113 = v114;
                        v33 = v34;
                    }
                }
                if v3 == 2 {
                    v38 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v6, "hide");
                    v85 = clap_builder::parser::error::MatchesError::unwrap("hide", &v38);
                    v172 = v85.field_0;
                    v173 = v85.field_16;
                    v174 = v85.field_32;
                    v54 = v85.field_48;
                    v51 = v174;
                    v48 = v173;
                    v45 = v172;
                    v56 = v107;
                    v57 = v108;
                    v58 = v109;
                    v59 = v110;
                    v61 = v107;
                    v62 = v108;
                    v63 = v109;
                    v65 = v110;
                    v38 = 1;
                    v55 = 0;
                    v60 = 0;
                    loop {
                        v175 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v38) as u64;
                        if !v175 {
                            break;
                        }
                        uucore::parser::parse_glob::from_str(&v85, *((v175 + 8) as &i64), *((v175 + 16) as &i64));
                        if v85.field_0 as i64 != 0x8000000000000000 {
                            v126 = v85.field_48;
                            memcpy(&v125, &v85, 16);
                            memcpy(&v124, &v85, 16);
                            memcpy(&v123, &v85, 16);
                            v78 = alloc::vec::Vec<T,A>::push(&v123);
                        } else {
                            v28 = uucore::util_name();
                            v30 = v171;
                            eprint!("{}: warning: ", &v28);
                            v28 = 0;
                            v30 = *((v175 + 8) as &i64);
                            v31 = *((v175 + 16) as &i64);
                            v32 = 1;
                            eprintln!("Invalid pattern for hide: {}", &v28);
                            v113 = v114;
                            v33 = v34;
                        }
                    }
                }
                uu_ls::Config::from::{{closure}}(v6, "zero");
                v181 = uu_ls::Config::from::{{closure}}(v6, "zero");
                uu_ls::Config::from::{{closure}}(v6, "zero");
                v185 = uu_ls::Config::from::{{closure}}(v6, "zero");
                v40 = struct88 {
                    field_0: v6
                    field_8: &anon.3f7e092f2ea554bdd060175bd8ea63d9.14.llvm.16502254941234113161
                    field_16: 13
                    field_24: &anon.9938bf1084d6f67f99da587aeb78cfa9.30.llvm.7263189302602752264
                    field_32: 10
                    field_40: &anon.9938bf1084d6f67f99da587aeb78cfa9.28.llvm.7263189302602752264
                    field_48: 6
                    field_56: &anon.9938bf1084d6f67f99da587aeb78cfa9.29.llvm.7263189302602752264
                    field_64: 7
                    field_72: 0
                    field_80: 4
                };
                v187 = (v185 > v186 ? v20 : v21);
                if (v24 & v181 <= v182) {
                    v41 = lscolors::LsColors::from_env();
                    match v41 {
                        None => {
                            v81 = <lscolors::LsColors as core::default::Default>::default();
                        },
                        Some(_) => {
                            memcpy(&v85, &v41, 160);
                        },
                    }
                    memcpy(&v113, &v85, 160);
LABEL_52179c:
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference-command-line") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference-command-line-symlink-to-dir") as i8 {
                        v189 = ~(clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "directory") as i32) & v2 != 3 & v188 != 1;
                    }
                    v190 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "recursive") as i32;
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "reverse") as i8;
                    v35 = 0;
                    *(&v34.field_0 as &i128) = *(&v78.field_0 as &i128);
                    v191 = v6;
                    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v191, "directory") as i8;
                    v22 = v190;
                    v21 = (amd64g_calculate_condition(6, 8, v185, v186, v132) as char ? v23 : 3);
                    v24 = v187;
                    memcpy(&v85, &v113, 160);
                    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v191, "inode") as i8;
                    v192 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v191, "size") as i32;
                    v70 = v180;
                    v31 = v106;
                    v29 = v104;
                    v193 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v191, "group-directories-first") as i32;
                    v194 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v191, "zero") as i8 ? 0 : 10);
                    v46 = 0;
                    *(&v37.field_0 as &i128) = *(&v34.field_0 as &i128);
                    memcpy(&v41 as u64, &v85, 160);
                    v64 = v29;
                    v66 = v31;
                    memcpy(v27, &v40, 208);
                    *((v27 + 208) as &i64) = 1;
                    *((v27 + 216) as &i64) = 1;
                    *((v27 + 224) as &u8) = v12;
                    *((v27 + 225) as &u8) = v72;
                    *((v27 + 226) as &u8) = v10;
                    *((v27 + 227) as &u8) = v11;
                    *((v27 + 228) as &u16) = v26;
                    *((v27 + 230) as &u8) = v23;
                    *((v27 + 231) as &u8) = v0;
                    *((v27 + 232) as &u8) = v20;
                    *((v27 + 233) as &u8) = v9;
                    *((v27 + 234) as &u8) = v192;
                    *((v27 + 235) as &std::io::stdio::Stdout) = v16;
                    *((v27 + 236) as &i8) = 0;
                    *((v27 + 237) as &u8) = v193;
                    *((v27 + 238) as &u8) = v1;
                    *((v27 + 239) as &u8) = v13;
                    *((v27 + 240) as &u8) = v3;
                    *((v27 + 241) as &u8) = v73;
                    *((v27 + 242) as &u8) = v189;
                    *((v27 + 243) as &u8) = v14;
                    *((v27 + 244) as &u8) = v2;
                    *((v27 + 245) as &u8) = v24;
                    *((v27 + 246) as &u8) = v71;
                    *((v27 + 247) as &u8) = v21;
                    *((v27 + 248) as &u8) = v70;
                    *((v27 + 249) as &u8) = v15;
                    *((v27 + 250) as &u8) = v194;
                } else {
                    v113 = 0x8000000000000000;
                    if !v1 || !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "zero") as i8 {
                        goto LABEL_52179c;
                    }
                    v36 = 4;
                    *((v27 + 8) as &double) = alloc::boxed::Box<T>::new(&v36);
                    *((v27 + 16) as &&u8) = &g_612480;
                    *(v27 as &i64) = 0x8000000000000000;
                }
            } else {
                v162 = *(&(&v83.field_0)[1] as &i128);
                v163 = *(&v83.field_16 as &i128);
                v116 = v83.field_1;
                v112 = v162;
                v52 = v83.field_32;
                v49 = v163;
                v36 = struct17 {
                    field_0: v161
                    field_1: v112
                };
                alloc::boxed::Box<T>::new(&v36);
LABEL_520a96:
                *((v27 + 8) as &u64) = v159;
                *((v27 + 16) as &&u8) = &g_612480;
                *(v27 as &i64) = 0x8000000000000000;
            }
        } else {
            v103 = 1;
            v104 = 9223372036854775810;
            v104 = v105 & 0xffffffffffffffff0000000000000000 | 9223372036854775810;
            goto LABEL_520c0a;
        }
        return a0;
    } else {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "si");
        goto LABEL_520578;
    }
}
