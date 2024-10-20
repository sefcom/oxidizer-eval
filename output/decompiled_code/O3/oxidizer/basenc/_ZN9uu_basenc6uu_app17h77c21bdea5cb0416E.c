fn uu_basenc::uu_app(a0: u32) -> u64 {
    let v0: i32;  // [sp-0xcbc]
    let v1: i64;  // [sp-0xcb8]
    let v2: i32;  // [sp-0xcb0]
    let v3: i64;  // [sp-0xca8]
    let v4: i64;  // [sp-0xca0]
    let v5: i64;  // [sp-0xc98]
    let v6: i64;  // [sp-0xc90]
    let v7: i64;  // [sp-0xc88]
    let v8: i32;  // [sp-0xc80]
    let v9: i64;  // [sp-0xc78]
    let v10: i128;  // [sp-0xc68]
    let v11: i64;  // [sp-0xc58]
    let v12: i128;  // [sp-0xc48]
    let v13: i128;  // [sp-0xc38]
    let v14: i64;  // [sp-0xc28]
    let v15: i128;  // [sp-0xc18]
    let v16: i64;  // [bp-0xc08]
    let v17: i64;  // [sp-0xbf8]
    let v18: i64;  // [sp-0xbe8]
    let v19: i64;  // [sp-0xbe0]
    let v20: i64;  // [sp-0xbd8]
    let v21: i32;  // [sp-0xbd0]
    let v22: i128;  // [sp-0xbc8], Other Possible Types: struct16
    let v23: i64;  // [sp-0xbc0]
    let v24: i64;  // [sp-0xbb8]
    let v25: i64;  // [sp-0xbb0]
    let v26: i128;  // [sp-0xba8]
    let v27: i64;  // [sp-0xb98]
    let v28: i64;  // [sp-0xb90]
    let v29: i64;  // [sp-0xb88]
    let v30: i64;  // [sp-0xb80]
    let v31: i8;  // [bp-0xb78]
    let v32: i128;  // [bp-0xb48], Other Possible Types: struct16
    let v33: i64;  // [sp-0xb38]
    let v34: i64;  // [sp-0x9a8]
    let v35: i128;  // [sp-0x9a0]
    let v36: i64;  // [sp-0x990]
    let v37: i32;  // [sp-0x988]
    let v38: i64;  // [sp-0x984]
    let v39: i32;  // [sp-0x97c]
    let v40: i16;  // [sp-0x97b]
    let v41: i8;  // [sp-0x979]
    let v42: i64;  // [sp-0x978]
    let v43: i8;  // [bp-0x948]
    let v44: i8;  // [bp-0x940]
    let v45: i64;  // [sp-0x8f0]
    let v46: i128;  // [sp-0x8e8]
    let v47: i128;  // [sp-0x8d8]
    let v48: i64;  // [sp-0x8c8]
    let v49: i64;  // [sp-0x718]
    let v50: i64;  // [sp-0x710]
    let v51: i128;  // [bp-0x708]
    let v52: i128;  // [bp-0x6f8]
    let v53: i64;  // [sp-0x6f0]
    let v54: i64;  // [sp-0x6e8]
    let v55: i64;  // [sp-0x6e0]
    let v56: i64;  // [sp-0x6d8]
    let v57: i64;  // [sp-0x6d0]
    let v58: i64;  // [sp-0x6c8]
    let v59: i64;  // [sp-0x6b0]
    let v60: i64;  // [sp-0x6a8]
    let v61: i128;  // [sp-0x6a0]
    let v62: i64;  // [sp-0x690]
    let v63: i128;  // [sp-0x688]
    let v64: i64;  // [sp-0x678]
    let v65: i128;  // [sp-0x670]
    let v66: i64;  // [sp-0x660]
    let v67: i128;  // [sp-0x658]
    let v68: i64;  // [sp-0x648]
    let v69: i128;  // [sp-0x640]
    let v70: i64;  // [sp-0x630]
    let v71: i128;  // [sp-0x628]
    let v72: i64;  // [sp-0x618]
    let v73: i128;  // [sp-0x610]
    let v74: i64;  // [sp-0x600]
    let v75: i128;  // [sp-0x5f8]
    let v76: i64;  // [sp-0x5e8]
    let v77: i128;  // [sp-0x5e0]
    let v78: i64;  // [sp-0x5d0]
    let v79: i128;  // [sp-0x5c8]
    let v80: i64;  // [sp-0x5b8]
    let v81: i128;  // [sp-0x5b0]
    let v82: i64;  // [sp-0x5a0]
    let v83: i128;  // [sp-0x598]
    let v84: i64;  // [sp-0x588]
    let v85: i128;  // [sp-0x580]
    let v86: i64;  // [sp-0x570]
    let v87: i64;  // [sp-0x568]
    let v88: i64;  // [sp-0x560]
    let v89: i128;  // [sp-0x558]
    let v90: i64;  // [sp-0x548]
    let v91: i64;  // [sp-0x520]
    let v92: i64;  // [sp-0x508]
    let v93: i64;  // [sp-0x500]
    let v94: i64;  // [sp-0x4f8]
    let v95: i128;  // [sp-0x4f0]
    let v96: i64;  // [sp-0x4e8]
    let v97: i64;  // [sp-0x4e0]
    let v98: i32;  // [bp-0x4d8]
    let v99: i64;  // [bp-0x4d4]
    let v100: i32;  // [sp-0x4d0]
    let v101: i32;  // [bp-0x4cc]
    let v102: i16;  // [bp-0x4cb]
    let v103: i8;  // [bp-0x4c9]
    let v104: i8;  // [bp-0x4c8]
    let v105: i5696;  // [sp-0x2f8], Other Possible Types: struct712
    let v107: i64;  // rsi
    let v108: i256;  // ymm0
    let v109: i256;  // ymm1
    let v110: i64;  // rbx
    let v111: i64;  // r14
    let v114: i64;  // rdi
    let v115: i64;  // r12
    let v116: i64;  // r12
    let v117: i128;  // xmm0
    let v118: i256;  // ymm0
    let v119: i128;  // xmm0
    let v120: i128;  // xmm0
    let v121: i64;  // rbx
    let v122: i64;  // rax
    let v123: i64;  // rcx
    let v124: i128;  // xmm0
    let v125: i128;  // xmm1
    let v126: i64;  // rbp
    let v127: i128;  // xmm0
    let v128: i32;  // r13d
    let v129: i128;  // xmm0
    let v130: i128;  // xmm1
    let v131: i128;  // xmm0
    let v132: i128;  // xmm0
    let v133: i128;  // xmm1
    let v134: i128;  // xmm0
    let v135: i64;  // r13
    let v136: i32;  // r13d
    let v137: i64;  // rax
    let v138: i64;  // rcx
    let v139: i128;  // xmm0
    let v140: i128;  // xmm1
    let v141: i64;  // r13
    let v142: i128;  // xmm0
    let v143: i128;  // xmm0
    let v144: i128;  // xmm1
    let v145: i128;  // xmm0
    let v146: i128;  // xmm0
    let v147: i128;  // xmm1
    let v148: i128;  // xmm0
    let v149: i64;  // r13
    let v150: i64;  // r13
    let v151: i64;  // rax
    let v152: i64;  // rcx
    let v153: i128;  // xmm0
    let v154: i128;  // xmm1
    let v155: i64;  // r13
    let v156: i128;  // xmm0
    let v157: i128;  // xmm0
    let v158: i128;  // xmm1
    let v159: i128;  // xmm0
    let v160: i128;  // xmm0
    let v161: i128;  // xmm1
    let v162: i128;  // xmm0
    let v163: i64;  // r13
    let v164: i64;  // r13
    let v165: i64;  // rax
    let v166: i64;  // rcx
    let v167: i128;  // xmm0
    let v168: i128;  // xmm1
    let v169: i64;  // r13
    let v170: i128;  // xmm0
    let v171: i128;  // xmm0
    let v172: i128;  // xmm1
    let v173: i128;  // xmm0
    let v174: i128;  // xmm0
    let v175: i128;  // xmm1
    let v176: i128;  // xmm0
    let v177: i64;  // r13
    let v178: i64;  // r13
    let v179: i64;  // rax
    let v180: i64;  // rcx
    let v181: i128;  // xmm0
    let v182: i128;  // xmm1
    let v183: i64;  // r13
    let v184: i128;  // xmm0
    let v185: i128;  // xmm0
    let v186: i128;  // xmm1
    let v187: i128;  // xmm0
    let v188: i128;  // xmm0
    let v189: i128;  // xmm1
    let v190: i128;  // xmm0
    let v191: i64;  // r13
    let v192: i64;  // r13
    let v193: i64;  // rax
    let v194: i64;  // rcx
    let v195: i128;  // xmm0
    let v196: i128;  // xmm1
    let v197: i64;  // r13
    let v198: i128;  // xmm0
    let v199: i128;  // xmm0
    let v200: i128;  // xmm1
    let v201: i128;  // xmm0
    let v202: i128;  // xmm0
    let v203: i128;  // xmm1
    let v204: i128;  // xmm0
    let v205: i64;  // r13
    let v206: i64;  // r13
    let v207: i64;  // rax
    let v208: i64;  // rcx
    let v209: i128;  // xmm0
    let v210: i128;  // xmm1
    let v211: i64;  // r13
    let v212: i128;  // xmm0
    let v213: i128;  // xmm0
    let v214: i128;  // xmm1
    let v215: i128;  // xmm0
    let v216: i128;  // xmm0
    let v217: i128;  // xmm1
    let v218: i128;  // xmm0
    let v219: i64;  // r13
    let v220: i64;  // r13
    let v221: i64;  // rax
    let v222: i64;  // rcx
    let v223: i128;  // xmm0
    let v224: i128;  // xmm1
    let v225: i128;  // xmm0
    let v226: i128;  // xmm0
    let v227: i128;  // xmm1
    let v228: i128;  // xmm0
    let v229: i128;  // xmm0
    let v230: i128;  // xmm1
    let v231: i128;  // xmm0
    let v232: i64;  // r12
    let v233: i64;  // rdx
    let v234: i64;  // rax
    let v235: i64;  // rcx
    let v236: i64;  // rax
    let v237: i128;  // xmm0
    let v238: i128;  // xmm1
    let v239: i128;  // xmm0
    let v240: i64;  // rbx

    v105 = uu_base32::base_common::base_app(&g_41ef54, 297, &g_41f07d, 21);
    v107 = 32;
    do {
        v61 = 0;
        v63 = 0;
        v65 = 0;
        v67 = 0;
        v69 = 0;
        v71 = 0;
        v73 = 0;
        v75 = 0;
        v77 = 0;
        v79 = 0;
        v81 = 0;
        v83 = 0;
        v85 = 0;
        v49 = 0;
        v51 = 0;
        v53 = 0;
        v55 = 0;
        v58 = 5;
        v59 = 0;
        v60 = 8;
        v62 = 8;
        v64 = 8;
        v66 = 8;
        v68 = 8;
        v70 = 8;
        v72 = 8;
        v74 = 8;
        v76 = 8;
        v78 = 4;
        v80 = 8;
        v82 = 8;
        v84 = 8;
        v86 = 8;
        v87 = 0;
        v88 = 0x8000000000000000;
        v90 = 0x8000000000000000;
        v91 = 9223372036854775809;
        v92 = v94;
        v93 = v95;
        v94 = v92;
        v95 = v93;
        v96 = 0;
        v98 = 0x11000000110000;
        v100 = 0;
        v101 = 3337;
        v110 = *((v107 - -5269448) as &i64);
        v45 = v107;
        v111 = *((v107 + "base64") as &i64);
        v22 = 0;
        v23 = 1;
        v24 = 0;
        if !v111 {
            v24 = 0;
            v114 = 1;
            v115 = 0;
        } else {
            v22 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, v111);
            v114 = v23;
            v115 = v22;
        }
        v116 = v115;
        memcpy(v114 + v24, v110, v111);
        v24 += v111;
        v117 = v23;
        vvar_31{reg 224} = (((vvar_17{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_193{reg 224}))
        v46 = v117;
        if v116 != 0x8000000000000000 {
            v119 = v46;
            vvar_31{reg 224} = ((vvar_31{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_198{reg 224}))
            v22 = v119;
        }
        v88 = v116;
        v120 = v22;
        v89 = v120;
        memcpy(&v22, &v49, 588);
        v41 = v103;
        v40 = v102;
        v39 = 2;
        v42 = "base64";
        v121 = v33;
        if v121 == v32 {
            v32 = alloc::raw_vec::RawVec<T,A>::grow_one();
        }
        v122 = *((&v32 as &char + 8) as &i64);
        v123 = v121 * 16;
        *((v122 + v123) as &&i64) = &g_41f092;
        *((v122 + v123 + 8) as &i64) = 6;
        v33 = v121 + 1;
        v18 = v22;
        v6 = v23;
        v124 = v24;
        v125 = v26;
        v46 = v124;
        v47 = v125;
        v48 = v27;
        v126 = v28;
        v4 = v29;
        v3 = v30;
        memcpy(&v49, &v31, 464);
        v19 = v34;
        v127 = v35;
        v15 = v127;
        v16 = v36;
        v128 = v37;
        v7 = v38;
        v8 = v39;
        v129 = v46;
        v130 = v47;
        v12 = v129;
        v13 = v130;
        v14 = v48;
        memcpy(&v104, &v49, 464);
        v131 = v15;
        v10 = v131;
        v11 = v16;
        v1 = v7;
        v2 = v8;
        v22 = v18;
        v23 = v6;
        v27 = v14;
        v132 = v12;
        v133 = v13;
        v26 = v133;
        v24 = v132;
        v5 = v126;
        v28 = v126;
        v29 = v4;
        v30 = v3;
        memcpy(&v31, &v104, 464);
        v34 = v19;
        v134 = v10;
        v35 = v134;
        v36 = v11;
        v37 = v128;
        v39 = v2;
        v38 = v1;
        v42 = "base64url";
        v135 = v33;
        v136 = v128;
        if v135 == v32 {
            v32 = alloc::raw_vec::RawVec<T,A>::grow_one();
            v5 = v28;
            v4 = v29;
            v3 = v30;
            v136 = v37;
        }
        v0 = v136;
        v6 = v23;
        v137 = *((&v32 as &char + 8) as &i64);
        v138 = v135 * 16;
        *((v137 + v138) as &&i64) = &g_41f0b0;
        *((v137 + v138 + 8) as &i64) = 9;
        v33 = v135 + 1;
        v139 = v24;
        v140 = v26;
        v46 = v139;
        v47 = v140;
        v48 = v27;
        v141 = v34;
        memcpy(&v49, &v31, 464);
        v142 = v35;
        v15 = v142;
        v16 = v36;
        v7 = v38;
        v8 = v39;
        v143 = v46;
        v144 = v47;
        v12 = v143;
        v13 = v144;
        v14 = v48;
        memcpy(&v104, &v49, 464);
        v145 = v15;
        v10 = v145;
        v11 = v16;
        v1 = v7;
        v2 = v8;
        v22 = v22;
        v23 = v6;
        v27 = v14;
        v146 = v12;
        v147 = v13;
        v26 = v147;
        v24 = v146;
        v28 = v5;
        v29 = v4;
        v30 = v3;
        memcpy(&v31, &v104, 464);
        v34 = v141;
        v148 = v10;
        v35 = v148;
        v36 = v11;
        v37 = v0;
        v39 = v2;
        v38 = v1;
        v42 = "base32";
        v149 = v33;
        v150 = v141;
        if v149 == v32 {
            v32 = alloc::raw_vec::RawVec<T,A>::grow_one();
            v5 = v28;
            v4 = v29;
            v3 = v30;
            v150 = v34;
        }
        v0 = v37;
        v6 = v23;
        v151 = *((&v32 as &char + 8) as &i64);
        v152 = v149 * 16;
        *((v151 + v152) as &&i64) = &g_41f0d2;
        *((v151 + v152 + 8) as &i64) = 6;
        v33 = v149 + 1;
        v153 = v24;
        v154 = v26;
        v46 = v153;
        v47 = v154;
        v48 = v27;
        v155 = v150;
        memcpy(&v49, &v31, 464);
        v156 = v35;
        v15 = v156;
        v16 = v36;
        v7 = v38;
        v8 = v39;
        v157 = v46;
        v158 = v47;
        v12 = v157;
        v13 = v158;
        v14 = v48;
        memcpy(&v104, &v49, 464);
        v159 = v15;
        v10 = v159;
        v11 = v16;
        v1 = v7;
        v2 = v8;
        v22 = v22;
        v23 = v6;
        v27 = v14;
        v160 = v12;
        v161 = v13;
        v26 = v161;
        v24 = v160;
        v28 = v5;
        v29 = v4;
        v30 = v3;
        memcpy(&v31, &v104, 464);
        v34 = v155;
        v162 = v10;
        v35 = v162;
        v36 = v11;
        v37 = v0;
        v39 = v2;
        v38 = v1;
        v42 = "base32hex";
        v163 = v33;
        v164 = v155;
        if v163 == v32 {
            v32 = alloc::raw_vec::RawVec<T,A>::grow_one();
            v5 = v28;
            v4 = v29;
            v3 = v30;
            v164 = v34;
        }
        v0 = v37;
        v6 = v23;
        v165 = *((&v32 as &char + 8) as &i64);
        v166 = v163 * 16;
        *((v165 + v166) as &&i64) = &g_41f0f0;
        *((v165 + v166 + 8) as &i64) = 9;
        v33 = v163 + 1;
        v167 = v24;
        v168 = v26;
        v46 = v167;
        v47 = v168;
        v48 = v27;
        v169 = v164;
        memcpy(&v49, &v31, 464);
        v170 = v35;
        v15 = v170;
        v16 = v36;
        v7 = v38;
        v8 = v39;
        v171 = v46;
        v172 = v47;
        v12 = v171;
        v13 = v172;
        v14 = v48;
        memcpy(&v104, &v49, 464);
        v173 = v15;
        v10 = v173;
        v11 = v16;
        v1 = v7;
        v2 = v8;
        v22 = v22;
        v23 = v6;
        v27 = v14;
        v174 = v12;
        v175 = v13;
        v26 = v175;
        v24 = v174;
        v28 = v5;
        v29 = v4;
        v30 = v3;
        memcpy(&v31, &v104, 464);
        v34 = v169;
        v176 = v10;
        v35 = v176;
        v36 = v11;
        v37 = v0;
        v39 = v2;
        v38 = v1;
        v42 = "base16";
        v177 = v33;
        v178 = v169;
        if v177 == v32 {
            v32 = alloc::raw_vec::RawVec<T,A>::grow_one();
            v5 = v28;
            v4 = v29;
            v3 = v30;
            v178 = v34;
        }
        v0 = v37;
        v6 = v23;
        v179 = *((&v32 as &char + 8) as &i64);
        v180 = v177 * 16;
        *((v179 + v180) as &&i64) = &g_41f115;
        *((v179 + v180 + 8) as &i64) = 6;
        v33 = v177 + 1;
        v181 = v24;
        v182 = v26;
        v46 = v181;
        v47 = v182;
        v48 = v27;
        v183 = v178;
        memcpy(&v49, &v31, 464);
        v184 = v35;
        v15 = v184;
        v16 = v36;
        v7 = v38;
        v8 = v39;
        v185 = v46;
        v186 = v47;
        v12 = v185;
        v13 = v186;
        v14 = v48;
        memcpy(&v104, &v49, 464);
        v187 = v15;
        v10 = v187;
        v11 = v16;
        v1 = v7;
        v2 = v8;
        v22 = v22;
        v23 = v6;
        v27 = v14;
        v188 = v12;
        v189 = v13;
        v26 = v189;
        v24 = v188;
        v28 = v5;
        v29 = v4;
        v30 = v3;
        memcpy(&v31, &v104, 464);
        v34 = v183;
        v190 = v10;
        v35 = v190;
        v36 = v11;
        v37 = v0;
        v39 = v2;
        v38 = v1;
        v42 = "base2lsbf";
        v191 = v33;
        v192 = v183;
        if v191 == v32 {
            v32 = alloc::raw_vec::RawVec<T,A>::grow_one();
            v5 = v28;
            v4 = v29;
            v3 = v30;
            v192 = v34;
        }
        v0 = v37;
        v6 = v23;
        v193 = *((&v32 as &char + 8) as &i64);
        v194 = v191 * 16;
        *((v193 + v194) as &&i64) = &g_41f127;
        *((v193 + v194 + 8) as &i64) = 9;
        v33 = v191 + 1;
        v195 = v24;
        v196 = v26;
        v46 = v195;
        v47 = v196;
        v48 = v27;
        v197 = v192;
        memcpy(&v49, &v31, 464);
        v198 = v35;
        v15 = v198;
        v16 = v36;
        v7 = v38;
        v8 = v39;
        v199 = v46;
        v200 = v47;
        v12 = v199;
        v13 = v200;
        v14 = v48;
        memcpy(&v104, &v49, 464);
        v201 = v15;
        v10 = v201;
        v11 = v16;
        v1 = v7;
        v2 = v8;
        v22 = v22;
        v23 = v6;
        v27 = v14;
        v202 = v12;
        v203 = v13;
        v26 = v203;
        v24 = v202;
        v28 = v5;
        v29 = v4;
        v30 = v3;
        memcpy(&v31, &v104, 464);
        v34 = v197;
        v204 = v10;
        v35 = v204;
        v36 = v11;
        v37 = v0;
        v39 = v2;
        v38 = v1;
        v42 = "base2msbf";
        v205 = v33;
        v206 = v197;
        if v205 == v32 {
            v32 = alloc::raw_vec::RawVec<T,A>::grow_one();
            v5 = v28;
            v4 = v29;
            v3 = v30;
            v206 = v34;
        }
        v0 = v37;
        v6 = v23;
        v207 = *((&v32 as &char + 8) as &i64);
        v208 = v205 * 16;
        *((v207 + v208) as &&i64) = &g_41f161;
        *((v207 + v208 + 8) as &i64) = 9;
        v33 = v205 + 1;
        v209 = v24;
        v210 = v26;
        v46 = v209;
        v47 = v210;
        v48 = v27;
        v211 = v206;
        memcpy(&v49, &v31, 464);
        v212 = v35;
        v15 = v212;
        v16 = v36;
        v7 = v38;
        v8 = v39;
        v213 = v46;
        v214 = v47;
        v12 = v213;
        v13 = v214;
        v14 = v48;
        memcpy(&v104, &v49, 464);
        v215 = v15;
        v10 = v215;
        v11 = v16;
        v1 = v7;
        v2 = v8;
        v22 = v22;
        v23 = v6;
        v27 = v14;
        v216 = v12;
        v217 = v13;
        v26 = v217;
        v24 = v216;
        v28 = v5;
        v29 = v4;
        v30 = v3;
        memcpy(&v31, &v104, 464);
        v34 = v211;
        v218 = v10;
        v35 = v218;
        v36 = v11;
        v37 = v0;
        v39 = v2;
        v38 = v1;
        v42 = "z85";
        v219 = v33;
        v220 = v211;
        v37 = v37;
        if v219 == v32 {
            v32 = alloc::raw_vec::RawVec<T,A>::grow_one();
            v5 = v28;
            v4 = v29;
            v3 = v30;
            v220 = v34;
            v37 = v37;
        }
        v0 = v37;
        v19 = v220;
        v18 = v22;
        v221 = *((&v32 as &char + 8) as &i64);
        v222 = v219 * 16;
        *((v221 + v222) as &&i64) = &g_41f19a;
        *((v221 + v222 + 8) as &i64) = 3;
        v33 = v219 + 1;
        v223 = v24;
        v224 = v26;
        v46 = v223;
        v47 = v224;
        v48 = v27;
        memcpy(&v49, &v31, 464);
        v225 = v35;
        v15 = v225;
        v16 = v36;
        v7 = v38;
        v8 = v39;
        v226 = v46;
        v227 = v47;
        v12 = v226;
        v13 = v227;
        v14 = v48;
        memcpy(&v104, &v49, 464);
        v228 = v15;
        v10 = v228;
        v11 = v16;
        v1 = v7;
        v2 = v8;
        v229 = v12;
        v230 = v13;
        v15 = v229;
        v16 = v230;
        v17 = v14;
        memcpy(&v46, &v104, 464);
        v231 = v10;
        v7 = v231;
        v9 = v11;
        v20 = v1;
        v21 = v2;
        memcpy(&v22, &v105, 712);
        if v24 {
            v232 = v19;
            v233 = v5;
            if v232 || v0 != 0x110000 {
                v234 = v25;
                v235 = v18;
                if !v235 {
                    v236 = v234;
                } else {
                    v236 = v23;
                }
                v23 = v236;
                v18 = v235 + (v235 < 1);
                v25 = v234 + 1;
            }
            if !(!v233) {
                continue;
            }
        } else {
            v233 = v5;
            v232 = v19;
            if !(!v233) {
                continue;
            }
        }
        v3 = v44;
        v4 = v43;
        v49 = v18;
        v50 = v23;
        v54 = v17;
        v237 = v15;
        v238 = v16;
        vvar_19{reg 256} = ((((((((((((((((((((((((((((((((((((((((((((((((((vvar_19{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_231{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_253{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_271{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_313{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_332{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_351{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_394{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_413{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_432{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_475{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_494{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_513{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_556{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_575{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_594{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_637{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_656{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_675{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_718{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_737{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_756{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_799{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_816{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_832{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_907{reg 256}))
        v52 = v238;
        v51 = v237;
        v55 = v233 + (v233 < 1);
        v56 = v4;
        v57 = v3;
        memcpy(&v58, &v46, 464);
        v94 = v232;
        v239 = v7;
        vvar_17{reg 224} = ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((vvar_31{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_200{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_229{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_245{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_251{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_263{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_269{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_282{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_311{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_325{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_330{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_343{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_349{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_363{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_392{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_406{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_411{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_424{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_430{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_444{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_473{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_487{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_492{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_505{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_511{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_525{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_554{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_568{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_573{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_586{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_592{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_606{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_635{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_649{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_654{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_667{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_673{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_687{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_716{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_730{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_735{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_748{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_754{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_768{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_797{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_809{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_814{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_825{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_830{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_841{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_905{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_914{reg 224}))
        v95 = v239;
        v97 = v9;
        v98 = v0;
        v101 = v21;
        v99 = v20;
        v240 = v33;
        if v240 == v32 {
            v32 = alloc::raw_vec::RawVec<T,A>::grow_one();
        }
        memmove(v240 * 592 + *((&v32 as &char + 8) as &i64), &v49, 592);
        v33 = v240 + 1;
        memcpy(&v105, &v22, 712);
        v107 = v45 + 40;
    } while (v107 != 352);
    memcpy(a0, &v105, 712);
    return a0;
}
