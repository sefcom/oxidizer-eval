fn uu_tr::uu_app(a0: u32) -> u64 {
    let v0: i64;  // [sp-0xa60]
    let v1: i32;  // [sp-0xa58]
    let v2: i64;  // [bp-0xa50]
    let v3: i128;  // [sp-0xa48]
    let v4: i32;  // [sp-0xa40]
    let v5: i64;  // [sp-0xa38]
    let v6: i128;  // [sp-0xa28]
    let v7: i64;  // [bp-0xa18]
    let v8: i64;  // [sp-0xa08]
    let v9: i64;  // [sp-0x9f8], Other Possible Types: Enum
    let v10: i64;  // [sp-0x9f0]
    let v11: i64;  // [sp-0x9e8]
    let v12: i64;  // [sp-0x9e0]
    let v13: i128;  // [bp-0x9d8]
    let v14: i64;  // [sp-0x9d0]
    let v15: i64;  // [sp-0x9c8]
    let v16: i64;  // [sp-0x9c0]
    let v17: i64;  // [sp-0x9b8]
    let v18: i64;  // [sp-0x9b0]
    let v19: i64;  // [sp-0x9a8]
    let v20: i8;  // [bp-0x998]
    let v21: i64;  // [sp-0x990]
    let v22: i64;  // [sp-0x988]
    let v23: i128;  // [sp-0x980]
    let v24: struct16;  // [sp-0x978]
    let v25: i64;  // [sp-0x970]
    let v26: i128;  // [bp-0x968]
    let v27: i64;  // [sp-0x958]
    let v28: i128;  // [sp-0x950]
    let v29: i64;  // [sp-0x940]
    let v30: i128;  // [sp-0x938]
    let v31: i64;  // [sp-0x928]
    let v32: i128;  // [sp-0x920]
    let v33: i64;  // [sp-0x910]
    let v34: i128;  // [sp-0x908]
    let v35: i64;  // [sp-0x8f8]
    let v36: i128;  // [sp-0x8f0]
    let v37: i64;  // [sp-0x8e0]
    let v38: i128;  // [sp-0x8d8]
    let v39: i64;  // [sp-0x8c8]
    let v40: i128;  // [sp-0x8c0]
    let v41: struct16;  // [sp-0x8b8]
    let v42: i64;  // [sp-0x8b0]
    let v43: i128;  // [bp-0x8a8]
    let v44: i64;  // [sp-0x898]
    let v45: i128;  // [sp-0x890]
    let v46: i64;  // [sp-0x880]
    let v47: i128;  // [sp-0x878]
    let v48: i64;  // [sp-0x868]
    let v49: i128;  // [sp-0x860]
    let v50: i64;  // [sp-0x850]
    let v51: i64;  // [sp-0x848]
    let v52: i64;  // [sp-0x840]
    let v53: i128;  // [sp-0x838]
    let v54: i64;  // [sp-0x828]
    let v55: i128;  // [sp-0x820]
    let v56: i64;  // [sp-0x800]
    let v57: i64;  // [sp-0x7e8]
    let v58: i64;  // [sp-0x7e0]
    let v59: i64;  // [sp-0x7d8]
    let v60: i128;  // [bp-0x7d0]
    let v61: i64;  // [sp-0x7c8]
    let v62: i64;  // [sp-0x7c0]
    let v63: i64;  // [bp-0x7b8]
    let v64: i64;  // [bp-0x7b4]
    let v65: i32;  // [sp-0x7b0]
    let v66: i16;  // [bp-0x7ac]
    let v67: i16;  // [sp-0x7ab]
    let v68: i8;  // [sp-0x7a9]
    let v69: i8;  // [bp-0x778]
    let v70: i8;  // [bp-0x770]
    let v71: i8;  // [bp-0x73c]
    let v72: i8;  // [bp-0x734]
    let v73: i128;  // [sp-0x728]
    let v74: i64;  // [sp-0x720]
    let v75: i64;  // [sp-0x718]
    let v76: i64;  // [sp-0x710]
    let v77: i64;  // [sp-0x708]
    let v78: i64;  // [sp-0x700]
    let v79: i64;  // [sp-0x6f8]
    let v80: i64;  // [sp-0x6f0]
    let v81: i64;  // [sp-0x6e8]
    let v82: i128;  // [bp-0x6e0]
    let v83: i64;  // [sp-0x6d8]
    let v84: i64;  // [sp-0x6d0]
    let v85: i128;  // [bp-0x6c8]
    let v86: i64;  // [sp-0x6c0]
    let v87: i64;  // [sp-0x6b8]
    let v88: i128;  // [sp-0x6b0]
    let v89: struct16;  // [sp-0x6a8]
    let v90: i64;  // [sp-0x6a0]
    let v91: i64;  // [bp-0x698]
    let v92: i64;  // [sp-0x688]
    let v93: i128;  // [sp-0x680]
    let v94: i64;  // [sp-0x670]
    let v95: i128;  // [sp-0x668]
    let v96: i64;  // [sp-0x658]
    let v97: i128;  // [sp-0x650]
    let v98: i64;  // [sp-0x640]
    let v99: i128;  // [sp-0x638]
    let v100: i64;  // [sp-0x628]
    let v101: i128;  // [sp-0x620]
    let v102: i64;  // [sp-0x618]
    let v103: i64;  // [sp-0x610]
    let v104: i128;  // [bp-0x608]
    let v105: i64;  // [sp-0x600]
    let v106: i64;  // [sp-0x5f8]
    let v107: i128;  // [bp-0x5f0]
    let v108: i64;  // [sp-0x5e8]
    let v109: i64;  // [bp-0x5e0]
    let v110: i128;  // [bp-0x5d8]
    let v111: i64;  // [sp-0x5d0]
    let v112: i64;  // [sp-0x5c8]
    let v113: i128;  // [bp-0x5c0]
    let v114: i64;  // [sp-0x5b8]
    let v115: i64;  // [sp-0x5b0]
    let v116: i128;  // [bp-0x5a8]
    let v117: i64;  // [sp-0x5a0]
    let v118: i64;  // [sp-0x598]
    let v119: i128;  // [bp-0x590]
    let v120: i64;  // [sp-0x588]
    let v121: i64;  // [sp-0x580]
    let v122: i64;  // [sp-0x578]
    let v123: i64;  // [sp-0x570]
    let v124: i128;  // [sp-0x568]
    let v125: i64;  // [sp-0x558]
    let v126: i64;  // [sp-0x540]
    let v127: i64;  // [sp-0x530]
    let v128: i64;  // [sp-0x528]
    let v129: i64;  // [sp-0x518]
    let v130: i64;  // [sp-0x510]
    let v131: i64;  // [sp-0x508]
    let v132: i64;  // [sp-0x500]
    let v133: i64;  // [bp-0x4f8]
    let v134: i64;  // [sp-0x4f0]
    let v135: i64;  // [bp-0x4e8]
    let v136: i64;  // [bp-0x4e4]
    let v137: i32;  // [sp-0x4e0]
    let v138: i32;  // [bp-0x4dc]
    let v139: i16;  // [bp-0x4db]
    let v140: i8;  // [bp-0x4d9]
    let v141: i64;  // [sp-0x4d8]
    let v142: i64;  // [sp-0x4c8]
    let v143: i64;  // [sp-0x4c0]
    let v144: i64;  // [sp-0x4b8]
    let v145: i64;  // [sp-0x4a8]
    let v146: i8;  // [bp-0x4a0]
    let v147: i64;  // [sp-0x498]
    let v148: i64;  // [sp-0x488]
    let v149: i64;  // [sp-0x478]
    let v150: i32;  // [sp-0x470]
    let v151: i64;  // [sp-0x46c]
    let v152: i32;  // [bp-0x464]
    let v153: i128;  // [bp-0x458], Other Possible Types: Enum, struct24
    let v154: i64;  // [sp-0x450]
    let v155: i64;  // [sp-0x448]
    let v156: i8;  // [bp-0x438]
    let v157: i8;  // [bp-0x428]
    let v158: i8;  // [bp-0x420]
    let v159: i8;  // [bp-0x418]
    let v160: i8;  // [bp-0x410]
    let v161: i8;  // [bp-0x408]
    let v162: i128;  // [bp-0x3d8], Other Possible Types: struct16
    let v163: i64;  // [sp-0x3c8]
    let v164: i64;  // [sp-0x2a0]
    let v165: i128;  // [sp-0x298]
    let v166: i64;  // [sp-0x238]
    let v167: i64;  // [sp-0x230]
    let v168: i128;  // [sp-0x228]
    let v169: i32;  // [sp-0x218]
    let v170: i64;  // [sp-0x214]
    let v171: i32;  // [bp-0x20c]
    let v172: i16;  // [sp-0x20b]
    let v173: i8;  // [sp-0x209]
    let v174: i128;  // [sp-0x208]
    let v175: i128;  // [sp-0x1f8]
    let v176: i64;  // [sp-0x1e8]
    let v178: i128;  // xmm0
    let v179: i64;  // rcx
    let v180: i64;  // rdx
    let v181: i64;  // rbx
    let v182: i64;  // rax
    let v183: i64;  // rax
    let v184: i64;  // rcx
    let v185: i64;  // rbx
    let v186: i64;  // rbx
    let v187: i64;  // rax
    let v188: i64;  // rcx
    let v189: i64;  // r14
    let v190: i64;  // r15
    let v191: i64;  // rbp
    let v192: i64;  // rdx
    let v193: i32;  // r13d
    let v194: i64;  // r14
    let v196: i64;  // rcx
    let v198: i64;  // rbx
    let v199: i64;  // rbx
    let v200: i64;  // rax
    let v201: i64;  // rcx
    let v202: i64;  // r14
    let v203: i64;  // rax
    let v204: i64;  // rcx
    let v205: i64;  // r14
    let v206: i64;  // r13
    let v207: i64;  // r15
    let v208: i64;  // rbp
    let v209: i64;  // rbx
    let v210: i64;  // rdx
    let v211: i32;  // r12d
    let v212: i64;  // r14
    let v214: i64;  // rcx
    let v216: i128;  // xmm1
    let v217: i64;  // rbx
    let v218: i64;  // r15
    let v219: i64;  // r14
    let v220: i64;  // rax
    let v221: i64;  // rcx
    let v222: i64;  // r14
    let v223: i64;  // r13
    let v224: i64;  // r15
    let v225: i64;  // rbp
    let v226: i64;  // rbx
    let v227: i64;  // rdx
    let v228: i32;  // r12d
    let v229: i64;  // r14
    let v231: i64;  // rcx
    let v233: i64;  // rbp
    let v234: i128;  // xmm1
    let v235: i64;  // rbx
    let v236: i64;  // rax
    let v237: i64;  // rcx
    let v238: i64;  // r14
    let v239: i64;  // rax
    let v240: i64;  // rcx
    let v241: i64;  // r14
    let v242: i64;  // r15
    let v243: i64;  // rbp
    let v244: i64;  // r13
    let v245: i64;  // rbx
    let v246: i64;  // rdx
    let v247: i32;  // r12d
    let v248: i64;  // r14
    let v250: i64;  // rcx
    let v252: i128;  // xmm1
    let v253: i64;  // rbx
    let v254: i64;  // rax
    let v255: i64;  // rax
    let v256: i64;  // r13
    let v257: i64;  // r14
    let v258: i64;  // rbp
    let v259: i64;  // rdx
    let v260: i32;  // esi
    let v261: i64;  // r13
    let v263: i64;  // rcx
    let v265: i64;  // rbx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v178 = g_4f31b8;
    v82 = 0;
    v85 = 0;
    v91 = 0;
    v93 = 0;
    v95 = 0;
    v99 = 0;
    v73 = 0;
    v75 = &g_1;
    v76 = 0;
    v77 = &g_1;
    v80 = 0;
    v81 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v88 = 0;
    v90 = &g_1;
    v92 = &g_1;
    v94 = &g_1;
    v96 = &g_1;
    v97 = 0;
    v98 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v105 = 0x8000000000000000;
    v108 = 0x8000000000000000;
    v111 = 0x8000000000000000;
    v114 = 0x8000000000000000;
    v117 = 0x8000000000000000;
    v120 = 0x8000000000000000;
    v123 = 0x8000000000000000;
    v125 = 0x8000000000000000;
    v126 = 0x8000000000000000;
    v128 = 0x8000000000000000;
    v130 = 0x8000000000000000;
    v133 = v178;
    v135 = 0;
    v141 = 0;
    v142 = &g_41a4f4;
    v143 = &g_1;
    v144 = 0;
    v145 = 0;
    v147 = 0;
    v148 = 0;
    v149 = 0;
    v150 = 0x110000;
    v152 = 0;
    v151 = 0;
    v9 = 0;
    v10 = &g_1;
    v11 = 0;
    v9 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_f);
    v179 = v10;
    v180 = v11;
    *((v179 + v180 + &g_1 as &u8) as &i128) = 153455199101731938130417162583084985445;
    *((v179 + v180) as &i128) = 144083076339160132360439208528561926740;
    v11 = v180 + &g_f as &u8;
    v153 = *((&v9 as &char + 8) as &i128);
    if v108 != 0x8000000000000000 {
        v9 = v153;
    }
    v108 = v9;
    v109 = v9;
    memcpy(&v9, &v73, 712);
    v153 = uucore::format_usage(&g_41a518, &g_f);
    v181 = v153;
    if v181 != 0x8000000000000000 {
        v73 = *((&v153 as &char + 8) as &i128);
    }
    v54 = v181;
    v55 = v73;
    memcpy(&v73, &v9, 700);
    v151 = 549755814048 | v71;
    v152 = v72;
    v9 = 0;
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v19 = &g_1;
    v21 = 0;
    v22 = &g_1;
    v23 = 0;
    v25 = &g_1;
    v26 = 0;
    v27 = &g_1;
    v28 = 0;
    v29 = &g_1;
    v30 = 0;
    v31 = &g_1;
    v32 = 0;
    v33 = &g_1;
    v34 = 0;
    v35 = &g_1;
    v36 = 0;
    v37 = &g_1;
    v38 = 0;
    v39 = &g_1;
    v40 = 0;
    v42 = &g_1;
    v43 = 0;
    v44 = &g_1;
    v45 = 0;
    v46 = &g_1;
    v47 = 0;
    v48 = &g_1;
    v49 = 0;
    v50 = &g_1;
    v51 = 0;
    v52 = 0x8000000000000000;
    v54 = 0x8000000000000000;
    v2 = 9223372036854775809;
    v56 = 9223372036854775809;
    v57 = &g_41a532;
    v58 = &g_1;
    v59 = 0;
    v61 = 0;
    v63 = 0x11000000110000;
    v65 = 0;
    v66 = 3337;
    v41 = alloc::raw_vec::RawVec<T,A>::grow_one();
    v182 = v42;
    *(v182 as &i32) = 67;
    *((v182 + &g_1 as &u8) as &&i64) = &g_1;
    v43 = &g_1;
    memcpy(&v153, &v9, 544);
    v168 = v61;
    v170 = *((&v63 as &char + 4) as &i64);
    v171 = v66;
    v166 = &g_41a532;
    v167 = &g_1;
    v169 = 99;
    v9 = 0;
    v10 = &g_1;
    v11 = 0;
    v9 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_f);
    v183 = v10;
    v184 = v11;
    *((v183 + v184 + &g_1 as &u8) as &i128) = 65569730801805299471531278210580639853;
    *((v183 + v184) as &i128) = 134820045046662939759625906898239583093;
    v11 = v184 + &g_f as &u8;
    v185 = v9;
    v174 = *((&v9 as &char + 8) as &i128);
    if v185 != 0x8000000000000000 {
        v9 = v174;
    }
    v164 = v185;
    v165 = v9;
    memcpy(&v9, &v153, 588);
    v67 = v172;
    v68 = v173;
    v66 = &g_1;
    v186 = v26;
    if v186 == *((&v23 as &char + 8) as &i64) {
        v24 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v187 = v25;
    v188 = v186 * &g_f;
    *((v187 + v188) as &&i64) = &g_41a532;
    *((v187 + v188 + &g_1 as &u8) as &&i64) = &g_1;
    v26 = v186 + &g_1 as &u8;
    v189 = v9;
    v190 = v10;
    v174 = v11;
    v175 = v13;
    v176 = v15;
    v191 = v16;
    memcpy(&v153, &v19, 464);
    v192 = v59;
    v6 = v60;
    v7 = v62;
    v193 = v63;
    v3 = *((&v63 as &char + 4) as &i64);
    v4 = v66;
    if !(!v75 || !v192 && v193 == 0x110000) {
        v196 = v76;
        v76 = v196 + &g_1 as &u8;
    }
    v17 = v17;
    if !v191 {
        v198 = v146;
        v17 = v145;
    }
    v9 = v194;
    v10 = v190;
    v11 = v174;
    v13 = v175;
    v15 = v176;
    v16 = v191 + (v191 < &g_1);
    v17 = v17;
    v18 = v198;
    memcpy(&v19, &v153, 464);
    v59 = v192;
    v60 = v6;
    v62 = v7;
    v63 = v193;
    v64 = v3;
    v66 = v4;
    v199 = v91;
    if v199 == *((&v88 as &char + 8) as &i64) {
        v89 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v199 * 592 + v90, &v9, 592);
    v91 = v199 + &g_1 as &u8;
    memcpy(&v9, &v73, 712);
    v88 = 0;
    v91 = 0;
    v93 = 0;
    v95 = 0;
    v97 = 0;
    v99 = 0;
    v101 = 0;
    v104 = 0;
    v107 = 0;
    v110 = 0;
    v113 = 0;
    v116 = 0;
    v119 = 0;
    v73 = 0;
    v75 = 0;
    v78 = 0;
    v80 = 0;
    v83 = &g_1;
    v86 = 0;
    v87 = &g_1;
    v90 = &g_1;
    v92 = &g_1;
    v94 = &g_1;
    v96 = &g_1;
    v98 = &g_1;
    v100 = &g_1;
    v103 = &g_1;
    v106 = &g_1;
    v109 = &g_1;
    v112 = &g_1;
    v115 = &g_1;
    v118 = &g_1;
    v121 = &g_1;
    v122 = 0;
    v123 = 0x8000000000000000;
    v125 = 0x8000000000000000;
    v127 = v2;
    v129 = &g_41a556;
    v130 = &g_1;
    v131 = &g_41a556;
    v132 = &g_1;
    v133 = 0;
    v135 = 4785074604081252;
    v137 = 0;
    v138 = 3337;
    v153 = 0;
    v154 = &g_1;
    v155 = 0;
    v153 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 43);
    v200 = v154;
    v201 = v155;
    *((v200 + v201 + &g_f as &u8) as &i128) = 134856309995963867071231404649260019556;
    *((v200 + v201 + &g_f as &u8) as &i128) = 148116118048985244170706209436313657459;
    *((v200 + v201) as &i128) = 152058774135452863098713766616411956580;
    v155 = v201 + 43;
    v174 = *((&v153 as &char + 8) as &i128);
    v153 = v153;
    if v123 != 0x8000000000000000 {
        v153 = v174;
        v153 = v153;
    }
    v153 = v153;
    v123 = v153;
    v124 = v153;
    memcpy(&v153, &v73, 588);
    v172 = v139;
    v173 = v140;
    v171 = &g_1;
    v202 = v163;
    if v202 == v162 {
        v162 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v203 = *((&v162 as &char + 8) as &i64);
    v204 = v202 * &g_f;
    *((v203 + v204) as &&i64) = &g_41a556;
    *((v203 + v204 + &g_1 as &u8) as &&i64) = &g_1;
    v163 = v202 + &g_1 as &u8;
    v205 = v153;
    v206 = v154;
    v6 = v155;
    v7 = v156;
    v8 = v157;
    v207 = v158;
    v208 = v159;
    v209 = v160;
    memcpy(&v174, &v161, 464);
    v210 = v166;
    v3 = v167;
    v5 = *((&v168 as &char + 8) as &i64);
    v211 = v169;
    v0 = v170;
    v1 = v171;
    if !(!v11 || !v210 && v211 == 0x110000) {
        v214 = v12;
        v12 = v214 + &g_1 as &u8;
    }
    if !v207 {
        v208 = v69;
        v209 = v70;
    }
    v73 = v212;
    v74 = v206;
    v216 = v7;
    v75 = v6;
    v77 = v216;
    v79 = v8;
    v80 = v207 + (v207 < &g_1);
    v81 = v208;
    v82 = v209;
    memcpy(&v83, &v174, 464);
    v131 = v210;
    v132 = v3;
    v134 = v5;
    v135 = v211;
    v136 = v0;
    v138 = v1;
    v217 = v26;
    if v217 == *((&v23 as &char + 8) as &i64) {
        v24 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v217 * 592 + v25, &v73, 592);
    v26 = v217 + &g_1 as &u8;
    memcpy(&v73, &v9, 712);
    v23 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v40 = 0;
    v43 = 0;
    v45 = 0;
    v47 = 0;
    v49 = 0;
    v9 = 0;
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v19 = &g_1;
    v21 = 0;
    v22 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v39 = &g_1;
    v42 = &g_1;
    v44 = &g_1;
    v46 = &g_1;
    v48 = &g_1;
    v50 = &g_1;
    v51 = 0;
    v52 = 0x8000000000000000;
    v54 = 0x8000000000000000;
    v56 = v2;
    v57 = &g_41a587;
    v58 = &g_f;
    v59 = &g_41a587;
    v60 = &g_f;
    v61 = 0;
    v63 = 4785074604081267;
    v65 = 0;
    v66 = 3337;
    v153 = 0;
    v154 = &g_1;
    v155 = 0;
    v153 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 130);
    v218 = v155;
    memcpy(v154 + v218, &g_41a596, 130);
    v155 = v218 + 130;
    v174 = *((&v153 as &char + 8) as &i128);
    v153 = v153;
    if v52 != 0x8000000000000000 {
        v153 = v174;
        v153 = v153;
    }
    v153 = v153;
    v52 = v153;
    v53 = v153;
    memcpy(&v153, &v9, 588);
    v172 = v67;
    v173 = v68;
    v171 = &g_1;
    v219 = v163;
    if v219 == v162 {
        v162 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v220 = *((&v162 as &char + 8) as &i64);
    v221 = v219 * &g_f;
    *((v220 + v221) as &&i64) = &g_41a587;
    *((v220 + v221 + &g_1 as &u8) as &&i64) = &g_f;
    v163 = v219 + &g_1 as &u8;
    v222 = v153;
    v223 = v154;
    v6 = v155;
    v7 = v156;
    v8 = v157;
    v224 = v158;
    v225 = v159;
    v226 = v160;
    memcpy(&v174, &v161, 464);
    v227 = v166;
    v3 = v167;
    v5 = *((&v168 as &char + 8) as &i64);
    v228 = v169;
    v0 = v170;
    v1 = v171;
    if !(!v75 || !v227 && v228 == 0x110000) {
        v231 = v76;
        v76 = v231 + &g_1 as &u8;
    }
    if !v224 {
        v226 = v146;
        v233 = v145;
    }
    v9 = v229;
    v10 = v223;
    v234 = v7;
    v11 = v6;
    v13 = v234;
    v15 = v8;
    v16 = v224 + (v224 < &g_1);
    v17 = v233;
    v18 = v226;
    memcpy(&v19, &v174, 464);
    v59 = v227;
    v60 = v3;
    v62 = v5;
    v63 = v228;
    v64 = v0;
    v66 = v1;
    v235 = v91;
    if v235 == *((&v88 as &char + 8) as &i64) {
        v89 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v235 * 592 + v90, &v9, 592);
    v91 = v235 + &g_1 as &u8;
    memcpy(&v9, &v73, 712);
    v88 = 0;
    v91 = 0;
    v93 = 0;
    v95 = 0;
    v97 = 0;
    v99 = 0;
    v101 = 0;
    v104 = 0;
    v107 = 0;
    v110 = 0;
    v113 = 0;
    v116 = 0;
    v119 = 0;
    v73 = 0;
    v75 = 0;
    v78 = 0;
    v80 = 0;
    v83 = &g_1;
    v86 = 0;
    v87 = &g_1;
    v90 = &g_1;
    v92 = &g_1;
    v94 = &g_1;
    v96 = &g_1;
    v98 = &g_1;
    v100 = &g_1;
    v103 = &g_1;
    v106 = &g_1;
    v109 = &g_1;
    v112 = &g_1;
    v115 = &g_1;
    v118 = &g_1;
    v121 = &g_1;
    v122 = 0;
    v123 = 0x8000000000000000;
    v125 = 0x8000000000000000;
    v127 = v2;
    v129 = &g_41a618;
    v130 = &g_1;
    v131 = &g_41a618;
    v132 = &g_1;
    v133 = 0;
    v135 = 4785074604081268;
    v137 = 0;
    v138 = 3337;
    v153 = 0;
    v154 = &g_1;
    v155 = 0;
    v153 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 37);
    v236 = v154;
    v237 = v155;
    *((v236 + v237 + &g_f as &u8) as &i128) = 136158257834220305069821833064356074565;
    *((v236 + v237) as &i128) = 110494134893598203644146686151019882854;
    *((v236 + v237 + &g_f as &u8) as &i64) = 3626599823268278048;
    v155 = v237 + 37;
    v174 = *((&v153 as &char + 8) as &i128);
    v153 = v153;
    if v123 != 0x8000000000000000 {
        v153 = v174;
        v153 = v153;
    }
    v153 = v153;
    v123 = v153;
    v124 = v153;
    memcpy(&v153, &v73, 588);
    v172 = *((&v138 as &char + 1) as &i16);
    v173 = *((&v138 as &char + 3) as &i8);
    v171 = &g_1;
    v238 = v163;
    if v238 == v162 {
        v162 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v239 = *((&v162 as &char + 8) as &i64);
    v240 = v238 * &g_f;
    *((v239 + v240) as &&i64) = &g_41a618;
    *((v239 + v240 + &g_1 as &u8) as &&i64) = &g_1;
    v163 = v238 + &g_1 as &u8;
    v241 = v153;
    v242 = v154;
    v6 = v155;
    v7 = v156;
    v8 = v157;
    v243 = v158;
    v244 = v159;
    v245 = v160;
    memcpy(&v174, &v161, 464);
    v246 = v166;
    v3 = v167;
    v5 = *((&v168 as &char + 8) as &i64);
    v247 = v169;
    v0 = v170;
    v1 = v171;
    if !(!v11 || !v246 && v247 == 0x110000) {
        v250 = v12;
        v12 = v250 + &g_1 as &u8;
    }
    if !v243 {
        v244 = v69;
        v245 = v70;
    }
    v73 = v248;
    v74 = v242;
    v252 = v7;
    v75 = v6;
    v77 = v252;
    v79 = v8;
    v80 = v243 + (v243 < &g_1);
    v81 = v244;
    v82 = v245;
    memcpy(&v83, &v174, 464);
    v131 = v246;
    v132 = v3;
    v134 = v5;
    v135 = v247;
    v136 = v0;
    v138 = v1;
    v253 = v26;
    if v253 == *((&v23 as &char + 8) as &i64) {
        v24 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v253 * 592 + v25, &v73, 592);
    v26 = v253 + &g_1 as &u8;
    memcpy(&v73, &v9, 712);
    v23 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v40 = 0;
    v43 = 0;
    v45 = 0;
    v47 = 0;
    v49 = 0;
    v9 = 0;
    v11 = &g_1;
    v12 = &g_1;
    v13 = -1;
    v14 = 0;
    v16 = 0;
    v19 = &g_1;
    v21 = 0;
    v22 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v39 = &g_1;
    v42 = &g_1;
    v44 = &g_1;
    v46 = &g_1;
    v48 = &g_1;
    v50 = &g_1;
    v51 = 0;
    v52 = 0x8000000000000000;
    v54 = 0x8000000000000000;
    v56 = v2;
    v57 = &g_4114e4;
    v58 = &g_1;
    v59 = 0;
    v61 = 0;
    v63 = 0x11000000110000;
    v65 = 0;
    v66 = 3337;
    v254 = v19;
    if v254 != 5 && v254 >= 4 && *(v20 as &i64) {
        v255();
    }
    v19 = &g_1;
    v256 = v9;
    v257 = v10;
    v174 = v11;
    v175 = v13;
    v176 = v15;
    v258 = v16;
    memcpy(&v153, &v19, 464);
    v259 = v59;
    v6 = v60;
    v7 = v62;
    v260 = v63;
    v3 = *((&v63 as &char + 4) as &i64);
    v4 = v66;
    v2 = v260;
    if vvar_1545 && (v259 || v260 != 0x110000) {
        v263 = v76;
        v76 = v263 + &g_1 as &u8;
    }
    v17 = v17;
    if !v258 {
        v18 = v146;
        v17 = v145;
    }
    v9 = v261;
    v10 = v257;
    v11 = v174;
    v13 = v175;
    v15 = v176;
    v16 = v258 + (v258 < &g_1);
    v17 = v17;
    v18 = v18;
    memcpy(&v19, &v153, 464);
    v59 = v259;
    v60 = v6;
    v62 = v7;
    v63 = v2;
    v64 = v3;
    v66 = v4;
    v265 = v91;
    if v265 == *((&v88 as &char + 8) as &i64) {
        v89 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v265 * 592 + v90, &v9, 592);
    v91 = v265 + &g_1 as &u8;
    memcpy(a0, &v73, 712);
    return a0;
}
