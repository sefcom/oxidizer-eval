fn uu_test::eval() -> u32 {
    let v0: i64;  // [sp-0x388]
    let v1: i8;  // [bp-0x380]
    let v2: i64;  // [sp-0x378]
    let v3: i64;  // [sp-0x370]
    let v4: i128;  // [bp-0x368], Other Possible Types: Enum, struct12
    let v5: i8;  // [bp-0x360]
    let v6: i8;  // [bp-0x35f]
    let v7: i64;  // [bp-0x358]
    let v8: i8;  // [bp-0x350]
    let v9: i64;  // [sp-0x348]
    let v10: i64;  // [sp-0x340]
    let v11: i64;  // [sp-0x338]
    let v12: i8;  // [bp-0x330]
    let v13: i32;  // [sp-0x32c]
    let v14: i32;  // [sp-0x328]
    let v15: i64;  // [sp-0x324]
    let v16: i32;  // [sp-0x31c]
    let v17: i64;  // [sp-0x318]
    let v18: i128;  // [sp-0x310]
    let v19: i128;  // [sp-0x300]
    let v20: i128;  // [sp-0x2f0]
    let v21: i128;  // [sp-0x2e0]
    let v22: i128;  // [sp-0x2d0]
    let v23: i64;  // [sp-0x2c0]
    let v24: i64;  // [sp-0x2b0]
    let v25: i64;  // [sp-0x2a8]
    let v26: i64;  // [sp-0x2a0]
    let v27: i128;  // [bp-0x298]
    let v28: i128;  // [sp-0x288]
    let v29: i64;  // [sp-0x278]
    let v30: i64;  // [bp-0x268], Other Possible Types: Enum, struct24
    let v31: i64;  // [sp-0x260]
    let v32: i64;  // [bp-0x258]
    let v33: i8;  // [sp-0x250]
    let v34: i64;  // [sp-0x248]
    let v35: i8;  // [bp-0x240]
    let v36: i8;  // [bp-0x238]
    let v37: i8;  // [bp-0x230]
    let v38: i8;  // [bp-0x22c]
    let v39: i8;  // [bp-0x228]
    let v40: i8;  // [bp-0x224]
    let v41: i8;  // [bp-0x21c]
    let v42: i8;  // [bp-0x218]
    let v43: i8;  // [bp-0x210]
    let v44: i8;  // [bp-0x208]
    let v45: i8;  // [bp-0x200]
    let v46: i8;  // [bp-0x1f8]
    let v47: i8;  // [bp-0x1f0]
    let v48: i8;  // [bp-0x1e8]
    let v49: i8;  // [bp-0x1e0]
    let v50: i8;  // [bp-0x1d8]
    let v51: i8;  // [bp-0x1d0]
    let v52: i8;  // [bp-0x1c8]
    let v53: i8;  // [bp-0x1c0]
    let v54: i64;  // [sp-0x1b0]
    let v55: i64;  // [sp-0x1a8]
    let v56: i64;  // [sp-0x1a0]
    let v57: i64;  // [sp-0x198], Other Possible Types: struct24
    let v58: i64;  // [sp-0x190]
    let v59: i64;  // [bp-0x188]
    let v60: i64;  // [sp-0x178]
    let v61: i64;  // [sp-0x170]
    let v62: i128;  // [sp-0x168]
    let v63: i128;  // [sp-0x158]
    let v64: i128;  // [sp-0x148]
    let v65: i128;  // [sp-0x138]
    let v66: i128;  // [sp-0x128]
    let v67: i128;  // [sp-0x118]
    let v68: i128;  // [sp-0x108]
    let v69: i128;  // [sp-0xf8]
    let v70: i128;  // [sp-0xe8]
    let v71: i128;  // [sp-0xd8]
    let v72: i64;  // [sp-0xc8]
    let v73: i64;  // [sp-0xc0]
    let v74: i128;  // [sp-0xb8]
    let v75: i128;  // [sp-0xa8]
    let v76: i128;  // [sp-0x98]
    let v77: i128;  // [sp-0x88]
    let v78: i128;  // [sp-0x78]
    let v79: i128;  // [sp-0x68]
    let v80: i128;  // [sp-0x58]
    let v81: i128;  // [sp-0x48]
    let v83: i64;  // rsi
    let v84: i64;  // rax
    let v85: i64;  // rdx
    let v86: i64;  // rcx
    let v87: i64;  // rsi
    let v88: i128;  // xmm1
    let v89: i64;  // rsi
    let v91: i64;  // rdi
    let v92: i64;  // rdi
    let v94: i64;  // r14
    let v95: i64;  // r15
    let v96: i64;  // r12
    let v97: i64;  // rsi
    let v98: i64;  // r14
    let v99: i64;  // r13
    let v100: i64;  // r12
    let v101: i64;  // rdi
    let v102: i64;  // rcx
    let v103: i8;  // al
    let v104: i64;  // rdi
    let v105: i64;  // rdi
    let v106: i32;  // edx
    let v107: i64;  // rdx
    let v108: i64;  // rdx
    let v109: i64;  // rdx
    let v110: i128;  // xmm0
    let v111: i64;  // rax
    let v112: i64;  // rax
    let v113: i128;  // xmm1
    let v114: i64;  // r15
    let v115: i64;  // r13
    let v116: i64;  // rdx
    let v117: i64;  // rsi
    let v118: i128;  // xmm1
    let v119: i64;  // r13
    let v120: i64;  // rdx
    let v121: i64;  // rsi
    let v122: i128;  // xmm1
    let v123: i64;  // rax
    let v124: i64;  // rax
    let v125: i128;  // xmm0
    let v126: i64;  // rdx
    let v127: i64;  // r15
    let v129: i64;  // rax
    let v130: i64;  // rcx
    let v131: i64;  // rdx
    let v132: i64;  // rsi
    let v133: i64;  // rdx
    let v134: i128;  // xmm1
    let v136: i64;  // rax
    let v137: i64;  // r13
    let v138: i64;  // r14
    let v139: i64;  // rax
    let v140: i64;  // rax
    let v141: i128;  // xmm1
    let v142: i64;  // r14
    let v143: i64;  // rax
    let v144: i64;  // rax
    let v145: i128;  // xmm1
    let v146: i64;  // rcx
    let v147: i8;  // al
    let v148: i64;  // rdi
    let v149: i64;  // r8
    let v150: i64;  // r9
    let v151: i64;  // rdi
    let v152: i64;  // r15
    let v153: i64;  // r12
    let v154: i64;  // rdx
    let v155: i64;  // rdi
    let v156: i64;  // rdi
    let v157: i64;  // rax
    let v158: i8;  // cl
    let v159: i64;  // rdi
    let v160: i64;  // rdi
    let v161: i8;  // al
    let v162: i64;  // rdi
    let v163: i64;  // rax
    let v165: i32;  // ecx
    let v167: i8;  // al
    let v168: i64;  // r12
    let v169: i8;  // al
    let v171: i64;  // rdi
    let v172: i64;  // rdi
    let v173: i64;  // r14
    let v174: i128;  // xmm0
    let v175: i8;  // dil
    let v176: i64;  // rdx
    let v177: i64;  // rsi
    let v178: i8;  // al
    let v179: i64;  // rax
    let v180: i64;  // rax
    let v181: i64;  // rcx
    let v182: i64;  // rax
    let v183: i64;  // cc_op
    let v184: i64;  // cc_dep1
    let v185: i64;  // cc_dep2
    let v186: i64;  // rax
    let v187: i32;  // r14d
    let v188: i32;  // r14d
    let v190: i8;  // al
    let v191: i64;  // rdi
    let v194: i32;  // eax
    let v195: i8;  // cl
    let v196: i64;  // r8
    let v197: i64;  // r9
    let v198: i64;  // rcx
    let v199: i8;  // al
    let v200: i64;  // rdi
    let v201: i8;  // sil
    let v202: i64;  // rdi
    let v203: i64;  // rdi
    let v204: i8;  // sil
    let v205: i64;  // cc_ndep
    let v206: i64;  // rdi
    let v207: i128;  // xmm0
    let v208: i128;  // xmm1
    let v209: i32;  // r13d
    let v210: i32;  // r12d
    let v211: i64;  // rax
    let v212: i64;  // rdi
    let v213: i64;  // r8
    let v214: i64;  // r8
    let v215: i64;  // rax

    v84 = *((v83 + 16) as &i64);
    if !v84 {
        v27 = 7;
        goto LABEL_47faa3;
    } else {
        v85 = v84 - 1;
        *((v83 + 16) as &i64) = v85;
        v86 = *((v83 + 8) as &i64);
        v87 = v85 * 5;
        v88 = *((v86 + v87 * 8 + 16) as &i128);
        v27 = *((v86 + v87 * 8) as &i128);
        v29 = *((v86 + v87 * 8 + 32) as &i64);
        v28 = v88;
        v89 = v27 - 1;
        switch (v89) {
        case 0:
            uu_test::eval();
            v102 = v4;
            v103 = v5;
            if v102 != 7 {
                *((v105 + 24) as &i8) = v8;
                *((v105 + 9) as &i8) = v6;
                *(v105 as &i64) = v102;
                *((v105 + 8) as &i8) = v103;
                return;
            }
            *((v104 + 8) as &i8) = v103 ^ 1;
LABEL_47faa7:
            *(v104 as &i64) = 7;
LABEL_47faae:
            goto LABEL_47fab4;
        case 1:
            v94 = *((&v27 as &char + 8) as &i64);
            v95 = v28;
            v96 = *((&v28 as &char + 8) as &i64);
            if v96 == 2 {
                if *(v95 as &i16) != 24877 {
                    v106 = *(v95 as &i16);
                    if v84 <= 2 && !(-0x100 | v106 != 28461) {
                        goto LABEL_47fbb4;
                    }
                } else {
                    if !(v84 <= 2) {
                        goto LABEL_4802ae;
                    }
LABEL_47fbb4:
                    v57 = 0;
                    v58 = 1;
                    v59 = 0;
                    v11 = 32;
                    v12 = 3;
                    v4 = 0;
                    v7 = 0;
                    v9 = &v57;
                    v10 = &g_4e1cb0;
                    v30 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v95, 2);
                    if (!v30 ? os_display::unix::write(&v4, v31, v32, 1) as i8 : os_display::unix::write_escaped(&v4, v95, 2) as i8) {
                        core::result::unwrap_failed(); /* do not return */
                    }
                    *((v156 + 24) as &i64) = v59;
                    *((v156 + 8) as &i64) = v57;
                    *(v156 as &i64) = 6;
LABEL_480582:
                    if v94 {
                        return;
                    }
                    return;
                }
            }
LABEL_4802ae:
            uu_test::eval();
            v136 = v4;
            v137 = v5;
            if v136 != 7 {
                *((v151 + 24) as &i8) = v8;
                *((v151 + 9) as &i8) = v6;
                *(v151 as &i64) = v136;
                *((v151 + 8) as &i8) = v137;
                goto LABEL_480582;
            }
            uu_test::eval();
            v157 = v4;
            v158 = v5;
            if v157 != 7 {
                *((v159 + 24) as &i8) = v8;
                *((v159 + 9) as &i8) = v6;
                *(v159 as &i64) = v157;
                *((v159 + 8) as &i8) = v158;
                goto LABEL_480582;
            } else {
                if v96 != 2 {
                    v167 = (!v158 ? v137 & 4294967295 & 4294967295 : 1);
                } else {
                    v165 = v137;
                    if v158 {
                        v169 = v165;
                    } else {
                        v169 = 0;
                    }
                    v167 = ((*(v95 as &i16) != 24877 & 1) ? (!v158 ? v165 : 1) : v169);
                }
                *((v172 + 8) as &i8) = v167;
                *(v172 as &i64) = 7;
            }
LABEL_47fab4:
            goto LABEL_47fab6;
        case 2:
            *((v101 + 8) as &u8) = *((&v28 as &char + 8) as &i64);
            v91 = v28;
            *(v101 as &i64) = 7;
            goto LABEL_47fab4;
        case 3:
            v97 = *((&v27 as &char + 8) as &i64);
            if !v97 {
                if !v85 {
                    v30 = 7;
                    goto LABEL_480404;
                } else {
                    v107 = v84;
                    v108 = v107 - 2;
                    *((v83 + 16) as &i64) = v108;
                    v109 = v108 * 5;
                    v34 = *((v86 + v109 * 8 + 32) as &i64);
                    v110 = *((v86 + v109 * 8) as &i128);
                    v32 = *((v86 + v109 * 8 + 16) as &i128);
                    v30 = v110;
                    if v107 != 2 {
                        v123 = v84 - 3;
                        *((v83 + 16) as &i64) = v123;
                        v124 = v123 * 5;
                        v9 = *((v86 + v124 * 8 + 32) as &i64);
                        v125 = *((v86 + v124 * 8) as &i128);
                        v7 = *((v86 + v124 * 8 + 16) as &i128);
                        v4 = v125;
                    } else {
LABEL_480404:
                        v4 = 7;
                    }
                }
                if v29 != 2 {
                    v147 = v30 == 7;
                    if v4 == 7 {
                        goto LABEL_480724;
                    }
                    goto LABEL_48046c;
                } else {
                    v146 = v4;
                    if *(*((&v28 as &char + 8) as &i64) as &i16) != 15649 {
                        if v146 == 7 {
                            goto LABEL_480724;
                        }
LABEL_48046c:
                        if v147 {
                            *((v160 + 8) as &i8) = 0;
                        } else {
                            v161 = <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(&v4, &v30) as i8;
                            goto LABEL_480704;
                        }
                    } else if v146 == 7 {
LABEL_480724:
                        *((v162 + 8) as &i8) = v147;
                        *(v162 as &i64) = 7;
                        goto LABEL_480735;
                    } else if v30 == 7 {
                        *((v160 + 8) as &i8) = 1;
                    } else {
                        v163 = <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(&v4, &v30);
                        v161 = v163 | -0x100 | v163 ^ 1;
LABEL_480704:
                        *((v160 + 8) as &i8) = v161;
                    }
                    *(v160 as &i64) = 7;
                }
LABEL_480735:
                v175 = 0;
LABEL_47fac0:
                v213 = v27 - 2;
                switch (v213) {
                case 0:
                    v214 = 8;
                    if false {
                        return;
                    }
                case 1:
                    v214 = 8;
                    if false {
                        return;
                    }
                case 2:
                    v215 = *((&v27 as &char + 8) as &i64);
                    v214 = 16;
                    if !v215 {
                        if !v175 {
                            return;
                        }
                    } else {
                        if v215 != 1 {
                            if false {
                                return;
                            }
                        } else {
                            if false {
                                return;
                            }
                        }
                    }
                case 3:
                    if !*((&v27 as &char + 8) as &i64) {
                        v214 = 16;
                        if false {
                            return;
                        }
                    } else {
                        v214 = 16;
                        if false {
                            return;
                        }
                    }
                default:
                    return;
                }
                if *((&v27 as &u8 + v214) as &i64) {
                    return;
                }
                return;
            }
            if v97 != 1 {
                v0 = *((&v28 as &char + 8) as &i64);
                v3 = v28;
                if !v85 {
                    v4 = 7;
                    uu_test::eval::panic_cold_explicit(); /* do not return */
                }
                v119 = v29;
                v120 = v84 - 2;
                *((v83 + 16) as &i64) = v120;
                v121 = v120 * 5;
                v122 = *((v86 + v121 * 8 + 16) as &i128);
                v4 = *((v86 + v121 * 8) as &i128);
                v9 = *((v86 + v121 * 8 + 32) as &i64);
                v7 = v122;
                if v4 != 3 {
                    uu_test::eval::panic_cold_explicit(); /* do not return */
                }
                v2 = v7;
                if !v120 {
                    v4 = 7;
                    uu_test::eval::panic_cold_explicit(); /* do not return */
                }
                v142 = *((&v7 as &char + 8) as &i64);
                v143 = v84 - 3;
                *((v83 + 16) as &i64) = v143;
                v144 = v143 * 5;
                v145 = *((v86 + v144 * 8 + 16) as &i128);
                v4 = *((v86 + v144 * 8) as &i128);
                v9 = *((v86 + v144 * 8 + 32) as &i64);
                v7 = v145;
                if v4 != 3 {
                    uu_test::eval::panic_cold_explicit(); /* do not return */
                }
                v4 = std::sys::pal::unix::fs::stat(v7, *((&v7 as &char + 8) as &i64));
                if v4 == 2 {
                    v31 = *((&v4 as &char + 8) as &i64);
                    v30 = 2;
                    goto LABEL_48037f;
                }
                memcpy(&v30, &v4, 176);
                if v30 == 2 {
LABEL_48037f:
                    goto LABEL_4809f8;
                }
                v71 = v32;
                v70 = v30;
                v74 = v36;
                v75 = v39;
                v76 = v42;
                v77 = v44;
                v78 = v46;
                v79 = v48;
                v80 = v50;
                v81 = v52;
                v26 = v34;
                v72 = v26;
                v25 = v35;
                v73 = v25;
                v4 = std::sys::pal::unix::fs::stat(v2, v142);
                if v4 == 2 {
                    v31 = *((&v4 as &char + 8) as &i64);
                    v30 = 2;
                    goto LABEL_4809f8;
                }
                memcpy(&v30, &v4, 176);
                if v30 == 2 {
LABEL_4809f8:
                    v178 = 0;
                } else {
                    v174 = v30;
                    v59 = v32;
                    v57 = v174;
                    v62 = v36;
                    v63 = v39;
                    v64 = v42;
                    v65 = v44;
                    v66 = v46;
                    v67 = v48;
                    v68 = v50;
                    v69 = v52;
                    v24 = v34;
                    v60 = v24;
                    v61 = v35;
                    v4 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v0, v119);
                    if !(!v4) || !(*((&v4 as &char + 16) as &i64) == 3) {
LABEL_480b6e:
                        v30 = 1;
                        v31 = v0;
                        v32 = v119;
                        v33 = 1;
                        v54 = 0;
                        v55 = 1;
                        v56 = 0;
                        v11 = 32;
                        v12 = 3;
                        v4 = 0;
                        v7 = 0;
                        v9 = &v54;
                        v10 = &g_4e1cb0;
                        if <os_display::Quoted as core::fmt::Display>::fmt(&v30, &v4) as i8 {
                            core::result::unwrap_failed(); /* do not return */
                        }
                        v190 = v54;
                        *((v191 + 24) as &i64) = v56;
                        *((v191 + 9) as &i128) = *((&v54 as &char + 1) as &i128);
                        *(v191 as &i64) = 4;
                        *((v191 + 8) as &i8) = v190;
                        if v3 {
                            return;
                        }
                        return;
                    }
                    v180 = *((&v4 as &char + 8) as &i64);
                    if !(*((v180 + 2) as &i8) ^ 102) && !(*(v180 as &i16) ^ 25901) {
                        v181 = v25 ^ v61;
                        v182 = v26 ^ v24;
                        v183 = 20;
                        v184 = v182 | v181;
                        v185 = 0;
                        v186 = v182 | v181;
                        goto LABEL_480f74;
                    }
                    if !(*((v180 + 2) as &i8) ^ 116) && !(*(v180 as &i16) ^ 28205) {
                        v4 = std::fs::Metadata::modified(&v70);
                        v187 = *((&v4 as &char + 8) as &i32);
                        if v187 == 0x3b9aca00 {
                            v30 = v4;
                            core::result::unwrap_failed(); /* do not return */
                        }
                        v4 = std::fs::Metadata::modified(&v57);
                        v186 = *((&v4 as &char + 8) as &i32);
                        if v186 == 0x3b9aca00 {
                            v30 = v4;
                            core::result::unwrap_failed(); /* do not return */
                        }
                        v195 = (v4 < v4 ? 255 : (-0x100 | v4 != v4) & 4294967295 & 4294967295);
                        if v187 < v186 {
                            v201 = 255;
                        } else {
                            v201 = -0x100 | v187 != v186;
                        }
                        v204 = (v195 ? v195 : v201);
                        v183 = 5;
                        v184 = v204;
                        v185 = 1;
LABEL_480f74:
                        v178 = v186 | -0x100 | amd64g_calculate_condition(4, v183, v184, v185, amd64g_calculate_rflags_c(20, v84, 0, v205)) & 255;
                    } else {
                        if !(!(*((v180 + 2) as &i8) ^ 116)) || !(!(*(v180 as &i16) ^ 28461)) {
                            goto LABEL_480b6e;
                        }
                        v4 = std::fs::Metadata::modified(&v70);
                        v188 = *((&v4 as &char + 8) as &i32);
                        if v188 == 0x3b9aca00 {
                            v30 = v4;
                            core::result::unwrap_failed(); /* do not return */
                        }
                        v4 = std::fs::Metadata::modified(&v57);
                        v194 = *((&v4 as &char + 8) as &i32);
                        if v194 == 0x3b9aca00 {
                            v30 = v4;
                            core::result::unwrap_failed(); /* do not return */
                        }
                        v178 = (v4 == v4 ? (-0x100 | v188 < v194) & 4294967295 : (-0x100 | v4 < v4) & 4294967295 & 4294967295);
                    }
                }
                *((v206 + 8) as &i8) = v178;
                *(v206 as &i64) = 7;
LABEL_47faba:
LABEL_47fabd:
                v175 = v91 | -0x100 | 1;
                goto LABEL_47fac0;
            } else {
                v3 = v28;
                v26 = *((&v28 as &char + 8) as &i64);
                if !v85 {
                    v4 = 7;
                    uu_test::eval::panic_cold_explicit(); /* do not return */
                }
                v115 = v29;
                v116 = v84 - 2;
                *((v83 + 16) as &i64) = v116;
                v117 = v116 * 5;
                v118 = *((v86 + v117 * 8 + 16) as &i128);
                v4 = *((v86 + v117 * 8) as &i128);
                v9 = *((v86 + v117 * 8 + 32) as &i64);
                v7 = v118;
                if v4 != 3 {
                    uu_test::eval::panic_cold_explicit(); /* do not return */
                }
                v2 = *((&v4 as &char + 8) as &i64);
                v0 = v7;
                if !v116 {
                    v4 = 7;
                    uu_test::eval::panic_cold_explicit(); /* do not return */
                }
                v138 = *((&v7 as &char + 8) as &i64);
                v139 = v84 - 3;
                *((v83 + 16) as &i64) = v139;
                v140 = v139 * 5;
                v141 = *((v86 + v140 * 8 + 16) as &i128);
                v4 = *((v86 + v140 * 8) as &i128);
                v9 = *((v86 + v140 * 8 + 32) as &i64);
                v7 = v141;
                if v4 != 3 {
                    uu_test::eval::panic_cold_explicit(); /* do not return */
                }
                v152 = v7;
                v153 = *((&v7 as &char + 8) as &i64);
                v4 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v152, v153);
                if v4 || (v4 = core::num::<impl core::str::traits::FromStr for i128>::from_str(*((&v4 as &char + 8) as &i64), v7), v4) {
                    v57 = 0;
                    v58 = 1;
                    v59 = 0;
                    v11 = 32;
                    v12 = 3;
                    v4 = 0;
                    v7 = 0;
                    v9 = &v57;
                    v10 = &g_4e1cb0;
                    v30 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v152, v153);
                    if (!v30 ? os_display::unix::write(&v4, v31, v32, 1) as i8 : os_display::unix::write_escaped(&v4, v152, v153) as i8) {
                        core::result::unwrap_failed(); /* do not return */
                    }
LABEL_4804a5:
                    v176 = v59;
                    v177 = 5;
                    goto LABEL_4804c2;
                }
                v168 = v7;
                v25 = *((&v7 as &char + 8) as &i64);
                v4 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v0, v138);
                if v4 || (v4 = core::num::<impl core::str::traits::FromStr for i128>::from_str(*((&v4 as &char + 8) as &i64), v7), v4) {
                    v30 = 1;
                    v31 = v0;
                    v32 = v138;
                    v33 = 1;
                    v57 = 0;
                    v58 = 1;
                    v59 = 0;
                    v11 = 32;
                    v12 = 3;
                    v4 = 0;
                    v7 = 0;
                    v9 = &v57;
                    v10 = &g_4e1cb0;
                    if <os_display::Quoted as core::fmt::Display>::fmt(&v30, &v4) as i8 {
                        core::result::unwrap_failed(); /* do not return */
                    }
                    goto LABEL_4804a5;
                }
                v173 = v7;
                v24 = *((&v7 as &char + 8) as &i64);
                v4 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v26, v115);
                if !v4 && v7 == 3 {
                    v179 = *((&v4 as &char + 8) as &i64);
                    if !(*((v179 + 2) as &i8) ^ 113) && !(*(v179 as &i16) ^ 25901) {
                        goto LABEL_48146b;
                    }
                    if !(*((v179 + 2) as &i8) ^ 101) && !(*(v179 as &i16) ^ 28205) {
                        goto LABEL_48146b;
                    }
                    if !(*((v179 + 2) as &i8) ^ 116) && !(*(v179 as &i16) ^ 26413) {
                        goto LABEL_48146b;
                    }
                    if !(*((v179 + 2) as &i8) ^ 101) && !(*(v179 as &i16) ^ 26413) {
                        v25 = v25 - v24 - (v168 < v173);
                        goto LABEL_48146b;
                    }
                    if !(*((v179 + 2) as &i8) ^ 116) && !(*(v179 as &i16) ^ 27693) {
                        v25 = vvar_2743 - v24 - (v168 < v173);
                        goto LABEL_48146b;
                    }
                    if !(*((v179 + 2) as &i8) ^ 101) && !(*(v179 as &i16) ^ 27693) {
LABEL_48146b:
                        *((v200 + 8) as &u8) = !(v25 ^ v24) && !(v168 ^ v173);
                        *(v200 as &i64) = 7;
                        goto LABEL_47fabd;
                    }
                }
                v30 = 1;
                v31 = v26;
                v32 = v115;
                v33 = 1;
                v57 = 0;
                v58 = 1;
                v59 = 0;
                v11 = 32;
                v12 = 3;
                v4 = 0;
                v7 = 0;
                v9 = &v57;
                v10 = &g_4e1cb0;
                if <os_display::Quoted as core::fmt::Display>::fmt(&v30, &v4) as i8 {
                    core::result::unwrap_failed(); /* do not return */
                }
                v176 = v59;
                v177 = 4;
LABEL_4804c2:
                *(v203 as &i64) = v177;
                *((v203 + 8) as &i8) = v57;
                *((v203 + 15) as &i8) = v57 >> 56;
                *((v203 + 13) as &i16) = v57 >> 40;
                *((v203 + 9) as &i32) = v57 >> 8;
                *((v203 + 16) as &i64) = v58;
                *((v203 + 24) as &i64) = v176;
                if v3 {
                    return;
                }
                return;
            }
        case 4:
            v98 = v28;
            v99 = *((&v28 as &char + 8) as &i64);
            v100 = v29;
            if !*((&v27 as &char + 8) as &i64) {
                if v85 {
                    v111 = v84 - 2;
                    *((v83 + 16) as &i64) = v111;
                    v112 = v111 * 5;
                    v113 = *((v86 + v112 * 8 + 16) as &i128);
                    v4 = *((v86 + v112 * 8) as &i128);
                    v9 = *((v86 + v112 * 8 + 32) as &i64);
                    v7 = v113;
                    v114 = v4;
                    if v114 == 3 {
                        v0 = v99;
                        v127 = *((&v7 as &char + 8) as &i64);
                        goto LABEL_4807c4;
                    }
                    if v114 == 6 {
                        v0 = v99;
                        v30 = std::sys::os_str::bytes::Slice::to_owned(1, 0);
LABEL_4807c4:
                        if v100 != 2 {
                            goto LABEL_4807ee;
                        }
                        if *(v0 as &i16) != 31277 {
LABEL_4807ee:
                            *((v171 + 8) as &u8) = v127;
                            *(v171 as &i64) = 7;
                            goto LABEL_47fab8;
                        }
                        goto LABEL_4807ee;
                    } else if v114 != 7 {
                        v30 = 1;
                        v31 = v99;
                        v32 = v100;
                        v33 = 1;
                        v57 = <T as alloc::string::ToString>::to_string(&v30, v85, v86, v149, v150, v0, v1);
                        *((v155 + 24) as &i64) = *((&v57 as &char + 16) as &i64);
                        *((v155 + 8) as &i192) = v57;
                        *(v155 as &i64) = 3;
LABEL_48010c:
                        if v98 {
                            return;
                        }
                        return;
                    }
                }
                *((v148 + 8) as &i8) = 1;
                *(v148 as &i64) = 7;
                goto LABEL_48010c;
            }
            v4 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v99, v100);
            if v4 {
                core::option::unwrap_failed(); /* do not return */
            }
            v126 = *((v83 + 16) as &i64);
            if !v126 {
                v4 = 7;
                uu_test::eval::panic_cold_explicit(); /* do not return */
            }
            v129 = *((&v4 as &char + 8) as &i64);
            v130 = v7;
            v131 = v126 - 1;
            *((v83 + 16) as &i64) = v131;
            v132 = *((v83 + 8) as &i64);
            v133 = v131 * 5;
            v134 = *((v132 + v133 * 8 + 16) as &i128);
            v4 = *((v132 + v133 * 8) as &i128);
            v9 = *((v132 + v133 * 8 + 32) as &i64);
            v7 = v134;
            if v4 != 3 {
                uu_test::eval::panic_cold_explicit(); /* do not return */
            }
            v3 = *((&v4 as &char + 8) as &i64);
            v2 = v7;
            if v130 != 2 {
                uu_test::eval::panic_cold_explicit(); /* do not return */
            }
            v154 = *((&v7 as &char + 8) as &i64);
            if *(v129 as &i16) == 25133 {
                break;
            }
            if *(v129 as &i16) == 25389 {
                break;
            }
            if *(v129 as &i16) == 25645 {
                break;
            }
            if *(v129 as &i16) == 25901 {
                break;
            }
            if *(v129 as &i16) == 26157 {
                break;
            }
            if *(v129 as &i16) == 26413 {
                break;
            }
            if *(v129 as &i16) == 18221 {
                break;
            }
            if *(v129 as &i16) == 26669 {
LABEL_480cc6:
                v4 = std::sys::pal::unix::fs::lstat(v2, v154);
                if v4 == 2 {
                    v31 = *((&v4 as &char + 8) as &i64);
                    v30 = 2;
                } else {
                    memcpy(&v30, &v4, 176);
                }
                if v30 != 2 {
                    v11 = v36;
                    v207 = v30;
                    v208 = v32;
                    v9 = v34;
                    v7 = v208;
                    v4 = v207;
                    v209 = v38;
                    v210 = v39;
                    v15 = v40;
                    v16 = v41;
                    v211 = v42;
                    v23 = v53;
                    v22 = v51;
                    v21 = v49;
                    v20 = v47;
                    v19 = v45;
                    v18 = v43;
                    v12 = v37;
                    v13 = v209;
                    v14 = v210;
                    v17 = v211;
                }
                goto LABEL_48107b;
            } else {
                if *(v129 as &i16) == 27437 {
                    break;
                }
                if *(v129 as &i16) == 19501 {
                    goto LABEL_480cc6;
                }
                if *(v129 as &i16) == 20013 {
                    break;
                }
                if *(v129 as &i16) == 20269 {
                    break;
                }
                if *(v129 as &i16) == 28717 {
                    break;
                }
                if *(v129 as &i16) == 29229 {
                    break;
                }
                if *(v129 as &i16) == 21293 {
                    goto LABEL_48110f;
                }
                if *(v129 as &i16) == 29485 {
                    goto LABEL_48110f;
                }
                if *(v129 as &i16) == 29741 {
                    v4 = uu_test::isatty(v2, v154, *(v129 as &i16), v196, v197, v0);
                    v198 = v4;
                    v199 = *((&v4 as &char + 8) as &i8);
                    if v198 == 7 {
LABEL_48107b:
                    } else {
                        *((v202 + 24) as &i64) = *((&v4 as &char + 24) as &i64);
                        *((v202 + 9) as &i128) = *((&v4 as &char + 9) as &i128);
                        *(v202 as &i64) = v198;
                        *((v202 + 8) as &i8) = v199;
                        if v98 {
                            return;
                        }
                        return;
                    }
                    *((v212 + 8) as &u8) = v199;
                    *(v212 as &i64) = 7;
LABEL_47fab6:
LABEL_47fab8:
                    goto LABEL_47faba;
                }
                if *(v129 as &i16) == 29997 {
                    goto LABEL_48110f;
                }
                if *(v129 as &i16) == 30509 {
LABEL_48110f:
                    break;
                }
                if *(v129 as &i16) == 30765 {
                    v4 = std::sys::pal::unix::fs::stat(v2, v154);
                    if v4 != 2 {
                        memcpy(&v30, &v4, 176);
                        if v30 != 2 {
                            vvar_2852{stack -824} = v36;
                            vvar_2853{reg 224} = v30;
                            vvar_2854{reg 256} = v32;
                            v9 = v34;
                            v7 = v208;
                            v4 = v207;
                            vvar_2857{stack -804} = v40;
                            vvar_2858{stack -796} = v41;
                            vvar_2860{stack -704} = v53;
                            vvar_2861{stack -720} = v51;
                            vvar_2862{stack -736} = v49;
                            vvar_2863{stack -752} = v47;
                            vvar_2864{stack -768} = v45;
                            vvar_2865{stack -784} = v43;
                            v12 = v37;
                            vvar_2866{stack -812} = v209;
                            vvar_2867{stack -808} = v210;
                            vvar_2868{stack -792} = v211;
                        }
                    } else {
                        v31 = *((&v4 as &char + 8) as &i64);
                        v30 = 2;
                        if v30 != 2 {
                            vvar_2870{stack -824} = v36;
                            vvar_2871{reg 224} = v30;
                            vvar_2872{reg 256} = v32;
                            v9 = v34;
                            v7 = v208;
                            v4 = v207;
                            vvar_2875{stack -804} = v40;
                            vvar_2876{stack -796} = v41;
                            vvar_2878{stack -704} = v53;
                            vvar_2879{stack -720} = v51;
                            vvar_2880{stack -736} = v49;
                            vvar_2881{stack -752} = v47;
                            vvar_2882{stack -768} = v45;
                            vvar_2883{stack -784} = v43;
                            v12 = v37;
                            vvar_2884{stack -812} = v209;
                            vvar_2885{stack -808} = v210;
                            vvar_2886{stack -792} = v211;
                        }
                    }
                }
            }
        case 5: case 6:
LABEL_47faa3:
            *((v104 + 8) as &i8) = 0;
            goto LABEL_47faa7;
        default:
            *(v92 as &i64) = 0;
            goto LABEL_47faae;
        }
    }
}
