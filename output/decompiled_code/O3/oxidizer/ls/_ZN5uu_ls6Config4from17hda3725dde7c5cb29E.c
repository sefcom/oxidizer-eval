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
    let v19: i32;  // [bp-0x424]
    let v20: i32;  // [sp-0x420]
    let v21: i32;  // [bp-0x41c]
    let v22: i8;  // [bp-0x418]
    let v23: i16;  // [sp-0x412]
    let v24: i64;  // [sp-0x408], Other Possible Types: struct24
    let v25: i64;  // [sp-0x400]
    let v26: i8;  // [sp-0x3f0]
    let v27: i128;  // [bp-0x3e8]
    let v28: i64;  // [sp-0x3d8]
    let v29: i320;  // [sp-0x3c8], Other Possible Types: Result<struct40, struct16>, struct56, struct24, struct168, Option<struct160>, struct40, struct88
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
    let v47: i128;  // [bp-0x310]
    let v48: i64;  // [sp-0x308]
    let v49: i64;  // [sp-0x300]
    let v50: i128;  // [sp-0x2f8]
    let v51: i64;  // [sp-0x2e8]
    let v52: i32;  // [sp-0x2e0]
    let v53: i32;  // [sp-0x2dc]
    let v54: i32;  // [sp-0x2d8]
    let v55: i32;  // [sp-0x2d4]
    let v56: struct16;  // [sp-0x2d0], Other Possible Types: i128
    let v57: i64;  // [sp-0x2c8]
    let v58: i64;  // [sp-0x2c0]
    let v59: i448;  // [sp-0x2b8], Other Possible Types: Result<struct56, struct3>, struct56, struct64, struct153, struct57, Option<struct24>
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
    let v75: i128;  // [bp-0x1c8]
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
    let v102: i64;  // rdx
    let v103: i256;  // ymm0
    let v104: i64;  // cc_ndep
    let v105: i64;  // r12
    let v106: i64;  // r14
    let v107: i64;  // rbp
    let v108: i64;  // rax
    let v109: i64;  // r12
    let v110: i64;  // 4096
    let v111: i64;  // rax
    let v112: i64;  // rbp
    let v113: i32;  // ebx
    let v117: i128;  // xmm0
    let v118: i256;  // ymm0
    let v119: i64;  // rax
    let v120: i128;  // xmm0
    let v121: i64;  // rax
    let v122: i128;  // xmm0
    let v123: i128;  // xmm0
    let v124: i64;  // r14
    let v125: i64;  // r14
    let v132: i32;  // ebp
    let v135: i64;  // rcx
    let v136: i64;  // r8
    let v137: i64;  // r9
    let v139: i64;  // rax
    let v140: i32;  // eax
    let v141: i64;  // rax
    let v142: i64;  // rax
    let v143: i8;  // al
    let v144: i128;  // xmm0
    let v145: i128;  // xmm0
    let v146: i128;  // xmm2
    let v147: i64;  // rcx
    let v148: i32;  // ecx
    let v149: i128;  // xmm0
    let v150: i128;  // xmm1
    let v151: i128;  // xmm2
    let v152: i128;  // xmm0
    let v153: i128;  // xmm1
    let v154: i128;  // xmm2
    let v155: i128;  // xmm0
    let v156: i256;  // ymm0
    let v157: i128;  // xmm1
    let v158: i256;  // ymm1
    let v159: i256;  // ymm1
    let v160: i128;  // xmm2
    let v161: i256;  // ymm2
    let v162: i256;  // ymm2
    let v163: i64;  // rsi
    let v164: i64;  // rdx
    let v165: i64;  // rax
    let v166: i64;  // r15
    let v168: i128;  // xmm0
    let v169: i128;  // xmm1
    let v170: i128;  // xmm2
    let v171: i128;  // xmm0
    let v172: i128;  // xmm1
    let v173: i128;  // xmm2
    let v174: i128;  // xmm0
    let v175: i128;  // xmm1
    let v176: i128;  // xmm2
    let v177: i128;  // xmm0
    let v178: i256;  // ymm0
    let v179: i128;  // xmm1
    let v180: i256;  // ymm1
    let v181: i128;  // xmm2
    let v182: i256;  // ymm2
    let v183: i64;  // rsi
    let v184: i64;  // rdx
    let v185: i64;  // rax
    let v186: i64;  // r15
    let v188: i128;  // xmm0
    let v189: i128;  // xmm1
    let v190: i128;  // xmm2
    let v192: i64;  // rsi
    let v194: i64;  // rax
    let v195: i64;  // rbp
    let v198: i64;  // rax
    let v201: i64;  // rax
    let v202: i32;  // ecx
    let v203: i64;  // rbx
    let v205: i64;  // rcx
    let v206: i8;  // cl
    let v207: i64;  // rax
    let v208: i32;  // ebx
    let v209: i32;  // r12d
    let v210: i32;  // ebp
    let v211: i64;  // rcx
    let v212: i8;  // r15b
    let v213: i64;  // r14
    let v217: i64;  // r14

    v29 = uu_ls::extract_format(a1);
    v95 = v29;
    v96 = v31;
    v3 = uu_ls::extract_files(a1) as i8;
    v0 = 1;
    if v95 != 1 {
        v82 = 0;
        v59 = &anon.93c251adab0f837eec2f5865e5b29e23.31.llvm.10262286748963977039;
        v60 = 1;
        v61 = &anon.93c251adab0f837eec2f5865e5b29e23.32.llvm.10262286748963977039;
        v62 = 1;
        v63 = &anon.93c251adab0f837eec2f5865e5b29e23.33.llvm.10262286748963977039;
        v64 = 15;
        v65 = &anon.34cd953b2c946f74a585889e96ce9d7a.39.llvm.16853030268703478466;
        v66 = 9;
        v29 = &v59;
        v31 = &v67;
        v32 = a1;
        v33 = 0;
        v36 = 0;
        v0 = 1;
        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::adapters::flatten::FlattenCompat<I,U>::iter_try_fold(&v29, &v82, v82) as i32) {
            v59 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "1");
            if v59 {
                v32 = v61;
                v99 = v59;
                v101 = v100 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v99;
                v29 = v99;
                if clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "1") as i8 == 2 {
                    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v29, &v82, v102) as i32) {
                        v95 = 2;
                    } else {
                        v95 = v95 & 4294967295 & 4294967295;
                    }
                }
            }
            v0 = v95;
        }
    }
    v105 = uu_ls::extract_time(a1) as i32;
    v22 = uu_ls::extract_color(a1) as i8;
    v13 = uu_ls::extract_hyperlink(a1) as i8;
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "block-size");
    v106 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v29);
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "context") as i32;
    v15 = uu_ls::extract_sort(a1) as i32;
    v14 = v105;
    if !v106 {
        v109 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "si") as i32;
        goto LABEL_5204d8;
    } else {
        v107 = a1;
        v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "block-size");
        v108 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v29);
        if !v108 {
            core::option::unwrap_failed(); /* do not return */
        }
        v109 = v105 | -0x100 | 1;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v108 + 8) as &i64), *((v108 + 16) as &i64), "si") as i8 {
            v109 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v107, "si") as i32;
        }
        v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v107, "block-size");
        v111 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v29);
        if !v111 {
            core::option::unwrap_failed(); /* do not return */
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v111 + 8) as &i64), *((v111 + 16) as &i64), "human-readable") as i8 {
            v112 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v107, "kibibytes") as i32;
            v113 = v109 + 1;
        } else {
LABEL_5204d8:
            v113 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v110, "human-readable") as i32;
            v112 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v110, "kibibytes") as i32;
            if v109 {
                v113 = 2;
            }
        }
        v4 = (std::env::var_os("BLOCKSIZE") | -0x100 | 1) as u32;
        v5 = std::env::var_os(&v70, "BLOCK_SIZE") | -0x100 | 1;
        v4 = v5 | -0x100 | 1;
        v8 = std::env::var_os(&v72, "LS_BLOCK_SIZE") | -0x100 | 1;
        v5 = v8 | -0x100 | 1;
        v4 = v5 | -0x100 | 1;
        if v106 {
            v8 = (std::env::var_os("POSIXLY_CORRECT") | -0x100 | 1) as u32;
            v5 = v8 | -0x100 | 1;
            v4 = v5 | -0x100 | 1;
            v29 = std::sys::os_str::bytes::Slice::to_owned(*((v106 + 8) as &i64), *((v106 + 16) as &i64));
            goto LABEL_5205ca;
        }
        if v72 != 0x8000000000000000 {
            v51 = v73;
            v117 = v72;
            v118 = v103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v117;
            v50 = v117;
            v119 = v51 | -0x100 | 1;
            v18 = v119;
            v8 = 0;
            goto LABEL_520687;
        } else if v70 != 0x8000000000000000 {
            v51 = v71;
            v120 = v70;
            v118 = v103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v120;
            v50 = v120;
            v8 = v51 | -0x100 | 1;
            v18 = 0;
            v121 = v8 | -0x100 | 1;
            v17 = v121;
            v5 = 0;
LABEL_520695:
            v7 = 0;
            v4 = v121 | -0x100 | 1;
        } else if v68 != 0x8000000000000000 {
            v51 = v69;
            v122 = v68;
            v118 = v103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v122;
            v50 = v122;
            v8 = v51 | -0x100 | 1;
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
            v51 = *((&v29 as &char + 16) as &i64);
            v123 = v29;
            v118 = v103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v123;
            v50 = v123;
            v119 = v51 | -0x100 | 1;
            v8 = v119;
            v18 = 0;
LABEL_520687:
            v17 = 0;
            v121 = v119 | -0x100 | 1;
            v5 = v121;
            goto LABEL_520695;
        }
        v55 = v113;
        if v84 != 0x8000000000000000 {
            v125 = ((v112 & 4294967295 & 4294967295) * 0x200 & 4294967295) + 0x200;
        } else {
            v124 = (1 ? 1000 : 0x400);
        }
        v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v107, "author") as i8;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v107, "no-group") as i8 {
            v132 = 0;
        } else {
            v132 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v107, "o") as i32 | -0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v107, "o") as i32 ^ 1;
        }
        v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v107, "numeric-uid-gid") as i8;
        v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v107, "width");
        v59 = uu_ls::parse_width(clap_builder::parser::error::MatchesError::unwrap(&anon.34cd953b2c946f74a585889e96ce9d7a.24.llvm.16853030268703478466, 5, &v29), v102, v135, v136, v137);
        match v59 {
            Ok(_) => {
                *(&v29.field_0 as &struct56) = struct56 {
                    field_0: v138
                    field_1: v135 as u8
                    field_2: v102 as u16
                    field_4: *((&v59 as &char + 4) as &i128)
                    field_20: *((&v59 as &char + 20) as &i128)
                    field_36: *((&v59 as &char + 36) as &i128)
                    field_52: *((&v59 as &char + 52) as &i32)
                };
                v139 = alloc::boxed::Box<T>::new(&v29);
                goto LABEL_5209e6;
            },
            Err(_) => {
                v23 = *((&v59 as &char + 2) as &i16);
            },
        }
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v107, "hide-control-chars") as i8 {
            v140 = 0;
        } else {
            v141 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v107, "show-control-chars");
            v140 = v141 | -0x100 | 1;
            if !v141 {
                *(&v29 as &long long) = std::io::stdio::stdout();
                v142 = std::sys::pal::unix::io::is_terminal();
                v140 = v142 | -0x100 | v142 ^ 1;
            }
        }
        v19 = v140;
        v20 = uu_ls::extract_quoting_style(v107, v140) as i32;
        v2 = uu_ls::extract_indicator_style(v107) as i8;
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v107, "dired") as i8;
        if ((v1 ^ 1) & v0 != 1) {
            v74 = v125;
            v75 = 9223372036854775810;
            goto LABEL_520b5a;
        }
        v59 = uu_ls::parse_time_style(v107);
        v143 = v59;
        if v29 != 7 {
            v145 = *((&v59 as &char + 1) as &i128);
            v146 = *((&v59 as &char + 32) as &i128);
            v83 = *((&v59 as &char + 16) as &i128);
            v82 = v145;
            *(&v36 as &struct57) = v59.48;
            v34 = v146;
            v30 = v82;
            v32 = *((&v82 as &char + 15) as &i128);
            v29 = v143;
            v139 = alloc::boxed::Box<T>::new(&v29);
LABEL_5209e6:
            v147 = a0;
            *((v147 + 8) as &i64) = v139;
            *((v147 + 16) as &&i64) = &g_612620;
            *(v147 as &i64) = 0x8000000000000000;
        } else {
            v74 = v125;
            v144 = *((&v59 as &char + 8) as &i128);
            v118 = v118 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v144;
            v75 = v144;
            v76 = v59.24;
LABEL_520b5a:
            v56 = 0;
            v57 = 8;
            v58 = 0;
            v6 = v107;
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v107, "ignore-backups") as i8 {
                v29 = glob::Pattern::new("*~");
                v59 = core::result::Result<T,E>::unwrap(&v29, "src/uu/ls/src/ls.rs");
                v56 = alloc::vec::Vec<T,A>::push(&v59, v102);
                v29 = glob::Pattern::new(".*~");
                v59 = core::result::Result<T,E>::unwrap(&v29, "src/uu/ls/src/ls.rs");
                v56 = alloc::vec::Vec<T,A>::push(&v59, v102);
            }
            v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v6, "ignore");
            v59 = clap_builder::parser::error::MatchesError::unwrap("ignore", &v29);
            v54 = v132;
            v81 = 1;
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v107, "g") as i32 ^ 1;
            v148 = v20;
            v53 = v148 >> 8;
            v21 = v148 >> 16;
            v149 = v59;
            v150 = *((&v59 as &char + 16) as &i128);
            v151 = *((&v59 as &char + 32) as &i128);
            v37 = *((&v59 as &char + 48) as &i128);
            v35 = v151;
            v33 = v150;
            v31 = v149;
            v152 = v77;
            v153 = v78;
            v154 = v79;
            v39 = v152;
            v40 = v153;
            v41 = v154;
            v42 = v80;
            v155 = v77;
            v156 = v118 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v149 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v152 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v155;
            v157 = v78;
            v159 = v158 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v150 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v153 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v157;
            v160 = v79;
            v162 = v161 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v151 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v154 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v160;
            v44 = v155;
            v45 = v157;
            v46 = v160;
            v48 = v80;
            v29 = 1;
            v38 = 0;
            v43 = 0;
            loop {
                v165 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v29, v163, v164);
                if !v165 {
                    break;
                }
                v166 = *((v165 + 8) as &i64);
                v59 = uucore::parser::parse_glob::from_str(v166, *((v165 + 16) as &i64));
                if v59 != 0x8000000000000000 {
                    v88 = v65;
                    v168 = v59;
                    v156 = v156 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v168;
                    v169 = *((&v59 as &char + 16) as &i128);
                    v159 = v159 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v169;
                    v170 = *((&v59 as &char + 32) as &i128);
                    v162 = v162 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v170;
                    v87 = v170;
                    v86 = v169;
                    v85 = v168;
                    v56 = alloc::vec::Vec<T,A>::push(&v85, v102);
                } else {
                    v24 = uucore::util_name();
                    v25 = v102;
                    eprint!("{:?}: warning: ", &v24);
                    v24 = 0;
                    v25 = v166;
                    v24.field_16 = vvar_1049{reg 112};
                    v26 = 1;
                    eprintln!("Invalid pattern for ignore: {:?}", &v24);
                }
            }
            if v3 == 2 {
                v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v6, "hide");
                v59 = clap_builder::parser::error::MatchesError::unwrap("hide", &v29);
                v171 = v59;
                v172 = *((&v59 as &char + 16) as &i128);
                v173 = *((&v59 as &char + 32) as &i128);
                v37 = *((&v59 as &char + 48) as &i128);
                v35 = v173;
                v33 = v172;
                v31 = v171;
                v174 = v77;
                v175 = v78;
                v176 = v79;
                v39 = v174;
                v40 = v175;
                v41 = v176;
                v42 = v80;
                v177 = v77;
                v178 = v156 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v171 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v174 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v177;
                v179 = v78;
                v180 = v159 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v172 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v175 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v179;
                v181 = v79;
                v182 = v162 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v173 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v176 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v181;
                v44 = v177;
                v45 = v179;
                v46 = v181;
                v48 = v80;
                v29 = 1;
                v38 = 0;
                v43 = 0;
                loop {
                    v185 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v29, v183, v184);
                    if !v185 {
                        break;
                    }
                    v186 = *((v185 + 8) as &i64);
                    v59 = uucore::parser::parse_glob::from_str(v186, *((v185 + 16) as &i64));
                    if v59 == 0x8000000000000000 {
                        v24 = uucore::util_name();
                        v25 = v102;
                        eprint!("{:?}: warning: ", &v24);
                        v24 = 0;
                        v25 = v186;
                        v24.field_16 = vvar_1134{reg 112};
                        v26 = 1;
                        eprintln!("Invalid pattern for hide: {:?}", &v24);
                    } else {
                        v92 = v65;
                        v188 = v59;
                        v178 = v178 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v188;
                        v189 = *((&v59 as &char + 16) as &i128);
                        v180 = v180 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v189;
                        v190 = *((&v59 as &char + 32) as &i128);
                        v182 = v182 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v190;
                        v91 = v190;
                        v90 = v189;
                        v89 = v188;
                        v56 = alloc::vec::Vec<T,A>::push(&v89, v102);
                    }
                }
            }
            v29 = struct168 {
                field_0: v6
                field_8: &anon.93c251adab0f837eec2f5865e5b29e23.28.llvm.10262286748963977039
                field_16: 1
                field_24: &anon.93c251adab0f837eec2f5865e5b29e23.27.llvm.10262286748963977039
                field_32: 1
                field_40: &anon.93c251adab0f837eec2f5865e5b29e23.30.llvm.10262286748963977039
                field_48: 1
                field_56: &anon.93c251adab0f837eec2f5865e5b29e23.26.llvm.10262286748963977039
                field_64: 4
                field_72: &anon.93c251adab0f837eec2f5865e5b29e23.32.llvm.10262286748963977039
                field_80: 1
                field_88: &anon.93c251adab0f837eec2f5865e5b29e23.31.llvm.10262286748963977039
                field_96: 1
                field_104: &anon.93c251adab0f837eec2f5865e5b29e23.33.llvm.10262286748963977039
                field_112: 15
                field_120: &anon.93c251adab0f837eec2f5865e5b29e23.25.llvm.10262286748963977039
                field_128: 1
                field_136: &anon.34cd953b2c946f74a585889e96ce9d7a.27.llvm.16853030268703478466
                field_144: 6
                field_152: 0
                field_160: 9
            };
            v195 = (!(uu_ls::Config::from::{{closure}}(v6, "zero") <= v194) ? 2 - (v0 == 1) : v0);
            v29 = struct40 {
                field_0: v6
                field_8: &anon.34cd953b2c946f74a585889e96ce9d7a.35.llvm.16853030268703478466
                field_16: 5
                field_24: 0
                field_32: 1
            };
            *(&v29.field_0 as &struct56) = struct56 {
                field_0: v6
                field_8: &anon.34cd953b2c946f74a585889e96ce9d7a.22.llvm.16853030268703478466
                field_16: 18
                field_24: &anon.34cd953b2c946f74a585889e96ce9d7a.23.llvm.16853030268703478466
                field_32: 18
                field_40: 0
                field_48: 2
            };
            v202 = v19;
            if uu_ls::Config::from::{{closure}}(v6, "zero") > v201 {
                v202 = 1;
            }
            v19 = v202;
            v203 = uu_ls::Config::from::{{closure}}(v6, "zero");
            v29 = struct88 {
                field_0: v6
                field_8: &anon.34cd953b2c946f74a585889e96ce9d7a.21.llvm.16853030268703478466
                field_16: 13
                field_24: &anon.fab34c35a86c36917711c18ae4d7480d.2.llvm.13771626934311262642
                field_32: 10
                field_40: &anon.fab34c35a86c36917711c18ae4d7480d.0.llvm.13771626934311262642
                field_48: 6
                field_56: &anon.fab34c35a86c36917711c18ae4d7480d.1.llvm.13771626934311262642
                field_64: 7
                field_72: 0
                field_80: 4
            };
            v205 = v22;
            v206 = v205 & uu_ls::Config::from::{{closure}}(v6, "zero") <= v198;
            v208 = (!(v203 <= v207) ? v19 : v20);
            v209 = (amd64g_calculate_condition(6, 8, v203, v207, v104) as char ? v21 : 3);
            if !v206 {
                v82 = 0x8000000000000000;
                if !(!v1) {
                    goto LABEL_52158e;
                }
LABEL_5216c2:
                v210 = (!uu_ls::dired::is_dired_arg_present() as i8 ? v195 : 1);
LABEL_5216d5:
                v212 = 3;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference") as i8 {
                    v212 = 3;
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference-command-line") as i8 {
                        v212 = 3;
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference-command-line-symlink-to-dir") as i8 {
                            v212 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "directory") as i32 | -0x100;
                        }
                    }
                }
                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "reverse") as i8;
                v28 = v58;
                v27 = v56;
                v213 = v6;
                v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v213, "directory") as i8;
                v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "recursive") as i32;
                v20 = v209;
                v22 = v208;
                memcpy(&v59, &v82, 160);
                v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v213, "inode") as i8;
                v52 = v210;
                v24.field_16 = vvar_1708{stack -440};
                v24 = v75;
                v32 = v28;
                v29 = v27;
                memcpy(&v29, &v59, 160);
                v47 = v24;
                v49 = v24.field_16;
                v217 = a0;
                memcpy(v217, &v29, 208);
                *((v217 + 208) as &i64) = v81;
                *((v217 + 216) as &i64) = v74;
                *((v217 + 224) as &i8) = v12;
                *((v217 + 225) as &i8) = v54;
                *((v217 + 226) as &i8) = v10;
                *((v217 + 227) as &i8) = v11;
                *((v217 + 228) as &i16) = v23;
                *((v217 + 230) as &i8) = v21;
                *((v217 + 231) as &i8) = v0;
                *((v217 + 232) as &i8) = v19;
                *((v217 + 233) as &i8) = v9;
                *((v217 + 234) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v213, "size") as i32;
                *((v217 + 235) as &i8) = v16;
                *((v217 + 236) as &i8) = 0;
                *((v217 + 237) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v213, "group-directories-first") as i32;
                *((v217 + 238) as &i8) = v1;
                *((v217 + 239) as &i8) = v13;
                *((v217 + 240) as &i8) = v3;
                *((v217 + 241) as &i8) = v55;
                *((v217 + 242) as &i8) = v212;
                *((v217 + 243) as &i8) = v14;
                *((v217 + 244) as &i8) = v2;
                *((v217 + 245) as &i8) = v22;
                *((v217 + 246) as &i8) = v53;
                *((v217 + 247) as &i8) = v20;
                *((v217 + 248) as &i8) = v52;
                *((v217 + 249) as &i8) = v15;
                *((v217 + 250) as &i32) = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v213, "zero") as i8 ? 0 : 10);
                return a0;
            }
            v29 = lscolors::LsColors::from_env(v192, v207, v205 | -0x100 | v206, v136);
            match v29 {
                Some(_) => {
                    memcpy(&v59, &v29, 160);
                },
                None => {
                    v59 = <lscolors::LsColors as core::default::Default>::default(v192, v102, v135, v136);
                },
            }
            memcpy(&v82, &v59, 160);
            if !v1 {
                goto LABEL_5216c2;
            }
LABEL_52158e:
            v210 = v195 | -0x100 | 1;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "zero") as i8 {
                goto LABEL_5216d5;
            }
            v29 = 4;
            v211 = a0;
            *((v211 + 8) as &double) = alloc::boxed::Box<T>::new(&v29);
            *((v211 + 16) as &&i64) = &g_612620;
            *(v211 as &i64) = 0x8000000000000000;
        }
        if !(!v17 && v70 != 0x8000000000000000) {
            return a0;
        }
        return a0;
    }
}
