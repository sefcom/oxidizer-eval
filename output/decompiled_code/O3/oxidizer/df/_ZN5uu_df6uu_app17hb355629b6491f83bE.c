fn uu_df::uu_app(a0: u32) -> u64 {
    let v0: i192;  // [sp-0xb08], Other Possible Types: struct712, Enum, struct592, struct24
    let v1: i64;  // [sp-0xb00]
    let v2: i64;  // [sp-0xaf8]
    let v3: i128;  // [sp-0xaf0]
    let v4: i64;  // [sp-0xae0]
    let v5: i64;  // [sp-0xad0]
    let v6: i128;  // [sp-0xac8]
    let v7: i64;  // [sp-0xab8]
    let v8: i128;  // [sp-0xab0]
    let v9: i64;  // [sp-0xaa0], Other Possible Types: struct16
    let v10: i64;  // [sp-0xa98]
    let v11: i128;  // [bp-0xa90]
    let v12: struct16;  // [sp-0xa88]
    let v13: i64;  // [sp-0xa80]
    let v14: i64;  // [bp-0xa78]
    let v15: i64;  // [sp-0xa68]
    let v16: i128;  // [sp-0xa60]
    let v17: i64;  // [sp-0xa50]
    let v18: i128;  // [sp-0xa48]
    let v19: i64;  // [sp-0xa38]
    let v20: i128;  // [sp-0xa30]
    let v21: i64;  // [sp-0xa20]
    let v22: i128;  // [sp-0xa18]
    let v23: i64;  // [sp-0xa08]
    let v24: i128;  // [sp-0xa00]
    let v25: i64;  // [sp-0x9f0]
    let v26: i128;  // [sp-0x9e8]
    let v27: i64;  // [sp-0x9d8]
    let v28: i128;  // [sp-0x9d0]
    let v29: i64;  // [sp-0x9c0]
    let v30: i128;  // [bp-0x9b8]
    let v31: i128;  // [bp-0x9b0]
    let v32: i64;  // [sp-0x9a8]
    let v33: i128;  // [bp-0x9a0]
    let v34: i64;  // [sp-0x990]
    let v35: i128;  // [sp-0x988]
    let v36: i64;  // [sp-0x978]
    let v37: i128;  // [bp-0x970]
    let v38: i128;  // [bp-0x968]
    let v39: i64;  // [sp-0x960]
    let v40: i64;  // [sp-0x958]
    let v41: i64;  // [sp-0x950]
    let v42: i128;  // [sp-0x948]
    let v43: i64;  // [sp-0x938]
    let v44: i128;  // [sp-0x930]
    let v45: i128;  // [sp-0x920]
    let v46: i64;  // [sp-0x910]
    let v47: i128;  // [sp-0x908]
    let v48: i64;  // [sp-0x8f8]
    let v49: i64;  // [sp-0x8f0]
    let v50: i64;  // [sp-0x8e8]
    let v51: i64;  // [sp-0x8e0]
    let v52: i64;  // [sp-0x8d8]
    let v53: i64;  // [sp-0x8c8]
    let v54: i32;  // [sp-0x8c0]
    let v55: i16;  // [sp-0x8bc]
    let v56: i64;  // [sp-0x8a8]
    let v57: i64;  // [sp-0x8a0]
    let v58: i5696;  // [bp-0x838], Other Possible Types: struct712, Enum
    let v59: i64;  // [sp-0x830]
    let v60: i64;  // [sp-0x828]
    let v61: i64;  // [sp-0x810]
    let v62: i64;  // [sp-0x800]
    let v63: i64;  // [sp-0x7e8]
    let v64: i64;  // [sp-0x7d0]
    let v65: i64;  // [sp-0x7c8]
    let v66: i128;  // [sp-0x7c0]
    let v67: struct16;  // [sp-0x7b8]
    let v68: i64;  // [sp-0x7b0]
    let v69: i64;  // [bp-0x7a8]
    let v70: i64;  // [sp-0x798]
    let v71: i128;  // [sp-0x790]
    let v72: i64;  // [sp-0x780]
    let v73: i128;  // [sp-0x778]
    let v74: i64;  // [sp-0x768]
    let v75: i128;  // [sp-0x760]
    let v76: i64;  // [sp-0x750]
    let v77: i128;  // [sp-0x748]
    let v78: i64;  // [sp-0x738]
    let v79: i128;  // [sp-0x730]
    let v80: i64;  // [sp-0x720]
    let v81: i128;  // [sp-0x718]
    let v82: i64;  // [sp-0x708]
    let v83: i128;  // [sp-0x700]
    let v84: i64;  // [sp-0x6f0]
    let v85: i128;  // [bp-0x6e8]
    let v86: i128;  // [bp-0x6e0]
    let v87: i64;  // [sp-0x6d8]
    let v88: i128;  // [bp-0x6d0]
    let v89: i64;  // [sp-0x6c0]
    let v90: i128;  // [sp-0x6b8]
    let v91: i64;  // [sp-0x6a8]
    let v92: i128;  // [sp-0x6a0]
    let v93: i64;  // [sp-0x690]
    let v94: i64;  // [sp-0x688]
    let v95: i64;  // [sp-0x680]
    let v96: i64;  // [sp-0x668]
    let v97: i64;  // [sp-0x640]
    let v98: i64;  // [sp-0x628]
    let v99: i64;  // [sp-0x620]
    let v100: i64;  // [sp-0x618]
    let v101: i64;  // [sp-0x610]
    let v102: i64;  // [sp-0x608]
    let v103: i64;  // [sp-0x5f8]
    let v104: i32;  // [sp-0x5f0]
    let v105: i16;  // [bp-0x5ec]
    let v106: i8;  // [sp-0x5eb]
    let v107: i64;  // [sp-0x57c]
    let v108: i32;  // [sp-0x574]
    let v109: i192;  // [sp-0x568], Other Possible Types: struct24, Enum, struct592
    let v110: i64;  // [sp-0x560]
    let v111: i64;  // [sp-0x558]
    let v112: i64;  // [sp-0x550]
    let v113: i64;  // [sp-0x548]
    let v114: i128;  // [sp-0x540]
    let v115: i64;  // [sp-0x530]
    let v116: i128;  // [sp-0x528]
    let v117: i64;  // [sp-0x518]
    let v118: i128;  // [sp-0x510]
    let v119: i64;  // [sp-0x500]
    let v120: i64;  // [sp-0x4f8]
    let v121: i128;  // [sp-0x4f0]
    let v122: i8;  // [bp-0x4e8], Other Possible Types: struct16
    let v123: i64;  // [sp-0x4e0]
    let v124: i64;  // [bp-0x4d8]
    let v125: i64;  // [sp-0x4c8]
    let v126: i128;  // [sp-0x4c0]
    let v127: i64;  // [sp-0x4b0]
    let v128: i128;  // [sp-0x4a8]
    let v129: i64;  // [sp-0x498]
    let v130: i128;  // [sp-0x490]
    let v131: i64;  // [sp-0x480]
    let v132: i128;  // [sp-0x478]
    let v133: i64;  // [sp-0x468]
    let v134: i128;  // [sp-0x460]
    let v135: i64;  // [sp-0x450]
    let v136: i128;  // [sp-0x448]
    let v137: i64;  // [sp-0x438]
    let v138: i128;  // [sp-0x430]
    let v139: i64;  // [sp-0x420]
    let v140: i128;  // [sp-0x418]
    let v141: i128;  // [sp-0x408]
    let v142: i64;  // [sp-0x3f8]
    let v143: i64;  // [sp-0x3f0]
    let v144: i128;  // [bp-0x3e8]
    let v145: i64;  // [sp-0x3d8]
    let v146: i128;  // [sp-0x3d0]
    let v147: i64;  // [sp-0x3c0]
    let v148: i64;  // [sp-0x3b8]
    let v149: i64;  // [sp-0x3b0]
    let v150: i128;  // [sp-0x3a8]
    let v151: i64;  // [sp-0x398]
    let v152: i128;  // [sp-0x390]
    let v153: i128;  // [sp-0x380]
    let v154: i64;  // [sp-0x370]
    let v155: i128;  // [sp-0x368]
    let v156: i64;  // [sp-0x358]
    let v157: i64;  // [sp-0x350]
    let v158: i64;  // [sp-0x348]
    let v159: i64;  // [sp-0x340]
    let v160: i64;  // [sp-0x338]
    let v161: i64;  // [sp-0x330]
    let v162: i128;  // [bp-0x328]
    let v163: i8;  // [sp-0x31c]
    let v164: i16;  // [sp-0x31b]
    let v165: i8;  // [sp-0x319]
    let v166: struct32;  // [bp-0x310], Other Possible Types: i8
    let v167: i8;  // [bp-0x300]
    let v168: i128;  // [bp-0x2e8], Other Possible Types: struct32, struct24, struct112
    let v169: i64;  // [sp-0x2e0]
    let v170: i64;  // [sp-0x2d8]
    let v171: i64;  // [sp-0x228]
    let v172: i64;  // [sp-0x220]
    let v173: i64;  // [sp-0x130]
    let v174: i128;  // [sp-0x128]
    let v175: i32;  // [sp-0xa4]
    let v176: i64;  // [bp-0xa0]
    let v177: i8;  // [sp-0x9c]
    let v178: i16;  // [sp-0x9b]
    let v179: i8;  // [sp-0x99]
    let v180: i64;  // [sp-0x98]
    let v181: i8;  // [bp-0x90]
    let v182: i8;  // [bp-0x88]
    let v183: i8;  // [bp-0x80]
    let v184: i8;  // [bp-0x70]
    let v185: i8;  // [bp-0x60]
    let v186: i8;  // [bp-0x50]
    let v187: i8;  // [bp-0x40]
    let v189: i64;  // rbx
    let v190: i64;  // rax
    let v191: i64;  // rcx
    let v192: i64;  // r14
    let v193: i64;  // rax
    let v194: i64;  // rcx
    let v195: i64;  // rax
    let v196: i64;  // rcx
    let v197: i64;  // rbx
    let v198: i64;  // rsi
    let v199: i64;  // rax
    let v200: i64;  // rcx
    let v201: i64;  // rax
    let v202: i64;  // rcx
    let v203: i64;  // r14
    let v204: i64;  // r15
    let v205: i64;  // rax
    let v206: i64;  // rcx
    let v207: i64;  // rax
    let v208: i64;  // rcx
    let v209: i64;  // r14
    let v210: i64;  // rsi
    let v211: i64;  // rax
    let v212: i64;  // rcx
    let v213: i64;  // rax
    let v214: i64;  // rcx
    let v215: i64;  // r14
    let v216: i64;  // rsi
    let v217: i64;  // rax
    let v218: i64;  // rcx
    let v219: i64;  // rax
    let v220: i64;  // rcx
    let v221: i64;  // r14
    let v222: i64;  // r14
    let v223: i64;  // rax
    let v224: i64;  // rcx
    let v225: i64;  // rax
    let v226: i64;  // rcx
    let v227: i64;  // r14
    let v228: i64;  // rcx
    let v229: i64;  // rdx
    let v230: i64;  // rsi
    let v231: i64;  // rax
    let v232: i64;  // rcx
    let v233: i64;  // r14
    let v234: i64;  // rax
    let v235: i64;  // rcx
    let v236: i64;  // rax
    let v237: i64;  // rcx
    let v238: i64;  // rbx
    let v239: i64;  // rsi
    let v240: i64;  // rax
    let v241: i64;  // rcx
    let v242: i64;  // rax
    let v243: i64;  // rcx
    let v244: i64;  // rbx
    let v245: i128;  // xmm0
    let v246: i64;  // rsi
    let v247: i128;  // xmm2
    let v248: i64;  // rsi
    let v249: i64;  // rax
    let v250: i64;  // rcx
    let v251: i64;  // rax
    let v252: i64;  // rcx
    let v253: i64;  // r14
    let v254: i64;  // r14
    let v255: i64;  // rax
    let v256: i64;  // rcx
    let v257: i64;  // rax
    let v258: i64;  // rcx
    let v259: i64;  // rbx
    let v260: i64;  // rsi
    let v261: i64;  // rax
    let v262: i64;  // rcx
    let v263: i64;  // rax
    let v264: i64;  // rcx
    let v265: i64;  // rbx
    let v266: i64;  // rax
    let v267: i64;  // rcx
    let v268: i64;  // r14
    let v269: i64;  // r14
    let v270: i64;  // rax
    let v271: i64;  // rcx
    let v272: i64;  // rax
    let v273: i64;  // rcx
    let v274: i64;  // r14
    let v275: i32;  // eax
    let v277: i64;  // rax
    let v278: i64;  // rcx
    let v279: i64;  // rbx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v0 = clap_builder::builder::command::Command::new(g_5050a8, g_5050b0);
    v56 = &g_4140c0;
    v57 = &g_1;
    memcpy(&v58, &v0, 712);
    v0 = clap_builder::builder::command::Command::about(&v58, &g_4140c6, 98);
    v109 = uucore::format_usage(&g_414128, &g_11);
    v189 = v109;
    if v189 != 0x8000000000000000 {
        v58 = *((&v109 as &char + 8) as &i128);
    }
    v43 = v189;
    v44 = v58;
    memcpy(&v58, &v0, 712);
    v0 = clap_builder::builder::command::Command::after_help(&v58, &g_414140, 372);
    memcpy(&v58, &v0, 700);
    v107 = 1126449662918784 | *((&v0 as &char + 700) as &i64);
    v108 = *((&v0 as &char + 708) as &i32);
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = 9223372036854775809;
    v48 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v49 = &g_1;
    v50 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v51 = &g_1;
    v52 = 0;
    v53 = 0x11000000110000;
    v54 = 0;
    v55 = 3337;
    v109 = 0;
    v110 = &g_1;
    v111 = 0;
    v109 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v190 = v110;
    v191 = v111;
    *((v190 + v191) as &i128) = 152110414024190366979331735664405869136;
    *((v190 + v191 + &g_1 as &u8) as &i64) = 3345734071897648498;
    v111 = v191 + &g_11 as &u8;
    v168 = *((&v109 as &char + 8) as &i128);
    if v41 != 0x8000000000000000 {
        v109 = v168;
    }
    v41 = v109;
    v42 = v109;
    memcpy(&v109, &v0, 588);
    v164 = *((&v0 as &char + 589) as &i16);
    v165 = *((&v0 as &char + 591) as &i8);
    v163 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v58, &v109);
    v66 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v58 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = &g_1;
    v64 = 0;
    v65 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = 0x8000000000000000;
    v96 = 0x8000000000000000;
    v97 = 9223372036854775809;
    v98 = &g_413f40;
    v99 = &g_1;
    v100 = &g_413f40;
    v101 = &g_1;
    v102 = 0;
    v103 = 4785074604081249;
    v104 = 0;
    v105 = 3337;
    v192 = v69;
    if v192 == *((&v66 as &char + 8) as &i64) {
        v67 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v193 = v68;
    v194 = v192 * &g_1;
    *((v193 + v194) as &&i64) = &g_413f40;
    *((v193 + v194 + &g_1 as &u8) as &&i64) = &g_1;
    v69 = v192 + &g_1 as &u8;
    memcpy(&v109, &v58, 592);
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v58 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v195 = v59;
    v196 = v60;
    *((v195 + v196 + &g_1 as &u8) as &i128) = 153429237622420041892201341139665120621;
    *((v195 + v196) as &i128) = 140099212494567893501200159713718922857;
    v60 = v196 + &g_11 as &u8;
    v197 = v58;
    v168 = *((&v58 as &char + 8) as &i128);
    if v197 != 0x8000000000000000 {
        v58 = v168;
    }
    v149 = v197;
    v150 = v58;
    memcpy(&v168, &v109, 588);
    v178 = v164;
    v179 = v165;
    v177 = &g_1;
    v58 = clap_builder::builder::command::Command::arg(&v0, &v168);
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v35 = 0;
    v37 = 0;
    v0 = 0;
    v2 = 0;
    v3 = v187;
    v4 = 0;
    v5 = 0;
    v6 = v186;
    v7 = &g_1;
    v8 = v185;
    v9 = 0;
    v10 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v32 = &g_1;
    v33 = 0;
    v34 = &g_1;
    v36 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v42 = v184;
    v43 = 0x8000000000000000;
    v45 = v167;
    v44 = v166;
    v46 = 9223372036854775809;
    v47 = v183;
    v48 = &anon.5f995df778c88d2f993662794f843320.2.llvm.13646445757275454229;
    v49 = &g_1;
    v50 = &g_4142e5;
    v51 = &g_1;
    v52 = 0;
    v53 = 4785074604081218;
    v54 = 0;
    v55 = 3337;
    v168 = struct32 {
        field_0: &g_40adc4
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v109 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v168);
    v33 = v111;
    v31 = v109;
    memcpy(&v109, &v0, 592);
    v198 = v124;
    if v122 - v198 <= 1 {
        v122 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v198, &g_1);
        v198 = v124;
    }
    v199 = v123;
    v200 = v198 * &g_1;
    *((v199 + v200) as &&i64) = &g_40ae30;
    *((v199 + v200 + &g_1 as &u8) as &&i64) = &g_1;
    *((v199 + v200 + &g_1 as &u8) as &&i64) = &anon.5f995df778c88d2f993662794f843320.2.llvm.13646445757275454229;
    *((v199 + v200 + &g_11 as &u8) as &&i64) = &g_1;
    v124 = v198 + &g_1 as &u8;
    memcpy(&v0, &v109, 592);
    v109 = 0;
    v110 = &g_1;
    v111 = 0;
    v109 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_4d);
    v201 = v110;
    v202 = v111;
    *((v201 + v202 + &g_41 as &u8) as &i128) = 153388003874467503409085401824727150880;
    *((v201 + v202 + &g_31 as &u8) as &i128) = 64032401264525088716593455524515572000;
    *((v201 + v202 + &g_21 as &u8) as &i128) = 153388124306536059451572770587338558786;
    *((v201 + v202 + &g_11 as &u8) as &i128) = 60018700553505143675781405234287832681;
    *((v201 + v202 + &g_1 as &u8) as &i128) = 154763738885209468143698098639908198985;
    *((v201 + v202) as &i128) = 110494539095586126185810067667818734451;
    v111 = v202 + &g_4d as &u8;
    v203 = v109;
    v168 = *((&v109 as &char + 8) as &i128);
    if v203 != 0x8000000000000000 {
        v109 = v168;
    }
    v41 = v203;
    v42 = v109;
    memcpy(&v109, &v0, 592);
    v0 = clap_builder::builder::command::Command::arg(&v58, &v109);
    v66 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v58 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = &g_1;
    v64 = 0;
    v65 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = 0x8000000000000000;
    v96 = 0x8000000000000000;
    v97 = 9223372036854775809;
    v98 = &g_413f4c;
    v99 = &g_1;
    v100 = &g_413f4c;
    v101 = &g_1;
    v102 = 0;
    v103 = 0x11000000110000;
    v104 = 0;
    v105 = 3337;
    v204 = v69;
    if v204 == *((&v66 as &char + 8) as &i64) {
        v67 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v205 = v68;
    v206 = v204 * &g_1;
    *((v205 + v206) as &&i64) = &g_413f4c;
    *((v205 + v206 + &g_1 as &u8) as &&i64) = &g_1;
    v69 = v204 + &g_1 as &u8;
    memcpy(&v109, &v58, 592);
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v58 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v207 = v59;
    v208 = v60;
    *((v207 + v208) as &i128) = 43056764336564919649611909289099620976;
    *((v207 + v208 + &g_1 as &u8) as &i64) = 7809651250875622510;
    v60 = v208 + &g_11 as &u8;
    v209 = v58;
    v168 = *((&v58 as &char + 8) as &i128);
    if v209 != 0x8000000000000000 {
        v58 = v168;
    }
    v149 = v209;
    v150 = v58;
    memcpy(&v168, &v109, 588);
    v178 = v164;
    v179 = v165;
    v177 = &g_1;
    v58 = clap_builder::builder::command::Command::arg(&v0, &v168);
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = 9223372036854775809;
    v48 = &g_413f51;
    v49 = &g_11;
    v50 = &g_414360;
    v51 = &g_1;
    v52 = 0;
    v53 = 4785074604081256;
    v54 = 0;
    v55 = 3337;
    v210 = v14;
    if *((&v11 as &char + 8) as &i64) - v210 <= 1 {
        v12 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v210, &g_1);
        v210 = v14;
    }
    v211 = v13;
    v212 = v210 * &g_1;
    *((v211 + v212) as &&i64) = &g_413f66;
    *((v211 + v212 + &g_1 as &u8) as &&i64) = &g_11;
    *((v211 + v212 + &g_1 as &u8) as &&i64) = &g_413f51;
    *((v211 + v212 + &g_11 as &u8) as &&i64) = &g_11;
    v14 = v210 + &g_1 as &u8;
    memcpy(&v109, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v213 = v1;
    v214 = v2;
    *((v213 + v214 + &g_11 as &u8) as &i128) = 66629078361576077386099726920945069426;
    *((v213 + v214 + &g_1 as &u8) as &i128) = 148074578884391260816853245462560468341;
    *((v213 + v214) as &i128) = 138408104455160856948265715733208068720;
    *((v213 + v214 + &g_21 as &u8) as &i64) = 2974401193217110834;
    v2 = v214 + &g_31 as &u8;
    v215 = v0;
    v168 = *((&v0 as &char + 8) as &i128);
    if v215 != 0x8000000000000000 {
        v0 = v168;
    }
    v149 = v215;
    v150 = v0;
    memcpy(&v168, &v109, 588);
    v178 = v164;
    v179 = v165;
    v177 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v58, &v168);
    v66 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v58 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = &g_1;
    v64 = 0;
    v65 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = 0x8000000000000000;
    v96 = 0x8000000000000000;
    v97 = 9223372036854775809;
    v98 = &g_413f66;
    v99 = &g_11;
    v100 = &g_4143a5;
    v101 = &g_1;
    v102 = 0;
    v103 = 4785074604081224;
    v104 = 0;
    v105 = 3337;
    v216 = v69;
    if *((&v66 as &char + 8) as &i64) - v216 <= 1 {
        v67 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v216, &g_1);
        v216 = v69;
    }
    v217 = v68;
    v218 = v216 * &g_1;
    *((v217 + v218) as &&i64) = &g_413f51;
    *((v217 + v218 + &g_1 as &u8) as &&i64) = &g_11;
    *((v217 + v218 + &g_1 as &u8) as &&i64) = &g_413f66;
    *((v217 + v218 + &g_11 as &u8) as &&i64) = &g_11;
    v69 = v216 + &g_1 as &u8;
    memcpy(&v109, &v58, 592);
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v58 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v219 = v59;
    v220 = v60;
    *((v219 + v220 + &g_11 as &u8) as &i128) = 69380448071627587175056576116519102063;
    *((v219 + v220 + &g_1 as &u8) as &i128) = 64053151494753927633863060558663655525;
    *((v219 + v220) as &i128) = 153469376511616441538706707519361476972;
    v60 = v220 + &g_21 as &u8;
    v221 = v58;
    v168 = *((&v58 as &char + 8) as &i128);
    if v221 != 0x8000000000000000 {
        v58 = v168;
    }
    v149 = v221;
    v150 = v58;
    memcpy(&v168, &v109, 588);
    v178 = v164;
    v179 = v165;
    v177 = &g_1;
    v58 = clap_builder::builder::command::Command::arg(&v0, &v168);
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = 9223372036854775809;
    v48 = &anon.5f995df778c88d2f993662794f843320.6.llvm.13646445757275454229;
    v49 = &g_1;
    v50 = &anon.5f995df778c88d2f993662794f843320.6.llvm.13646445757275454229;
    v51 = &g_1;
    v52 = 0;
    v53 = 4785074604081257;
    v54 = 0;
    v55 = 3337;
    v222 = v14;
    if v222 == *((&v11 as &char + 8) as &i64) {
        v12 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v223 = v13;
    v224 = v222 * &g_1;
    *((v223 + v224) as &&i64) = &anon.5f995df778c88d2f993662794f843320.6.llvm.13646445757275454229;
    *((v223 + v224 + &g_1 as &u8) as &&i64) = &g_1;
    v14 = v222 + &g_1 as &u8;
    memcpy(&v109, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v225 = v1;
    v226 = v2;
    *((v225 + v226 + &g_11 as &u8) as &i128) = 134788810691924772664248372001818746980;
    *((v225 + v226 + &g_1 as &u8) as &i128) = 147712496989089671923012403913290965357;
    *((v225 + v226) as &i128) = 152110414024190314886448816202544540012;
    v2 = v226 + &g_21 as &u8;
    v227 = v0;
    v168 = *((&v0 as &char + 8) as &i128);
    if v227 != 0x8000000000000000 {
        v0 = v168;
    }
    v149 = v227;
    v150 = v0;
    memcpy(&v168, &v109, 588);
    v178 = v164;
    v179 = v165;
    v177 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v58, &v168);
    v66 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v58 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = &g_1;
    v64 = 0;
    v65 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = 0x8000000000000000;
    v96 = 0x8000000000000000;
    v97 = 9223372036854775809;
    v98 = &g_40ae30;
    v99 = &g_1;
    v100 = 0;
    v102 = 0;
    v103 = 4785074604081259;
    v104 = 0;
    v105 = 3337;
    v109 = 0;
    v110 = &g_1;
    v111 = 0;
    v109 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v228 = v110;
    v229 = v111;
    *((v228 + v229) as &i128) = 162713342731512732368282198452076243308;
    *((v228 + v229 + &g_1 as &u8) as &i32) = 1261518181;
    v111 = v229 + &g_11 as &u8;
    v168 = *((&v109 as &char + 8) as &i128);
    if v95 != 0x8000000000000000 {
        v109 = v168;
    }
    v95 = v109;
    memcpy(&v109, &v58, 592);
    v230 = v124;
    if v122 - v230 <= 1 {
        v122 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v230, &g_1);
        v230 = v124;
    }
    v231 = v123;
    v232 = v230 * &g_1;
    *((v231 + v232) as &&i64) = &anon.5f995df778c88d2f993662794f843320.2.llvm.13646445757275454229;
    *((v231 + v232 + &g_1 as &u8) as &&i64) = &g_1;
    *((v231 + v232 + &g_1 as &u8) as &&i64) = &g_40ae30;
    *((v231 + v232 + &g_11 as &u8) as &&i64) = &g_1;
    v124 = v230 + &g_1 as &u8;
    memcpy(&v168, &v109, 588);
    v178 = v164;
    v179 = v165;
    v177 = &g_1;
    v58 = clap_builder::builder::command::Command::arg(&v0, &v168);
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = 9223372036854775809;
    v48 = &g_413f82;
    v49 = &g_1;
    v50 = &g_413f82;
    v51 = &g_1;
    v52 = 0;
    v53 = 4785074604081260;
    v54 = 0;
    v55 = 3337;
    v233 = v14;
    if v233 == *((&v11 as &char + 8) as &i64) {
        v12 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v234 = v13;
    v235 = v233 * &g_1;
    *((v234 + v235) as &&i64) = &g_413f82;
    *((v234 + v235 + &g_1 as &u8) as &&i64) = &g_1;
    v14 = v233 + &g_1 as &u8;
    memcpy(&v109, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v236 = v1;
    v237 = v2;
    *((v236 + v237 + &g_1 as &u8) as &i128) = 154790024942608611208554145309023759392;
    *((v236 + v237) as &i128) = 148147271199494595934804017046713362796;
    *((v236 + v237 + &g_11 as &u8) as &i32) = 1936549236;
    v2 = v237 + &g_21 as &u8;
    v238 = v0;
    v168 = *((&v0 as &char + 8) as &i128);
    if v238 != 0x8000000000000000 {
        v0 = v168;
    }
    v149 = v238;
    v150 = v0;
    memcpy(&v168, &v109, 588);
    v178 = v164;
    v179 = v165;
    v177 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v58, &v168);
    v66 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v58 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = &g_1;
    v64 = 0;
    v65 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = 0x8000000000000000;
    v96 = 0x8000000000000000;
    v97 = 9223372036854775809;
    v98 = &g_413f87;
    v99 = &g_1;
    v100 = &g_413f87;
    v101 = &g_1;
    v102 = 0;
    v103 = 0x11000000110000;
    v104 = 0;
    v105 = 3337;
    v239 = v69;
    if *((&v66 as &char + 8) as &i64) - v239 <= 1 {
        v67 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v239, &g_1);
        v239 = v69;
    }
    v240 = v68;
    v241 = v239 * &g_1;
    *((v240 + v241) as &&i64) = &g_40ae6c;
    *((v240 + v241 + &g_1 as &u8) as &&i64) = &g_1;
    *((v240 + v241 + &g_1 as &u8) as &&i64) = &g_413f87;
    *((v240 + v241 + &g_11 as &u8) as &&i64) = &g_1;
    v69 = v239 + &g_1 as &u8;
    memcpy(&v109, &v58, 592);
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v58 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v242 = v59;
    v243 = v60;
    *((v242 + v243 + &g_11 as &u8) as &i128) = 134772071126292000372738947459549831271;
    *((v242 + v243 + &g_1 as &u8) as &i128) = 146762632687850436507317501525525291886;
    *((v242 + v243) as &i128) = 161434358701107702685616480145066979172;
    *((v242 + v243 + &g_21 as &u8) as &i64) = 2987131704254555492;
    v60 = v243 + &g_31 as &u8;
    v244 = v58;
    v168 = *((&v58 as &char + 8) as &i128);
    if v244 != 0x8000000000000000 {
        v58 = v168;
    }
    v149 = v244;
    v150 = v58;
    memcpy(&v168, &v109, 588);
    v178 = v164;
    v179 = v165;
    v177 = &g_1;
    v58 = clap_builder::builder::command::Command::arg(&v0, &v168);
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v35 = 0;
    v37 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v32 = &g_1;
    v33 = 0;
    v34 = &g_1;
    v36 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = 9223372036854775809;
    v48 = &anon.5f995df778c88d2f993662794f843320.10.llvm.13646445757275454229;
    v49 = &g_1;
    v50 = &anon.5f995df778c88d2f993662794f843320.10.llvm.13646445757275454229;
    v51 = &g_1;
    v52 = 0;
    v53 = 0xd09000000000011000000110000;
    v168 = struct32 {
        field_0: &g_41446a
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v109 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v168);
    v33 = v111;
    v31 = v109;
    v116 = v6;
    v118 = v8;
    v121 = v11;
    v124 = v14;
    v126 = v16;
    v128 = v18;
    v130 = v20;
    v132 = v22;
    v134 = v24;
    v136 = v26;
    v138 = v28;
    v140 = v30;
    v245 = *((&v31 as &char + 8) as &i128);
    v144 = v35;
    v146 = v37;
    v150 = v42;
    v153 = v45;
    v152 = v44;
    v155 = v47;
    v246 = *((&v0 as &char + 568) as &i64);
    v247 = *((&v0 as &char + 40) as &i128);
    v109 = v0;
    v111 = &g_1;
    v112 = 0;
    v113 = -1;
    v114 = v247;
    v115 = v5;
    v117 = v7;
    v119 = v9;
    v120 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v139 = &g_1;
    v141 = v245;
    v142 = 0;
    v143 = &g_1;
    v145 = &g_1;
    v147 = &g_1;
    v148 = 0;
    v149 = 0x8000000000000000;
    v151 = 0x8000000000000000;
    v154 = 9223372036854775809;
    v156 = &anon.5f995df778c88d2f993662794f843320.10.llvm.13646445757275454229;
    v157 = &g_1;
    v158 = &anon.5f995df778c88d2f993662794f843320.10.llvm.13646445757275454229;
    v159 = &g_1;
    v160 = 0;
    v161 = v246;
    v162 = 0xd01000000800000002c00110000;
    memcpy(&v168, "source", 192);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v109, &v168);
    memcpy(&v168, "source", 192);
    v171 = 0;
    v172 = &g_1;
    v109 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v168);
    v40 = v111;
    v38 = v109;
    memcpy(&v109, &v0, 592);
    v168 = struct112 {
        field_0: &g_413fba
        field_8: &g_1
        field_16: &g_40ae80
        field_24: &g_1
        field_32: &g_40ae94
        field_40: &g_1
        field_48: &g_413fdd
        field_56: &g_1
        field_64: &g_413fe2
        field_72: &g_1
        field_80: &g_413fe7
        field_88: &g_1
        field_96: 0
        field_104: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v168);
    v144 = v2;
    v142 = v0;
    memcpy(&v0, &v109, 592);
    v248 = *((&v0 as &char + 120) as &i64);
    if v9 - v248 <= 2 {
        v9 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v248, &g_1);
        v248 = *((&v0 as &char + 120) as &i64);
    }
    v249 = v10;
    v250 = v248 * &g_1;
    *((v249 + v250) as &&i64) = &anon.5f995df778c88d2f993662794f843320.6.llvm.13646445757275454229;
    *((v249 + v250 + &g_1 as &u8) as &&i64) = &g_1;
    *((v249 + v250 + &g_1 as &u8) as &&i64) = &anon.5f995df778c88d2f993662794f843320.12.llvm.13646445757275454229;
    *((v249 + v250 + &g_11 as &u8) as &&i64) = &g_1;
    *((v249 + v250 + &g_11 as &u8) as &&i64) = &anon.5f995df778c88d2f993662794f843320.15.llvm.13646445757275454229;
    *((v249 + v250 + &g_21 as &u8) as &&i64) = &g_1;
    v11 = v248 + &g_1 as &u8;
    memcpy(&v109, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_4d);
    v251 = v1;
    v252 = v2;
    *((v251 + v252 + &g_41 as &u8) as &i128) = 61665775241824148528013271156913293644;
    *((v251 + v252 + &g_31 as &u8) as &i128) = 139736803377918210527207599993774303520;
    *((v251 + v252 + &g_21 as &u8) as &i128) = 153382647736019806048522039910717813360;
    *((v251 + v252 + &g_11 as &u8) as &i128) = 43129471603476767583970563448757634592;
    *((v251 + v252 + &g_1 as &u8) as &i128) = 161346089573426267578312026761888363119;
    *((v251 + v252) as &i128) = 135749771133546682344865391798443668341;
    v2 = v252 + &g_4d as &u8;
    v253 = v0;
    v168 = *((&v0 as &char + 8) as &i128);
    if v253 != 0x8000000000000000 {
        v0 = v168;
    }
    v149 = v253;
    v150 = v0;
    memcpy(&v168, &v109, 592);
    v0 = clap_builder::builder::command::Command::arg(&v58, &v168);
    v66 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v58 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = &g_1;
    v64 = 0;
    v65 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = 0x8000000000000000;
    v96 = 0x8000000000000000;
    v97 = 9223372036854775809;
    v98 = &anon.5f995df778c88d2f993662794f843320.12.llvm.13646445757275454229;
    v99 = &g_1;
    v100 = &anon.5f995df778c88d2f993662794f843320.12.llvm.13646445757275454229;
    v101 = &g_1;
    v102 = 0;
    v103 = 4785074604081232;
    v104 = 0;
    v105 = 3337;
    v254 = v69;
    if v254 == *((&v66 as &char + 8) as &i64) {
        v67 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v255 = v68;
    v256 = v254 * &g_1;
    *((v255 + v256) as &&i64) = &anon.5f995df778c88d2f993662794f843320.12.llvm.13646445757275454229;
    *((v255 + v256 + &g_1 as &u8) as &&i64) = &g_1;
    v69 = v254 + &g_1 as &u8;
    memcpy(&v109, &v58, 592);
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v58 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v257 = v59;
    v258 = v60;
    *((v257 + v258 + &g_1 as &u8) as &i128) = 154696320155461743982801923981633935433;
    *((v257 + v258) as &i128) = 156096676490011262210239849356228653941;
    v60 = v258 + &g_11 as &u8;
    v259 = v58;
    v168 = *((&v58 as &char + 8) as &i128);
    if v259 != 0x8000000000000000 {
        v58 = v168;
    }
    v149 = v259;
    v150 = v58;
    memcpy(&v168, &v109, 588);
    v178 = v164;
    v179 = v165;
    v177 = &g_1;
    v58 = clap_builder::builder::command::Command::arg(&v0, &v168);
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = 9223372036854775809;
    v48 = &g_40ae6c;
    v49 = &g_1;
    v50 = &g_40ae6c;
    v51 = &g_1;
    v52 = 0;
    v53 = 0x11000000110000;
    v54 = 0;
    v55 = 3337;
    v260 = v14;
    if *((&v11 as &char + 8) as &i64) - v260 <= 1 {
        v12 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v260, &g_1);
        v260 = v14;
    }
    v261 = v13;
    v262 = v260 * &g_1;
    *((v261 + v262) as &&i64) = &g_413f87;
    *((v261 + v262 + &g_1 as &u8) as &&i64) = &g_1;
    *((v261 + v262 + &g_1 as &u8) as &&i64) = &g_40ae6c;
    *((v261 + v262 + &g_11 as &u8) as &&i64) = &g_1;
    v14 = v260 + &g_1 as &u8;
    memcpy(&v109, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v263 = v1;
    v264 = v2;
    *((v263 + v264 + &g_11 as &u8) as &i128) = 148065776638876249683139774183713433888;
    *((v263 + v264 + &g_1 as &u8) as &i128) = 134788810691924753977266551657202738546;
    *((v263 + v264) as &i128) = 148075978109449835198140378249426267753;
    *((v263 + v264 + &g_21 as &u8) as &i64) = 2988539049303634807;
    v2 = v264 + &g_31 as &u8;
    v265 = v0;
    v168 = *((&v0 as &char + 8) as &i128);
    if v265 != 0x8000000000000000 {
        v0 = v168;
    }
    v149 = v265;
    v150 = v0;
    memcpy(&v168, &v109, 588);
    v178 = v164;
    v179 = v165;
    v177 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v58, &v168);
    v66 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v58 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = &g_1;
    v64 = 0;
    v65 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = 0x8000000000000000;
    v96 = 0x8000000000000000;
    v97 = 9223372036854775809;
    v98 = &g_40ae70;
    v99 = &g_1;
    v100 = &g_40ae70;
    v101 = &g_1;
    v102 = 0;
    v103 = 4785074604081268;
    v104 = 0;
    v105 = 3337;
    v180 = &g_1;
    v170 = v182;
    v168 = v180;
    v169 = v181;
    v109 = clap_builder::builder::arg::Arg::value_parser(&v58, &v168);
    memcpy(&v58, &v109, 592);
    v166 = struct32 {
        field_0: &g_40ae78
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v168 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v166);
    v88 = v170;
    v86 = v168;
    memcpy(&v168, &v58, 588);
    v178 = *((&v58 as &char + 589) as &i16);
    v179 = *((&v58 as &char + 591) as &i8);
    v177 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v58 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v266 = v59;
    v267 = v60;
    *((v266 + v267 + &g_11 as &u8) as &i128) = 92133927257488510605051250828821884261;
    *((v266 + v267 + &g_1 as &u8) as &i128) = 136158258703561308399754240324717340192;
    *((v266 + v267) as &i128) = 148147271199494595934804017046713362796;
    v60 = v267 + &g_21 as &u8;
    v268 = v58;
    v109 = *((&v58 as &char + 8) as &i128);
    if v268 != 0x8000000000000000 {
        v58 = v109;
    }
    v173 = v268;
    v174 = v58;
    memcpy(&v109, &v168, 592);
    v58 = clap_builder::builder::command::Command::arg(&v0, &v109);
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = 9223372036854775809;
    v48 = &anon.5f995df778c88d2f993662794f843320.15.llvm.13646445757275454229;
    v49 = &g_1;
    v50 = &anon.5f995df778c88d2f993662794f843320.15.llvm.13646445757275454229;
    v51 = &g_1;
    v52 = 0;
    v53 = 4785074604081236;
    v54 = 0;
    v55 = 3337;
    v269 = v14;
    if v269 == *((&v11 as &char + 8) as &i64) {
        v12 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v270 = v13;
    v271 = v269 * &g_1;
    *((v270 + v271) as &&i64) = &anon.5f995df778c88d2f993662794f843320.15.llvm.13646445757275454229;
    *((v270 + v271 + &g_1 as &u8) as &&i64) = &g_1;
    v14 = v269 + &g_1 as &u8;
    memcpy(&v109, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v272 = v1;
    v273 = v2;
    *((v272 + v273) as &i128) = 134856676109208568050817927753006412400;
    *((v272 + v273 + &g_1 as &u8) as &i64) = 7309475734889522548;
    v2 = v273 + &g_11 as &u8;
    v274 = v0;
    v168 = *((&v0 as &char + 8) as &i128);
    if v274 != 0x8000000000000000 {
        v0 = v168;
    }
    v149 = v274;
    v150 = v0;
    memcpy(&v168, &v109, 588);
    v178 = v164;
    v179 = v165;
    v177 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v58, &v168);
    v66 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v58 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = &g_1;
    v64 = 0;
    v65 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = 0x8000000000000000;
    v96 = 0x8000000000000000;
    v97 = 9223372036854775809;
    v98 = &g_413fae;
    v99 = &g_1;
    v100 = &g_413fae;
    v101 = &g_1;
    v102 = 0;
    v103 = 4785074604081272;
    v104 = 0;
    v106 = &g_1;
    v105 = &g_1;
    v109 = clap_builder::builder::arg::Arg::value_parser(&v58, &v180);
    memcpy(&v58, &v109, 592);
    v166 = struct32 {
        field_0: &g_40ae78
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v168 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v166);
    v88 = v170;
    v86 = v168;
    memcpy(&v168, &v58, 580);
    v275 = *((&v103 as &char + 4) as &i32);
    if v275 == 0x110000 {
        v275 = &g_21;
    }
    v175 = v275;
    v176 = *((&v58 as &char + 584) as &i64);
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v58 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v277 = v59;
    v278 = v60;
    *((v277 + v278 + &g_11 as &u8) as &i128) = 92133927257488510605051250828821950318;
    *((v277 + v278 + &g_1 as &u8) as &i128) = 148116118368767016428259973370911221280;
    *((v277 + v278) as &i128) = 148147271199494595934804017046713362796;
    v60 = v278 + &g_21 as &u8;
    v279 = v58;
    v109 = *((&v58 as &char + 8) as &i128);
    if v279 != 0x8000000000000000 {
        v58 = v109;
    }
    v173 = v279;
    v174 = v58;
    memcpy(&v109, &v168, 592);
    v58 = clap_builder::builder::command::Command::arg(&v0, &v109);
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = 9223372036854775809;
    v48 = &g_413f94;
    v49 = &g_1;
    v50 = 0;
    v52 = 0;
    v53 = 0x11000000110000;
    v54 = 0;
    v55 = 513;
    clap_builder::builder::command::Command::arg(a0, &v58, &v0);
    return a0;
}
