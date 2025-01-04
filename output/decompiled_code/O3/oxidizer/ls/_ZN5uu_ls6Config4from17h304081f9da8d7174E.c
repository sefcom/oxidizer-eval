fn uu_ls::Config::from(a0: &Result<struct43, struct24>, a1: &struct56, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
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
    let v19: i32;  // [bp-0x424]
    let v20: i32;  // [sp-0x420]
    let v21: i8;  // [bp-0x41c]
    let v22: i8;  // [bp-0x418]
    let v23: i16;  // [sp-0x412]
    let v24: i128;  // [sp-0x408]
    let v25: i64;  // [sp-0x400]
    let v26: i64;  // [sp-0x3f8]
    let v27: i8;  // [sp-0x3f0]
    let v28: i128;  // [bp-0x3e8]
    let v29: i64;  // [sp-0x3d8]
    let v30: i320;  // [sp-0x3c8], Other Possible Types: Result<struct49, struct32>, struct56, struct24, Option<struct160>
    let v31: i128;  // [bp-0x3c7]
    let v32: i128;  // [sp-0x3c0]
    let v33: i64;  // [bp-0x3b8]
    let v34: i64;  // [sp-0x3b0]
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
    let v48: i128;  // [bp-0x310]
    let v49: i64;  // [sp-0x308]
    let v50: i64;  // [sp-0x300]
    let v51: i128;  // [sp-0x2f8]
    let v52: i64;  // [sp-0x2e8]
    let v53: i32;  // [sp-0x2e0]
    let v54: i32;  // [sp-0x2dc]
    let v55: i32;  // [sp-0x2d8]
    let v56: i32;  // [sp-0x2d4]
    let v57: struct16;  // [sp-0x2d0], Other Possible Types: i128
    let v58: i64;  // [sp-0x2c8]
    let v59: i64;  // [sp-0x2c0]
    let v60: i1224;  // [sp-0x2b8], Other Possible Types: Result<struct49, struct32>, struct64, struct56, Option<struct24>, struct153, struct57
    let v61: i64;  // [sp-0x2b0]
    let v62: i64;  // [sp-0x2a8]
    let v63: i64;  // [sp-0x2a0]
    let v64: i64;  // [sp-0x298]
    let v65: i64;  // [sp-0x290]
    let v66: i64;  // [sp-0x288]
    let v67: i64;  // [sp-0x280]
    let v68: i8;  // [bp-0x278]
    let v69: i8;  // [bp-0x218]
    let v70: i8;  // [bp-0x208]
    let v71: i8;  // [bp-0x200]
    let v72: i8;  // [bp-0x1f0]
    let v73: i8;  // [bp-0x1e8]
    let v74: i8;  // [bp-0x1d8]
    let v75: i64;  // [sp-0x1d0]
    let v76: i128;  // [bp-0x1c8]
    let v77: i64;  // [sp-0x1b8]
    let v78: i8;  // [bp-0x1a8]
    let v79: i8;  // [bp-0x198]
    let v80: i8;  // [bp-0x188]
    let v81: i8;  // [bp-0x178]
    let v82: i64;  // [sp-0x170]
    let v83: i64;  // [sp-0x168]
    let v84: i128;  // [bp-0x159]
    let v85: i8;  // [bp-0xc0]
    let v86: i128;  // [sp-0xa8]
    let v87: i128;  // [sp-0x98]
    let v88: i128;  // [sp-0x88]
    let v89: i64;  // [sp-0x78]
    let v90: i128;  // [sp-0x68]
    let v91: i128;  // [sp-0x58]
    let v92: i128;  // [sp-0x48]
    let v93: i64;  // [sp-0x38]
    let v96: i64;  // rbp
    let v97: i64;  // rbx
    let v100: i128;  // xmm0
    let v101: i256;  // ymm0
    let v102: i256;  // ymm0
    let v103: i64;  // rdx
    let v104: i256;  // ymm0
    let v105: i64;  // cc_ndep
    let v106: i64;  // r12
    let v107: i64;  // r14
    let v108: i64;  // rbp
    let v109: i64;  // rax
    let v110: i64;  // r12
    let v111: i64;  // 4096
    let v112: i64;  // rax
    let v113: i64;  // rbp
    let v114: i32;  // ebx
    let v118: i128;  // xmm0
    let v119: i256;  // ymm0
    let v120: i64;  // rax
    let v121: i128;  // xmm0
    let v122: i64;  // rax
    let v123: i128;  // xmm0
    let v124: i128;  // xmm0
    let v125: i64;  // r14
    let v126: i64;  // r14
    let v133: i32;  // ebp
    let v136: i64;  // rcx
    let v137: i64;  // r8
    let v138: i64;  // r9
    let v140: i64;  // rax
    let v141: i32;  // eax
    let v142: i64;  // rax
    let v143: i64;  // rax
    let v144: i8;  // al
    let v145: i128;  // xmm0
    let v146: i128;  // xmm0
    let v147: i128;  // xmm2
    let v148: i64;  // rcx
    let v149: i32;  // ecx
    let v150: i128;  // xmm0
    let v151: i128;  // xmm1
    let v152: i128;  // xmm2
    let v153: i128;  // xmm0
    let v154: i128;  // xmm1
    let v155: i128;  // xmm2
    let v156: i128;  // xmm0
    let v157: i256;  // ymm0
    let v158: i128;  // xmm1
    let v159: i256;  // ymm1
    let v160: i256;  // ymm1
    let v161: i128;  // xmm2
    let v162: i256;  // ymm2
    let v163: i256;  // ymm2
    let v164: i64;  // rsi
    let v165: i64;  // rdx
    let v166: i64;  // rax
    let v167: i64;  // r15
    let v168: i64;  // r12
    let v169: i128;  // xmm0
    let v170: i128;  // xmm1
    let v171: i128;  // xmm2
    let v172: i128;  // xmm0
    let v173: i128;  // xmm1
    let v174: i128;  // xmm2
    let v175: i128;  // xmm0
    let v176: i128;  // xmm1
    let v177: i128;  // xmm2
    let v178: i128;  // xmm0
    let v179: i256;  // ymm0
    let v180: i128;  // xmm1
    let v181: i256;  // ymm1
    let v182: i128;  // xmm2
    let v183: i256;  // ymm2
    let v184: i64;  // rsi
    let v185: i64;  // rdx
    let v186: i64;  // rax
    let v187: i64;  // r15
    let v188: i64;  // r12
    let v189: i128;  // xmm0
    let v190: i128;  // xmm1
    let v191: i128;  // xmm2
    let v193: i64;  // rsi
    let v194: i64;  // rax
    let v195: i64;  // rax
    let v196: i64;  // rbp
    let v198: i64;  // rax
    let v199: i64;  // rax
    let v201: i64;  // rax
    let v202: i64;  // rax
    let v203: i32;  // ecx
    let v204: i64;  // rbx
    let v205: i64;  // rax
    let v206: i64;  // rcx
    let v207: i8;  // cl
    let v208: i64;  // rax
    let v209: i32;  // ebx
    let v210: i32;  // r12d
    let v211: i32;  // ebp
    let v212: i64;  // rcx
    let v213: i8;  // r15b
    let v214: i64;  // r14
    let v218: i64;  // r14

    v30 = uu_ls::extract_format(a1);
    v96 = v30;
    v97 = v32;
    v3 = uu_ls::extract_files(a1) as i8;
    v0 = 1;
    if v96 != 1 {
        v83 = 0;
        v60 = &anon.8bf1419b86641518549345aedc57e906.6.llvm.11260003342554782039;
        v61 = 1;
        v62 = &anon.8bf1419b86641518549345aedc57e906.7.llvm.11260003342554782039;
        v63 = 1;
        v64 = &anon.8bf1419b86641518549345aedc57e906.8.llvm.11260003342554782039;
        v65 = 15;
        v66 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.32.llvm.16502254941234113161;
        v67 = 9;
        v30 = &v60;
        v32 = &v68;
        v33 = a1;
        v34 = 0;
        v37 = 0;
        v0 = 1;
        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::adapters::flatten::FlattenCompat<I,U>::iter_try_fold(&v30, &v83, v83) as i32) {
            v60 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "1");
            if v60 {
                v33 = v62;
                v100 = v60;
                v102 = v101 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v100;
                v30 = v100;
                if clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "1") as i8 == 2 {
                    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v30, &v83, v103) as i32) {
                        v96 = 2;
                    } else {
                        v96 = v96 & 4294967295 & 4294967295;
                    }
                }
            }
LABEL_5203e8:
            v0 = v96;
            goto LABEL_5203e8;
        }
    }
    v106 = uu_ls::extract_time(a1);
    v22 = uu_ls::extract_color(a1);
    v13 = uu_ls::extract_hyperlink(a1) as i8;
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "block-size");
    v107 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v30);
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "context") as i32;
    v15 = uu_ls::extract_sort(a1);
    v14 = v106;
    if !v107 {
        v110 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "si") as i32;
        v111 = a1;
        goto LABEL_520578;
    } else {
        v108 = a1;
        v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "block-size");
        v109 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v30);
        if !v109 {
            core::option::unwrap_failed(); /* do not return */
        }
        v110 = v106 | -0x100 | 1;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v109 + 8) as &i64), *((v109 + 16) as &i64), "si") as i8 {
            v110 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v108, "si") as i32;
        }
        v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v108, "block-size");
        v112 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v30);
        if !v112 {
            core::option::unwrap_failed(); /* do not return */
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v112 + 8) as &i64), *((v112 + 16) as &i64), "human-readable") as i8 {
            v113 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v108, "kibibytes") as i32;
            v114 = v110 + 1;
        } else {
            v111 = v108;
LABEL_520578:
            v114 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v111, "human-readable") as i32;
            v113 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v111, "kibibytes") as i32;
            if v110 {
                v114 = 2;
            }
        }
        v4 = (std::env::var_os("BLOCKSIZE") | -0x100 | 1) as u32;
        v5 = (std::env::var_os("BLOCK_SIZE") | -0x100 | 1) as u32;
        v4 = v5 | -0x100 | 1;
        v8 = (std::env::var_os("LS_BLOCK_SIZE") | -0x100 | 1) as u32;
        v5 = v8 | -0x100 | 1;
        v4 = v5 | -0x100 | 1;
        if v107 {
            v8 = (std::env::var_os("POSIXLY_CORRECT") | -0x100 | 1) as u32;
            v5 = v8 | -0x100 | 1;
            v4 = v5 | -0x100 | 1;
            v30 = std::sys::os_str::bytes::Slice::to_owned(*((v107 + 8) as &i64), *((v107 + 16) as &i64));
            goto LABEL_52066a;
        }
        if v73 != 0x8000000000000000 {
            v52 = v74;
            v118 = v73;
            v119 = v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v118;
            v51 = v118;
            v120 = v52 | -0x100 | 1;
            v18 = v120;
            v7 = 0;
            v8 = 0;
            goto LABEL_520737;
        } else if v71 != 0x8000000000000000 {
            v52 = v72;
            v121 = v71;
            v119 = v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v121;
            v51 = v121;
            v8 = v52 | -0x100 | 1;
            v7 = 0;
            v18 = 0;
            v122 = v8 | -0x100 | 1;
            v17 = v122;
            v5 = 0;
LABEL_520745:
            v4 = v122 | -0x100 | 1;
        } else if v69 != 0x8000000000000000 {
            v52 = v70;
            v123 = v69;
            v119 = v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v123;
            v51 = v123;
            v7 = v52 | -0x100 | 1;
            v18 = 0;
            v8 = v7 | -0x100 | 1;
            v17 = 0;
            v5 = v8 | -0x100 | 1;
            v4 = 0;
        } else {
            v8 = -255;
            v5 = -255;
            v4 = -255;
            v30 = std::sys::os_str::bytes::Slice::to_owned(0x1, 0);
LABEL_52066a:
            v52 = *((&v30 as &char + 16) as &i64);
            v124 = v30;
            v119 = v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v124;
            v51 = v124;
            v120 = v52 | -0x100 | 1;
            v8 = v120;
            v7 = 0;
            v18 = 0;
LABEL_520737:
            v17 = 0;
            v122 = v120 | -0x100 | 1;
            v5 = v122;
            goto LABEL_520745;
        }
        v56 = v114;
        if v85 != 0x8000000000000000 {
            v126 = ((v113 & 4294967295 & 4294967295) * 0x200 & 4294967295) + 0x200;
        } else {
            v125 = (1 ? 1000 : 0x400);
        }
        v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v108, "author") as i8;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v108, "no-group") as i8 {
            v133 = 0;
        } else {
            v133 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v108, "o") as i32 | -0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v108, "o") as i32 ^ 1;
        }
        v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v108, "numeric-uid-gid") as i8;
        v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v108, "width");
        v60 = uu_ls::parse_width(clap_builder::parser::error::MatchesError::unwrap(&anon.3f7e092f2ea554bdd060175bd8ea63d9.17.llvm.16502254941234113161, 5, &v30), v103, v136, v137, v138);
        match v60 {
            Ok(_) => {
                *(&v30.field_0 as &struct56) = struct56 {
                    field_0: v139
                    field_1: v136 as u8
                    field_2: v103 as u16
                    field_4: *((&v60 as &char + 4) as &i128)
                    field_20: *((&v60 as &char + 20) as &i128)
                    field_36: *((&v60 as &char + 36) as &i128)
                    field_52: *((&v60 as &char + 52) as &i32)
                };
                v140 = alloc::boxed::Box<T>::new(&v30);
                goto LABEL_520a96;
            },
            Err(_) => {
                v23 = *((&v60 as &char + 2) as &i16);
            },
        }
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v108, "hide-control-chars") as i8 {
            v141 = 0;
        } else {
            v142 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v108, "show-control-chars");
            v141 = v142 | -0x100 | 1;
            if !v142 {
                *(&v30 as &long long) = std::io::stdio::stdout();
                v143 = std::sys::pal::unix::io::is_terminal();
                v141 = v143 | -0x100 | v143 ^ 1;
            }
        }
        v19 = v141;
        v20 = uu_ls::extract_quoting_style(v108, v141) as i32;
        v2 = uu_ls::extract_indicator_style(v108) as i8;
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v108, "dired") as i8;
        if ((v1 ^ 1) & v0 != 1) {
            v75 = v126;
            v76 = 9223372036854775810;
            goto LABEL_520c0a;
        }
        v60 = uu_ls::parse_time_style(v108);
        v144 = v60;
        if v30 != 7 {
            v146 = *((&v60 as &char + 1) as &i128);
            v147 = *((&v60 as &char + 32) as &i128);
            v84 = *((&v60 as &char + 16) as &i128);
            v83 = v146;
            v37 = v66;
            v35 = v147;
            v31 = v83;
            v33 = *((&v83 as &char + 15) as &i128);
            v30 = v144;
            v140 = alloc::boxed::Box<T>::new(&v30);
LABEL_520a96:
            v148 = a0;
            *((v148 + 8) as &i64) = v140;
            *((v148 + 16) as &&i64) = &g_612480;
            *(v148 as &i64) = 0x8000000000000000;
        } else {
            v75 = v126;
            v145 = *((&v60 as &char + 8) as &i128);
            v119 = v119 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v145;
            v76 = v145;
            v77 = v63;
LABEL_520c0a:
            v57 = 0;
            v58 = 8;
            v59 = 0;
            v6 = v108;
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v108, "ignore-backups") as i8 {
                v30 = glob::Pattern::new("*~");
                v60 = core::result::Result<T,E>::unwrap(&v30, "src/uu/ls/src/ls.rs");
                v57 = alloc::vec::Vec<T,A>::push(&v60, v103);
                v30 = glob::Pattern::new(".*~");
                v60 = core::result::Result<T,E>::unwrap(&v30, "src/uu/ls/src/ls.rs");
                v57 = alloc::vec::Vec<T,A>::push(&v60, v103);
            }
            v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v6, "ignore");
            v60 = clap_builder::parser::error::MatchesError::unwrap("ignore", &v30);
            v55 = v133;
            v82 = 1;
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v108, "g") as i32 ^ 1;
            v149 = v20;
            v54 = v149 >> 8;
            v21 = v149 >> 16;
            v150 = v60;
            v151 = *((&v60 as &char + 16) as &i128);
            v152 = *((&v60 as &char + 32) as &i128);
            v38 = *((&v60 as &char + 48) as &i128);
            v36 = v152;
            v34 = v151;
            v32 = v150;
            v153 = v78;
            v154 = v79;
            v155 = v80;
            v40 = v153;
            v41 = v154;
            v42 = v155;
            v43 = v81;
            v156 = v78;
            v157 = v119 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v150 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v153 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v156;
            v158 = v79;
            v160 = v159 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v151 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v154 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v158;
            v161 = v80;
            v163 = v162 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v152 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v155 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v161;
            v45 = v156;
            v46 = v158;
            v47 = v161;
            v49 = v81;
            v30 = 1;
            v39 = 0;
            v44 = 0;
            loop {
                v166 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v30, v164, v165);
                if !v166 {
                    break;
                }
                v167 = *((v166 + 8) as &i64);
                v168 = *((v166 + 16) as &i64);
                v60 = uucore::parser::parse_glob::from_str(v167, v168);
                if v60 != 0x8000000000000000 {
                    v89 = v66;
                    v169 = v60;
                    v157 = v157 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v169;
                    v170 = *((&v60 as &char + 16) as &i128);
                    v160 = v160 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v170;
                    v171 = *((&v60 as &char + 32) as &i128);
                    v163 = v163 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v171;
                    v88 = v171;
                    v87 = v170;
                    v86 = v169;
                    v57 = alloc::vec::Vec<T,A>::push(&v86, v103);
                } else {
                    v24 = uucore::util_name();
                    v25 = v103;
                    eprint!("{:?}: warning: ", &v24);
                    v24 = 0;
                    v25 = v167;
                    v26 = v168;
                    v27 = 1;
                    eprintln!("Invalid pattern for ignore: {:?}", &v24);
                }
            }
            if v3 == 2 {
                v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v6, "hide");
                v60 = clap_builder::parser::error::MatchesError::unwrap("hide", &v30);
                v172 = v60;
                v173 = *((&v60 as &char + 16) as &i128);
                v174 = *((&v60 as &char + 32) as &i128);
                v38 = *((&v60 as &char + 48) as &i128);
                v36 = v174;
                v34 = v173;
                v32 = v172;
                v175 = v78;
                v176 = v79;
                v177 = v80;
                v40 = v175;
                v41 = v176;
                v42 = v177;
                v43 = v81;
                v178 = v78;
                v179 = v157 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v172 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v175 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v178;
                v180 = v79;
                v181 = v160 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v173 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v176 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v180;
                v182 = v80;
                v183 = v163 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v174 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v177 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v182;
                v45 = v178;
                v46 = v180;
                v47 = v182;
                v49 = v81;
                v30 = 1;
                v39 = 0;
                v44 = 0;
                loop {
                    v186 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v30, v184, v185);
                    if !v186 {
                        break;
                    }
                    v187 = *((v186 + 8) as &i64);
                    v188 = *((v186 + 16) as &i64);
                    v60 = uucore::parser::parse_glob::from_str(v187, v188);
                    if v60 == 0x8000000000000000 {
                        v24 = uucore::util_name();
                        v25 = v103;
                        eprint!("{:?}: warning: ", &v24);
                        v24 = 0;
                        v25 = v187;
                        v26 = v188;
                        v27 = 1;
                        eprintln!("Invalid pattern for hide: {:?}", &v24);
                    } else {
                        v93 = v66;
                        v189 = v60;
                        v179 = v179 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v189;
                        v190 = *((&v60 as &char + 16) as &i128);
                        v181 = v181 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v190;
                        v191 = *((&v60 as &char + 32) as &i128);
                        v183 = v183 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v191;
                        v92 = v191;
                        v91 = v190;
                        v90 = v189;
                        v57 = alloc::vec::Vec<T,A>::push(&v90, v103);
                    }
                }
            }
            v30 = v6;
            v194 = core::iter::traits::iterator::Iterator::reduce(&v30, v193, v103);
            if !v194 {
                v195 = v194;
            } else {
                v195 = v103;
            }
            v196 = (!(uu_ls::Config::from::{{closure}}(v6, "zero") <= v195) ? 2 - (v0 == 1) : v0);
            v30 = v6;
            v198 = core::iter::traits::iterator::Iterator::reduce(&v30, v193, v103);
            if !v198 {
                v199 = v198;
            } else {
                v199 = v103;
            }
            v30 = v6;
            v201 = core::iter::traits::iterator::Iterator::reduce(&v30, v193, v103);
            if !v201 {
                v202 = v201;
            } else {
                v202 = v103;
            }
            v203 = *((&(&v6)[4] as &char + 4) as &i32);
            if uu_ls::Config::from::{{closure}}(v6, "zero") > v202 {
                v203 = 1;
            }
            v19 = v203;
            v204 = uu_ls::Config::from::{{closure}}(v6, "zero");
            v30 = v6;
            v205 = core::iter::traits::iterator::Iterator::reduce(&v30, v193, v103);
            v206 = (&v6)[6];
            v207 = v206 & uu_ls::Config::from::{{closure}}(v6, "zero") <= v199;
            if !v205 {
                v208 = v205;
            } else {
                v208 = v103;
            }
            v209 = (!(v204 <= v208) ? v19 : (&v6)[5]);
            v210 = (amd64g_calculate_condition(6, 8, v204, v208, v105) as char ? *((&(&v6)[5] as &char + 4) as &i8) : 3);
            if !v207 {
                v83 = 0x8000000000000000;
                if !(!v1) {
                    goto LABEL_52163e;
                }
LABEL_521772:
                v211 = (!uu_ls::dired::is_dired_arg_present() as i8 ? v196 : 1);
LABEL_521785:
                v213 = 3;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference") as i8 {
                    v213 = 3;
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference-command-line") as i8 {
                        v213 = 3;
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference-command-line-symlink-to-dir") as i8 {
                            v213 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "directory") & 4294967295 & 4294967295 | -0x100;
                        }
                    }
                }
                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "reverse") as i8;
                v29 = v59;
                v28 = v57;
                v214 = v6;
                v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v214, "directory") as i8;
                v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "recursive") as i32;
                v20 = v210;
                v22 = v209;
                memcpy(&v60, &v83, 160);
                v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v214, "inode") as i8;
                v53 = v211;
                v26 = v77;
                v24 = v76;
                v33 = v29;
                v30 = v28;
                memcpy(&v30, &v60, 160);
                v48 = v24;
                v50 = v26;
                v218 = a0;
                memcpy(v218, &v30, 208);
                *((v218 + 208) as &i64) = v82;
                *((v218 + 216) as &i64) = v75;
                *((v218 + 224) as &i8) = v12;
                *((v218 + 225) as &i8) = v55;
                *((v218 + 226) as &i8) = v10;
                *((v218 + 227) as &i8) = v11;
                *((v218 + 228) as &i16) = v23;
                *((v218 + 230) as &i8) = v21;
                *((v218 + 231) as &i8) = v0;
                *((v218 + 232) as &i8) = v19;
                *((v218 + 233) as &i8) = v9;
                *((v218 + 234) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v214, "size") as i32;
                *((v218 + 235) as &i8) = v16;
                *((v218 + 236) as &i8) = 0;
                *((v218 + 237) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v214, "group-directories-first") as i32;
                *((v218 + 238) as &i8) = v1;
                *((v218 + 239) as &i8) = v13;
                *((v218 + 240) as &i8) = v3;
                *((v218 + 241) as &i8) = v56;
                *((v218 + 242) as &i8) = v213;
                *((v218 + 243) as &i8) = v14;
                *((v218 + 244) as &i8) = v2;
                *((v218 + 245) as &i8) = v22;
                *((v218 + 246) as &i8) = v54;
                *((v218 + 247) as &i8) = v20;
                *((v218 + 248) as &i8) = v53;
                *((v218 + 249) as &i8) = v15;
                *((v218 + 250) as &i32) = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v214, "zero") as i8 ? 0 : 10);
                return a0;
            }
            v30 = lscolors::LsColors::from_env(v193, v208, v206 | -0x100 | v207, v137);
            match v30 {
                Some(_) => {
                    memcpy(&v60, &v30, 160);
                },
                None => {
                    v60 = <lscolors::LsColors as core::default::Default>::default(v193, v103, v136, v137);
                },
            }
            memcpy(&v83, &v60, 160);
            if !v1 {
                goto LABEL_521772;
            }
LABEL_52163e:
            v211 = v196 | -0x100 | 1;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "zero") as i8 {
                goto LABEL_521785;
            }
            v30 = 4;
            v212 = a0;
            *((v212 + 8) as &double) = alloc::boxed::Box<T>::new(&v30);
            *((v212 + 16) as &&i64) = &g_612480;
            *(v212 as &i64) = 0x8000000000000000;
        }
        if !(!v17 && !v71 == 0x8000000000000000) {
            return a0;
        }
        return a0;
    }
}
