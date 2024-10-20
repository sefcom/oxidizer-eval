fn uu_cp::Options::from_matches(a0: void*, a1: void*) -> u64 {
    let v0: i8;  // [sp-0x28e]
    let v1: i8;  // [sp-0x28d]
    let v2: i8;  // [sp-0x28c]
    let v3: i8;  // [sp-0x28b]
    let v4: i8;  // [sp-0x28a]
    let v5: i8;  // [sp-0x289]
    let v6: i32;  // [bp-0x288]
    let v7: i32;  // [bp-0x280]
    let v8: i32;  // [bp-0x278]
    let v9: i32;  // [bp-0x270]
    let v10: i64;  // [sp-0x268]
    let v11: i64;  // [sp-0x260]
    let v12: i64;  // [sp-0x258]
    let v13: i64;  // [sp-0x250]
    let v14: i64;  // [sp-0x248]
    let v15: i8;  // [sp-0x23e]
    let v16: i8;  // [sp-0x23d]
    let v17: i8;  // [sp-0x23c]
    let v18: i8;  // [sp-0x23b]
    let v19: i8;  // [sp-0x23a]
    let v20: i8;  // [sp-0x239]
    let v21: i32;  // [bp-0x238]
    let v22: i8;  // [bp-0x230]
    let v23: i64;  // [sp-0x228], Other Possible Types: struct24, Arguments, Argument, struct40, struct12
    let v24: i64;  // [sp-0x220]
    let v25: i64;  // [bp-0x218]
    let v26: i64;  // [bp-0x210]
    let v27: i64;  // [sp-0x208]
    let v28: i8;  // [bp-0x1f0]
    let v29: i64;  // [sp-0x1e8], Other Possible Types: Argument
    let v30: i64;  // [sp-0x1e0]
    let v31: i64;  // [bp-0x1d8]
    let v32: i64;  // [sp-0x1d0]
    let v33: i64;  // [sp-0x1c8]
    let v34: i64;  // [sp-0x1b8]
    let v35: i32;  // [sp-0x1ac]
    let v36: i128;  // [bp-0x1a8], Other Possible Types: struct40, Arguments
    let v37: i8;  // [sp-0x1a7]
    let v38: i8;  // [sp-0x1a6]
    let v39: i8;  // [sp-0x1a5]
    let v40: i8;  // [sp-0x1a4]
    let v41: i8;  // [sp-0x1a3]
    let v42: i8;  // [sp-0x1a2]
    let v43: i8;  // [sp-0x1a1]
    let v44: i64;  // [bp-0x1a0]
    let v45: i64;  // [sp-0x198]
    let v46: i64;  // [sp-0x190]
    let v47: i64;  // [sp-0x188]
    let v48: i64;  // [sp-0x178]
    let v49: i64;  // [sp-0x170]
    let v50: i64;  // [sp-0x168]
    let v51: i64;  // [sp-0x160]
    let v52: i64;  // [sp-0x158]
    let v53: i64;  // [sp-0x150]
    let v54: i64;  // [bp-0x138]
    let v55: i32;  // [sp-0x12c]
    let v56: i64;  // [sp-0x128], Other Possible Types: Enum, struct24
    let v57: i64;  // [sp-0x120]
    let v58: i64;  // [sp-0x118]
    let v59: i64;  // [sp-0x110]
    let v60: i64;  // [sp-0x108], Other Possible Types: struct16
    let v61: i64;  // [sp-0x100]
    let v62: i64;  // [sp-0xf8]
    let v63: i8;  // [bp-0xf0]
    let v64: i64;  // [sp-0xe8]
    let v65: i64;  // [sp-0xe0]
    let v66: i32;  // [sp-0xd4]
    let v67: i192;  // [sp-0xd0], Other Possible Types: struct24
    let v68: i64;  // [sp-0xb8]
    let v69: i64;  // [sp-0xb0]
    let v70: i64;  // [sp-0xa8]
    let v71: String;  // [sp-0xa0], Other Possible Types: i192
    let v72: String;  // [sp-0x88], Other Possible Types: i192
    let v73: i192;  // [sp-0x70], Other Possible Types: String
    let v74: i8;  // [bp-0x58]
    let v75: i8;  // [bp-0x50]
    let v77: i64;  // r12
    let v78: i64;  // rcx
    let v79: i64;  // rax
    let v80: i64;  // rcx
    let v81: i64;  // rdi
    let v85: i64;  // r9
    let v86: i64;  // rax
    let v87: i8;  // r13b
    let v88: i64;  // rcx
    let v89: i64;  // rax
    let v90: i64;  // rax
    let v91: i64;  // rcx
    let v92: i64;  // rax
    let v93: i128;  // xmm0
    let v96: i64;  // r13
    let v97: i64;  // rax
    let v98: i64;  // rdx
    let v99: i64;  // rdx
    let v100: i64;  // r15
    let v101: i64;  // rbx
    let v102: i64;  // rax
    let v104: i64;  // rbx
    let v105: i64;  // rdx
    let v106: i256;  // ymm0
    let v107: i64;  // rax
    let v108: i64;  // rdx
    let v109: i64;  // r13
    let v110: i64;  // rbp
    let v111: i64;  // r14
    let v112: i64;  // rbx
    let v114: i64;  // rax
    let v115: i64;  // rbx
    let v116: i64;  // rbp
    let v117: i64;  // r14
    let v118: i64;  // r14
    let v119: i64;  // rbx
    let v120: i64;  // rax
    let v121: i64;  // rax
    let v122: i64;  // rcx
    let v123: i64;  // rdx
    let v124: i64;  // rdx
    let v125: i64;  // rax
    let v126: i64;  // rbp
    let v128: i64;  // rbx
    let v130: i64;  // rbp
    let v131: i64;  // r14
    let v132: i64;  // rbx
    let v133: i128;  // xmm0
    let v134: i64;  // rcx
    let v135: i64;  // rax
    let v136: i64;  // rcx
    let v137: i64;  // r14
    let v139: i64;  // rax
    let v140: i64;  // r14
    let v142: i64;  // rbp
    let v143: i64;  // rax
    let v144: i64;  // rcx
    let v145: i64;  // r14
    let v146: i64;  // rsi
    let v147: i64;  // rsi
    let v148: i64;  // r14
    let v149: i64;  // rcx
    let v151: i64;  // rax
    let v152: i256;  // ymm1
    let v153: i256;  // ymm2
    let v154: i64;  // rsi
    let v155: i128;  // xmm0
    let v156: i128;  // xmm0
    let v157: i256;  // ymm0
    let v158: i64;  // rdx
    let v159: i64;  // r8
    let v160: i128;  // xmm0
    let v161: i128;  // xmm1
    let v162: i128;  // xmm2
    let v164: i64;  // r14
    let v166: i128;  // xmm0
    let v167: i128;  // xmm0
    let v168: i256;  // ymm1
    let v169: i256;  // ymm0
    let v170: i64;  // rax
    let v171: i64;  // rcx
    let v172: i64;  // r12
    let v173: i256;  // ymm0
    let v174: i64;  // rbx
    let v175: i64;  // r13
    let v176: i64;  // rdx
    let v177: i64;  // r15
    let v178: i64;  // rax
    let v179: i64;  // rdi
    let v180: i64;  // rbp
    let v181: i64;  // rax
    let v182: i128;  // xmm0
    let v183: i128;  // xmm0
    let v184: i128;  // xmm1
    let v185: i128;  // xmm1
    let v187: i128;  // xmm0
    let v188: i128;  // xmm0
    let v189: i128;  // xmm1
    let v190: i128;  // xmm1
    let v192: i64;  // rax
    let v193: i64;  // rax
    let v194: i64;  // rdx
    let v195: i64;  // rax
    let v196: i8;  // r15b
    let v198: i8;  // dl
    let v199: i64;  // r8
    let v200: i8;  // bl
    let v203: i32;  // eax
    let v204: i8;  // r10b
    let v205: i8;  // sil
    let v206: i8;  // al
    let v209: i32;  // eax
    let v210: i8;  // cl
    let v212: i8;  // r9b
    let v215: i32;  // eax
    let v216: i8;  // dil
    let v217: i8;  // r11b
    let v218: i8;  // cc_dep1
    let v219: i32;  // eax
    let v220: i8;  // dl
    let v221: i8;  // bpl
    let v222: i64;  // rax
    let v223: i32;  // edx
    let v225: i8;  // sil
    let v227: i32;  // edx
    let v228: i32;  // eax
    let v232: i32;  // r11d
    let v233: i32;  // esi
    let v234: i32;  // edx
    let v236: i64;  // rbp
    let v237: i32;  // edi
    let v239: i64;  // rbx
    let v240: i32;  // ecx
    let v243: i64;  // r9
    let v245: i32;  // r10d
    let v246: i64;  // r9
    let v249: i32;  // r8d
    let v251: i64;  // xmm0lq
    let v252: i256;  // ymm1
    let v253: i128;  // xmm2
    let v254: i128;  // xmm3
    let v255: i128;  // xmm4
    let v256: i64;  // rax
    let v257: i64;  // rax
    let v258: i64;  // rcx
    let v259: i128;  // xmm0
    let v260: i128;  // xmm0
    let v261: i64;  // r14
    let v262: i64;  // r14
    let v263: i64;  // r12
    let v264: i64;  // rcx
    let v265: i64;  // rax
    let v266: i64;  // rcx
    let v268: i64;  // rcx
    let v269: i128;  // xmm0
    let v270: i64;  // rax
    let v271: i64;  // rcx
    let v273: i64;  // r14
    let v274: i64;  // rbx
    let v275: i128;  // xmm0
    let v276: i64;  // rcx
    let v277: i64;  // rcx

    v77 = *((a1 + 8) as &i64);
    v78 = *((a1 + 16) as &i64);
    v28 = *((a1 + 40) as &i64);
    v54 = *((a1 + 32) as &i64);
    v12 = v78;
    if v12 {
        v79 = v12 * 16;
        v80 = 0;
        do {
            if *((v77 + v80 + 8) as &i64) == 7 && !(*((v81 + 3) as &i32) ^ 1954047348) && !(*(v81 as &i32) ^ 1953394531) {
                do {
                    if *((v77 + 0 + 8) as &i64) == 7 && !(*((v85 + 3) as &i32) ^ 1954047348) && !(*(v85 as &i32) ^ 1953394531) {
                        if 0 >= v28 {
                            core::panicking::panic_bounds_check(); /* do not return */
                        }
                        if *((v54 + 97) as &i8) == 2 {
                            v86 = __rust_alloc(7, 1);
                            *((v86 + 3) as &i32) = 1954047348;
                            *(v86 as &i32) = 1953394531;
                            *((a0 + 8) as &i64) = 10;
                            *((a0 + 16) as &i64) = 7;
                            *((a0 + 24) as &i64) = v86;
                            *((a0 + 32) as &i64) = 7;
                            *(a0 as &i64) = 0x8000000000000000;
                            return a0;
                        }
                        break;
                    }
                } while ((v80 += 16, v79 != v80));
            }
        } while ((v80 += 16, v79 != v80));
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_426723, 9) as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_426bcd, 7);
    }
    v56 = uucore::features::backup_control::determine_backup_mode(a1);
    if !v29 {
        v87 = *((&v56 as &char + 8) as &i8);
        v20 = uucore::features::update_control::determine_update_mode(a1) as i8;
        v67 = uucore::features::backup_control::determine_backup_suffix(a1);
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_426676, 11) as i8 {
            v90 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_426681, 10);
            if v90 {
                v55 = v90 | -0x100 | 2;
                v35 = v55;
            } else {
                v55 = 0;
                v35 = 0;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_426810, 5) as i8 {
LABEL_4b4cc4:
                    v35 = v91 | -0x100 | 2 - clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_4268bf, 18) as i8;
                }
            }
        } else {
            v55 = v91 | -0x100 | 1;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_426810, 5) as i8 {
                goto LABEL_4b4cc4;
            }
            v35 = 0;
        }
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_426604, 19) as i8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v29, a1, &g_418f70, 16);
        v60 = &g_418f70;
        v61 = 16;
        if v29 != 2 {
            v27 = v33;
            v93 = v29;
            v25 = v31;
            v23 = v93;
            v56 = &v60;
            v57 = <&T as core::fmt::Display>::fmt;
            v58 = &v23;
            v59 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            *(&v36 as &&str) = "Mismatch between definition and access of `";
            v44 = 2;
            v47 = 0;
            v45 = &v56;
            v46 = 2;
            v36 = core::panicking::panic_fmt();
        }
        v92 = v30;
        v5 = 1;
        v18 = v87;
        if !v92 {
            v10 = 0x8000000000000000;
            goto LABEL_4b4df0;
        }
        v10 = *((v92 + 16) as &i64);
        if !v10 {
            v10 = v10;
        } else {
            v97 = __rust_alloc(v10, 1);
            if v97 {
                v10 = v10;
            }
        }
        v98 = v10;
        memcpy(v96, *((v92 + 8) as &i64), v98);
        if !std::path::Path::is_dir(v96, v98) as i8 {
            v99 = v10;
            if v99 {
                v102 = __rust_alloc(v99, 1);
                if v102 {
                    v105 = v10;
                }
            }
            memcpy(v104, v96, v105);
            v151 = a0;
            *((v151 + 16) as &i64) = v10;
            *((v151 + 24) as &i64) = v104;
            a0 = v151;
            *((a0 + 32) as &i64) = v10;
            *((a0 + 8) as &i64) = 12;
            *(a0 as &i64) = 0x8000000000000000;
            goto LABEL_4b6449;
        }
        v34 = v96;
LABEL_4b4df0:
        v60 = 0;
        v61 = 8;
        v62 = 0;
        v36 = &g_418820;
        v44 = 8;
        v45 = &g_426ac3;
        v46 = 11;
        v47 = &g_426bcd;
        v48 = &g_426a71;
        v49 = 27;
        v50 = &g_426bee;
        v51 = 29;
        v53 = 5;
        v100 = v12 * 16;
        v14 = v54 + 40;
        v101 = 0;
        *(&v63 as &&str) = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rs";
        v68 = &v56;
        do {
            v101 += 1;
            v52 = v101;
            v107 = v101 * 16;
            v108 = *((&v36 as &u8 + v107) as &i64);
            v109 = *((&v44 as &u8 + v107) as &i64);
            v22 = *((&v36 as &u8 + v107) as &i64);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v74, a1, v108, v109);
            if v12 {
                v6 = v52;
                v110 = 0;
                v111 = 0;
                v14 = v14;
                loop {
                    v112 = v14;
                    if !(*((v77 + v110 + 8) as &i64) == v109) || !(!bcmp(*((v77 + v110) as &i64), v22, v109) as i64) {
                        v110 += 16;
                        v111 += 1;
                        if v100 == v110 {
                            goto LABEL_4b5040;
                        }
                    } else {
                        if v111 >= v28 {
                            core::panicking::panic_bounds_check(); /* do not return */
                        }
                        if *(v112 as &i64) && v74 == 2 && (v114 = v75, v114) && *(v114 as &i8) {
                            v118 = *(*((v112 - 8) as &i64) as &i64);
                            v119 = v62;
                            if v119 == v60 {
                                v60 = alloc::raw_vec::RawVec<T,A>::grow_one();
                            }
                            v121 = v61;
                            v122 = v119 * 48;
                            *((v121 + v122) as &i64) = v22;
                            *((v121 + v122 + 8) as &i64) = v109;
                            *((v121 + v122 + 16) as &i64) = v118;
                            *((v121 + v122 + 24) as &i64) = 0;
                            *((v121 + v122 + 32) as &i64) = 8;
                            *((v121 + v122 + 40) as &i64) = 0;
                            v62 = v119 + 1;
                            break;
                        }
LABEL_4b5040:
                        v115 = v54;
                        v116 = 0;
                        v117 = 0;
                        while (!(*((v77 + v116 + 8) as &i64) == v109) || !(!bcmp(*((v77 + v116) as &i64), v22, v109))) {
                            v116 += 16;
                            v115 += 104;
                            v117 += 1;
                            if v100 == v116 {
                                v7 = 0;
LABEL_4b5107:
                                v126 = 0;
                                v14 = v14;
                                do {
                                    v128 = v14;
                                    if *((v77 + v126 + 8) as &i64) == v109 && !bcmp(*((v77 + v126) as &i64), v22, v109) as i64 {
                                        if 0 >= v28 {
                                            core::panicking::panic_bounds_check(); /* do not return */
                                        }
                                        v130 = v7;
                                        if v130 && v130 != v13 {
                                            v131 = *((v128 - 8) as &i64);
                                            v132 = v131 + *(v128 as &i64) * 8;
                                            loop {
                                                v56 = core::ops::function::FnOnce::call_once(v130);
                                                if !v56 {
                                                    break;
                                                }
                                                v31 = v58;
                                                v133 = v56;
                                                vvar_499{reg 224} = ((vvar_499{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1285{reg 224}))
                                                v29 = v133;
                                                if v131 != v132 {
                                                    v21 = *(v131 as &i64);
                                                    v131 += 8;
                                                    if !(1 == 1) {
                                                        goto LABEL_4b51ed;
                                                    }
                                                } else {
                                                    v131 = v132;
                                                    if !(0 == 1) {
                                                        goto LABEL_4b51ed;
                                                    }
                                                }
                                                v23 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v29);
                                                v134 = v25;
                                                v7 = v130;
                                                v9 = v134;
                                                if v134 >= 2 {
                                                    v135 = v134 - 1;
                                                    if v134 - 2 >= 7 {
                                                        v136 = v135 & -8;
                                                        do {
                                                            v131 = ...;
                                                        } while (v136 != 8);
                                                    }
                                                    v139 = v135 & 7;
                                                    if (v135 & 7) {
                                                        do {
                                                            v131 = v140 + (-0x100 | v140 != v132) * 8;
                                                        } while (v139 != 1);
                                                    }
                                                }
                                                v11 = v23;
                                                v8 = v24;
                                                v142 = v62;
                                                if v142 == v60 {
                                                    v60 = alloc::raw_vec::RawVec<T,A>::grow_one();
                                                }
                                                v143 = v61;
                                                v144 = 3 * v142 * 16;
                                                *((v143 + v144) as &i64) = v22;
                                                *((v143 + v144 + 8) as &i64) = v109;
                                                *((v143 + v144 + 16) as &i64) = v21;
                                                *((v143 + v144 + 24) as &i64) = v11;
                                                *((v143 + v144 + 32) as &i64) = v8;
                                                *((v143 + v144 + 40) as &i64) = v9;
                                                v62 = v142 + 1;
                                                v130 = v7;
LABEL_4b51ed:
                                                v130 += 24;
                                                if v130 == v13 {
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                } while ((v80 += 16, v79 != v80));
                            }
                        }
                        if v117 >= v28 {
                            *(&v63 as &&str) = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rs";
                        } else {
                            v120 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id(v115, 9479156756246622757);
                            if !(v120 == 9479156756246622757) || !(v123 == 15398537441398644645) {
                                v64 = v22;
                                v65 = v109;
                                v29 = 0;
                                v30 = v120;
                                v31 = v123;
                                v32 = 9479156756246622757;
                                v33 = 15398537441398644645;
                                v56 = &v64;
                                v57 = <&T as core::fmt::Display>::fmt;
                                v58 = &v29;
                                v59 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                                v23 = "Mismatch between definition and access of `";
                                v24 = 2;
                                v27 = 0;
                                v25 = &v56;
                                v26 = 2;
                                v23 = core::panicking::panic_fmt();
                            }
                            v124 = *((v115 + 56) as &i64);
                            v125 = *((v115 + 64) as &i64);
                            v7 = v124;
                            v13 = v124 + v125 * 24;
                            goto LABEL_4b5107;
                            goto LABEL_4b5107;
                        }
                    }
                }
                v101 = v6;
            }
        } while (v101 != 5);
        v145 = v61;
        v146 = v62;
        v29 = &v56;
        if v146 >= 2 {
            if v146 >= 21 {
                core::slice::sort::stable::driftsort_main(v145, v146, &v29);
            } else {
                v149 = v145 + 48;
                do {
                    v154 = *((v149 + 16) as &i64);
                    if v154 < *((v149 - 32) as &i64) {
                        v155 = *(v149 as &i128);
                        v23 = v155;
                        v156 = *((v149 + 24) as &i128);
                        vvar_360{reg 224} = ((((vvar_193{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1465{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1467{reg 224}))
                        v36 = v156;
                        v45 = *((v149 + 40) as &i64);
                        do {
                            v159 = v158;
                            v160 = *((v145 + v159 - 48) as &i128);
                            vvar_360{reg 224} = ((vvar_360{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1471{reg 224}))
                            v161 = *((v145 + v159 - 32) as &i128);
                            vvar_162{reg 256} = ((vvar_361{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1473{reg 256}))
                            v162 = *((v145 + v159 - 16) as &i128);
                            vvar_195{reg 288} = ((vvar_362{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1475{reg 288}))
                            *((v145 + v159 + 32) as &i128) = v162;
                            *((v145 + v159 + 16) as &i128) = v161;
                            *((v145 + v159) as &i128) = v160;
                            if v159 == 48 {
                                goto LABEL_4b53e3;
                            }
                        } while ((v80 += 16, v79 != v80));
LABEL_4b53e3:
                        v166 = v23;
                        *(v164 as &i128) = v166;
                        *((v164 + 16) as &i64) = v154;
                        v167 = v36;
                        vvar_1493{reg 224} = ((((vvar_360{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1490{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1492{reg 224}))
                        *((v164 + 24) as &i128) = v167;
                        *((v164 + 40) as &i64) = v45;
                    }
                } while ((v80 += 16, v79 != v80));
            }
            v147 = v62;
            v148 = v61;
        }
        v170 = v60;
        v171 = v147 * 48 + v148;
        v29 = v148;
        v30 = v148;
        v54 = v170;
        v31 = v170;
        v22 = v171;
        v32 = v171;
        if !v147 {
            v14 = 0;
            v6 = 0;
            v12 = 0;
            v8 = 0;
            v11 = 0;
            v21 = 0;
            v7 = 0;
            v13 = 0;
            v9 = 0;
            goto LABEL_4b5d09;
        } else {
            v172 = v148 + 48;
            v9 = 0;
            v13 = 0;
            v7 = 0;
            v21 = 0;
            v11 = 0;
            v8 = 0;
            v12 = 0;
            v6 = 0;
            v14 = 0;
        }
        loop {
            v174 = *((v172 - 24) as &i64);
            if v174 == 0x8000000000000000 {
                break;
            }
            v175 = v172 - 48;
            v176 = *((v172 - 40) as &i64);
            v177 = *((v175 + 32) as &i64);
            v178 = *((v172 - 40) as &i64) - 7;
            switch (v178) {
            case 0:
                v181 = *(v179 as &i32) ^ 1751347809;
                if !(*((v179 + 3) as &i32) ^ 1702259048) && !v181 {
                    v9 = 65793;
                    v14 = v181 | -0x100 | 1;
                    v7 = 0;
                    v192 = v14 | -0x100 | 1;
                    v6 = v192;
                    v12 = v192 | -0x100 | 1;
                    v193 = v12 | -0x100 | 1;
                    v8 = v193;
                    v11 = v193 | -0x100 | 1;
                    v21 = v11 | -0x100 | 1;
                    v13 = 0;
                    goto LABEL_4b5b60;
                }
            case 1:
                if !(*(v179 as &i64) == 7311156825135870576) {
                    goto LABEL_4b5b60;
                }
                v23 = struct24 {
                    field_0: v177
                    field_8: v177
                    field_16: v174
                };
                v26 = v177 + v180 * 8;
                uu_cp::Attributes::parse_iter(&v36, &v23);
                v195 = v36;
                if v195 != 13 {
                    v30 = v172;
                    vvar_553{reg 256} = (((vvar_162{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, vvar_2965{stack -408}))
                } else {
                    v196 = *((&v36 as &char + 8) as &i8);
                    v198 = v21;
                    if !v21 {
                        v199 = v9;
                        v200 = v8;
                    } else {
                        v199 = v9;
                        v200 = v8;
                    }
                    v204 = *((&v36 as &char + 14) as &i8);
                    v205 = *((&v36 as &char + 15) as &i8);
                    v206 = v7;
                    v28 = *((&v36 as &char + 9) as &i8);
                    v210 = *((&v36 as &char + 12) as &i8);
                    v212 = v6;
                    v4 = v206;
                    v3 = *((&v36 as &char + 13) as &i8);
                    v216 = *((&v36 as &char + 10) as &i8);
                    v217 = *((&v36 as &char + 11) as &i8);
                    v8 = v198;
                    v2 = v212;
                    v0 = v200;
                    v220 = v45;
                    v221 = *((&v45 as &char + 1) as &i8);
                    v63 = v205;
                    v15 = (v199 & 255 & 255);
                    v16 = v221;
                    v225 = *((&v45 as &char + 2) as &i8);
                    v9 = *((&v45 as &char + 3) as &i8);
                    v1 = v217;
                    v17 = (v199 & 0xff0000);
                    v66 = -0x100 | (v199 & 0xff0000);
                    v69 = v199 >> 24;
                    v232 = (!v15 ? -0x100 | v220 : -0x100 | (v199 & 255 & 255));
                    v233 = v16;
                    if v15 {
                        v233 = v199 >> 8;
                    }
                    v234 = (v0 ? -0x100 | v200 : -0x100 | v216);
                    if v0 {
                        v236 = v12;
                    } else {
                        v236 = v1;
                    }
                    v12 = v236;
                    v237 = (v2 ? -0x100 | v6 : -0x100 | v210);
                    if v2 {
                        v239 = v14;
                    } else {
                        v239 = v3;
                    }
                    v14 = v239;
                    v240 = (v4 ? -0x100 | v7 : -0x100 | v204);
                    if v4 {
                        v243 = v13;
                    } else {
                        v243 = v63;
                    }
                    v13 = v243;
                    v245 = (v8 ? -0x100 | v21 : -0x100 | v196);
                    v246 = (v8 ? v11 : v28);
                    v11 = v246;
                    v9 = v249 * 0x1000000 | (-0x100 | v225) * 0x10000 | v233 * 0x100 | v232;
                    v6 = v237;
                    v8 = v234;
                    v21 = v245;
                    v7 = v240;
                    break;
                }
LABEL_4b6654:
                *((a0 + 56) as &i128) = v255;
                *((a0 + 44) as &i128) = v254;
                *((a0 + 28) as &i128) = v253;
                *((a0 + 8) as &i64) = v195;
                *((a0 + 16) as &i64) = v251;
                *((a0 + 24) as &i32) = v252;
                *(a0 as &i64) = 0x8000000000000000;
                goto LABEL_4b643f;
            case 4:
                if !(!bcmp(v179, &g_426ac3, v176) as i64) || !(v180) {
                    goto LABEL_4b5b60;
                }
                v23 = struct24 {
                    field_0: v177
                    field_8: v177
                    field_16: v174
                };
                v26 = v177 + v180 * 8;
                uu_cp::Attributes::parse_iter(&v36, &v23);
                v195 = v36;
                if v195 != 13 {
                    v30 = v172;
                    v251 = *((&v36 as &char + 8) as &i64);
                    vvar_553{reg 256} = (((vvar_162{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, vvar_2965{stack -408}))
                    v253 = *((&v36 as &char + 20) as &i128);
                    v254 = *((&v36 as &char + 36) as &i128);
                    v255 = v48;
                    goto LABEL_4b6654;
                } else {
                    v11 = (*((&v36 as &char + 8) as &i8) ? v11 & 4294967295 : 1);
                    v203 = v21;
                    if *((&v36 as &char + 8) as &i8) {
                        v203 = 0;
                    }
                    v21 = v203;
                    v12 = (*((&v36 as &char + 10) as &i8) ? v12 & 4294967295 : 1);
                    v209 = v8;
                    if *((&v36 as &char + 10) as &i8) {
                        v209 = 0;
                    }
                    v8 = v209;
                    v14 = (*((&v36 as &char + 12) as &i8) ? v14 & 4294967295 : 1);
                    v215 = v6;
                    if *((&v36 as &char + 12) as &i8) {
                        v215 = 0;
                    }
                    v6 = v215;
                    v218 = *((&v36 as &char + 14) as &i8);
                    v219 = v7;
                    if *((&v36 as &char + 14) as &i8) {
                        v219 = 0;
                    }
                    v7 = v219;
                    if v218 {
                        v222 = 1;
                    } else {
                        v222 = v13 & 4294967295;
                    }
                    v13 = v222;
                    v223 = v9;
                    if *((&v45 as &char + 2) as &i8) {
                        v227 = 0x1000000;
                    } else {
                        v227 = v223 & -0x1000000;
                    }
                    v228 = (*((&v45 as &char + 2) as &i8) ? 0 : v223 & 0xff0000);
                    v9 = v228 | (v45 ? 0x100 : v223) | v227;
                    break;
                }
            case 20:
                v182 = *(v179 as &i128);
                v183 = BinaryOp CmpEQV;
                vvar_161{reg 224} = ((((vvar_161{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1562{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1564{reg 224}))
                v184 = *((v179 + 11) as &i128);
                v185 = BinaryOp CmpEQV;
                vvar_162{reg 256} = ((((((vvar_162{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1566{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1568{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_1568{reg 256} & vvar_1564{reg 224})))
                if !(UnaryOp GetMSBs == 65535) {
                    goto LABEL_4b5b60;
                }
                v36 = Arguments {
                    pieces: &[&str] {
                        ptr: v21 as i8
                        len: <UNKNOWN>
                    }
                    args: [&v23]
                    fmt: None
                };
                v38 = v8;
                v40 = v6;
                v43 = v13;
                v44 = v9;
                v194 = &g_426de9;
                goto LABEL_4b5afe;
            case 22:
                v187 = *(v179 as &i128);
                v188 = BinaryOp CmpEQV;
                vvar_161{reg 224} = ((((vvar_161{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1576{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1578{reg 224}))
                v189 = *((v179 + 13) as &i128);
                v190 = BinaryOp CmpEQV;
                vvar_162{reg 256} = ((((((vvar_162{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1580{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1582{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_1582{reg 256} & vvar_1578{reg 224})))
                if !(UnaryOp GetMSBs == 65535) {
                    goto LABEL_4b5b60;
                }
                v36 = v21;
                v37 = v11;
                v39 = v12;
                v41 = v14;
                v42 = v7;
                v44 = v9;
                v194 = &g_426ddd;
LABEL_4b5afe:
                v23 = uu_cp::Attributes::union(&v36, v194);
                v21 = v23;
                v11 = *((&v23 as &char + 1) as &i8);
                v8 = *((&v23 as &char + 2) as &i8);
                v12 = *((&v23 as &char + 3) as &i8);
                v6 = *((&v23 as &char + 4) as &i8);
                v14 = *((&v23 as &char + 5) as &i8);
                v7 = *((&v23 as &char + 6) as &i8);
                v13 = *((&v23 as &char + 7) as &i8);
                v9 = *((&v23 as &char + 8) as &i32);
                goto LABEL_4b5b60;
            default:
LABEL_4b5b60:
                if v174 {
                    break;
                }
                v172 += 48;
                if v175 + 48 == v22 {
                    v172 = v22;
                    goto LABEL_4b5d01;
                }
            }
        }
LABEL_4b5d01:
        v30 = v172;
LABEL_4b5d09:
        a0 = a0;
        if (v7 & 1) {
            v256 = __rust_alloc(48, 1);
            *((v256 + 32) as &i128) = 44391164981157529150503389488016811368;
            *((v256 + 16) as &i128) = 154358698846444706370649701816301874789;
            *(v256 as &i128) = 43139862373314236892915413742686848339;
            v44 = 48;
            v45 = v256;
            v46 = 48;
            v36 = 4;
            if !(v13 & 1) {
                v64 = &v36;
                if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                    once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                }
                v260 = g_55c040;
                vvar_161{reg 224} = ((((((((vvar_161{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x21656d697420656c69706d6f63206568<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x7420676e697275642064656c62616e65<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x20746f6e207361772078756e694c4553<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2217{reg 224}))
                v29 = v260;
                v56 = &v29;
                v57 = <&T as core::fmt::Display>::fmt;
                v23 = Arguments {
                    pieces: [&g_555318, ": "]
                    args: &[&Argument] {
                        ptr: &v56
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v26 = 1;
                std::io::stdio::_eprint(&v23);
                v29 = &v64;
                v30 = <&T as core::fmt::Display>::fmt;
                v23 = Arguments {
                    pieces: [&g_555338, "\n"]
                    args: &[&Argument] {
                        ptr: &v29
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v26 = 1;
                std::io::stdio::_eprint(&v23);
            } else {
                v257 = v36;
                v258 = v44;
                v259 = *((&v36 as &char + 32) as &i128);
                *((a0 + 56) as &i64) = v48;
                *((a0 + 40) as &i128) = v259;
                *((a0 + 24) as &i64) = v45;
                *((a0 + 32) as &i64) = v46;
                *((a0 + 8) as &i64) = v257;
                *((a0 + 16) as &i64) = v258;
LABEL_4b6432:
                *(a0 as &i64) = 0x8000000000000000;
LABEL_4b643f:
                if v10 != 0x8000000000000000 {
LABEL_4b6449:
                }
                if v67 {
                    return a0;
                }
                return a0;
            }
        }
        v261 = a1;
        v54 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v261, &g_4266bb, 15) as i8;
        v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v261, &g_4266ca, 13) as i8;
        v63 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v261, &g_426b8f, 18) as i8;
        v4 = uu_cp::CopyMode::from_matches(v261) as i8;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v261, &g_426b2b, 14) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_426bee, 29) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_426bcd, 7) as i8 || (v22 = 1, v5 && uu_cp::CopyMode::from_matches(a1) as i8) {
            v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_426b39, 11) as i8;
        }
        v262 = a1;
        v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v262, &g_426c34, 15) as i8;
        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v262, &g_426af5, 7) as i8;
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v262, &g_426793, 5) as i8;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v262, &g_4267c0, 7) as i8 {
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_426793, 5);
        }
        v263 = a1;
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v263, &g_426748, 22) as i8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v29, v263, &g_4266a7, 7);
        v64 = &g_4266a7;
        v65 = 7;
        if v29 != 2 {
            v27 = v33;
            v269 = v29;
            v25 = v31;
            v23 = v269;
            v56 = &v64;
            v57 = <&T as core::fmt::Display>::fmt;
            v58 = &v23;
            v59 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            *(&v36 as &&str) = "Mismatch between definition and access of `";
            v44 = 2;
            v47 = 0;
            v45 = v68;
            v46 = 2;
            v36 = core::panicking::panic_fmt();
        }
        v264 = v30;
        if v264 {
            v265 = *((v264 + 8) as &i64);
            v266 = *((v264 + 16) as &i64);
            switch (v266) {
            case 4:
                if *(v265 as &i32) == 1869903201 {
                    break;
                }
                goto LABEL_4b6236;
            case 5:
                if !(!(*((v265 + 4) as &i8) ^ 114)) || !(!(1702258030 ^ *(v265 as &i32))) {
                    goto LABEL_4b6236;
                }
                break;
            case 6:
                if !(!(*((v265 + 4) as &i16) ^ 29561)) || !(!(1635216481 ^ *(v265 as &i32))) {
                    goto LABEL_4b6236;
                }
                break;
            default:
LABEL_4b6236:
                v23 = 0;
                v24 = v265;
                v25 = v266;
                v26 = 1;
                v29 = Argument {
                    value: &v23
                    formatter: <os_display::Quoted as core::fmt::Display>::fmt
                };
                *(&v36 as &&str) = "invalid argument ";
                v44 = 2;
                v72 = alloc::fmt::format::format_inner(&v36);
                *((a0 + 32) as &i64) = *((&v72 as &char + 16) as &i64);
LABEL_4b6425:
                *((a0 + 16) as &i192) = v72;
                *((a0 + 8) as &i64) = 9;
                goto LABEL_4b6432;
            }
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v29, a1, &g_426c5b, 6);
        v64 = &g_426c5b;
        v65 = 6;
        if v29 != 2 {
            vvar_3413{stack -520} = v33;
            vvar_3414{reg 224} = v29;
            v25 = v31;
            v23 = v269;
            vvar_3415{stack -296} = &v64;
            vvar_3416{stack -288} = <&T as core::fmt::Display>::fmt;
            vvar_3417{stack -280} = &v23;
            vvar_3418{stack -272} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            *(&v36 as &&str) = "Mismatch between definition and access of `";
            v44 = 2;
            vvar_3419{stack -392} = 0;
            vvar_3420{stack -408} = v68;
            vvar_3421{stack -400} = 2;
            vvar_3422{stack -424} = core::panicking::panic_fmt();
        }
        v268 = v30;
        if v268 {
            v70 = v268;
            v270 = *((v268 + 8) as &i64);
            switch (v271) {
            case 4:
                if *(v270 as &i32) == 1869903201 {
                    break;
                }
                goto LABEL_4b6399;
            case 5:
                if !(!(*((v270 + 4) as &i8) ^ 114)) || !(!(1702258030 ^ *(v270 as &i32))) {
                    goto LABEL_4b6399;
                }
                break;
            case 6:
                if !(!(*((v270 + 4) as &i16) ^ 29561)) || !(!(1635216481 ^ *(v270 as &i32))) {
                    goto LABEL_4b6399;
                }
                break;
            default:
LABEL_4b6399:
                v23 = Argument {
                    value: &v70
                    formatter: <&T as core::fmt::Display>::fmt
                };
                *(&v36 as &&str) = "invalid argument ";
                v44 = 2;
                v73 = alloc::fmt::format::format_inner(&v36);
                *((a0 + 32) as &i64) = *((&v73 as &char + 16) as &i64);
                goto LABEL_4b6425;
            }
        }
        v273 = *((&v67 as &char + 8) as &i64);
        v274 = *((&v67 as &char + 16) as &i64);
        vvar_2495{reg 224} = Conv(32->128, (Conv(8->32, (Load(addr=stack_base-560, size=1, endness=Iend_LE) * 0x1000000<8>)) | (Conv(8->32, (Load(addr=stack_base-240, size=1, endness=Iend_LE) * 0x10000<8>)) | (Conv(8->32, (Load(addr=stack_base-496, size=1, endness=Iend_LE) * 0x100<8>)) | Conv(8->32, Load(addr=stack_base-312, size=1, endness=Iend_LE))))))
        v276 = a0;
        *(v276 as &i192) = v67;
        *((v276 + 8) as &i64) = v273;
        *((v276 + 16) as &i64) = v274;
        a0 = v276;
        v277 = v10;
        *((a0 + 24) as &i64) = v277;
        *((a0 + 32) as &i64) = v34;
        *((a0 + 40) as &i64) = v277;
        *((a0 + 48) as &i8) = v21;
        *((a0 + 49) as &i8) = v11;
        *((a0 + 50) as &i8) = v8;
        *((a0 + 51) as &i8) = v12;
        *((a0 + 52) as &i8) = v6;
        *((a0 + 53) as &i8) = v14;
        *((a0 + 54) as &i8) = v7;
        *((a0 + 55) as &i8) = v13;
        *((a0 + 56) as &i32) = v9;
        *((a0 + 60) as &i8) = v55;
        *((a0 + 61) as &i8) = v35;
        STORE(addr=(vvar_3411{reg 40} + 0x3e<64>), data=Conv(256->64, ((((((vvar_440{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2495{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((0x0<64> CONCAT (Conv(32->64, ((Conv(8->32, (vvar_3307{stack -651} * 0x100<8>)) | Conv(8->32, vvar_3120{stack -570})) & 0xffff<32>)) * 0x100000000<64>)) | (vvar_2495{reg 224} & 0xffffffffffffffffffff0000ffffffff<128>)))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((0x0<64> CONCAT (Conv(32->64, ((Conv(8->32, (vvar_3315{stack -654} * 0x100<8>)) | Conv(8->32, vvar_3309{stack -652})) & 0xffff<32>)) * 0x1000000000000<64>)) | (((0x0<64> CONCAT (Conv(32->64, ((Conv(8->32, (vvar_3307{stack -651} * 0x100<8>)) | Conv(8->32, vvar_3120{stack -570})) & 0xffff<32>)) * 0x100000000<64>)) | (vvar_2495{reg 224} & 0xffffffffffffffffffff0000ffffffff<128>)) & 0xffffffffffffffff0000ffffffffffff<128>))))), size=8, endness=Iend_LE, guard=None)
        *((a0 + 70) as &i8) = v5;
        *((a0 + 71) as &i8) = v1;
        *((a0 + 72) as &i8) = 1;
        *((a0 + 73) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_418948, 8) as i8;
        *((a0 + 74) as &i8) = 1;
        *((a0 + 75) as &i8) = 1;
        *((a0 + 76) as &i8) = v18;
        *((a0 + 77) as &i8) = v20;
        *((a0 + 78) as &i8) = v4;
        return a0;
    } else {
        v29 = v56;
        v30 = v57;
        v23 = &v29;
        v24 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v36 = &g_418dc0;
        v44 = 1;
        v47 = 0;
        v45 = &v23;
        v46 = 1;
        v71 = alloc::fmt::format::format_inner(&v36);
        v88 = a0;
        *((v88 + 32) as &i64) = *((&v71 as &char + 16) as &i64);
        *((v88 + 16) as &i192) = v71;
        *((v88 + 8) as &i64) = 11;
        *(v88 as &i64) = 0x8000000000000000;
        if !*(v30 as &i64) {
            return a0;
        }
        v89();
    }
}
