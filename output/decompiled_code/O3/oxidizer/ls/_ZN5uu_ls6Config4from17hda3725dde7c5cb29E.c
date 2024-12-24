fn uu_ls::Config::from(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
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
    let v23: i16;  // [sp-0x412]
    let v24: i128;  // [sp-0x408], Other Possible Types: struct24
    let v25: i64;  // [sp-0x400]
    let v26: i8;  // [sp-0x3f0]
    let v27: i128;  // [bp-0x3e8]
    let v28: i64;  // [sp-0x3d8]
    let v29: i320;  // [sp-0x3c8], Other Possible Types: Result<struct49, struct32>, struct56, struct24, Option<struct160>
    let v30: i128;  // [bp-0x3c7]
    let v31: i128;  // [sp-0x3c0]
    let v32: i128;  // [bp-0x3b8]
    let v33: i64;  // [sp-0x3b0]
    let v34: i128;  // [bp-0x3a8]
    let v35: i128;  // [bp-0x3a0]
    let v36: i64;  // [bp-0x398]
    let v37: i128;  // [bp-0x390]
    let v38: i64;  // [sp-0x380]
    let v39: i128;  // [bp-0x378]
    let v40: i128;  // [bp-0x368]
    let v41: i128;  // [bp-0x358]
    let v42: i64;  // [sp-0x348]
    let v43: i64;  // [sp-0x340]
    let v44: i128;  // [bp-0x338]
    let v45: i128;  // [bp-0x328]
    let v46: i128;  // [bp-0x318]
    let v47: i192;  // [bp-0x310]
    let v48: i64;  // [sp-0x308]
    let v49: i128;  // [sp-0x2f8]
    let v50: i64;  // [sp-0x2e8]
    let v51: i32;  // [sp-0x2e0]
    let v52: i32;  // [sp-0x2dc]
    let v53: i32;  // [sp-0x2d8]
    let v54: i32;  // [sp-0x2d4]
    let v55: struct16;  // [sp-0x2d0], Other Possible Types: i128
    let v56: i64;  // [sp-0x2c8]
    let v57: i64;  // [sp-0x2c0]
    let v58: i448;  // [sp-0x2b8], Other Possible Types: Result<struct49, struct32>, struct64, struct56, Option<struct24>, struct153, struct57
    let v59: i64;  // [sp-0x2b0]
    let v60: i64;  // [sp-0x2a8]
    let v61: i64;  // [sp-0x2a0]
    let v62: i64;  // [sp-0x298]
    let v63: i64;  // [sp-0x290]
    let v64: i64;  // [sp-0x288]
    let v65: i64;  // [sp-0x280]
    let v66: i8;  // [bp-0x278]
    let v67: i8;  // [bp-0x218]
    let v68: i8;  // [bp-0x208]
    let v69: i8;  // [bp-0x200]
    let v70: i8;  // [bp-0x1f0]
    let v71: i8;  // [bp-0x1e8]
    let v72: i8;  // [bp-0x1d8]
    let v73: i64;  // [sp-0x1d0]
    let v74: i128;  // [bp-0x1c8]
    let v75: i64;  // [sp-0x1b8]
    let v76: i8;  // [bp-0x1a8]
    let v77: i8;  // [bp-0x198]
    let v78: i8;  // [bp-0x188]
    let v79: i8;  // [bp-0x178]
    let v80: i64;  // [sp-0x170]
    let v81: i128;  // [sp-0x168]
    let v82: i128;  // [bp-0x159]
    let v83: i8;  // [bp-0xc0]
    let v84: i128;  // [sp-0xa8]
    let v85: i128;  // [sp-0x98]
    let v86: i128;  // [sp-0x88]
    let v87: i64;  // [sp-0x78]
    let v88: i128;  // [sp-0x68]
    let v89: i128;  // [sp-0x58]
    let v90: i128;  // [sp-0x48]
    let v91: i64;  // [sp-0x38]
    let v94: i64;  // rbp
    let v95: i64;  // rbx
    let v98: i128;  // xmm0
    let v99: i256;  // ymm0
    let v100: i256;  // ymm0
    let v101: i64;  // rdx
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
    let v134: i64;  // rcx
    let v135: i64;  // r8
    let v136: i64;  // r9
    let v138: i64;  // rax
    let v139: i32;  // eax
    let v140: i64;  // rax
    let v141: i64;  // rax
    let v142: i8;  // al
    let v143: i128;  // xmm0
    let v144: i128;  // xmm0
    let v145: i128;  // xmm2
    let v146: i64;  // rcx
    let v147: i32;  // ecx
    let v148: i128;  // xmm0
    let v149: i128;  // xmm1
    let v150: i128;  // xmm2
    let v151: i128;  // xmm0
    let v152: i128;  // xmm1
    let v153: i128;  // xmm2
    let v154: i128;  // xmm0
    let v155: i256;  // ymm0
    let v156: i128;  // xmm1
    let v157: i256;  // ymm1
    let v158: i256;  // ymm1
    let v159: i128;  // xmm2
    let v160: i256;  // ymm2
    let v161: i256;  // ymm2
    let v162: i64;  // rsi
    let v163: i64;  // rdx
    let v164: i64;  // rax
    let v165: i64;  // r15
    let v167: i128;  // xmm0
    let v168: i128;  // xmm1
    let v169: i128;  // xmm2
    let v170: i128;  // xmm0
    let v171: i128;  // xmm1
    let v172: i128;  // xmm2
    let v173: i128;  // xmm0
    let v174: i128;  // xmm1
    let v175: i128;  // xmm2
    let v176: i128;  // xmm0
    let v177: i256;  // ymm0
    let v178: i128;  // xmm1
    let v179: i256;  // ymm1
    let v180: i128;  // xmm2
    let v181: i256;  // ymm2
    let v182: i64;  // rsi
    let v183: i64;  // rdx
    let v184: i64;  // rax
    let v185: i64;  // r15
    let v187: i128;  // xmm0
    let v188: i128;  // xmm1
    let v189: i128;  // xmm2
    let v191: i64;  // rsi
    let v193: i64;  // rax
    let v194: i64;  // rbp
    let v197: i64;  // rax
    let v200: i64;  // rax
    let v201: i32;  // ecx
    let v202: i64;  // rbx
    let v204: i64;  // rcx
    let v205: i8;  // cl
    let v206: i64;  // rax
    let v207: i32;  // ebx
    let v208: i32;  // r12d
    let v209: i32;  // ebp
    let v210: i64;  // rcx
    let v211: i8;  // r15b
    let v212: i64;  // r14
    let v216: i64;  // r14

    v29 = uu_ls::extract_format(a1);
    v94 = v29;
    v95 = v31;
    v3 = uu_ls::extract_files(a1) as i8;
    v0 = 1;
    if v94 != 1 {
        v81 = 0;
        v58 = &anon.93c251adab0f837eec2f5865e5b29e23.31.llvm.10262286748963977039;
        v59 = 1;
        v60 = &anon.93c251adab0f837eec2f5865e5b29e23.32.llvm.10262286748963977039;
        v61 = 1;
        v62 = &anon.93c251adab0f837eec2f5865e5b29e23.33.llvm.10262286748963977039;
        v63 = 15;
        v64 = &anon.34cd953b2c946f74a585889e96ce9d7a.39.llvm.16853030268703478466;
        v65 = 9;
        v29 = &v58;
        v31 = &v66;
        v32 = a1;
        v33 = 0;
        v36 = 0;
        v0 = 1;
        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::adapters::flatten::FlattenCompat<I,U>::iter_try_fold(&v29, &v81, v81) as i32) {
            v58 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "1");
            if v58 {
                v32 = v60;
                v98 = v58;
                v100 = v99 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v98;
                v29 = v98;
                if clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "1") as i8 == 2 {
                    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v29, &v81, v101) as i32) {
                        v94 = 2;
                    } else {
                        v94 = v94 & 4294967295 & 4294967295;
                    }
                }
            }
            v0 = v94;
        }
    }
    v104 = uu_ls::extract_time(a1) as i32;
    v22 = uu_ls::extract_color(a1) as i8;
    v13 = uu_ls::extract_hyperlink(a1) as i8;
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "block-size");
    v105 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v29);
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "context") as i32;
    v15 = uu_ls::extract_sort(a1) as i32;
    v14 = v104;
    if !v105 {
        v108 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "si") as i32;
        goto LABEL_5204d8;
    } else {
        v106 = a1;
        v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "block-size");
        v107 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v29);
        if !v107 {
            core::option::unwrap_failed(); /* do not return */
        }
        v108 = v104 | -0x100 | 1;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v107 + 8) as &i64), *((v107 + 16) as &i64), "si") as i8 {
            v108 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "si") as i32;
        }
        v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v106, "block-size");
        v110 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v29);
        if !v110 {
            core::option::unwrap_failed(); /* do not return */
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v110 + 8) as &i64), *((v110 + 16) as &i64), "human-readable") as i8 {
            v111 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "kibibytes") as i32;
            v112 = v108 + 1;
        } else {
LABEL_5204d8:
            v112 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v109, "human-readable") as i32;
            v111 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v109, "kibibytes") as i32;
            if v108 {
                v112 = 2;
            }
        }
        v4 = (std::env::var_os("BLOCKSIZE") | -0x100 | 1) as u32;
        v5 = std::env::var_os(&v69, "BLOCK_SIZE") | -0x100 | 1;
        v4 = v5 | -0x100 | 1;
        v8 = std::env::var_os(&v71, "LS_BLOCK_SIZE") | -0x100 | 1;
        v5 = v8 | -0x100 | 1;
        v4 = v5 | -0x100 | 1;
        if v105 {
            v8 = (std::env::var_os("POSIXLY_CORRECT") | -0x100 | 1) as u32;
            v5 = v8 | -0x100 | 1;
            v4 = v5 | -0x100 | 1;
            v29 = std::sys::os_str::bytes::Slice::to_owned(*((v105 + 8) as &i64), *((v105 + 16) as &i64));
            goto LABEL_5205ca;
        }
        if v71 != 0x8000000000000000 {
            v50 = v72;
            v116 = v71;
            v117 = v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v116;
            v49 = v116;
            v118 = v50 | -0x100 | 1;
            v18 = v118;
            v8 = 0;
            goto LABEL_520687;
        } else if v69 != 0x8000000000000000 {
            v50 = v70;
            v119 = v69;
            v117 = v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v119;
            v49 = v119;
            v8 = v50 | -0x100 | 1;
            v18 = 0;
            v120 = v8 | -0x100 | 1;
            v17 = v120;
            v5 = 0;
LABEL_520695:
            v7 = 0;
            v4 = v120 | -0x100 | 1;
        } else if v67 != 0x8000000000000000 {
            v50 = v68;
            v121 = v67;
            v117 = v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v121;
            v49 = v121;
            v8 = v50 | -0x100 | 1;
            v18 = 0;
            v17 = 0;
            v5 = v8 | -0x100 | 1;
            v7 = v5 | -0x100 | 1;
            v4 = 0;
        } else {
            v8 = -255;
            v5 = -255;
            v4 = -255;
            v29 = std::sys::os_str::bytes::Slice::to_owned(1, 0);
LABEL_5205ca:
            v50 = *((&v29 as &char + 16) as &i64);
            v122 = v29;
            v117 = v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v122;
            v49 = v122;
            v118 = v50 | -0x100 | 1;
            v8 = v118;
            v18 = 0;
LABEL_520687:
            v17 = 0;
            v120 = v118 | -0x100 | 1;
            v5 = v120;
            goto LABEL_520695;
        }
        v54 = v112;
        if v83 != 0x8000000000000000 {
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
        v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v106, "width");
        v58 = uu_ls::parse_width(clap_builder::parser::error::MatchesError::unwrap(&anon.34cd953b2c946f74a585889e96ce9d7a.24.llvm.16853030268703478466, 5, &v29), v101, v134, v135, v136);
        match v58 {
            Ok(_) => {
                *(&v29.field_0 as &struct56) = struct56 {
                    field_0: v137
                    field_1: v134 as u8
                    field_2: v101 as u16
                    field_4: *((&v58 as &char + 4) as &i128)
                    field_20: *((&v58 as &char + 20) as &i128)
                    field_36: *((&v58 as &char + 36) as &i128)
                    field_52: *((&v58 as &char + 52) as &i32)
                };
                v138 = alloc::boxed::Box<T>::new(&v29);
                goto LABEL_5209e6;
            },
            Err(_) => {
                v23 = *((&v58 as &char + 2) as &i16);
            },
        }
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "hide-control-chars") as i8 {
            v139 = 0;
        } else {
            v140 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "show-control-chars");
            v139 = v140 | -0x100 | 1;
            if !v140 {
                *(&v29 as &long long) = std::io::stdio::stdout();
                v141 = std::sys::pal::unix::io::is_terminal();
                v139 = v141 | -0x100 | v141 ^ 1;
            }
        }
        v19 = v139;
        v20 = uu_ls::extract_quoting_style(v106, v139) as i32;
        v2 = uu_ls::extract_indicator_style(v106) as i8;
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "dired") as i8;
        if ((v1 ^ 1) & v0 != 1) {
            v73 = v124;
            v74 = 9223372036854775810;
            goto LABEL_520b5a;
        }
        v58 = uu_ls::parse_time_style(v106);
        v142 = v58;
        if v29 != 7 {
            v144 = *((&v58 as &char + 1) as &i128);
            v145 = *((&v58 as &char + 32) as &i128);
            v82 = *((&v58 as &char + 16) as &i128);
            v81 = v144;
            *(&v36 as &struct57) = v58.48;
            v34 = v145;
            v30 = v81;
            v32 = *((&v81 as &char + 15) as &i128);
            v29 = v142;
            v138 = alloc::boxed::Box<T>::new(&v29);
LABEL_5209e6:
            v146 = a0;
            *((v146 + 8) as &i64) = v138;
            *((v146 + 16) as &&i64) = &g_612620;
            *(v146 as &i64) = 0x8000000000000000;
        } else {
            v73 = v124;
            v143 = *((&v58 as &char + 8) as &i128);
            v117 = v117 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v143;
            v74 = v143;
            v75 = v58.24;
LABEL_520b5a:
            v55 = 0;
            v56 = 8;
            v57 = 0;
            v6 = v106;
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "ignore-backups") as i8 {
                v29 = glob::Pattern::new("*~");
                v58 = core::result::Result<T,E>::unwrap(&v29, "src/uu/ls/src/ls.rs");
                v55 = alloc::vec::Vec<T,A>::push(&v58, v101);
                v29 = glob::Pattern::new(".*~");
                v58 = core::result::Result<T,E>::unwrap(&v29, "src/uu/ls/src/ls.rs");
                v55 = alloc::vec::Vec<T,A>::push(&v58, v101);
            }
            v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v6, "ignore");
            v58 = clap_builder::parser::error::MatchesError::unwrap("ignore", &v29);
            v53 = v131;
            v80 = 1;
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v106, "g") as i32 ^ 1;
            v147 = v20;
            v52 = v147 >> 8;
            v21 = v147 >> 16;
            v148 = v58;
            v149 = *((&v58 as &char + 16) as &i128);
            v150 = *((&v58 as &char + 32) as &i128);
            v37 = *((&v58 as &char + 48) as &i128);
            v35 = v150;
            v33 = v149;
            v31 = v148;
            v151 = v76;
            v152 = v77;
            v153 = v78;
            v39 = v151;
            v40 = v152;
            v41 = v153;
            v42 = v79;
            v154 = v76;
            v155 = v117 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v148 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v151 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v154;
            v156 = v77;
            v158 = v157 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v149 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v152 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v156;
            v159 = v78;
            v161 = v160 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v150 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v153 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v159;
            v44 = v154;
            v45 = v156;
            v46 = v159;
            v48 = v79;
            v29 = 1;
            v38 = 0;
            v43 = 0;
            loop {
                v164 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v29, v162, v163);
                if !v164 {
                    break;
                }
                v165 = *((v164 + 8) as &i64);
                v58 = uucore::parser::parse_glob::from_str(v165, *((v164 + 16) as &i64));
                if v58 != 0x8000000000000000 {
                    v87 = v64;
                    v167 = v58;
                    v155 = v155 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v167;
                    v168 = *((&v58 as &char + 16) as &i128);
                    v158 = v158 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v168;
                    v169 = *((&v58 as &char + 32) as &i128);
                    v161 = v161 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v169;
                    v86 = v169;
                    v85 = v168;
                    v84 = v167;
                    v55 = alloc::vec::Vec<T,A>::push(&v84, v101);
                } else {
                    v24 = uucore::util_name();
                    v25 = v101;
                    eprint!("{:?}: warning: ", &v24);
                    v24 = 0;
                    v25 = v165;
                    v24.field_16 = vvar_1049{reg 112};
                    v26 = 1;
                    eprintln!("Invalid pattern for ignore: {:?}", &v24);
                }
            }
            if v3 == 2 {
                v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v6, "hide");
                v58 = clap_builder::parser::error::MatchesError::unwrap("hide", &v29);
                v170 = v58;
                v171 = *((&v58 as &char + 16) as &i128);
                v172 = *((&v58 as &char + 32) as &i128);
                v37 = *((&v58 as &char + 48) as &i128);
                v35 = v172;
                v33 = v171;
                v31 = v170;
                v173 = v76;
                v174 = v77;
                v175 = v78;
                v39 = v173;
                v40 = v174;
                v41 = v175;
                v42 = v79;
                v176 = v76;
                v177 = v155 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v170 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v173 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v176;
                v178 = v77;
                v179 = v158 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v171 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v174 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v178;
                v180 = v78;
                v181 = v161 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v172 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v175 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v180;
                v44 = v176;
                v45 = v178;
                v46 = v180;
                v48 = v79;
                v29 = 1;
                v38 = 0;
                v43 = 0;
                loop {
                    v184 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v29, v182, v183);
                    if !v184 {
                        break;
                    }
                    v185 = *((v184 + 8) as &i64);
                    v58 = uucore::parser::parse_glob::from_str(v185, *((v184 + 16) as &i64));
                    if v58 != 0x8000000000000000 {
                        v91 = v64;
                        v187 = v58;
                        v177 = v177 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v187;
                        v188 = *((&v58 as &char + 16) as &i128);
                        v179 = v179 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v188;
                        v189 = *((&v58 as &char + 32) as &i128);
                        v181 = v181 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v189;
                        v90 = v189;
                        v89 = v188;
                        v88 = v187;
                        v55 = alloc::vec::Vec<T,A>::push(&v88, v101);
                    } else {
                        v24 = uucore::util_name();
                        v25 = v101;
                        eprint!("{:?}: warning: ", &v24);
                        v24 = 0;
                        v25 = v185;
                        v24.field_16 = vvar_1134{reg 112};
                        v26 = 1;
                        eprintln!("Invalid pattern for hide: {:?}", &v24);
                    }
                }
            }
            v29 = v6;
            v194 = (!(uu_ls::Config::from::{{closure}}(v6, "zero") <= v193) ? 2 - (v0 == 1) : v0);
            v29 = v6;
            v29 = v6;
            v201 = *((&(&v6)[4] as &char + 4) as &i32);
            if uu_ls::Config::from::{{closure}}(v6, "zero") > v200 {
                v201 = 1;
            }
            v19 = v201;
            v202 = uu_ls::Config::from::{{closure}}(v6, "zero");
            v29 = v6;
            v204 = (&v6)[6];
            v205 = v204 & uu_ls::Config::from::{{closure}}(v6, "zero") <= v197;
            v207 = (!(v202 <= v206) ? v19 : (&v6)[5]);
            v208 = (amd64g_calculate_condition(6, 8, v202, v206, v103) as char ? *((&(&v6)[5] as &char + 4) as &i8) : 3);
            if !v205 {
                v81 = 0x8000000000000000;
                if !(!v1) {
                    goto LABEL_52158e;
                }
LABEL_5216c2:
                v209 = (!uu_ls::dired::is_dired_arg_present() as i8 ? v194 : 1);
LABEL_5216d5:
                v211 = 3;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference") as i8 {
                    v211 = 3;
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference-command-line") as i8 {
                        v211 = 3;
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference-command-line-symlink-to-dir") as i8 {
                            v211 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "directory") as i32 | -0x100;
                        }
                    }
                }
                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "reverse") as i8;
                v28 = v57;
                v27 = v55;
                v212 = v6;
                v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v212, "directory") as i8;
                v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "recursive") as i32;
                v20 = v208;
                v22 = v207;
                memcpy(&v58, &v81, 160);
                v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v212, "inode") as i8;
                v51 = v209;
                v24.field_16 = vvar_1708{stack -440};
                v24 = v74;
                v32 = v28;
                v29 = v27;
                memcpy(&v29, &v58, 160);
                v47 = (&v6)[8];
                v216 = a0;
                memcpy(v216, &v29, 208);
                *((v216 + 208) as &i64) = v80;
                *((v216 + 216) as &i64) = v73;
                *((v216 + 224) as &i8) = v12;
                *((v216 + 225) as &i8) = v53;
                *((v216 + 226) as &i8) = v10;
                *((v216 + 227) as &i8) = v11;
                *((v216 + 228) as &i16) = v23;
                *((v216 + 230) as &i8) = v21;
                *((v216 + 231) as &i8) = v0;
                *((v216 + 232) as &i8) = v19;
                *((v216 + 233) as &i8) = v9;
                *((v216 + 234) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v212, "size") as i32;
                *((v216 + 235) as &i8) = v16;
                *((v216 + 236) as &i8) = 0;
                *((v216 + 237) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v212, "group-directories-first") as i32;
                *((v216 + 238) as &i8) = v1;
                *((v216 + 239) as &i8) = v13;
                *((v216 + 240) as &i8) = v3;
                *((v216 + 241) as &i8) = v54;
                *((v216 + 242) as &i8) = v211;
                *((v216 + 243) as &i8) = v14;
                *((v216 + 244) as &i8) = v2;
                *((v216 + 245) as &i8) = v22;
                *((v216 + 246) as &i8) = v52;
                *((v216 + 247) as &i8) = v20;
                *((v216 + 248) as &i8) = v51;
                *((v216 + 249) as &i8) = v15;
                *((v216 + 250) as &i32) = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v212, "zero") as i8 ? 0 : 10);
                return a0;
            }
            v29 = lscolors::LsColors::from_env(v191, v206, v204 | -0x100 | v205, v135);
            match v29 {
                Some(_) => {
                    memcpy(&v58, &v29, 160);
                },
                None => {
                    v58 = <lscolors::LsColors as core::default::Default>::default(v191, v101, v134, v135);
                },
            }
            memcpy(&v81, &v58, 160);
            if !v1 {
                goto LABEL_5216c2;
            }
LABEL_52158e:
            v209 = v194 | -0x100 | 1;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "zero") as i8 {
                goto LABEL_5216d5;
            }
            v29 = 4;
            v210 = a0;
            *((v210 + 8) as &double) = alloc::boxed::Box<T>::new(&v29);
            *((v210 + 16) as &&i64) = &g_612620;
            *(v210 as &i64) = 0x8000000000000000;
        }
        if !(!v17 && v69 != 0x8000000000000000) {
            return a0;
        }
        return a0;
    }
}
