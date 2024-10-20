fn uu_fmt::linebreak::break_lines(a0: void*, a1: void*, a2: void*, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x1e1]
    let v1: i64;  // [sp-0x1d8]
    let v2: i64;  // [sp-0x1d0]
    let v3: i64;  // [bp-0x1c8]
    let v4: i8;  // [sp-0x1b9]
    let v5: i64;  // [sp-0x1b8]
    let v6: i64;  // [sp-0x1b0]
    let v7: i64;  // [bp-0x1a8]
    let v8: i64;  // [sp-0x1a0]
    let v9: i64;  // [sp-0x198], Other Possible Types: struct16
    let v10: i64;  // [sp-0x190]
    let v11: i64;  // [sp-0x188]
    let v12: i64;  // [sp-0x180]
    let v13: struct16;  // [sp-0x178], Other Possible Types: i64
    let v14: i64;  // [sp-0x170]
    let v15: i64;  // [sp-0x168]
    let v16: i64;  // [sp-0x160]
    let v17: i64;  // [sp-0x158]
    let v18: i64;  // [sp-0x150]
    let v19: i64;  // [sp-0x148]
    let v20: i32;  // [sp-0x140]
    let v21: i32;  // [sp-0x13c]
    let v22: struct16;  // [sp-0x138], Other Possible Types: i64
    let v23: i64;  // [sp-0x130]
    let v24: i64;  // [sp-0x128]
    let v25: i64;  // [sp-0x120]
    let v26: i64;  // [sp-0x118]
    let v27: i64;  // [sp-0x110]
    let v28: i64;  // [sp-0x108]
    let v29: i64;  // [sp-0x100]
    let v30: i64;  // [sp-0xf8]
    let v31: i64;  // [sp-0xf0]
    let v32: i64;  // [sp-0xe8]
    let v33: struct16;  // [bp-0xe0]
    let v34: i64;  // [sp-0xd8]
    let v35: i64;  // [sp-0xd0]
    let v36: i64;  // [sp-0xc8]
    let v37: i64;  // [sp-0xc0]
    let v38: i128;  // [sp-0xb8]
    let v39: i64;  // [sp-0xa0]
    let v40: i64;  // [sp-0x98]
    let v41: i64;  // [sp-0x90]
    let v42: i64;  // [sp-0x88]
    let v43: i320;  // [sp-0x80], Other Possible Types: struct40
    let v44: i128;  // [sp-0x58]
    let v45: i128;  // [bp-0x48]
    let v46: i64;  // [sp-0x3b]
    let v48: i64;  // rcx
    let v49: i64;  // rbx
    let v50: i64;  // rax
    let v51: i64;  // rcx
    let v52: i64;  // rdi
    let v53: i64;  // rsi
    let v54: i64;  // r13
    let v55: i64;  // rdi
    let v56: i64;  // r14
    let v57: i64;  // rax
    let v58: i64;  // r8
    let v59: i64;  // r9
    let v61: i64;  // rdi
    let v62: i64;  // rbp
    let v63: i64;  // rsi
    let v64: i64;  // r13
    let v65: i64;  // r14
    let v66: i64;  // r8
    let v67: i64;  // r9
    let v68: i64;  // rdi
    let v70: i64;  // rdi
    let v72: i64;  // rbp
    let v74: i64;  // rdi
    let v75: i64;  // rax
    let v76: i64;  // rsi
    let v77: i64;  // r13
    let v78: i64;  // r14
    let v79: i64;  // r8
    let v80: i64;  // r8
    let v81: i64;  // r8
    let v82: i64;  // rbp
    let v83: i64;  // rax
    let v85: i64;  // r14
    let v86: i64;  // r13
    let v87: i8;  // cl
    let v88: i64;  // r15
    let v89: i64;  // r12
    let v90: i64;  // rax
    let v92: i64;  // rsi
    let v93: i8;  // al
    let v94: i64;  // rdx
    let v95: i64;  // rax
    let v96: i64;  // r12
    let v97: i64;  // rcx
    let v98: i64;  // r12
    let v99: i64;  // 4096
    let v100: i64;  // rdx
    let v101: i64;  // rdi
    let v102: i64;  // rdi
    let v103: i64;  // rdi
    let v104: i64;  // rax
    let v105: i64;  // rsi
    let v106: i64;  // r12
    let v107: i64;  // rdx
    let v108: i64;  // r12
    let v109: i64;  // rsi
    let v110: i64;  // rbp
    let v111: i64;  // rcx
    let v112: i64;  // r8
    let v115: i64;  // rcx
    let v116: i64;  // rax
    let v117: i256;  // ymm0
    let v118: i256;  // ymm0
    let v119: i64;  // rax
    let v120: i64;  // r8
    let v121: i64;  // rax
    let v122: i64;  // rcx
    let v123: i64;  // rcx
    let v124: i64;  // rax
    let v125: i64;  // rdx
    let v126: i64;  // rcx
    let v127: i64;  // cc_ndep
    let v128: i64;  // rcx
    let v129: i64;  // rbx
    let v130: i32;  // ymm0
    let v131: i64;  // rcx
    let v132: i64;  // rax
    let v133: i64;  // rax
    let v134: i64;  // rbx
    let v135: i64;  // r8
    let v136: i32;  // eax
    let v137: i256;  // ymm1
    let v138: i64;  // rcx
    let v139: i64;  // cc_ndep
    let v140: i64;  // rcx
    let v141: i64;  // rcx
    let v142: i64;  // rax
    let v143: i64;  // r12
    let v145: i64;  // r8
    let v146: i256;  // ymm0
    let v147: i64;  // rax
    let v148: i64;  // rdi
    let v149: i64;  // rbx
    let v150: i64;  // r13
    let v151: i64;  // rbp
    let v152: i64;  // rcx
    let v154: i64;  // rdi
    let v155: i64;  // rax
    let v156: i64;  // rax
    let v157: i64;  // rsi
    let v158: i64;  // r14
    let v159: i64;  // rax
    let v161: i64;  // r14
    let v162: i64;  // r8
    let v163: i64;  // r15
    let v164: i64;  // rax
    let v165: i256;  // ymm0
    let v166: i64;  // rcx
    let v167: i256;  // ymm0
    let v168: i64;  // rcx
    let v169: i64;  // rsi
    let v170: i128;  // xmm1
    let v171: i64;  // rdx
    let v172: i64;  // rdx
    let v173: i64;  // rdx
    let v174: i128;  // xmm0
    let v175: i256;  // ymm1
    let v176: i128;  // xmm0
    let v177: i128;  // xmm0
    let v178: i128;  // xmm0
    let v179: i64;  // rsi
    let v180: i64;  // rax
    let v181: i64;  // rbx
    let v182: i64;  // r14
    let v183: i64;  // rax
    let v184: i64;  // rcx
    let v185: i64;  // rax
    let v186: i64;  // r8
    let v187: i64;  // rcx
    let v188: i64;  // rax
    let v189: i8;  // bl
    let v190: i64;  // rdx
    let v191: i16;  // r14w
    let v192: i128;  // xmm0
    let v193: i128;  // xmm1
    let v194: i64;  // r15
    let v195: i64;  // r15
    let v196: i64;  // rax
    let v197: i64;  // rcx
    let v198: i128;  // xmm0
    let v199: i128;  // xmm1
    let v200: i64;  // rax
    let v201: i64;  // rbp
    let v202: i64;  // rax
    let v203: i64;  // rcx
    let v204: i64;  // r8
    let v205: i64;  // rbx
    let v206: i64;  // rcx
    let v207: i64;  // rax
    let v208: i64;  // r14
    let v209: i64;  // rsi
    let v210: i64;  // rax
    let v211: i64;  // rax
    let v212: i64;  // r14
    let v213: i8;  // bl
    let v214: i64;  // r15
    let v215: i64;  // rcx
    let v216: i64;  // rdx
    let v217: i64;  // rcx
    let v218: i64;  // rax
    let v219: i64;  // rbp
    let v220: i64;  // rdi
    let v221: i64;  // r9
    let v222: i64;  // rsi
    let v223: i64;  // rax
    let v224: i64;  // rcx
    let v225: i64;  // rdx
    let v226: i64;  // rdx
    let v227: i64;  // rdi
    let v229: i64;  // rax
    let v231: i64;  // r15
    let v232: i64;  // rbx
    let v233: i64;  // r13
    let v234: i64;  // rax
    let v235: i64;  // r12
    let v236: i64;  // r15
    let v237: i8;  // bl
    let v238: i64;  // rax
    let v239: i64;  // rax
    let v243: i64;  // rax
    let v244: i64;  // rax
    let v245: i64;  // r13
    let v246: i64;  // rcx
    let v248: i64;  // r10

    v12 = *((a0 + 88) as &i64);
    v43 = uu_fmt::parasplit::ParaWords::new(a1, a0);
    v48 = *((&v43 as &char + 16) as &i64);
    v30 = v48;
    v2 = *((&v43 as &char + 8) as &i64);
    if !v48 {
        v50 = *((a2 + 16) as &i64);
        v51 = *(a2 as &i64) - v50;
        if *(a2 as &i64) - v50 > 1 {
            *((*((a2 + &g_8 as &u8) as &i64) + v50) as &&i64) = &g_8;
            *((a2 + 16) as &i64) = v50 + 1;
            v57 = 0;
            goto LABEL_48b808;
        } else {
            v57 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, &g_419e04, 1, v51, v58, v59);
            goto LABEL_48b808;
        }
    }
    v49 = *((v2 + 40) as &i64);
    if !(!*((a1 + 72) as &i8)) || !(!*((a1 + 73) as &i8)) {
        v53 = *((a0 + 32) as &i64);
        v54 = *((a0 + 40) as &i64);
        v55 = a2;
        v56 = *((v55 + 16) as &i64);
        if v54 >= *(v55 as &i64) - v56 {
            v57 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v55, v53, v54, v48, v66, v67);
            if !v57 {
                goto LABEL_48b762;
            }
            goto LABEL_48b808;
        } else {
            memcpy(*((v55 + &g_8 as &u8) as &i64) + v56, v53, v54);
            v68 = a2;
            *((v68 + 16) as &i64) = v56 + v54;
LABEL_48b762:
            v72 = *((a0 + 72) as &i64);
        }
    } else {
        v52 = a2;
        if *((a0 + 104) as &i8) {
            goto LABEL_48b7bc;
        }
        v63 = *((a0 + 56) as &i64);
        v64 = *((a0 + 64) as &i64);
        v65 = *((v52 + 16) as &i64);
        if v64 < *(v52 as &i64) - v65 {
            memcpy(*((v52 + &g_8 as &u8) as &i64) + v65, v63, v64);
            v70 = a2;
            *((v70 + 16) as &i64) = v65 + v64;
            v62 = v12;
            goto LABEL_48b7bc;
        }
        v57 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v52, v63, v64, v48, v66, v67);
        v62 = v12;
        if v57 {
LABEL_48b808:
            if !v43 {
                return v57;
            }
LABEL_48cb9a:
            return v57;
        }
    }
LABEL_48b7bc:
    v74 = v61;
    v75 = v2;
    v76 = *((v75 + 16) as &i64);
    v77 = *((v75 + 24) as &i64);
    v78 = *((v74 + 16) as &i64);
    if v77 >= *(v74 as &i64) - v78 {
        v57 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v74, v76, v77, v48, v66, v67);
        if !v57 {
            goto LABEL_48b82c;
        }
        goto LABEL_48b808;
    }
    memcpy(*((v74 + &g_8 as &u8) as &i64) + v78, v76, v77);
    v79 = a2;
    *((v79 + 16) as &i64) = v78 + v77;
LABEL_48b82c:
    v81 = v80;
    v6 = v30 * 64;
    v82 = v62 + v49;
    if *((a0 + 104) as &i8) {
        v8 = *((a0 + 56) as &i64);
        v16 = *((a0 + 64) as &i64);
        v0 = 1;
        goto LABEL_48b891;
    }
    v0 = *((a1 + 78) as &i8);
    v8 = *((a0 + 56) as &i64);
    v16 = *((a0 + 64) as &i64);
    if *((a1 + 79) as &i8) {
LABEL_48b891:
        if v30 != 1 {
            v85 = *((a1 + 64) as &i64);
            v6 -= 64;
            v86 = 0;
            v87 = 0;
            v2 = v2;
            do {
                v88 = *((v2 + v86 + 104) as &i64);
                v89 = *((v2 + v86 + 112) as &i64);
                if *((v2 + v86 + 64) as &i64) {
                    if !v85 {
                        core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
                    }
                    v90 = *((v2 + v86 + 72) as &i64) + v82;
                    v89 = v89 - v82 + v85 * ((!(v90 | v85) >> 32 ? (0 CONCAT v90) /m v85 & 4294967295 : (0 CONCAT v90) /m v85) + 1);
                }
                v92 = v2;
                v93 = *((v92 + v86 + 122) as &i8);
                v94 = (!v93 && !v0 ? 0 : (v87 & v93 | *((v92 + v86 + 120) as &i8)) + 1);
                v82 = v89 + v94 + v82 + v88;
                if v82 <= *((a1 + 48) as &i64) {
                    v57 = uu_fmt::linebreak::write_with_spaces(*((v2 + v86 + 80) as &i64), *((v2 + v86 + 88) as &i64), v94, v81, v81, v67);
                    if !v57 {
                        continue;
                    }
                }
                v95 = *(v81 as &i64);
                v96 = *((v81 + 16) as &i64);
                if v95 - v96 > 1 {
                    v97 = *((v81 + &g_8 as &u8) as &i64);
                    *((v97 + v96) as &&i64) = &g_8;
                    v98 = v96 + 1;
                    *((v81 + 16) as &i64) = v98;
                } else {
                    v57 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v81, &g_419e04, 1, v95 - v96, v81, v67);
                    if !(!v57) {
                        goto LABEL_48cb7c;
                    }
                    v81 = a2;
                    v95 = *(v81 as &i64);
                    v98 = *((v81 + 16) as &i64);
                }
                v100 = v16;
                if v95 - v98 <= v100 {
                    v57 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v81, v8, v100, v97, v81, v67);
                    if !v57 {
                        goto LABEL_48ba8b;
                    } else {
                        goto LABEL_48cb7c;
                    }
                } else {
                    memcpy(*((v81 + &g_8 as &u8) as &i64) + v98, v8, v100);
                    v101 = a2;
                    *((v101 + 16) as &i64) = v98 + v100;
                }
LABEL_48ba8b:
                v103 = v102;
                v104 = v2;
                v105 = *((v104 + v86 + 80) as &i64);
                v106 = *((v104 + v86 + 88) as &i64);
                v107 = *((v104 + v86 + 96) as &i64);
                if v107 {
                    if v106 > v107 {
                        if *((v105 + v107) as &i8) <= 191 {
                            goto LABEL_48ccf5;
                        }
                    } else {
                        if v106 != v107 {
LABEL_48ccf5:
                            core::str::slice_error_fail(); /* do not return */
                        }
                    }
                }
                v108 = v106 - v107;
                v109 = v105 + v107;
                v110 = *((v103 + 16) as &i64);
                if *(v103 as &i64) - v110 <= v108 {
                    v57 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v103, v109, v108, v111, v66, v67);
                    if !v57 {
                        goto LABEL_48b8fc;
                    } else {
                        goto LABEL_48cb7c;
                    }
                } else {
                    memcpy(*((v103 + &g_8 as &u8) as &i64) + v110, v109, v108);
                    v112 = a2;
                    *((v112 + 16) as &i64) = v110 + v108;
                }
LABEL_48b8fc:
                v82 = v88 + v12;
            } while ((v81 = v99, v116 = v2, v87 = (v115 | -0x100 | (*((v116 + v86 + 121) as &i8)) as u8 as u64) as u8, v86 += 64, v6 != v86));
        }
        v121 = *((v120 + 16) as &i64);
        v122 = *(v120 as &i64) - v121;
        if *(v120 as &i64) - v121 > 1 {
            *((*((v120 + &g_8 as &u8) as &i64) + v121) as &&i64) = &g_8;
            *((v120 + 16) as &i64) = v121 + 1;
            v57 = 0;
        } else {
            v57 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v120, &g_419e04, 1, v122, v120, v67);
        }
LABEL_48cb7c:
        if !v43 {
            return v57;
        }
        goto LABEL_48cb9a;
    }
    v83 = __rust_alloc(40, &g_8);
    v118 = v117 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *(v83 as &i128) = 0;
    *((v83 + 16) as &i64) = 0;
    *((v83 + 24) as &i64) = v82;
    *((v83 + 32) as &i32) = 0;
    *((v83 + 36) as &i16) = 0;
    v13 = 1;
    v14 = v83;
    v15 = 1;
    v119 = __rust_alloc(&g_8, &g_8);
    v7 = v119;
    *(v119 as &i64) = 0;
    v9 = 0;
    v10 = &g_8;
    v11 = 0;
    v123 = *((a1 + 56) as &i64);
    v37 = *((a1 + 48) as &i64);
    v124 = v37 - v123;
    v125 = v124 + 1;
    v39 = v123;
    v31 = v126;
    v128 = v124;
    v22 = 0;
    v23 = &g_8;
    v24 = 0;
    v129 = v2;
    v29 = v124;
    if v124 < 0 {
        v124 = v29 & 1 | v128 >> 1;
        vvar_157{reg 224} = ((vvar_1559{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (Conv(256->128, vvar_1559{reg 224}) + Conv(256->128, vvar_1559{reg 224}))))
        v131 = v29;
    } else {
        v130 = v128;
    }
    v21 = v130;
    v132 = v131;
    if amd64g_calculate_condition(&g_8, 28, v132 - 1, 0, amd64g_calculate_rflags_c(20, v124, 0, v127)) as char {
        vvar_157{reg 224} = ((vvar_1582{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (Conv(256->128, vvar_1582{reg 224}) + Conv(256->128, vvar_1582{reg 224}))))
        v133 = v29;
    } else {
        v130 = v132 - 1;
    }
    v20 = v130;
    v6 += v129;
    v134 = v129 + 64;
    v31 -= v133;
    v135 = *((a1 + 64) as &i64);
    v28 = 1;
    v25 = "src/uu/fmt/src/linebreak.rs";
    v18 = 1;
    v27 = v134;
    v32 = 0;
    v136 = 0;
    v2 = v134;
    v19 = v135;
    loop {
        v10 = v10;
        v9 = v9;
        v138 = v27;
        if v5 == v6 {
            break;
        }
        v27 = v138 + 64;
        v5 = v138;
        v5 = v5;
        v5 = v5;
        if v27 == v27 {
            v27 = v6;
            v26 = 0;
            v27 = v27;
        } else {
            v27 += 64;
            v26 = v27;
            v27 = v27;
        }
        v27 = v27;
        v4 = 1;
        v139 = 0;
        v140 = (v136 & 1) + 1;
        if !(!(!*((v5 + 58) as &i8)) || !(!v0)) {
            v140 = 0;
        }
        v17 = v140;
        v24 = 0;
        v11 = 0;
        v141 = 0;
        v142 = v28;
        if v142 {
            v40 = v27;
            v42 = v142 * &g_8;
            v143 = 0;
            v36 = 9223372036854775807;
            v3 = 0;
            v147 = 9223372036854775807;
            v148 = *((v7 + v143) as &i64);
            if !(v148 < v15) {
                goto LABEL_48cd1d;
            }
            v149 = v14;
            v150 = v148 * 5;
            v151 = *((v149 + v150 * &g_8 + 16) as &i64) - v32;
            v152 = *((v149 + v150 * &g_8 + 24) as &i64);
            *((v149 + v150 * &g_8 + 16) as &i64) = v151;
            v3 = v154;
            v156 = v5;
            v157 = *((v156 + 40) as &i64);
            if *((v149 + (v150 << 3) + 37) as &i8) {
                v158 = 0;
                goto LABEL_48bfff;
            }
            v158 = *((v156 + 48) as &i64);
            if *(v156 as &i64) {
                if v145 {
                    v159 = *((v156 + &g_8 as &u8) as &i64) + v152;
                    v139 = amd64g_calculate_rflags_c(19, 0, 0, v139);
                    v158 = v158 - v152 + v145 * ((!(v159 | v145) >> 32 ? (0 CONCAT v159) /m v145 : (0 CONCAT v159) /m v145 & 4294967295) + 1);
                    goto LABEL_48bfff;
                }
                goto LABEL_48cccb;
            }
LABEL_48bfff:
            v161 = v158 + v17 + v157 + v152;
            if v161 <= v37 {
                v41 = v157;
                v1 = v148;
                v163 = v11;
                if v163 == v9 {
                    v9 = alloc::raw_vec::RawVec<T,A>::grow_one();
                }
                v164 = v149 + v150 * &g_8;
                *((v10 + v163 * &g_8) as &i64) = v1;
                v139 = v163 < v9;
                v11 = v163 + 1;
                *((v164 + 37) as &i8) = 0;
                *((v164 + 24) as &i64) = v161;
                if v161 < v31 {
LABEL_48bf30:
                    v162 = v19;
                } else {
                    if v40 == v6 {
                        v146 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        v38 = 0;
                        v166 = 0;
                    } else {
                        v165 = v146 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        if v39 != v161 {
                            vvar_809{reg 224} = ((vvar_1794{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (Conv(256->128, vvar_1794{reg 224}) DivV Conv(32->128, vvar_3306{stack -316}))))
                        }
                        v38 = 0;
                        v167 = v165 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        v168 = 10000001;
                        v169 = v41;
                        if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) == 1 {
                            v170 = v38;
                            vvar_218{reg 256} = ((vvar_218{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1804{reg 256}))
                            vvar_873{reg 224} = ((((((((((vvar_873{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1804{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_1804{reg 256} * vvar_1804{reg 256}))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((vvar_1804{reg 256} * vvar_1804{reg 256}) * vvar_1804{reg 256}))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((vvar_1804{reg 256} * vvar_1804{reg 256}) * vvar_1804{reg 256}) & 0x7fffffff7fffffff7fffffff7fffffff<128>))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((((vvar_1804{reg 256} * vvar_1804{reg 256}) * vvar_1804{reg 256}) & 0x7fffffff7fffffff7fffffff7fffffff<128>) * 0x42c80000<128>)))
                            v171 = v167;
                            if !((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) {
                                v171 = 9223372036854775807;
                            }
                            if !(amd64g_calculate_condition(&g_8, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v139) as char) {
                                v171 = 0;
                            }
                            v139 = amd64g_calculate_rflags_c(0, (BinaryOp CmpF & 69) as u32 as u64, 0, v139);
                            v168 = v171 + 1;
                        }
                        v172 = v29;
                        if v172 <= v169 {
                            v173 = 0;
                        } else {
                            if amd64g_calculate_condition(&g_8, &g_8, v172, v169, v139) as char {
                                vvar_873{reg 224} = ((vvar_1868{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (Conv(256->128, vvar_1868{reg 224}) + Conv(256->128, vvar_1868{reg 224}))))
                            }
                            vvar_1871{reg 224} = (Conv(256->128, vvar_1046{reg 224}) DivV Conv(32->128, vvar_3307{stack -320}))
                            vvar_873{reg 224} = ((vvar_1046{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1871{reg 224}))
                            vvar_218{reg 256} = ((((((((vvar_218{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1871{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_1871{reg 224} * vvar_1871{reg 224}))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((vvar_1871{reg 224} * vvar_1871{reg 224}) * vvar_1871{reg 224}))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((vvar_1871{reg 224} * vvar_1871{reg 224}) * vvar_1871{reg 224}) * 0x43960000<128>)))
                            v173 = v175;
                            if !((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) {
                                v173 = 9223372036854775807;
                            }
                            if !(amd64g_calculate_condition(&g_8, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v139) as char) {
                                v173 = 0;
                            }
                        }
                        v176 = v38;
                        vvar_1909{reg 224} = (vvar_1906{reg 224} SubV Conv(32->128, Load(addr=(vvar_1764{reg 16} + 0x20<64>), size=4, endness=Iend_LE)))
                        v178 = BinaryOp MulV;
                        vvar_157{reg 224} = ((((((vvar_1032{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1906{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1909{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1912{reg 224}))
                        vvar_218{reg 256} = ((((((((((vvar_1035{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1912{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_1912{reg 224} * vvar_1912{reg 224}))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((vvar_1912{reg 224} * vvar_1912{reg 224}) * vvar_1912{reg 224}))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((vvar_1912{reg 224} * vvar_1912{reg 224}) * vvar_1912{reg 224}) & 0x7fffffff7fffffff7fffffff7fffffff<128>))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((((vvar_1912{reg 224} * vvar_1912{reg 224}) * vvar_1912{reg 224}) & 0x7fffffff7fffffff7fffffff7fffffff<128>) * 0x44160000<128>)))
                        v179 = v137;
                        if !((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) {
                            v179 = 9223372036854775807;
                        }
                        if !(amd64g_calculate_condition(&g_8, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v139) as char) {
                            v179 = 0;
                        }
                        v166 = (v168 + v173 + v179) * (v168 + v173 + v179);
                    }
                    v162 = v19;
                    if v166 <= 99999999999999 && v181 < v36 && (v180 < 0 || (v19 = v19, v166 >= 0 && !((!v166) as u8 as u8 & (v180) as u8 as u8))) {
                        v182 = v24;
                        if v182 == v22 {
                            v22 = alloc::raw_vec::RawVec<T,A>::grow_one();
                        }
                        v183 = v23;
                        v184 = v182 * 5;
                        *((v183 + v184 * &g_8) as &i64) = v1;
                        *((v183 + v184 * &g_8 + &g_8 as &u8) as &i64) = v5;
                        *((v183 + v184 * &g_8 + 16) as &i64) = v181;
                        *((v183 + v184 * &g_8 + 24) as &i64) = v12;
                        vvar_157{reg 224} = ((vvar_157{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3140{stack -184}))
                        *((v183 + v184 * &g_8 + 32) as &i32) = v146;
                        *((v183 + v184 * &g_8 + 36) as &i16) = 0x100;
                        v139 = v182 < v22;
                        v24 = v182 + 1;
                        v36 = v181;
                        goto LABEL_48bf30;
                    }
                }
            }
            v145 = v162;
            v143 += &g_8 as &u8;
            if !(v42 == v143) {
                continue;
            }
            v185 = v24;
            if v185 {
                v24 = v185 - 1;
                v187 = v23;
                v188 = v24 * 5;
                v189 = *((v187 + v188 * &g_8 + 37) as &i8);
                if v189 != 2 {
                    v190 = v187 + v188 * &g_8;
                    v191 = *((v187 + v188 * &g_8 + 38) as &i16);
                    v46 = *((v190 + 29) as &i64);
                    v192 = *(v190 as &i128);
                    v193 = *((v190 + 16) as &i128);
                    v45 = v193;
                    v44 = v192;
                    v194 = v11;
                    if v194 == v9 {
                        v9 = alloc::raw_vec::RawVec<T,A>::grow_one();
                    }
                    *((v10 + v194 * &g_8) as &i64) = v15;
                    v11 = v194 + 1;
                    v195 = v15;
                    if v195 == v13 {
                        v13 = alloc::raw_vec::RawVec<T,A>::grow_one();
                    }
                    v196 = v14;
                    v197 = v195 * 5;
                    *((v196 + v197 * &g_8 + 29) as &i64) = v46;
                    v198 = v44;
                    vvar_157{reg 224} = ((((vvar_157{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2018{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2043{reg 224}))
                    v199 = v45;
                    vvar_218{reg 256} = ((((vvar_218{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2020{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2045{reg 256}))
                    *((v196 + v197 * &g_8 + 16) as &i128) = v199;
                    *((v196 + v197 * &g_8) as &i128) = v198;
                    *((v196 + v197 * &g_8 + 37) as &i8) = v189;
                    *((v196 + v197 * &g_8 + 38) as &i16) = v191;
                    v15 = v195 + 1;
                    v186 = v19;
                }
            }
            v135 = v186;
            v200 = v11;
            v134 = v2;
            v141 = v3;
            if !v200 {
                goto LABEL_48c3a0;
            }
            if v155 <= 0 {
                v155 = 0;
            }
            v32 = v155;
            goto LABEL_48bd54;
        }
LABEL_48c3a0:
        v201 = v15;
        if v141 >= v201 {
            v218 = "src/uu/fmt/src/linebreak.rs";
            goto LABEL_48cd15;
        }
        v202 = v14;
        v203 = v141 * 5;
        if *((v202 + (v203 << 3) + 37) as &i8) {
LABEL_48c460:
            v213 = 0;
            v3 = 0xbf800000;
            v212 = v12;
            if !v9 {
                goto LABEL_48c47d;
            }
        } else {
            v206 = *((v202 + v203 * &g_8 + 24) as &i64);
            v207 = v5;
            v208 = *((v207 + 40) as &i64);
            v209 = *((v207 + 48) as &i64);
            if *(v207 as &i64) {
                if !v135 {
LABEL_48cccb:
                    core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
                }
                v210 = *((v207 + &g_8 as &u8) as &i64) + v206;
                v211 = (!(v210 | v135) >> 32 ? (0 CONCAT v210) /m v135 & 4294967295 : (0 CONCAT v210) /m v135);
                v209 = v209 - v206 + v135 * (v211 + 1);
            }
            if v17 - v37 + v208 + v209 + v206 <= v31 - v206 {
                goto LABEL_48c460;
            }
            v212 = v208 + v12;
            v213 = v134 | -0x100 | 1;
            v3 = 0x3f800000;
            if !v9 {
LABEL_48c47d:
                v9 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
        }
        *(v10 as &i64) = v201;
        v200 = 1;
        v214 = v15;
        if v214 == v13 {
            v13 = alloc::raw_vec::RawVec<T,A>::grow_one();
        }
        v215 = v14;
        v216 = v214 * 5;
        *((v215 + v216 * &g_8) as &i64) = v141;
        *((v215 + v216 * &g_8 + &g_8 as &u8) as &i64) = v5;
        *((v215 + v216 * &g_8 + 16) as &i64) = 0;
        *((v215 + v216 * &g_8 + 24) as &i64) = v212;
        *((v215 + v216 * &g_8 + 32) as &i32) = v3;
        *((v215 + v216 * &g_8 + 36) as &i8) = 1;
        *((v215 + v216 * &g_8 + 37) as &i8) = v213 ^ 1;
        v15 = v214 + 1;
        v32 = 0;
        v204 = v19;
        v205 = v2;
LABEL_48bd54:
        v9 = v18;
        v10 = v7;
        v11 = v28;
        v28 = v200;
        v7 = v10;
        v18 = v9;
        v5 = v26;
        v136 = v4;
        v9 = v9;
        v10 = v10;
    }
    v5 = &g_8;
    v217 = v28;
    if v217 {
        v219 = v15;
        v220 = *(v7 as &i64);
        v218 = "src/uu/fmt/src/linebreak.rs";
        if v220 >= v219 {
LABEL_48cd15:
            v25 = v218;
            goto LABEL_48cd1d;
        }
        v221 = v14;
        if v217 == 1 {
LABEL_48c565:
            v231 = 0;
            v34 = &g_8;
            v35 = 0;
            if v220 >= v219 {
                core::panicking::panic_bounds_check(); /* do not return */
            }
            v233 = &g_8;
            v3 = 0;
            do {
                v234 = v220 * 5;
                v235 = *((v221 + v234 * &g_8 + &g_8 as &u8) as &i64);
                if !v235 {
                    v5 = v34;
                    v232 = v2;
                    goto LABEL_48c64a;
                }
                v236 = v221 + v234 * &g_8;
                v237 = *((v236 + 36) as &i8);
                if v3 == v231 {
                    v33 = alloc::raw_vec::RawVec<T,A>::grow_one();
                }
                v238 = v34;
                *((v238 + v233 - &g_8 as &u8) as &i64) = v235;
                *((v238 + v233) as &i8) = v237;
                v239 = v3 + 1;
                v3 = v239;
                v35 = v239;
                v220 = *(v236 as &i64);
                v233 += 16;
            } while (v220 < v219);
        } else {
            v25 = "src/uu/fmt/src/linebreak.rs";
            v222 = v7;
            v223 = v222 + &g_8 as &u8;
            v224 = *((v221 + v220 * 40 + 16) as &i64);
            v135 = v217 - 1;
            v225 = 2305843009213693951 & v135;
            do {
                v226 = v225;
                v227 = *(v223 as &i64);
                if v227 >= v219 {
LABEL_48cd1d:
                    core::panicking::panic_bounds_check(); /* do not return */
                }
                v222 = v229;
                v223 += &g_8 as &u8;
            } while (v226 != 1);
            if v222 {
                v220 = *(v222 as &i64);
                goto LABEL_48c565;
            }
        }
    }
    v3 = 0;
LABEL_48c64a:
    v1 = 0;
    v243 = v3;
    if v243 {
        v244 = v243 * 16 + v5;
        v245 = 0;
        v17 = "src/uu/fmt/src/linebreak.rs";
        v246 = 0;
    }
    v248 = a2;
    if v30 == 1 {
        goto LABEL_0x48ca7b;
    } else {
        goto LABEL_0x48caa5;
    }
}
