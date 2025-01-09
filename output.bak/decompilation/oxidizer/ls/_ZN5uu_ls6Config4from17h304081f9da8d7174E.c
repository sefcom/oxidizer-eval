fn uu_ls::Config::from(a0: &Result<struct43, struct16>, a1: &struct56) -> u64 {
    let v0: i8;  // [sp-0x454]
    let v1: i8;  // [sp-0x453]
    let v2: i8;  // [sp-0x452]
    let v3: i8;  // [sp-0x451]
    let v4: i32;  // [sp-0x450]
    let v5: i32;  // [sp-0x44c]
    let v6: i64;  // [sp-0x448]
    let v7: i32;  // [sp-0x43c]
    let v8: i32;  // [sp-0x438]
    let v9: i8;  // [sp-0x434]
    let v10: i8;  // [sp-0x433]
    let v11: i8;  // [sp-0x432]
    let v12: i8;  // [sp-0x431]
    let v13: i8;  // [sp-0x430]
    let v14: i8;  // [sp-0x42f]
    let v15: i8;  // [sp-0x42e]
    let v16: i8;  // [sp-0x42d]
    let v17: i32;  // [sp-0x42c]
    let v18: i32;  // [sp-0x428]
    let v19: i8;  // [bp-0x424]
    let v20: i32;  // [sp-0x420]
    let v21: i32;  // [bp-0x41c]
    let v22: i8;  // [bp-0x418]
    let v23: i16;  // [bp-0x412]
    let v24: i64;  // [sp-0x408], Other Possible Types: struct24
    let v25: i64;  // [sp-0x400]
    let v26: i64;  // [sp-0x3f8]
    let v27: i8;  // [sp-0x3f0]
    let v28: struct16;  // [sp-0x3e8], Other Possible Types: i128
    let v29: i64;  // [sp-0x3d8]
    let v30: i8;  // [sp-0x3c8], Other Possible Types: Result<struct40, struct8>, struct56, struct24, struct40, struct168, struct88, Option<struct160>
    let v31: i128;  // [bp-0x3c7]
    let v32: i64;  // [sp-0x3c0]
    let v33: i64;  // [bp-0x3b8]
    let v34: i128;  // [sp-0x3b0]
    let v35: i128;  // [bp-0x3a8]
    let v36: i128;  // [bp-0x3a0]
    let v37: i64;  // [bp-0x398]
    let v38: i128;  // [bp-0x390]
    let v39: i64;  // [sp-0x380]
    let v40: i128;  // [bp-0x378]
    let v41: i128;  // [bp-0x368]
    let v42: i128;  // [bp-0x358]
    let v43: i64;  // [sp-0x348]
    let v44: i64;  // [sp-0x340]
    let v45: i128;  // [bp-0x338]
    let v46: i128;  // [bp-0x328]
    let v47: i128;  // [bp-0x318]
    let v48: struct24;  // [sp-0x310]
    let v49: i64;  // [sp-0x308]
    let v50: i128;  // [sp-0x2f8]
    let v51: i64;  // [sp-0x2e8]
    let v52: i32;  // [sp-0x2e0]
    let v53: i32;  // [sp-0x2dc]
    let v54: i32;  // [sp-0x2d8]
    let v55: i32;  // [sp-0x2d4]
    let v56: struct16;  // [sp-0x2d0], Other Possible Types: i64
    let v57: i64;  // [sp-0x2c8]
    let v58: i64;  // [sp-0x2c0]
    let v59: i400;  // [sp-0x2b8], Other Possible Types: Result<struct49, struct24>, struct56, struct64, struct153, struct57, Option<struct24>
    let v60: i64;  // [sp-0x2b0]
    let v61: i64;  // [sp-0x2a8]
    let v62: i64;  // [sp-0x2a0]
    let v63: i64;  // [sp-0x298]
    let v64: i64;  // [sp-0x290]
    let v65: i64;  // [sp-0x288]
    let v66: i64;  // [sp-0x280]
    let v67: i8;  // [bp-0x278]
    let v68: i8;  // [bp-0x218]
    let v69: i8;  // [bp-0x208]
    let v70: i8;  // [bp-0x200]
    let v71: i8;  // [bp-0x1f0]
    let v72: i8;  // [bp-0x1e8]
    let v73: i8;  // [bp-0x1d8]
    let v74: i64;  // [sp-0x1d0]
    let v75: i64;  // [bp-0x1c8]
    let v76: i64;  // [sp-0x1b8]
    let v77: i8;  // [bp-0x1a8]
    let v78: i8;  // [bp-0x198]
    let v79: i8;  // [bp-0x188]
    let v80: i8;  // [bp-0x178]
    let v81: i64;  // [sp-0x170]
    let v82: i64;  // [sp-0x168]
    let v83: i128;  // [bp-0x159]
    let v84: i8;  // [bp-0xc0]
    let v85: i128;  // [sp-0xa8]
    let v86: i128;  // [sp-0x98]
    let v87: i128;  // [sp-0x88]
    let v88: i64;  // [sp-0x78]
    let v89: i128;  // [sp-0x68]
    let v90: i128;  // [sp-0x58]
    let v91: i128;  // [sp-0x48]
    let v92: i64;  // [sp-0x38]
    let v95: i64;  // rbp
    let v96: i64;  // rbx
    let v99: i128;  // xmm0
    let v100: i256;  // ymm0
    let v101: i256;  // ymm0
    let v102: i256;  // ymm0
    let v103: i64;  // cc_ndep
    let v104: i64;  // r12
    let v105: i64;  // r14
    let v106: i64;  // rbp
    let v107: i64;  // rax
    let v108: i64;  // r12
    let v109: i64;  // 4096
    let v110: i64;  // rax
    let v111: i64;  // rbp
    let v112: i32;  // ebx
    let v116: i128;  // xmm0
    let v117: i256;  // ymm0
    let v118: i64;  // rax
    let v119: i128;  // xmm0
    let v120: i64;  // rax
    let v121: i128;  // xmm0
    let v122: i128;  // xmm0
    let v123: i64;  // r14
    let v124: i64;  // r14
    let v131: i32;  // ebp
    let v138: i32;  // eax
    let v139: i64;  // rax
    let v140: i64;  // rax
    let v141: i8;  // al
    let v142: i128;  // xmm0
    let v143: i128;  // xmm0
    let v144: i128;  // xmm2
    let v146: i32;  // ecx
    let v147: i128;  // xmm0
    let v148: i128;  // xmm1
    let v149: i128;  // xmm2
    let v150: i128;  // xmm0
    let v151: i128;  // xmm1
    let v152: i128;  // xmm2
    let v153: i128;  // xmm0
    let v154: i256;  // ymm0
    let v155: i128;  // xmm1
    let v156: i256;  // ymm1
    let v157: i256;  // ymm1
    let v158: i128;  // xmm2
    let v159: i256;  // ymm2
    let v160: i256;  // ymm2
    let v161: i64;  // rax
    let v162: i64;  // r15
    let v163: i64;  // r12
    let v164: i128;  // xmm0
    let v165: i128;  // xmm1
    let v166: i128;  // xmm2
    let v167: i64;  // rdx
    let v168: i128;  // xmm0
    let v169: i128;  // xmm1
    let v170: i128;  // xmm2
    let v171: i128;  // xmm0
    let v172: i128;  // xmm1
    let v173: i128;  // xmm2
    let v174: i128;  // xmm0
    let v175: i256;  // ymm0
    let v176: i128;  // xmm1
    let v177: i256;  // ymm1
    let v178: i128;  // xmm2
    let v179: i256;  // ymm2
    let v180: i64;  // rax
    let v181: i64;  // r15
    let v182: i64;  // r12
    let v183: i128;  // xmm0
    let v184: i128;  // xmm1
    let v185: i128;  // xmm2
    let v187: i64;  // rax
    let v188: i64;  // rax
    let v189: i64;  // rbp
    let v191: i64;  // rax
    let v192: i64;  // rax
    let v194: i64;  // rax
    let v195: i64;  // rax
    let v196: i32;  // ecx
    let v197: i64;  // rbx
    let v198: i64;  // rax
    let v200: i64;  // rax
    let v201: i32;  // ebx
    let v202: i32;  // r12d
    let v203: i32;  // ebp
    let v204: i64;  // rcx
    let v205: i8;  // r15b
    let v206: i64;  // r14
    let v210: i64;  // r14

    v30 = uu_ls::extract_format(a1) as u128;
    v95 = v30;
    v96 = v32;
    v3 = uu_ls::extract_files(a1) as i8;
    v0 = 1;
    if v95 != 1 {
        v82 = 0;
        v59 = &anon.8bf1419b86641518549345aedc57e906.6.llvm.11260003342554782039;
        v60 = 1;
        v61 = &anon.8bf1419b86641518549345aedc57e906.7.llvm.11260003342554782039;
        v62 = 1;
        v63 = &anon.8bf1419b86641518549345aedc57e906.8.llvm.11260003342554782039;
        v64 = 15;
        v65 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.32.llvm.16502254941234113161;
        v66 = 9;
        v30 = &v59;
        v32 = &v67;
        v33 = a1;
        v34 = 0;
        v37 = 0;
        v0 = 1;
        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::adapters::flatten::FlattenCompat<I,U>::iter_try_fold(&v30, &v82) as i32) {
            v59 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "1");
            if v59 {
                v33 = v61;
                v99 = v59;
                v101 = v100 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v99;
                v30 = v99;
                if clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "1") as i8 == 2 {
                    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v30, &v82)) {
                        v95 = 2;
                    } else {
                        v95 = v95 & 4294967295 & 4294967295;
                    }
                }
            }
LABEL_5203e8:
            v0 = v95;
            goto LABEL_5203e8;
        }
    }
    v104 = uu_ls::extract_time(a1) as i32;
    v22 = uu_ls::extract_color(a1) as i8;
    v13 = uu_ls::extract_hyperlink(a1) as i8;
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "block-size");
    v105 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v30);
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "context") as i32;
    v15 = uu_ls::extract_sort(a1) as i32;
    v14 = v104;
    if !v105 {
        v108 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "si") as i32;
        v109 = a1;
LABEL_520578:
        v112 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v109, "human-readable") as i32;
        v111 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v109, "kibibytes") as i32;
        if v108 {
            v112 = 2;
        }
    } else {
        v106 = a1;
        v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "block-size");
        v107 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v30);
        if !v107 {
            core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
        }
        v108 = v104 | -0x100 | 1;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v107 + 8) as &i64), *((v107 + 16) as &i64), "si") as i8 {
            v108 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "si") as i32;
        }
        v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v106, "block-size");
        v110 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v30);
        if !v110 {
            core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
        }
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v110 + 8) as &i64), *((v110 + 16) as &i64), "human-readable") as i8 {
            v109 = v106;
            goto LABEL_520578;
        } else {
            v111 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "kibibytes") as i32;
            v112 = v108 + 1;
        }
    }
    v4 = (std::env::var_os("BLOCKSIZE") | -0x100 | 1) as u32;
    v5 = (std::env::var_os("BLOCK_SIZE") | -0x100 | 1) as u32;
    v4 = v5 | -0x100 | 1;
    v8 = (std::env::var_os("LS_BLOCK_SIZE") | -0x100 | 1) as u32;
    v5 = v8 | -0x100 | 1;
    v4 = v5 | -0x100 | 1;
    if v105 {
        v8 = (std::env::var_os("POSIXLY_CORRECT") | -0x100 | 1) as u32;
        v5 = v8 | -0x100 | 1;
        v4 = v5 | -0x100 | 1;
        v30 = std::sys::os_str::bytes::Slice::to_owned(*((v105 + 8) as &i64), *((v105 + 16) as &i64));
    } else {
        if v72 != 0x8000000000000000 {
            v51 = v73;
            v116 = v72;
            v117 = v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v116;
            v50 = v116;
            v118 = v51 | -0x100 | 1;
            v18 = v118;
            v7 = 0;
            v8 = 0;
            goto LABEL_520737;
        }
        if v70 != 0x8000000000000000 {
            v51 = v71;
            v119 = v70;
            v117 = v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v119;
            v50 = v119;
            v8 = v51 | -0x100 | 1;
            v7 = 0;
            v18 = 0;
            v120 = v8 | -0x100 | 1;
            v17 = v120;
            v5 = 0;
            goto LABEL_520745;
        }
        if v68 != 0x8000000000000000 {
            v51 = v69;
            v121 = v68;
            v117 = v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v121;
            v50 = v121;
            v7 = v51 | -0x100 | 1;
            v18 = 0;
            v8 = v7 | -0x100 | 1;
            v17 = 0;
            v5 = v8 | -0x100 | 1;
            v4 = 0;
            goto LABEL_52074b;
        } else {
            v8 = -255;
            v5 = -255;
            v4 = -255;
            v30 = std::sys::os_str::bytes::Slice::to_owned(0x1, 0);
        }
    }
    v51 = *((&v30 as &char + 16) as &i64);
    v122 = v30;
    v117 = v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v122;
    v50 = v122;
    v118 = v51 | -0x100 | 1;
    v8 = v118;
    v7 = 0;
    v18 = 0;
LABEL_520737:
    v17 = 0;
    v120 = v118 | -0x100 | 1;
    v5 = v120;
LABEL_520745:
    v4 = v120 | -0x100 | 1;
LABEL_52074b:
    v55 = v112;
    if v84 != 0x8000000000000000 {
        v124 = ((v111 & 4294967295 & 4294967295) * 0x200 & 4294967295) + 0x200;
    } else {
        v123 = (1 ? 1000 : 0x400);
    }
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "author") as i8;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "no-group") as i8 {
        v131 = 0;
    } else {
        v131 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "o") as i32 | -0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "o") as i32 ^ 1;
    }
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "numeric-uid-gid") as i8;
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v106, "width");
    v59 = uu_ls::parse_width(clap_builder::parser::error::MatchesError::unwrap(&anon.3f7e092f2ea554bdd060175bd8ea63d9.17.llvm.16502254941234113161, 5, &v30)) as u448;
    match v59 {
        Ok(_) => {
            v30 = struct56 {
                field_0: v134
                field_1: v135
                field_2: v136
                field_4: *((&v59 as &char + 4) as &i128)
                field_20: *((&v59 as &char + 20) as &i128)
                field_36: *((&v59 as &char + 36) as &i128)
                field_52: *((&v59 as &char + 52) as &i32)
            };
            alloc::boxed::Box<T>::new(&v30);
            goto LABEL_520a96;
        },
        Err(v23) => {
        },
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "hide-control-chars") as i8 {
        v138 = 0;
    } else {
        v139 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "show-control-chars");
        v138 = v139 | -0x100 | 1;
        if !v139 {
            *(&v30 as &long long) = std::io::stdio::stdout();
            v140 = std::sys::pal::unix::io::is_terminal();
            v138 = v140 | -0x100 | v140 ^ 1;
        }
    }
    v19 = v138;
    v20 = uu_ls::extract_quoting_style(v106, v138) as i32;
    v2 = uu_ls::extract_indicator_style(v106) as i8;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "dired") as i8;
    if ((v1 ^ 1) & v0 != 1) {
        v74 = v124;
        v75 = 9223372036854775810;
        goto LABEL_520c0a;
    }
    v59 = uu_ls::parse_time_style(v106);
    v141 = v59;
    if v30 != 7 {
        v143 = *((&v59 as &char + 1) as &i128);
        v144 = *((&v59 as &char + 32) as &i128);
        v83 = *((&v59 as &char + 16) as &i128);
        v82 = v143;
        v37 = v65;
        v35 = v144;
        v31 = v82;
        v33 = *((&v82 as &char + 15) as &i128);
        v30 = v141;
        alloc::boxed::Box<T>::new(&v30);
LABEL_520a96:
        return Err(struct16 {
            field_0: v137
            field_8: &g_612480
        });
    }
    v74 = v124;
    v142 = *((&v59 as &char + 8) as &i128);
    v117 = v117 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v142;
    v75 = v142;
    v76 = v62;
LABEL_520c0a:
    v56 = 0;
    v57 = 8;
    v58 = 0;
    v6 = v106;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "ignore-backups") as i8 {
        v30 = glob::Pattern::new(&g_434ef9);
        v59 = core::result::Result<T,E>::unwrap(&v30, "src/uu/ls/src/ls.rs");
        v56 = alloc::vec::Vec<T,A>::push(&v59);
        v30 = glob::Pattern::new(&g_434efb);
        v59 = core::result::Result<T,E>::unwrap(&v30, "src/uu/ls/src/ls.rs");
        v56 = alloc::vec::Vec<T,A>::push(&v59);
    }
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v6, "ignore");
    v59 = clap_builder::parser::error::MatchesError::unwrap("ignore", &v30);
    v54 = v131;
    v81 = 1;
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "g") as i32 ^ 1;
    v146 = v20;
    v53 = v146 >> 8;
    v21 = v146 >> 16;
    v147 = v59;
    v148 = *((&v59 as &char + 16) as &i128);
    v149 = *((&v59 as &char + 32) as &i128);
    v38 = *((&v59 as &char + 48) as &i128);
    v36 = v149;
    v34 = v148;
    v32 = v147;
    v150 = v77;
    v151 = v78;
    v152 = v79;
    v40 = v150;
    v41 = v151;
    v42 = v152;
    v43 = v80;
    v153 = v77;
    v154 = v117 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v147 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v150 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v153;
    v155 = v78;
    v157 = v156 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v148 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v151 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v155;
    v158 = v79;
    v160 = v159 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v149 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v152 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v158;
    v45 = v153;
    v46 = v155;
    v47 = v158;
    v49 = v80;
    v30 = 1;
    v39 = 0;
    v44 = 0;
    loop {
        v161 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v30);
        if !v161 {
            break;
        }
        v162 = *((v161 + 8) as &i64);
        v163 = *((v161 + 16) as &i64);
        v59 = uucore::parser::parse_glob::from_str(v162, v163);
        if v59 != 0x8000000000000000 {
            v88 = v65;
            v164 = v59;
            v154 = v154 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v164;
            v165 = *((&v59 as &char + 16) as &i128);
            v157 = v157 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v165;
            v166 = *((&v59 as &char + 32) as &i128);
            v160 = v160 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v166;
            v87 = v166;
            v86 = v165;
            v85 = v164;
            v56 = alloc::vec::Vec<T,A>::push(&v85);
        } else {
            v24 = uucore::util_name();
            v25 = v167;
            eprint!("{:?}: warning: ", &v24);
            v24 = 0;
            v25 = v162;
            v26 = v163;
            v27 = 1;
            eprintln!("Invalid pattern for ignore: {:?}", &v24);
        }
    }
    if v3 == 2 {
        v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v6, "hide");
        v59 = clap_builder::parser::error::MatchesError::unwrap("hide", &v30);
        v168 = v59;
        v169 = *((&v59 as &char + 16) as &i128);
        v170 = *((&v59 as &char + 32) as &i128);
        v38 = *((&v59 as &char + 48) as &i128);
        v36 = v170;
        v34 = v169;
        v32 = v168;
        v171 = v77;
        v172 = v78;
        v173 = v79;
        v40 = v171;
        v41 = v172;
        v42 = v173;
        v43 = v80;
        v174 = v77;
        v175 = v154 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v168 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v171 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v174;
        v176 = v78;
        v177 = v157 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v169 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v172 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v176;
        v178 = v79;
        v179 = v160 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v170 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v173 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v178;
        v45 = v174;
        v46 = v176;
        v47 = v178;
        v49 = v80;
        v30 = 1;
        v39 = 0;
        v44 = 0;
        loop {
            v180 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v30);
            if !v180 {
                break;
            }
            v181 = *((v180 + 8) as &i64);
            v182 = *((v180 + 16) as &i64);
            v59 = uucore::parser::parse_glob::from_str(v181, v182);
            if v59 != 0x8000000000000000 {
                v92 = v65;
                v183 = v59;
                v175 = v175 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v183;
                v184 = *((&v59 as &char + 16) as &i128);
                v177 = v177 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v184;
                v185 = *((&v59 as &char + 32) as &i128);
                v179 = v179 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v185;
                v91 = v185;
                v90 = v184;
                v89 = v183;
                v56 = alloc::vec::Vec<T,A>::push(&v89);
            } else {
                v24 = uucore::util_name();
                v25 = v167;
                eprint!("{:?}: warning: ", &v24);
                v24 = 0;
                v25 = v181;
                v26 = v182;
                v27 = 1;
                eprintln!("Invalid pattern for hide: {:?}", &v24);
            }
        }
    }
    v30 = struct168 {
        field_0: v6
        field_8: &anon.8bf1419b86641518549345aedc57e906.3.llvm.11260003342554782039
        field_16: 1
        field_24: &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039
        field_32: 1
        field_40: &anon.8bf1419b86641518549345aedc57e906.5.llvm.11260003342554782039
        field_48: 1
        field_56: &anon.8bf1419b86641518549345aedc57e906.1.llvm.11260003342554782039
        field_64: 4
        field_72: &anon.8bf1419b86641518549345aedc57e906.7.llvm.11260003342554782039
        field_80: 1
        field_88: &anon.8bf1419b86641518549345aedc57e906.6.llvm.11260003342554782039
        field_96: 1
        field_104: &anon.8bf1419b86641518549345aedc57e906.8.llvm.11260003342554782039
        field_112: 15
        field_120: &anon.8bf1419b86641518549345aedc57e906.0.llvm.11260003342554782039
        field_128: 1
        field_136: &anon.3f7e092f2ea554bdd060175bd8ea63d9.20.llvm.16502254941234113161
        field_144: 6
        field_152: 0
        field_160: 9
    };
    v187 = core::iter::traits::iterator::Iterator::reduce(&v30);
    if !v187 {
        v188 = v187;
    } else {
        v188 = v167;
    }
    v189 = (!(uu_ls::Config::from::{{closure}}(v6, "zero") <= v188) ? 2 - (v0 == 1) : v0);
    v30 = struct40 {
        field_0: v6
        field_8: &anon.3f7e092f2ea554bdd060175bd8ea63d9.28.llvm.16502254941234113161
        field_16: 5
        field_24: 0
        field_32: 1
    };
    v191 = core::iter::traits::iterator::Iterator::reduce(&v30);
    if !v191 {
        v192 = v191;
    } else {
        v192 = v167;
    }
    *(&v30.field_0 as &struct56) = struct56 {
        field_0: v6
        field_8: &anon.3f7e092f2ea554bdd060175bd8ea63d9.15.llvm.16502254941234113161
        field_16: 18
        field_24: &anon.3f7e092f2ea554bdd060175bd8ea63d9.16.llvm.16502254941234113161
        field_32: 18
        field_40: 0
        field_48: 2
    };
    v194 = core::iter::traits::iterator::Iterator::reduce(&v30);
    if !v194 {
        v195 = v194;
    } else {
        v195 = v167;
    }
    v196 = v19;
    if uu_ls::Config::from::{{closure}}(v6, "zero") > v195 {
        v196 = 1;
    }
    v19 = v196;
    v197 = uu_ls::Config::from::{{closure}}(v6, "zero");
    v30 = struct88 {
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
    v198 = core::iter::traits::iterator::Iterator::reduce(&v30);
    if !v198 {
        v200 = v198;
    } else {
        v200 = v167;
    }
    v201 = (!(v197 <= v200) ? v19 : v20);
    v202 = (amd64g_calculate_condition(6, 8, v197, v200, v103) as char ? v21 : 3);
    if !(v22 & uu_ls::Config::from::{{closure}}(v6, "zero") <= v192) {
        v82 = 0x8000000000000000;
        if !v1 {
            goto LABEL_521772;
        }
    } else {
        v30 = lscolors::LsColors::from_env();
        match v30 {
            Some(_) => {
                memcpy(&v59, &v30, 160);
            },
            None => {
                v59 = <lscolors::LsColors as core::default::Default>::default();
            },
        }
        memcpy(&v82, &v59, 160);
        if !v1 {
LABEL_521772:
            v203 = (!uu_ls::dired::is_dired_arg_present() as i8 ? v189 : 1);
            goto LABEL_521785;
        }
    }
    v203 = v189 | -0x100 | 1;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "zero") as i8 {
        v30 = 4;
        v204 = a0;
        *((v204 + 8) as &double) = alloc::boxed::Box<T>::new(&v30);
        *((v204 + 16) as &&i64) = &g_612480;
        *(v204 as &i64) = 0x8000000000000000;
    }
LABEL_521785:
    v205 = 3;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference") as i8 {
        v205 = 3;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference-command-line") as i8 {
            v205 = 3;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference-command-line-symlink-to-dir") as i8 {
                v205 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "directory") & 4294967295 & 4294967295 | -0x100;
            }
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "reverse") as i8;
    v29 = v58;
    v28 = v56;
    v206 = v6;
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v206, "directory") as i8;
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "recursive") as i32;
    v20 = v202;
    v22 = v201;
    memcpy(&v59, &v82, 160);
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v206, "inode") as i8;
    v52 = v203;
    v26 = v76;
    v24 = v75;
    v33 = v29;
    v30 = v28;
    memcpy(&v30, &v59, 160);
    v48 = v24;
    v210 = a0;
    memcpy(v210, &v30, 208);
    *((v210 + 208) as &i64) = v81;
    *((v210 + 216) as &i64) = v74;
    *((v210 + 224) as &i8) = v12;
    *((v210 + 225) as &i8) = v54;
    *((v210 + 226) as &i8) = v10;
    *((v210 + 227) as &i8) = v11;
    *((v210 + 228) as &i16) = v23;
    *((v210 + 230) as &i8) = v21;
    *((v210 + 231) as &i8) = v0;
    *((v210 + 232) as &i8) = v19;
    *((v210 + 233) as &i8) = v9;
    *((v210 + 234) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v206, "size") as i32;
    *((v210 + 235) as &i8) = v16;
    *((v210 + 236) as &i8) = 0;
    *((v210 + 237) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v206, "group-directories-first") as i32;
    *((v210 + 238) as &i8) = v1;
    *((v210 + 239) as &i8) = v13;
    *((v210 + 240) as &i8) = v3;
    *((v210 + 241) as &i8) = v55;
    *((v210 + 242) as &i8) = v205;
    *((v210 + 243) as &i8) = v14;
    *((v210 + 244) as &i8) = v2;
    *((v210 + 245) as &i8) = v22;
    *((v210 + 246) as &i8) = v53;
    *((v210 + 247) as &i8) = v20;
    *((v210 + 248) as &i8) = v52;
    *((v210 + 249) as &i8) = v15;
    *((v210 + 250) as &i32) = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v206, "zero") as i8 ? 0 : 10);
}
