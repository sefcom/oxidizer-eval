fn uu_ls::Config::from(a0: &Result<struct208, struct16>, a1: &struct56) -> u64 {
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
    let v19: i32;  // [bp-0x424], Other Possible Types: char
    let v20: i32;  // [sp-0x420]
    let v21: i8;  // [bp-0x41c], Other Possible Types: unsigned int
    let v22: i32;  // [bp-0x418], Other Possible Types: char
    let v23: i16;  // [sp-0x412]
    let v24: i64;  // [sp-0x408], Other Possible Types: int
    let v25: i64;  // [sp-0x400]
    let v26: i64;  // [sp-0x3f8]
    let v27: i8;  // [sp-0x3f0]
    let v28: struct16;  // [sp-0x3e8]
    let v29: i64;  // [sp-0x3d8]
    let v30: iNone;  // [sp-0x3c8], Other Possible Types: Result<struct16, struct8>, unsigned long, char, struct56, struct49, Option<struct160>
    let v31: struct24;  // [sp-0x3c8], Other Possible Types: int
    let v32: iNone;  // [bp-0x3c7]
    let v33: i64;  // [sp-0x3c0], Other Possible Types: int
    let v34: i64;  // [bp-0x3b8], Other Possible Types: int
    let v35: iNone;  // [bp-0x3b0], Other Possible Types: unsigned long
    let v36: iNone;  // [bp-0x3a8]
    let v37: iNone;  // [bp-0x3a0]
    let v38: i64;  // [bp-0x398]
    let v39: iNone;  // [bp-0x390]
    let v40: i64;  // [sp-0x380]
    let v41: iNone;  // [bp-0x378]
    let v42: iNone;  // [bp-0x368]
    let v43: iNone;  // [bp-0x358]
    let v44: i64;  // [sp-0x348]
    let v45: i64;  // [sp-0x340]
    let v46: iNone;  // [bp-0x338]
    let v47: iNone;  // [bp-0x328]
    let v48: iNone;  // [bp-0x318]
    let v49: iNone;  // [bp-0x310]
    let v50: i64;  // [sp-0x308]
    let v51: i64;  // [sp-0x300]
    let v52: iNone;  // [sp-0x2f8]
    let v53: i64;  // [sp-0x2e8]
    let v54: i32;  // [sp-0x2e0]
    let v55: i32;  // [sp-0x2dc]
    let v56: i32;  // [sp-0x2d8]
    let v57: i32;  // [sp-0x2d4]
    let v58: struct16;  // [sp-0x2d0], Other Possible Types: unsigned long
    let v59: i64;  // [sp-0x2c8]
    let v60: i64;  // [sp-0x2c0]
    let v61: struct56;  // [sp-0x2b8], Other Possible Types: struct57, Option<struct24>, Result<struct56, struct2>, unsigned long
    let v62: i64;  // [sp-0x2b0]
    let v63: i64;  // [sp-0x2a8]
    let v64: i64;  // [sp-0x2a0]
    let v65: i64;  // [sp-0x298]
    let v66: i64;  // [sp-0x290]
    let v67: i64;  // [sp-0x288]
    let v68: i64;  // [sp-0x280]
    let v69: iNone;  // [bp-0x278], Other Possible Types: struct64, struct49, struct153, char
    let v70: i8;  // [bp-0x218]
    let v71: i8;  // [bp-0x208]
    let v72: i8;  // [bp-0x200]
    let v73: i8;  // [bp-0x1f0]
    let v74: i8;  // [bp-0x1e8]
    let v75: i8;  // [bp-0x1d8]
    let v76: i64;  // [sp-0x1d0]
    let v78: iNone;  // [bp-0x1c8], Other Possible Types: unsigned long
    let v79: i64;  // [sp-0x1b8]
    let v80: i8;  // [bp-0x1a8]
    let v81: i8;  // [bp-0x198]
    let v82: i8;  // [bp-0x188]
    let v83: i8;  // [bp-0x178]
    let v84: i64;  // [sp-0x170]
    let v85: iNone;  // [sp-0x168]
    let v86: i64;  // [sp-0x168]
    let v87: iNone;  // [bp-0x159]
    let v88: i8;  // [bp-0xc0]
    let v89: iNone;  // [sp-0xa8]
    let v90: iNone;  // [sp-0x98]
    let v91: iNone;  // [sp-0x88]
    let v92: i64;  // [sp-0x78]
    let v93: iNone;  // [sp-0x68]
    let v94: iNone;  // [sp-0x58]
    let v95: iNone;  // [sp-0x48]
    let v96: i64;  // [sp-0x38]
    let v98: i64;  // r15
    let v100: i64;  // rbp
    let v101: i64;  // rbx
    let v104: iNone;  // xmm0
    let v105: iNone;  // ymm0
    let v106: iNone;  // ymm0
    let v107: i64;  // r12
    let v108: i64;  // r14
    let v109: i64;  // rbp
    let v110: i64;  // rax
    let v111: i64;  // r12
    let v112: i64;  // rax
    let v113: i64;  // rbp
    let v114: i32;  // ebx
    let v118: iNone;  // xmm0
    let v119: iNone;  // ymm0
    let v120: i64;  // rax
    let v121: iNone;  // xmm0
    let v122: i64;  // rax
    let v123: iNone;  // xmm0
    let v124: iNone;  // xmm0
    let v125: i64;  // r14
    let v127: i32;  // ebp
    let v128: i32;  // eax
    let v129: i8;  // al
    let v134: i32;  // eax
    let v135: i64;  // rax
    let v136: i64;  // rax
    let v137: i8;  // al
    let v138: iNone;  // xmm0
    let v139: iNone;  // xmm0
    let v140: iNone;  // xmm2
    let v141: i32;  // ecx
    let v142: iNone;  // xmm0
    let v143: iNone;  // xmm1
    let v144: iNone;  // xmm2
    let v145: iNone;  // xmm0
    let v146: iNone;  // xmm1
    let v147: iNone;  // xmm2
    let v148: iNone;  // xmm0
    let v149: iNone;  // ymm0
    let v150: iNone;  // xmm1
    let v151: iNone;  // ymm1
    let v152: iNone;  // ymm1
    let v153: iNone;  // xmm2
    let v154: iNone;  // ymm2
    let v155: iNone;  // ymm2
    let v156: i64;  // rax
    let v157: i64;  // r15
    let v158: i64;  // r12
    let v159: iNone;  // xmm0
    let v160: iNone;  // xmm1
    let v161: iNone;  // xmm2
    let v162: i64;  // rdx
    let v163: iNone;  // xmm0
    let v164: iNone;  // xmm1
    let v165: iNone;  // xmm2
    let v166: iNone;  // xmm0
    let v167: iNone;  // xmm1
    let v168: iNone;  // xmm2
    let v169: iNone;  // xmm0
    let v170: iNone;  // ymm0
    let v171: iNone;  // xmm1
    let v172: iNone;  // ymm1
    let v173: iNone;  // xmm2
    let v174: iNone;  // ymm2
    let v175: i64;  // rax
    let v176: i64;  // r15
    let v177: i64;  // r12
    let v178: iNone;  // xmm0
    let v179: iNone;  // xmm1
    let v180: iNone;  // xmm2
    let v182: i64;  // rax
    let v184: i64;  // rbp
    let v186: i64;  // rax
    let v189: i64;  // rax
    let v191: i32;  // ecx
    let v192: i64;  // rbx
    let v193: i64;  // rax
    let v195: i64;  // rdx
    let v196: i32;  // ebx
    let v197: i32;  // r12d
    let v198: i32;  // ebp
    let v199: i64;  // r15
    let v200: i64;  // r14
    let v201: i8;  // r15b
    let v203: i64;  // cc_ndep

    v98 = a1;
    v30 = uu_ls::extract_format(a1);
    v100 = v30;
    v101 = v33;
    v3 = uu_ls::extract_files(a1) as i8;
    v0 = 1;
    if v100 as u8 != 1 {
        v86 = 0;
        v61 = &anon.8bf1419b86641518549345aedc57e906.6.llvm.11260003342554782039;
        v62 = 1;
        v63 = &anon.8bf1419b86641518549345aedc57e906.7.llvm.11260003342554782039;
        v64 = 1;
        v65 = &anon.8bf1419b86641518549345aedc57e906.8.llvm.11260003342554782039;
        v66 = 15;
        v67 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.32.llvm.16502254941234113161;
        v68 = 9;
        *(&v30 as &&unsigned long) = &v61;
        v33 = &v69;
        v34 = a1;
        v35 = 0;
        *(&v38 as &i64) = 0;
        v0 = 1;
        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::adapters::flatten::FlattenCompat<I,U>::iter_try_fold(&v30, &v86) as i32) {
            v61 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "1");
            if v61 {
                v34 = v63;
                v104 = v61 as i128;
                v106 = v105 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v104 as u256;
                v30 = v104;
                if clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "1") as i8 == 2 {
                    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v30, &v86)) {
                        v100 = 2;
                    } else {
                        v100 = v100 & 4294967295 & 4294967295;
                    }
                }
            }
LABEL_5203e8:
            v0 = v100 as u8;
            goto LABEL_5203e8;
        }
    }
    v107 = uu_ls::extract_time(a1) as i32;
    *(&v22 as &i8) = uu_ls::extract_color(a1) as i8;
    v13 = uu_ls::extract_hyperlink(a1) as i8;
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "block-size");
    v108 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v30);
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "context") as i32;
    v15 = uu_ls::extract_sort(a1) as i32;
    v14 = v107 as u8;
    if !v108 {
        v111 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "si") as i32;
        goto LABEL_520578;
    } else {
        v109 = a1;
        v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "block-size");
        v110 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v30);
        if !v110 {
            core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
        }
        v111 = v107 & -0x100 | 1;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v110 + 8) as &i64), *((v110 + 16) as &i64), "si") as i8 {
            v111 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v109, "si") as i32;
        }
        v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v109, "block-size");
        v112 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v30);
        if !v112 {
            core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v112 + 8) as &i64), *((v112 + 16) as &i64), "human-readable") as i8 {
            v98 = v109;
            v113 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v109, "kibibytes") as i32;
            v114 = (v111 + 1) as u32;
        } else {
            v98 = v109;
LABEL_520578:
            v113 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v98, "kibibytes") as i32;
            v114 = (!(v111 & 255 & 255) ? clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v98, "human-readable") as i32 : 2);
        }
        v4 = (std::env::var_os("BLOCKSIZE") & -0x100 | 1) as u32;
        v5 = (std::env::var_os("BLOCK_SIZE") & -0x100 | 1) as u32;
        v4 = (v5 & 0xffffffffffffff00) as u64 | 1;
        v8 = (std::env::var_os("LS_BLOCK_SIZE") & -0x100 | 1) as u32;
        v5 = (v8 & 0xffffffffffffff00) as u64 | 1;
        v4 = (v5 & 0xffffffffffffff00) as u64 | 1;
        if v108 {
            v8 = (std::env::var_os("POSIXLY_CORRECT") & -0x100 | 1) as u32;
            v5 = (v8 & 0xffffffffffffff00) as u64 | 1;
            v4 = (v5 & 0xffffffffffffff00) as u64 | 1;
            v31 = std::sys::os_str::bytes::Slice::to_owned(*((v108 + 8) as &i64), *((v108 + 16) as &i64));
            goto LABEL_52066a;
        }
        if *(&v74 as &i64) != 0x8000000000000000 {
            v53 = *(&v75 as &i64);
            v118 = *(&v74 as &i128);
            v119 = v106 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v118 as u256;
            v52 = v118;
            v120 = v53 & -0x100 | 1;
            v18 = v120 as u32;
            v7 = 0;
            v8 = 0;
            goto LABEL_520737;
        } else if *(&v72 as &i64) != 0x8000000000000000 {
            v53 = *(&v73 as &i64);
            v121 = *(&v72 as &i128);
            v119 = v106 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v121 as u256;
            v52 = v121;
            v8 = (v53 & -0x100 | 1) as u32;
            v7 = 0;
            v18 = 0;
            v122 = (v8 & 0xffffffffffffff00) as u64 | 1;
            v17 = v122 as u32;
            v5 = 0;
LABEL_520745:
            v4 = (v122 & -0x100 | 1) as u32;
        } else if *(&v70 as &i64) != 0x8000000000000000 {
            v53 = *(&v71 as &i64);
            v123 = *(&v70 as &i128);
            v119 = v106 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v123 as u256;
            v52 = v123;
            v7 = (v53 & -0x100 | 1) as u32;
            v18 = 0;
            v8 = (v7 & 0xffffffffffffff00) as u64 | 1;
            v17 = 0;
            v5 = (v8 & 0xffffffffffffff00) as u64 | 1;
            v4 = 0;
        } else {
            v8 = 1;
            v5 = 1;
            v4 = 1;
            v31 = std::sys::os_str::bytes::Slice::to_owned(0x1, 0);
LABEL_52066a:
            v53 = (&v31)[16] as i64;
            v124 = v31 as i128;
            v119 = v106 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v124 as u256;
            v52 = v124;
            v120 = v53 & -0x100 | 1;
            v8 = v120 as u32;
            v7 = 0;
            v18 = 0;
LABEL_520737:
            v17 = 0;
            v122 = v120 & -0x100 | 1;
            v5 = v122 as u32;
            goto LABEL_520745;
        }
        v57 = v114;
        if *(&v88 as &i64) != 0x8000000000000000 {
            v125 = ((v113 & 4294967295 & 4294967295) * 0x200 & 4294967295) + 0x200;
        } else {
            v125 = (1 ? 1000 : 0x400);
        }
        v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v98, "author") as i8;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v98, "no-group") as i8 {
            v127 = 0;
        } else {
            v128 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v98, "o") as i32;
            v127 = (v128 & 0xffffffffffffff00) as u64 | v128 as u8 ^ 1;
        }
        v129 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v98, "g") as i32;
        v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v98, "numeric-uid-gid") as i8;
        v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v98, "width");
        v61 = uu_ls::parse_width(clap_builder::parser::error::MatchesError::unwrap(&anon.3f7e092f2ea554bdd060175bd8ea63d9.17.llvm.16502254941234113161, 5, &v30));
        match v61 {
            Ok(_) => {
                v30 = struct56 {
                    field_0: v130
                    field_1: v131
                    field_2: v132
                    field_4: *((&v61 as &char + 4) as &i128)
                    field_20: *((&v61 as &char + 20) as &i128)
                    field_36: *((&v61 as &char + 36) as &i128)
                    field_52: *((&v61 as &char + 52) as &i32)
                };
                alloc::boxed::Box<T>::new(&v30);
                goto LABEL_520a96;
            },
            Err(v23) => {
            },
        }
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v98, "hide-control-chars") as i8 {
            v134 = 0;
        } else {
            v135 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v98, "show-control-chars");
            v134 = (v135 & -0x100 | 1) as u32;
            if !v135 as u8 {
                *(&v30 as &long long) = std::io::stdio::stdout();
                v136 = std::sys::pal::unix::io::is_terminal();
                v134 = v136 & -0x100 | v136 as u8 ^ 1;
            }
        }
        v19 = v134;
        v20 = uu_ls::extract_quoting_style(v98, v134) as i32;
        v2 = uu_ls::extract_indicator_style(v98) as i8;
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v98, "dired") as i8;
        if ((v1 ^ 1) & v0 != 1) {
            v76 = v125;
            *(&v78 as &i64) = 9223372036854775810;
            goto LABEL_520c0a;
        }
        v61 = uu_ls::parse_time_style(v98);
        v137 = v61.field_0;
        if v30 != 7 {
            v139 = v61.field_1;
            v140 = *((&v61.field_24 as &char + 7) as &i128);
            *(&v87 as &i128) = *((&v61.field_1 as &char + 15) as &i128);
            v85 = v139;
            v38 = v67;
            v36 = v140;
            *(&v32 as &i128) = v85 as i128;
            *(&v34 as &i128) = (&v85)[15] as i128;
            v30 = v137;
            alloc::boxed::Box<T>::new(&v30);
LABEL_520a96:
            return Err(struct16 {
                field_0: v133
                field_8: &g_612480
            });
        }
        v76 = v125;
        v138 = *((&v61.field_1 as &char + 7) as &i128);
        v119 = v119 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v138 as u256;
        v78 = v138;
        v79 = v64;
LABEL_520c0a:
        v58 = 0;
        v59 = 8;
        v60 = 0;
        v6 = v98;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v98, "ignore-backups") as i8 {
            v30 = glob::Pattern::new(&g_434ef9);
            v61 = core::result::Result<T,E>::unwrap(&v30, "src/uu/ls/src/ls.rs");
            v58 = alloc::vec::Vec<T,A>::push(&v61);
            v30 = glob::Pattern::new(&g_434efb);
            v61 = core::result::Result<T,E>::unwrap(&v30, "src/uu/ls/src/ls.rs");
            v58 = alloc::vec::Vec<T,A>::push(&v61);
        }
        v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v6, "ignore");
        v69 = clap_builder::parser::error::MatchesError::unwrap("ignore", &v30);
        v56 = v127;
        v84 = 1;
        v10 = v129 ^ 1;
        v141 = v20;
        v55 = v141 >> 8;
        v21 = v141 >> 16;
        v142 = v69.field_0;
        v143 = v69.field_16;
        v144 = v69.field_32;
        *(&v39 as &u128) = v69.field_48;
        v37 = v144;
        v35 = v143;
        v33 = v142;
        v145 = *(&v80 as &i128);
        v146 = *(&v81 as &i128);
        v147 = *(&v82 as &i128);
        v41 = v145;
        v42 = v146;
        v43 = v147;
        v44 = *(&v83 as &i64);
        v148 = *(&v80 as &i128);
        v149 = ((v119 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v142 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v145 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v148 as u256;
        v150 = *(&v81 as &i128);
        v152 = ((v151 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v143 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v146 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v150 as u256;
        v153 = *(&v82 as &i128);
        v155 = ((v154 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v144 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v147 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v153 as u256;
        v46 = v148;
        v47 = v150;
        v48 = v153;
        v50 = *(&v83 as &i64);
        *(&v30 as &i64) = 1;
        v40 = 0;
        v45 = 0;
        loop {
            v156 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v30);
            if !v156 {
                break;
            }
            v157 = *((v156 + 8) as &i64);
            v158 = *((v156 + 16) as &i64);
            v69 = uucore::parser::parse_glob::from_str(v157, v158);
            if v61 != 0x8000000000000000 {
                v92 = v67;
                v159 = v69.field_0;
                v149 = v149 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v159 as u256;
                v160 = *(&v69.field_16 as &i128);
                v152 = v152 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v160 as u256;
                v161 = *(&v69.field_32 as &i128);
                v155 = v155 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v161 as u256;
                v91 = v161;
                v90 = v160;
                v89 = v159;
                v58 = alloc::vec::Vec<T,A>::push(&v89);
            } else {
                v25 = v162;
                v24 = 0;
                v25 = v157;
                v26 = v158;
                v27 = 1;
                show_warning!("Invalid pattern for ignore: {}", &v24);
            }
        }
        if v3 == 2 {
            v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v6, "hide");
            v69 = clap_builder::parser::error::MatchesError::unwrap("hide", &v30);
            v163 = v69.field_0;
            v164 = v69.field_16;
            v165 = v69.field_32;
            *(&v39 as &u128) = v69.field_48;
            v37 = v165;
            v35 = v164;
            v33 = v163;
            v166 = *(&v80 as &i128);
            v167 = *(&v81 as &i128);
            v168 = *(&v82 as &i128);
            v41 = v166;
            v42 = v167;
            v43 = v168;
            v44 = *(&v83 as &i64);
            v169 = *(&v80 as &i128);
            v170 = ((v149 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v163 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v166 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v169 as u256;
            v171 = *(&v81 as &i128);
            v172 = ((v152 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v164 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v167 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v171 as u256;
            v173 = *(&v82 as &i128);
            v174 = ((v155 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v165 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v168 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v173 as u256;
            v46 = v169;
            v47 = v171;
            v48 = v173;
            v50 = *(&v83 as &i64);
            *(&v30 as &i64) = 1;
            v40 = 0;
            v45 = 0;
            loop {
                v175 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v30);
                if !v175 {
                    break;
                }
                v176 = *((v175 + 8) as &i64);
                v177 = *((v175 + 16) as &i64);
                v69 = uucore::parser::parse_glob::from_str(v176, v177);
                if v61 == 0x8000000000000000 {
                    v25 = v162;
                    v24 = 0;
                    v25 = v176;
                    v26 = v177;
                    v27 = 1;
                    show_warning!("Invalid pattern for hide: {}", &v24);
                } else {
                    v96 = v67;
                    v178 = v69.field_0;
                    v170 = v170 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v178 as u256;
                    v179 = *(&v69.field_16 as &i128);
                    v172 = v172 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v179 as u256;
                    v180 = *(&v69.field_32 as &i128);
                    v174 = v174 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v180 as u256;
                    v95 = v180;
                    v94 = v179;
                    v93 = v178;
                    v58 = alloc::vec::Vec<T,A>::push(&v93);
                }
            }
        }
        v23 as u1344 = *(&v6 as &i1344);
        v182 = core::iter::traits::iterator::Iterator::reduce(&v23);
        v184 = (!(uu_ls::Config::from::{{closure}}(v6, "zero") <= v182) ? 2 - (v0 == 1) : v0);
        v30 = *(&v6 as &i320);
        v186 = core::iter::traits::iterator::Iterator::reduce(&v30);
        v30 = *(&v6 as &i448);
        v189 = core::iter::traits::iterator::Iterator::reduce(&v30);
        v191 = *((&(&v6)[4] as &char + 4) as &i32);
        if uu_ls::Config::from::{{closure}}(v6, "zero") > v189 {
            v191 = 1;
        }
        v19 = v191;
        v192 = uu_ls::Config::from::{{closure}}(v6, "zero");
        v30 = *(&v6 as &i704);
        v193 = core::iter::traits::iterator::Iterator::reduce(&v30);
        if !v193 {
            v195 = v193;
        }
        v196 = (!(v192 <= v195) ? v19 as i8 : (&v6)[5] as i8);
        v197 = (amd64g_calculate_condition(6, 8, v192, v195, v203) as char ? *((&(&v6)[5] as &char + 4) as &i8) : 3);
        if !((&v6)[6] as i8 & uu_ls::Config::from::{{closure}}(v6, "zero") <= v186) {
            v86 = 0x8000000000000000;
            if !(!v1) {
                goto LABEL_52163e;
            }
LABEL_521772:
            v198 = (!uu_ls::dired::is_dired_arg_present() as i8 ? v184 as u32 : 1);
LABEL_521785:
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference-command-line") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "dereference-command-line-symlink-to-dir") as i8 {
                v199 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "directory") & 4294967295 & 4294967295 & -0x100;
            }
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "reverse") as i8;
            v29 = v60;
            v28 = v58;
            v200 = v6;
            *(&v19 as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v200, "directory") as i8;
            *(&v21 as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "recursive") as i32;
            v20 = v197;
            v22 = v196;
            memcpy(&v69, &v86, 160);
            v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v200, "inode") as i8;
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v200, "size");
            v54 = v198;
            v26 = v79;
            *(&v24 as &i128) = v78 as i128;
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v200, "group-directories-first");
            v201 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v200, "zero") as i8 ? 0 : 10);
            v34 = v29;
            *(&v30 as &i128) = *(&v28.field_0 as &i128);
            memcpy(&v30, &v69, 160);
            *(&v49 as &i128) = v24 as i128;
            v51 = v26;
            memcpy(a0, &v30, 208);
        } else {
            v30 = lscolors::LsColors::from_env();
            match v30 {
                Some(_) => {
                    memcpy(&v69, &v30, 160);
                },
                None => {
                    v69 = <lscolors::LsColors as core::default::Default>::default();
                },
            }
            memcpy(&v86, &v69, 160);
            if !v1 {
                goto LABEL_521772;
            }
LABEL_52163e:
            v198 = (v184 & -0x100 | 1) as u32;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, "zero") as i8 {
                goto LABEL_521785;
            }
            v30 = 4;
        }
    }
}
