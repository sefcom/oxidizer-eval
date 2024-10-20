fn uu_split::uu_app(a0: u32) -> u64 {
    let v0: i192;  // [sp-0xae8], Other Possible Types: struct24, Enum
    let v1: i64;  // [sp-0xae0]
    let v2: i64;  // [sp-0xad8]
    let v3: i128;  // [bp-0xad0]
    let v4: i64;  // [sp-0xac8]
    let v5: i128;  // [bp-0xac0]
    let v6: i64;  // [sp-0xab0]
    let v7: i128;  // [sp-0xaa8]
    let v8: i64;  // [sp-0xa98]
    let v9: i128;  // [sp-0xa90]
    let v10: i128;  // [sp-0xa80]
    let v11: i64;  // [sp-0xa78]
    let v12: i128;  // [sp-0xa70]
    let v13: struct16;  // [sp-0xa68]
    let v14: i64;  // [sp-0xa60]
    let v15: i64;  // [bp-0xa58]
    let v16: i64;  // [sp-0xa48]
    let v17: i128;  // [sp-0xa40]
    let v18: i64;  // [sp-0xa30]
    let v19: i128;  // [sp-0xa28]
    let v20: i64;  // [sp-0xa18]
    let v21: i128;  // [sp-0xa10]
    let v22: i64;  // [sp-0xa00]
    let v23: i128;  // [sp-0x9f8]
    let v24: i64;  // [sp-0x9e8]
    let v25: i128;  // [sp-0x9e0]
    let v26: i64;  // [sp-0x9d0]
    let v27: i128;  // [sp-0x9c8]
    let v28: i64;  // [sp-0x9b8]
    let v29: i128;  // [sp-0x9b0]
    let v30: i64;  // [sp-0x9a0]
    let v31: i128;  // [bp-0x998]
    let v32: i128;  // [bp-0x990]
    let v33: i128;  // [sp-0x988]
    let v34: i128;  // [bp-0x980]
    let v35: i64;  // [sp-0x978]
    let v36: i64;  // [sp-0x970]
    let v37: i128;  // [sp-0x968]
    let v38: i64;  // [sp-0x958]
    let v39: i128;  // [sp-0x950]
    let v40: i64;  // [sp-0x940]
    let v41: i64;  // [sp-0x938]
    let v42: i64;  // [sp-0x930]
    let v43: i128;  // [sp-0x928]
    let v44: i64;  // [sp-0x918]
    let v45: i128;  // [sp-0x910]
    let v46: i128;  // [sp-0x900]
    let v47: i64;  // [sp-0x8f0]
    let v48: i128;  // [sp-0x8e8]
    let v49: i64;  // [sp-0x8d8]
    let v50: i64;  // [sp-0x8d0]
    let v51: i64;  // [sp-0x8c8]
    let v52: i64;  // [sp-0x8c0]
    let v53: i64;  // [sp-0x8b8]
    let v54: i64;  // [sp-0x8b0]
    let v55: i64;  // [bp-0x8a8]
    let v56: i32;  // [sp-0x8a0]
    let v57: i8;  // [sp-0x89c]
    let v58: i16;  // [bp-0x89b]
    let v59: i16;  // [bp-0x89a]
    let v60: i8;  // [sp-0x899]
    let v61: i64;  // [sp-0x898], Other Possible Types: struct712, Enum
    let v62: i64;  // [sp-0x890]
    let v63: i64;  // [sp-0x888]
    let v64: i128;  // [sp-0x880]
    let v65: i64;  // [sp-0x870]
    let v66: i64;  // [sp-0x860]
    let v67: i128;  // [sp-0x858]
    let v68: i64;  // [sp-0x848]
    let v69: i128;  // [sp-0x840]
    let v70: i64;  // [sp-0x830]
    let v71: i64;  // [sp-0x828]
    let v72: i128;  // [sp-0x820]
    let v73: struct16;  // [sp-0x818]
    let v74: i64;  // [sp-0x810]
    let v75: i128;  // [bp-0x808]
    let v76: i64;  // [sp-0x7f8]
    let v77: i128;  // [sp-0x7f0]
    let v78: i64;  // [sp-0x7e0]
    let v79: i128;  // [sp-0x7d8]
    let v80: i64;  // [sp-0x7c8]
    let v81: i128;  // [sp-0x7c0]
    let v82: i64;  // [sp-0x7b0]
    let v83: i128;  // [sp-0x7a8]
    let v84: i64;  // [sp-0x798]
    let v85: i128;  // [sp-0x790]
    let v86: i64;  // [sp-0x780]
    let v87: i128;  // [sp-0x778]
    let v88: i64;  // [sp-0x768]
    let v89: i128;  // [sp-0x760]
    let v90: i64;  // [sp-0x750]
    let v91: i128;  // [bp-0x748]
    let v92: i128;  // [bp-0x740]
    let v93: i64;  // [sp-0x738]
    let v94: i64;  // [bp-0x730]
    let v95: i128;  // [bp-0x728]
    let v96: i64;  // [sp-0x720]
    let v97: i128;  // [bp-0x718]
    let v98: i64;  // [sp-0x708]
    let v99: i128;  // [sp-0x700]
    let v100: i64;  // [sp-0x6f0]
    let v101: i64;  // [sp-0x6e8]
    let v102: i64;  // [sp-0x6e0]
    let v103: i128;  // [sp-0x6d8]
    let v104: i64;  // [sp-0x6c8]
    let v105: i128;  // [sp-0x6c0]
    let v106: i128;  // [sp-0x6b0]
    let v107: i64;  // [sp-0x6a0]
    let v108: i128;  // [sp-0x698]
    let v109: i64;  // [sp-0x688]
    let v110: i64;  // [sp-0x680]
    let v111: i64;  // [sp-0x678]
    let v112: i64;  // [sp-0x670]
    let v113: i64;  // [sp-0x668]
    let v114: i128;  // [bp-0x658]
    let v115: i32;  // [sp-0x650]
    let v116: i8;  // [sp-0x64c]
    let v117: i8;  // [sp-0x64b]
    let v118: i64;  // [sp-0x638]
    let v119: i64;  // [sp-0x630]
    let v120: i64;  // [sp-0x5dc]
    let v121: i32;  // [sp-0x5d4]
    let v122: i192;  // [bp-0x5c8], Other Possible Types: struct712, Enum, struct24
    let v123: i64;  // [sp-0x5c0]
    let v124: i64;  // [sp-0x5b8]
    let v125: i128;  // [sp-0x5b0]
    let v126: i128;  // [bp-0x5a0]
    let v127: i64;  // [sp-0x590]
    let v128: i128;  // [sp-0x588]
    let v129: i64;  // [sp-0x578]
    let v130: i128;  // [sp-0x570]
    let v131: i64;  // [sp-0x560]
    let v132: i64;  // [sp-0x558]
    let v133: i128;  // [sp-0x550]
    let v134: i64;  // [sp-0x540]
    let v135: i128;  // [sp-0x538]
    let v136: i64;  // [sp-0x528]
    let v137: i128;  // [sp-0x520]
    let v138: i64;  // [sp-0x510]
    let v139: i128;  // [sp-0x508]
    let v140: i64;  // [sp-0x4f8]
    let v141: i128;  // [sp-0x4f0]
    let v142: i64;  // [sp-0x4e0]
    let v143: i128;  // [sp-0x4d8]
    let v144: i64;  // [sp-0x4c8]
    let v145: i128;  // [sp-0x4c0]
    let v146: i64;  // [sp-0x4b0]
    let v147: i128;  // [sp-0x4a8]
    let v148: struct16;  // [sp-0x4a0]
    let v149: i64;  // [sp-0x498]
    let v150: i128;  // [bp-0x490]
    let v151: i64;  // [sp-0x480]
    let v152: i128;  // [bp-0x478]
    let v153: i128;  // [bp-0x470]
    let v154: i128;  // [sp-0x468]
    let v155: i64;  // [bp-0x460]
    let v156: i128;  // [sp-0x458]
    let v157: i64;  // [sp-0x450]
    let v158: i128;  // [bp-0x448]
    let v159: i64;  // [sp-0x438]
    let v160: i128;  // [sp-0x430]
    let v161: i64;  // [sp-0x420]
    let v162: i64;  // [sp-0x418]
    let v163: i64;  // [sp-0x410]
    let v164: i128;  // [sp-0x408]
    let v165: i64;  // [sp-0x3f8]
    let v166: i128;  // [sp-0x3f0]
    let v167: i128;  // [sp-0x3e0]
    let v168: i64;  // [sp-0x3d0]
    let v169: i128;  // [sp-0x3c8]
    let v170: i64;  // [sp-0x3b8]
    let v171: i64;  // [sp-0x3b0]
    let v172: i64;  // [sp-0x3a8]
    let v173: i64;  // [sp-0x3a0]
    let v174: i64;  // [sp-0x398]
    let v175: i64;  // [sp-0x390]
    let v176: i128;  // [bp-0x388]
    let v177: i64;  // [bp-0x384]
    let v178: i32;  // [sp-0x380]
    let v179: i16;  // [sp-0x37c]
    let v180: i8;  // [bp-0x300]
    let v181: i8;  // [bp-0x2f0]
    let v182: i8;  // [bp-0x2e0]
    let v183: i8;  // [bp-0x2d0]
    let v184: i8;  // [bp-0x2c0]
    let v185: i8;  // [bp-0x2b0]
    let v186: i8;  // [bp-0x2a0]
    let v187: struct32;  // [bp-0x288], Other Possible Types: i128
    let v188: i128;  // [bp-0x280]
    let v190: i64;  // rbx
    let v191: i64;  // rax
    let v192: i64;  // rcx
    let v193: i64;  // r14
    let v194: i64;  // rax
    let v195: i64;  // rcx
    let v196: i64;  // rbx
    let v197: i128;  // xmm0
    let v198: i128;  // xmm1
    let v199: i128;  // xmm3
    let v200: i64;  // rax
    let v201: i64;  // rcx
    let v202: i64;  // r14
    let v203: i64;  // rax
    let v204: i64;  // rcx
    let v205: i64;  // r14
    let v206: i128;  // xmm0
    let v207: i128;  // xmm1
    let v208: i128;  // xmm3
    let v209: i64;  // rax
    let v210: i64;  // rcx
    let v211: i64;  // rbx
    let v212: i128;  // xmm0
    let v213: i128;  // xmm1
    let v214: i64;  // rsi
    let v215: i128;  // xmm3
    let v216: i64;  // rax
    let v217: i64;  // rcx
    let v218: i64;  // r14
    let v219: i64;  // rax
    let v220: i64;  // rcx
    let v221: i64;  // rsi
    let v222: i64;  // rax
    let v223: i64;  // rcx
    let v224: i64;  // rax
    let v225: i64;  // rcx
    let v226: i64;  // r14
    let v227: i64;  // rsi
    let v228: i64;  // rax
    let v229: i64;  // rcx
    let v230: i64;  // rax
    let v231: i64;  // rcx
    let v232: i64;  // r14
    let v233: i64;  // rsi
    let v234: i64;  // rax
    let v235: i64;  // rcx
    let v236: i64;  // rax
    let v237: i64;  // rcx
    let v238: i64;  // r14
    let v239: i64;  // rsi
    let v240: i64;  // rax
    let v241: i64;  // rcx
    let v242: i64;  // rax
    let v243: i64;  // rcx
    let v244: i64;  // r14
    let v245: i64;  // rax
    let v246: i64;  // rcx
    let v247: i64;  // r14
    let v248: i64;  // rax
    let v249: i64;  // rcx
    let v250: i128;  // xmm0
    let v251: i128;  // xmm1
    let v252: i64;  // rsi
    let v253: i128;  // xmm3
    let v254: i64;  // rax
    let v255: i64;  // rcx
    let v256: i64;  // rbx
    let v257: i64;  // r15
    let v259: i64;  // rax
    let v260: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v61 = clap_builder::builder::command::Command::new(g_511318, g_511320);
    v118 = &g_41cf6a;
    v119 = &g_1;
    memcpy(&v122, &v61, 712);
    v61 = clap_builder::builder::command::Command::about(&v122, &g_41cf70, &g_41);
    v122 = clap_builder::builder::command::Command::after_help(&v61, &g_41cfbb, 721);
    v0 = uucore::format_usage(&g_41d28c, &g_1f);
    v190 = v0;
    if v190 != 0x8000000000000000 {
        v61 = *((&v0 as &char + 8) as &i128);
    }
    v165 = v190;
    v166 = v61;
    memcpy(&v61, &v122, 700);
    v120 = 549755814016 | *((&v122 as &char + 700) as &i64);
    v121 = *((&v122 as &char + 708) as &i32);
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v143 = 0;
    v145 = 0;
    v147 = 0;
    v150 = 0;
    v152 = 0;
    v158 = 0;
    v160 = 0;
    v122 = 0;
    v124 = 0;
    v125 = v186;
    v126 = 0;
    v127 = 0;
    v128 = v185;
    v129 = &g_1;
    v130 = v184;
    v131 = 0;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v149 = &g_1;
    v151 = &g_1;
    v154 = &g_1;
    v155 = 0;
    v157 = &g_1;
    v159 = &g_1;
    v161 = &g_1;
    v162 = 0;
    v163 = 0x8000000000000000;
    v164 = v183;
    v165 = 0x8000000000000000;
    v166 = v181;
    v167 = v182;
    v168 = 9223372036854775809;
    v169 = v180;
    v170 = &anon.80a68c298b3244c7b6f64951acf55080.10.llvm.4507047988568940441;
    v171 = &g_1;
    v172 = &anon.80a68c298b3244c7b6f64951acf55080.10.llvm.4507047988568940441;
    v173 = &g_1;
    v174 = 0;
    v176 = 264384378310690395145089472004194;
    v187 = struct32 {
        field_0: &g_413b08
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v187);
    v155 = v2;
    v153 = v0;
    memcpy(&v0, &v122, 592);
    v122 = 0;
    v123 = &g_1;
    v124 = 0;
    v122 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_f);
    v191 = v123;
    v192 = v124;
    *((v191 + v192 + &g_1 as &u8) as &i128) = 134814933379323534728186662547980906528;
    *((v191 + v192) as &i128) = 149042029542579530682794134559817758064;
    v124 = v192 + &g_f as &u8;
    v193 = v122;
    v187 = *((&v122 as &char + 8) as &i128);
    if v193 != 0x8000000000000000 {
        v122 = v187;
    }
    v42 = v193;
    v43 = v122;
    memcpy(&v187, &v0, 592);
    v122 = clap_builder::builder::command::Command::arg(&v61, &v187);
    v72 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v97 = 0;
    v99 = 0;
    v61 = 0;
    v63 = 0;
    v64 = v186;
    v65 = 0;
    v66 = 0;
    v67 = v185;
    v68 = &g_1;
    v69 = v184;
    v70 = 0;
    v71 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v96 = &g_1;
    v98 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v103 = v183;
    v104 = 0x8000000000000000;
    v106 = v182;
    v105 = v181;
    v107 = 9223372036854775809;
    v108 = v180;
    v109 = &anon.80a68c298b3244c7b6f64951acf55080.11.llvm.4507047988568940441;
    v110 = &g_1;
    v111 = &anon.80a68c298b3244c7b6f64951acf55080.11.llvm.4507047988568940441;
    v112 = &g_1;
    v113 = 0;
    v114 = 264384378310690395145089472004163;
    v187 = struct32 {
        field_0: &g_413b08
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v187);
    v94 = v2;
    v92 = v0;
    memcpy(&v0, &v61, 592);
    v61 = 0;
    v62 = &g_1;
    v63 = 0;
    v61 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v194 = v62;
    v195 = v63;
    *((v194 + v195 + &g_1f as &u8) as &i128) = 134814933379323534728186662547980906528;
    *((v194 + v195 + &g_f as &u8) as &i128) = 43134467274943301523055273500084888096;
    *((v194 + v195) as &i128) = 92185525628310185809767274526778094960;
    v63 = v195 + &g_20 as &u8;
    v196 = v61;
    v187 = *((&v61 as &char + 8) as &i128);
    if v196 != 0x8000000000000000 {
        v61 = v187;
    }
    v42 = v196;
    v43 = v61;
    memcpy(&v187, &v0, 592);
    v61 = clap_builder::builder::command::Command::arg(&v122, &v187);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = 0;
    v3 = v186;
    v5 = 0;
    v6 = 0;
    v7 = v185;
    v8 = &g_1;
    v9 = v184;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v36 = &g_1;
    v38 = &g_1;
    v40 = &g_1;
    v41 = 0;
    v42 = 0x8000000000000000;
    v43 = v183;
    v44 = 0x8000000000000000;
    v46 = v182;
    v45 = v181;
    v47 = 9223372036854775809;
    v48 = v180;
    v49 = &anon.80a68c298b3244c7b6f64951acf55080.12.llvm.4507047988568940441;
    v50 = &g_1;
    v51 = &anon.80a68c298b3244c7b6f64951acf55080.12.llvm.4507047988568940441;
    v52 = &g_1;
    v53 = 0;
    v55 = 264384378310690395145089472004204;
    v187 = struct32 {
        field_0: &g_41d2f8
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v122 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v187);
    v34 = v124;
    v32 = v122;
    v125 = v3;
    v128 = v7;
    v130 = v9;
    v197 = v10;
    v133 = v12;
    v135 = v15;
    v137 = v17;
    v139 = v19;
    v141 = v21;
    v143 = v23;
    v145 = v25;
    v147 = v27;
    v150 = v29;
    v152 = v31;
    v198 = *((&v32 as &char + 8) as &i128);
    v158 = v37;
    v160 = v39;
    v164 = v43;
    v166 = v45;
    v167 = v46;
    v169 = v48;
    v199 = v5;
    v122 = v0;
    v124 = v2;
    v126 = v199;
    v127 = v6;
    v129 = v8;
    v131 = v197;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v149 = &g_1;
    v151 = &g_1;
    v154 = v198;
    v156 = 0;
    v157 = &g_1;
    v159 = &g_1;
    v161 = &g_1;
    v162 = 0;
    v163 = 0x8000000000000000;
    v165 = 0x8000000000000000;
    v168 = 9223372036854775809;
    v170 = &anon.80a68c298b3244c7b6f64951acf55080.12.llvm.4507047988568940441;
    v171 = &g_1;
    v172 = &anon.80a68c298b3244c7b6f64951acf55080.12.llvm.4507047988568940441;
    v173 = &g_1;
    v174 = 0;
    v175 = v54;
    v176 = 264384378310690395145089472004204;
    v187 = struct32 {
        field_0: &g_413b5c
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v187);
    v158 = v2;
    v156 = v0;
    memcpy(&v0, &v122, 592);
    v122 = 0;
    v123 = &g_1;
    v124 = 0;
    v122 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v200 = v123;
    v201 = v124;
    *((v200 + v201 + &g_f as &u8) as &i128) = 154800200161669944012326751976345137711;
    *((v200 + v201) as &i128) = 153387880915454263854508914107730916720;
    *((v200 + v201 + &g_20 as &u8) as &i64) = 7308332182667556208;
    v124 = v201 + &g_20 as &u8;
    v202 = v122;
    v187 = *((&v122 as &char + 8) as &i128);
    if v202 != 0x8000000000000000 {
        v122 = v187;
    }
    v42 = v202;
    v43 = v122;
    memcpy(&v187, &v0, 592);
    v122 = clap_builder::builder::command::Command::arg(&v61, &v187);
    v72 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v97 = 0;
    v99 = 0;
    v61 = 0;
    v63 = 0;
    v64 = v186;
    v65 = 0;
    v66 = 0;
    v67 = v185;
    v68 = &g_1;
    v69 = v184;
    v70 = 0;
    v71 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v96 = &g_1;
    v98 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v103 = v183;
    v104 = 0x8000000000000000;
    v106 = v182;
    v105 = v181;
    v107 = 9223372036854775809;
    v108 = v180;
    v109 = &anon.80a68c298b3244c7b6f64951acf55080.15.llvm.4507047988568940441;
    v110 = &g_1;
    v111 = &anon.80a68c298b3244c7b6f64951acf55080.15.llvm.4507047988568940441;
    v112 = &g_1;
    v113 = 0;
    v114 = 264384378310690395145089472004206;
    v187 = struct32 {
        field_0: &g_41d326
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v187);
    v94 = v2;
    v92 = v0;
    memcpy(&v0, &v61, 592);
    v61 = 0;
    v62 = &g_1;
    v63 = 0;
    v61 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_30);
    v203 = v62;
    v204 = v63;
    *((v203 + v204 + &g_20 as &u8) as &i128) = 134761530453098432586439987698145239141;
    *((v203 + v204 + &g_f as &u8) as &i128) = 134849795460290303132698052447360546159;
    *((v203 + v204) as &i128) = 42967783891286234103977307470776132967;
    *((v203 + v204 + &g_20 as &u8) as &i32) = 2003790949;
    v63 = v204 + &g_30 as &u8;
    v205 = v61;
    v187 = *((&v61 as &char + 8) as &i128);
    if v205 != 0x8000000000000000 {
        v61 = v187;
    }
    v42 = v205;
    v43 = v61;
    memcpy(&v187, &v0, 592);
    v61 = clap_builder::builder::command::Command::arg(&v122, &v187);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v36 = &g_1;
    v38 = &g_1;
    v40 = &g_1;
    v41 = 0;
    v42 = 0x8000000000000000;
    v44 = 0x8000000000000000;
    v47 = 9223372036854775809;
    v49 = &anon.80a68c298b3244c7b6f64951acf55080.13.llvm.4507047988568940441;
    v50 = &g_f;
    v51 = &anon.80a68c298b3244c7b6f64951acf55080.13.llvm.4507047988568940441;
    v52 = &g_f;
    v53 = 0;
    v55 = 0xd09000000200011000000110000;
    v187 = struct32 {
        field_0: &g_41d35f
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v122 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v187);
    v34 = v124;
    v32 = v122;
    v125 = v3;
    v128 = v7;
    v130 = v9;
    v206 = v10;
    v133 = v12;
    v135 = v15;
    v137 = v17;
    v139 = v19;
    v141 = v21;
    v143 = v23;
    v145 = v25;
    v147 = v27;
    v150 = v29;
    v152 = v31;
    v207 = *((&v32 as &char + 8) as &i128);
    v158 = v37;
    v160 = v39;
    v164 = v43;
    v166 = v45;
    v167 = v46;
    v169 = v48;
    v208 = v5;
    v122 = v0;
    v124 = v2;
    v126 = v208;
    v127 = v6;
    v129 = v8;
    v131 = v206;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v149 = &g_1;
    v151 = &g_1;
    v154 = v207;
    v156 = 0;
    v157 = &g_1;
    v159 = &g_1;
    v161 = &g_1;
    v162 = 0;
    v163 = 0x8000000000000000;
    v165 = 0x8000000000000000;
    v168 = 9223372036854775809;
    v170 = &anon.80a68c298b3244c7b6f64951acf55080.13.llvm.4507047988568940441;
    v171 = &g_f;
    v172 = &anon.80a68c298b3244c7b6f64951acf55080.13.llvm.4507047988568940441;
    v173 = &g_f;
    v174 = 0;
    v175 = v54;
    v176 = 0xd09000000200011000000110000;
    v187 = struct32 {
        field_0: &g_1
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v188 = 0;
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v187);
    v158 = v2;
    v156 = v0;
    memcpy(&v0, &v122, 592);
    v122 = 0;
    v123 = &g_1;
    v124 = 0;
    v122 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_30);
    v209 = v123;
    v210 = v124;
    *((v209 + v210 + &g_20 as &u8) as &i128) = 153387859999838420555569897879924405365;
    *((v209 + v210 + &g_f as &u8) as &i128) = 147712721579556567594296633313522360408;
    *((v209 + v210) as &i128) = 97398531001188819239644750826885637217;
    v124 = v210 + &g_30 as &u8;
    v211 = v122;
    v187 = *((&v122 as &char + 8) as &i128);
    if v211 != 0x8000000000000000 {
        v122 = v187;
    }
    v42 = v211;
    v43 = v122;
    memcpy(&v187, &v0, 592);
    v122 = clap_builder::builder::command::Command::arg(&v61, &v187);
    v72 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v97 = 0;
    v99 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v66 = 0;
    v68 = &g_1;
    v70 = 0;
    v71 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v96 = &g_1;
    v98 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v107 = 9223372036854775809;
    v109 = &g_41cef1;
    v110 = &g_1;
    v111 = &g_41cef1;
    v112 = &g_1;
    v113 = 0;
    v114 = 0xd09000000200011000000110000;
    v187 = struct32 {
        field_0: &g_41d395
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v187);
    v94 = v2;
    v92 = v0;
    v3 = v64;
    v7 = v67;
    v9 = v69;
    v212 = v70;
    v12 = v72;
    v15 = v75;
    v17 = v77;
    v19 = v79;
    v21 = v81;
    v23 = v83;
    v25 = v85;
    v27 = v87;
    v29 = v89;
    v31 = v91;
    v213 = *((&v92 as &char + 8) as &i128);
    v37 = v97;
    v39 = v99;
    v43 = v103;
    v45 = v105;
    v46 = v106;
    v48 = v108;
    v214 = *((&v61 as &char + 568) as &i64);
    v215 = *((&v61 as &char + 40) as &i128);
    v0 = v61;
    v2 = v63;
    v5 = v215;
    v6 = v66;
    v8 = v68;
    v10 = v212;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v33 = v213;
    v35 = 0;
    v36 = &g_1;
    v38 = &g_1;
    v40 = &g_1;
    v41 = 0;
    v42 = 0x8000000000000000;
    v44 = 0x8000000000000000;
    v47 = 9223372036854775809;
    v49 = &g_41cef1;
    v50 = &g_1;
    v51 = &g_41cef1;
    v52 = &g_1;
    v53 = 0;
    v54 = v214;
    v55 = 0x609000000200011000000110000;
    v61 = 0;
    v62 = &g_1;
    v63 = 0;
    v61 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_51);
    v216 = v62;
    v217 = v63;
    *((v216 + v217 + 64) as &i128) = 158756513438361852282670575468110179941;
    *((v216 + v217 + &g_30 as &u8) as &i128) = 145412472930920200260173450304701099621;
    *((v216 + v217 + &g_20 as &u8) as &i128) = 152126291723982308831437987874295324773;
    *((v216 + v217 + &g_f as &u8) as &i128) = 145391737967580358279533218764465982799;
    *((v216 + v217) as &i128) = 89226628305325481837290488726106501751;
    *((v216 + v217 + &g_41 as &u8) as &i16) = 10611;
    v63 = v217 + &g_51 as &u8;
    v218 = v61;
    v187 = *((&v61 as &char + 8) as &i128);
    if v218 != 0x8000000000000000 {
        v61 = v187;
    }
    v42 = v218;
    v43 = v61;
    memcpy(&v187, &v0, 592);
    v61 = clap_builder::builder::command::Command::arg(&v122, &v187);
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v143 = 0;
    v145 = 0;
    v147 = 0;
    v150 = 0;
    v152 = 0;
    v155 = 0;
    v158 = 0;
    v160 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v127 = 0;
    v129 = &g_1;
    v131 = 0;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v149 = &g_1;
    v151 = &g_1;
    v154 = &g_1;
    v157 = &g_1;
    v159 = &g_1;
    v161 = &g_1;
    v162 = 0;
    v163 = 0x8000000000000000;
    v165 = 0x8000000000000000;
    v168 = 9223372036854775809;
    v170 = &g_41cf2a;
    v171 = &g_f;
    v172 = &g_41cf2a;
    v173 = &g_f;
    v174 = 0;
    v177 = 0x110000;
    v179 = 3337;
    v176 = 101;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v219 = v1;
    v220 = v2;
    *((v219 + v220 + &g_f as &u8) as &i128) = 52411960298410850803392165742595630624;
    *((v219 + v220 + &g_f as &u8) as &i128) = 144103886092040080614950261704839163237;
    *((v219 + v220) as &i128) = 43062078327879026959093080407142330212;
    v2 = v220 + &g_20 as &u8;
    v187 = *((&v0 as &char + 8) as &i128);
    if v163 != 0x8000000000000000 {
        v0 = v187;
    }
    v163 = v0;
    memcpy(&v0, &v122, 588);
    v58 = *((&v122 as &char + 589) as &i16);
    v60 = *((&v122 as &char + 591) as &i8);
    v57 = &g_1;
    v122 = clap_builder::builder::command::Command::arg(&v61, &v0);
    v72 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v94 = 0;
    v97 = 0;
    v99 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v66 = 0;
    v68 = &g_1;
    v70 = 0;
    v71 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v96 = &g_1;
    v98 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v107 = 9223372036854775809;
    v109 = &anon.80a68c298b3244c7b6f64951acf55080.17.llvm.4507047988568940441;
    v110 = &g_1;
    v111 = 0;
    v113 = 0;
    v114 = 4785074604081252;
    v115 = 0;
    v117 = &g_1;
    v116 = &g_1;
    v221 = v75;
    if *((&v72 as &char + 8) as &i64) - v221 <= 3 {
        v73 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v221, &g_1);
        v221 = v75;
    }
    v222 = v74;
    v223 = v221 * &g_f;
    *((v222 + v223) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.16.llvm.4507047988568940441;
    *((v222 + v223 + &g_1 as &u8) as &&i64) = &g_f;
    *((v222 + v223 + &g_f as &u8) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.17.llvm.4507047988568940441;
    *((v222 + v223 + &g_f as &u8) as &&i64) = &g_1;
    *((v222 + v223 + &g_20 as &u8) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.18.llvm.4507047988568940441;
    *((v222 + v223 + &g_20 as &u8) as &&i64) = &g_1;
    *((v222 + v223 + &g_30 as &u8) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.19.llvm.4507047988568940441;
    *((v222 + v223 + 56) as &&i64) = &g_1;
    v75 = v221 + &g_1 as &u8;
    memcpy(&v0, &v61, 592);
    v61 = 0;
    v62 = &g_1;
    v63 = 0;
    v61 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_30);
    v224 = v62;
    v225 = v63;
    *((v224 + v225 + &g_20 as &u8) as &i128) = 154716864887357533115135159837903302688;
    *((v224 + v225 + &g_f as &u8) as &i128) = 154694757538107013555360110790515718249;
    *((v224 + v225) as &i128) = 136113252012817989769279898949398131573;
    *((v224 + v225 + &g_30 as &u8) as &i16) = 25449;
    v63 = v225 + &g_30 as &u8;
    v226 = v61;
    v187 = *((&v61 as &char + 8) as &i128);
    if v226 != 0x8000000000000000 {
        v61 = v187;
    }
    v42 = v226;
    v43 = v61;
    memcpy(&v187, &v0, 592);
    v61 = clap_builder::builder::command::Command::arg(&v122, &v187);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = &g_1;
    v3 = 0;
    v4 = &g_1;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v40 = &g_1;
    v41 = 0;
    v42 = 0x8000000000000000;
    v44 = 0x8000000000000000;
    v47 = 9223372036854775809;
    v49 = &anon.80a68c298b3244c7b6f64951acf55080.16.llvm.4507047988568940441;
    v50 = &g_f;
    v51 = &anon.80a68c298b3244c7b6f64951acf55080.16.llvm.4507047988568940441;
    v52 = &g_f;
    v53 = 0;
    v55 = 0xd09000000800011000000110000;
    v227 = v15;
    if *((&v12 as &char + 8) as &i64) - v227 <= 3 {
        v13 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v227, &g_1);
        v227 = v15;
    }
    v228 = v14;
    v229 = v227 * &g_f;
    *((v228 + v229) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.16.llvm.4507047988568940441;
    *((v228 + v229 + &g_1 as &u8) as &&i64) = &g_f;
    *((v228 + v229 + &g_f as &u8) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.17.llvm.4507047988568940441;
    *((v228 + v229 + &g_f as &u8) as &&i64) = &g_1;
    *((v228 + v229 + &g_20 as &u8) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.18.llvm.4507047988568940441;
    *((v228 + v229 + &g_20 as &u8) as &&i64) = &g_1;
    *((v228 + v229 + &g_30 as &u8) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.19.llvm.4507047988568940441;
    *((v228 + v229 + 56) as &&i64) = &g_1;
    v15 = v227 + &g_1 as &u8;
    memcpy(&v122, &v0, 360);
    memcpy(&v122, &v34, 224);
    v155 = v34;
    v187 = struct32 {
        field_0: &g_413bac
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v187);
    v155 = v2;
    v153 = v0;
    memcpy(&v0, &v122, 592);
    v122 = 0;
    v123 = &g_1;
    v124 = 0;
    v122 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v230 = v123;
    v231 = v124;
    *((v230 + v231 + &g_f as &u8) as &i128) = 134861724528652502949478701862538998816;
    *((v230 + v231 + &g_f as &u8) as &i128) = 138842675229000184842637851660131265633;
    *((v230 + v231) as &i128) = 43139983116948087700612225086503346547;
    v124 = v231 + &g_20 as &u8;
    v232 = v122;
    v187 = *((&v122 as &char + 8) as &i128);
    if v232 != 0x8000000000000000 {
        v122 = v187;
    }
    v42 = v232;
    v43 = v122;
    memcpy(&v187, &v0, 592);
    v122 = clap_builder::builder::command::Command::arg(&v61, &v187);
    v72 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v94 = 0;
    v97 = 0;
    v99 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v66 = 0;
    v68 = &g_1;
    v70 = 0;
    v71 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v96 = &g_1;
    v98 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v107 = 9223372036854775809;
    v109 = &anon.80a68c298b3244c7b6f64951acf55080.19.llvm.4507047988568940441;
    v110 = &g_1;
    v111 = 0;
    v113 = 0;
    v114 = 4785074604081272;
    v115 = 0;
    v117 = &g_1;
    v116 = &g_1;
    v233 = v75;
    if *((&v72 as &char + 8) as &i64) - v233 <= 3 {
        v73 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v233, &g_1);
        v233 = v75;
    }
    v234 = v74;
    v235 = v233 * &g_f;
    *((v234 + v235) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.16.llvm.4507047988568940441;
    *((v234 + v235 + &g_1 as &u8) as &&i64) = &g_f;
    *((v234 + v235 + &g_f as &u8) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.17.llvm.4507047988568940441;
    *((v234 + v235 + &g_f as &u8) as &&i64) = &g_1;
    *((v234 + v235 + &g_20 as &u8) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.18.llvm.4507047988568940441;
    *((v234 + v235 + &g_20 as &u8) as &&i64) = &g_1;
    *((v234 + v235 + &g_30 as &u8) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.19.llvm.4507047988568940441;
    *((v234 + v235 + 56) as &&i64) = &g_1;
    v75 = v233 + &g_1 as &u8;
    memcpy(&v0, &v61, 592);
    v61 = 0;
    v62 = &g_1;
    v63 = 0;
    v61 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v236 = v62;
    v237 = v63;
    *((v236 + v237 + &g_f as &u8) as &i128) = 132141123544858555819893425288252366892;
    *((v236 + v237 + &g_f as &u8) as &i128) = 42764733053872696052693076903013413664;
    *((v236 + v237) as &i128) = 153388083737778181248597397968909595509;
    v63 = v237 + &g_20 as &u8;
    v238 = v61;
    v187 = *((&v61 as &char + 8) as &i128);
    if v238 != 0x8000000000000000 {
        v61 = v187;
    }
    v42 = v238;
    v43 = v61;
    memcpy(&v187, &v0, 592);
    v61 = clap_builder::builder::command::Command::arg(&v122, &v187);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = &g_1;
    v3 = 0;
    v4 = &g_1;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v40 = &g_1;
    v41 = 0;
    v42 = 0x8000000000000000;
    v44 = 0x8000000000000000;
    v47 = 9223372036854775809;
    v49 = &anon.80a68c298b3244c7b6f64951acf55080.18.llvm.4507047988568940441;
    v50 = &g_1;
    v51 = &anon.80a68c298b3244c7b6f64951acf55080.18.llvm.4507047988568940441;
    v52 = &g_1;
    v53 = 0;
    v55 = 0xd09000000800011000000110000;
    v239 = v15;
    if *((&v12 as &char + 8) as &i64) - v239 <= 3 {
        v13 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v239, &g_1);
        v239 = v15;
    }
    v240 = v14;
    v241 = v239 * &g_f;
    *((v240 + v241) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.16.llvm.4507047988568940441;
    *((v240 + v241 + &g_1 as &u8) as &&i64) = &g_f;
    *((v240 + v241 + &g_f as &u8) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.17.llvm.4507047988568940441;
    *((v240 + v241 + &g_f as &u8) as &&i64) = &g_1;
    *((v240 + v241 + &g_20 as &u8) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.18.llvm.4507047988568940441;
    *((v240 + v241 + &g_20 as &u8) as &&i64) = &g_1;
    *((v240 + v241 + &g_30 as &u8) as &&i64) = &anon.80a68c298b3244c7b6f64951acf55080.19.llvm.4507047988568940441;
    *((v240 + v241 + 56) as &&i64) = &g_1;
    v15 = v239 + &g_1 as &u8;
    memcpy(&v122, &v0, 360);
    memcpy(&v122, &v34, 224);
    v155 = v34;
    v187 = struct32 {
        field_0: &g_413bac
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v187);
    v155 = v2;
    v153 = v0;
    memcpy(&v0, &v122, 592);
    v122 = 0;
    v123 = &g_1;
    v124 = 0;
    v122 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v242 = v123;
    v243 = v124;
    *((v242 + v243 + &g_f as &u8) as &i128) = 134861724528652502949478701862538998816;
    *((v242 + v243 + &g_f as &u8) as &i128) = 138842675229000184842637851660131265633;
    *((v242 + v243) as &i128) = 43139983116948182147941882479407620467;
    v124 = v243 + &g_20 as &u8;
    v244 = v122;
    v187 = *((&v122 as &char + 8) as &i128);
    if v244 != 0x8000000000000000 {
        v122 = v187;
    }
    v42 = v244;
    v43 = v122;
    memcpy(&v187, &v0, 592);
    v122 = clap_builder::builder::command::Command::arg(&v61, &v187);
    v72 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v97 = 0;
    v99 = 0;
    v61 = 0;
    v63 = 0;
    v64 = v186;
    v65 = 0;
    v66 = 0;
    v67 = v185;
    v68 = &g_1;
    v69 = v184;
    v70 = 0;
    v71 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v96 = &g_1;
    v98 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v103 = v183;
    v104 = 0x8000000000000000;
    v106 = v182;
    v105 = v181;
    v107 = 9223372036854775809;
    v108 = v180;
    v109 = &anon.80a68c298b3244c7b6f64951acf55080.20.llvm.4507047988568940441;
    v110 = &g_1;
    v111 = &anon.80a68c298b3244c7b6f64951acf55080.20.llvm.4507047988568940441;
    v112 = &g_1;
    v113 = 0;
    v114 = 264384378310690395145089472004193;
    v187 = struct32 {
        field_0: &g_41d4d4
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v187);
    v94 = v2;
    v92 = v0;
    memcpy(&v0, &v61, 592);
    v61 = 0;
    v62 = &g_1;
    v63 = 0;
    v61 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v245 = v62;
    v246 = v63;
    *((v245 + v246 + &g_f as &u8) as &i128) = 54758620931248746018622262975488092276;
    *((v245 + v246 + &g_f as &u8) as &i128) = 133131146679766771663598323797196742771;
    *((v245 + v246) as &i128) = 134877240963291101351489145881047754087;
    v63 = v246 + &g_20 as &u8;
    v247 = v61;
    v187 = *((&v61 as &char + 8) as &i128);
    if v247 != 0x8000000000000000 {
        v61 = v187;
    }
    v42 = v247;
    v43 = v61;
    memcpy(&v187, &v0, 592);
    v61 = clap_builder::builder::command::Command::arg(&v122, &v187);
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v143 = 0;
    v145 = 0;
    v147 = 0;
    v150 = 0;
    v152 = 0;
    v155 = 0;
    v158 = 0;
    v160 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v127 = 0;
    v129 = &g_1;
    v131 = 0;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v149 = &g_1;
    v151 = &g_1;
    v154 = &g_1;
    v157 = &g_1;
    v159 = &g_1;
    v161 = &g_1;
    v162 = 0;
    v163 = 0x8000000000000000;
    v165 = 0x8000000000000000;
    v168 = 9223372036854775809;
    v170 = &g_41cf1a;
    v171 = &g_1;
    v172 = &g_41cf1a;
    v173 = &g_1;
    v174 = 0;
    v176 = 0x11000000110000;
    v178 = 0;
    v179 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 57);
    v248 = v1;
    v249 = v2;
    *((v248 + v249 + &g_20 as &u8) as &i128) = 133449460663101085615953075233215619188;
    *((v248 + v249 + &g_20 as &u8) as &i128) = 43061916698630290490453805079548420961;
    *((v248 + v249 + &g_f as &u8) as &i128) = 134420238663606738385149098223854445417;
    *((v248 + v249) as &i128) = 154789821744340347850206271063804441200;
    v2 = v249 + 57;
    v187 = *((&v0 as &char + 8) as &i128);
    if v163 != 0x8000000000000000 {
        v0 = v187;
    }
    v163 = v0;
    memcpy(&v0, &v122, 588);
    v58 = *((&v122 as &char + 589) as &i16);
    v60 = *((&v122 as &char + 591) as &i8);
    v57 = &g_1;
    v122 = clap_builder::builder::command::Command::arg(&v61, &v0);
    v72 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v97 = 0;
    v99 = 0;
    v61 = 0;
    v63 = 0;
    v64 = v186;
    v65 = 0;
    v66 = 0;
    v67 = v185;
    v68 = &g_1;
    v69 = v184;
    v70 = 0;
    v71 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v96 = &g_1;
    v98 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v103 = v183;
    v104 = 0x8000000000000000;
    v106 = v182;
    v105 = v181;
    v107 = 9223372036854775809;
    v108 = v180;
    v109 = &g_41cf21;
    v110 = &g_1;
    v111 = &g_41cf21;
    v112 = &g_1;
    v113 = 0;
    v114 = 264384378310690395145089472004212;
    v187 = struct32 {
        field_0: &g_41d537
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v187);
    v94 = v2;
    v92 = v0;
    v3 = v64;
    v7 = v67;
    v9 = v69;
    v250 = v70;
    v12 = v72;
    v15 = v75;
    v17 = v77;
    v19 = v79;
    v21 = v81;
    v23 = v83;
    v25 = v85;
    v27 = v87;
    v29 = v89;
    v31 = v91;
    v251 = *((&v92 as &char + 8) as &i128);
    v37 = v97;
    v39 = v99;
    v43 = v103;
    v45 = v105;
    v46 = v106;
    v48 = v108;
    v252 = *((&v61 as &char + 568) as &i64);
    v253 = *((&v61 as &char + 40) as &i128);
    v0 = v61;
    v2 = v63;
    v5 = v253;
    v6 = v66;
    v8 = v68;
    v10 = v250;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v33 = v251;
    v35 = 0;
    v36 = &g_1;
    v38 = &g_1;
    v40 = &g_1;
    v41 = 0;
    v42 = 0x8000000000000000;
    v44 = 0x8000000000000000;
    v47 = 9223372036854775809;
    v49 = &g_41cf21;
    v50 = &g_1;
    v51 = &g_41cf21;
    v52 = &g_1;
    v53 = 0;
    v54 = v252;
    v55 = 4785074604081268;
    v56 = &g_20;
    v57 = &g_1;
    v60 = 0;
    *(&v58 as &&i64) = &g_1;
    v61 = 0;
    v62 = &g_1;
    v63 = 0;
    v61 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 91);
    v254 = v62;
    v255 = v63;
    *((v254 + v255 + &g_41 as &u8) as &i128) = 152058774135452863098713738995086419304;
    *((v254 + v255 + 64) as &i128) = 113390035868162126206906331007587545203;
    *((v254 + v255 + &g_30 as &u8) as &i128) = 42750440447199432256970940221878923887;
    *((v254 + v255 + &g_20 as &u8) as &i128) = 154696420220939665988329189332422369381;
    *((v254 + v255 + &g_f as &u8) as &i128) = 138842676175626507355409197104042632815;
    *((v254 + v255) as &i128) = 43056500982786567856585486351527670645;
    v63 = v255 + 91;
    v256 = v61;
    v187 = *((&v61 as &char + 8) as &i128);
    if v256 != 0x8000000000000000 {
        v61 = v187;
    }
    v42 = v256;
    v43 = v61;
    memcpy(&v187, &v0, 592);
    v61 = clap_builder::builder::command::Command::arg(&v122, &v187);
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v143 = 0;
    v145 = 0;
    v147 = 0;
    v150 = 0;
    v152 = 0;
    v155 = 0;
    v158 = 0;
    v160 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v127 = 0;
    v129 = &g_1;
    v131 = 0;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v149 = &g_1;
    v151 = &g_1;
    v154 = &g_1;
    v157 = &g_1;
    v159 = &g_1;
    v161 = &g_1;
    v162 = 0;
    v163 = 0x8000000000000000;
    v165 = 0x8000000000000000;
    v168 = 9223372036854775809;
    v170 = &g_41cf3b;
    v171 = &g_1;
    v172 = &g_41d595;
    v173 = &g_1;
    v174 = 0;
    v176 = 0x11000000110000;
    v178 = 0;
    v179 = 3337;
    v257 = v150;
    v259 = &g_1;
    if v257 == *((&v147 as &char + 8) as &i64) {
        v148 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v259 = v149;
    }
    v260 = v257 * &g_1;
    *((v259 + v260 * &g_1) as &&i64) = &g_41cf3b;
    *((v259 + v260 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    *((v259 + v260 * &g_1 + &g_f as &u8) as &i8) = 0;
    v150 = v257 + &g_1 as &u8;
    memcpy(&v0, &v122, 584);
    v56 = v178 | &g_1;
    v57 = *((&v122 as &char + 588) as &i32);
    v122 = clap_builder::builder::command::Command::arg(&v61, &v0);
    v72 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v94 = 0;
    v97 = 0;
    v99 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v66 = 0;
    v68 = &g_1;
    v70 = 0;
    v71 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v96 = &g_1;
    v98 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v107 = 9223372036854775809;
    v109 = &g_41cf46;
    v110 = &g_1;
    v111 = 0;
    v113 = 0;
    v114 = 0x11000000110000;
    v115 = 0;
    v116 = 3337;
    v187 = struct32 {
        field_0: &g_41d59f
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v187);
    v97 = v2;
    v95 = v0;
    memcpy(&v0, &v61, 589);
    v58 = &g_1;
    v59 = *((&v61 as &char + 590) as &i16);
    v61 = clap_builder::builder::command::Command::arg(&v122, &v0);
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v143 = 0;
    v145 = 0;
    v147 = 0;
    v150 = 0;
    v152 = 0;
    v155 = 0;
    v158 = 0;
    v160 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v127 = 0;
    v129 = &g_1;
    v131 = 0;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v149 = &g_1;
    v151 = &g_1;
    v154 = &g_1;
    v157 = &g_1;
    v159 = &g_1;
    v161 = &g_1;
    v162 = 0;
    v163 = 0x8000000000000000;
    v165 = 0x8000000000000000;
    v168 = 9223372036854775809;
    v170 = &g_41cf4b;
    v171 = &g_1;
    v172 = 0;
    v174 = 0;
    v176 = 0x11000000110000;
    v178 = 0;
    v179 = 3337;
    v187 = struct32 {
        field_0: &g_41d5a0
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v187);
    v158 = v2;
    v156 = v0;
    memcpy(&v0, &v122, 592);
    clap_builder::builder::command::Command::arg(a0, &v61, &v0);
    return a0;
}
