fn uu_basename::uu_app(a0: u32) -> u64 {
    let v0: i64;  // [sp-0xa58]
    let v1: i32;  // [sp-0xa50]
    let v2: i128;  // [bp-0xa48]
    let v3: i32;  // [sp-0xa40]
    let v4: i64;  // [sp-0xa38]
    let v5: i128;  // [sp-0xa28]
    let v6: i128;  // [bp-0xa18]
    let v7: i64;  // [sp-0xa08]
    let v8: i64;  // [sp-0xa00]
    let v9: i64;  // [sp-0x9f8], Other Possible Types: Enum
    let v10: i64;  // [sp-0x9f0]
    let v11: i128;  // [sp-0x9e8]
    let v12: i64;  // [sp-0x9e0]
    let v13: i128;  // [bp-0x9d8]
    let v14: i64;  // [sp-0x9d0]
    let v15: i64;  // [sp-0x9c8]
    let v16: i64;  // [sp-0x9c0]
    let v17: i64;  // [sp-0x9b8]
    let v18: i64;  // [sp-0x9b0]
    let v19: i64;  // [sp-0x9a8]
    let v20: i64;  // [sp-0x990]
    let v21: i64;  // [sp-0x988]
    let v22: i128;  // [sp-0x980]
    let v23: struct16;  // [sp-0x978]
    let v24: i64;  // [sp-0x970]
    let v25: i64;  // [bp-0x968]
    let v26: i64;  // [sp-0x958]
    let v27: i128;  // [sp-0x950]
    let v28: i64;  // [sp-0x940]
    let v29: i128;  // [sp-0x938]
    let v30: i64;  // [sp-0x928]
    let v31: i128;  // [sp-0x920]
    let v32: i64;  // [sp-0x910]
    let v33: i128;  // [sp-0x908]
    let v34: i64;  // [sp-0x8f8]
    let v35: i128;  // [sp-0x8f0]
    let v36: i64;  // [sp-0x8e0]
    let v37: i128;  // [sp-0x8d8]
    let v38: i64;  // [sp-0x8c8]
    let v39: i128;  // [sp-0x8c0]
    let v40: i64;  // [sp-0x8b0]
    let v41: i128;  // [bp-0x8a8]
    let v42: i64;  // [sp-0x8a0]
    let v43: i64;  // [sp-0x898]
    let v44: i64;  // [bp-0x890]
    let v45: i64;  // [sp-0x880]
    let v46: i128;  // [sp-0x878]
    let v47: i64;  // [sp-0x868]
    let v48: i128;  // [sp-0x860]
    let v49: i64;  // [sp-0x850]
    let v50: i64;  // [sp-0x848]
    let v51: i64;  // [sp-0x840]
    let v52: i128;  // [sp-0x838]
    let v53: i64;  // [sp-0x828]
    let v54: i128;  // [sp-0x820]
    let v55: i64;  // [sp-0x800]
    let v56: i64;  // [sp-0x7e8]
    let v57: i64;  // [sp-0x7e0]
    let v58: i64;  // [sp-0x7d8]
    let v59: i128;  // [sp-0x7d0]
    let v60: i64;  // [sp-0x7c8]
    let v61: i64;  // [sp-0x7c0]
    let v62: i32;  // [bp-0x7b8]
    let v63: i64;  // [bp-0x7b4]
    let v64: i32;  // [sp-0x7b0]
    let v65: i32;  // [bp-0x7ac]
    let v66: i16;  // [bp-0x7ab]
    let v67: i8;  // [bp-0x7a9]
    let v68: i8;  // [bp-0x778]
    let v69: i8;  // [bp-0x73c]
    let v70: i8;  // [bp-0x734]
    let v71: i128;  // [sp-0x728]
    let v72: i64;  // [sp-0x720]
    let v73: i64;  // [sp-0x718]
    let v74: i64;  // [sp-0x710]
    let v75: i64;  // [sp-0x708]
    let v76: i64;  // [sp-0x700]
    let v77: i64;  // [sp-0x6f8]
    let v78: i64;  // [sp-0x6f0]
    let v79: i64;  // [sp-0x6e8]
    let v80: i128;  // [bp-0x6e0]
    let v81: i64;  // [sp-0x6d8]
    let v82: i64;  // [sp-0x6d0]
    let v83: i128;  // [bp-0x6c8]
    let v84: i64;  // [sp-0x6c0]
    let v85: i64;  // [sp-0x6b8]
    let v86: i128;  // [sp-0x6b0]
    let v87: struct16;  // [sp-0x6a8]
    let v88: i64;  // [sp-0x6a0]
    let v89: i128;  // [bp-0x698]
    let v90: i64;  // [sp-0x688]
    let v91: i128;  // [sp-0x680]
    let v92: i64;  // [sp-0x670]
    let v93: i128;  // [sp-0x668]
    let v94: i64;  // [sp-0x658]
    let v95: i128;  // [sp-0x650]
    let v96: i64;  // [sp-0x640]
    let v97: i128;  // [sp-0x638]
    let v98: i64;  // [sp-0x628]
    let v99: i64;  // [sp-0x620]
    let v100: i64;  // [sp-0x618]
    let v101: i64;  // [sp-0x610]
    let v102: i128;  // [bp-0x608]
    let v103: i64;  // [sp-0x600]
    let v104: i64;  // [sp-0x5f8]
    let v105: i128;  // [bp-0x5f0]
    let v106: i64;  // [sp-0x5e8]
    let v107: i128;  // [bp-0x5e0]
    let v108: i128;  // [bp-0x5d8]
    let v109: i64;  // [sp-0x5d0]
    let v110: i64;  // [sp-0x5c8]
    let v111: i128;  // [bp-0x5c0]
    let v112: i64;  // [sp-0x5b8]
    let v113: i64;  // [sp-0x5b0]
    let v114: i128;  // [bp-0x5a8]
    let v115: i64;  // [sp-0x5a0]
    let v116: i64;  // [sp-0x598]
    let v117: i128;  // [bp-0x590]
    let v118: i64;  // [sp-0x588]
    let v119: i64;  // [sp-0x580]
    let v120: i64;  // [sp-0x578]
    let v121: i64;  // [sp-0x570]
    let v122: i128;  // [sp-0x568]
    let v123: i64;  // [sp-0x558]
    let v124: i64;  // [sp-0x540]
    let v125: i64;  // [sp-0x530]
    let v126: i64;  // [sp-0x528]
    let v127: i64;  // [sp-0x518]
    let v128: i64;  // [sp-0x510]
    let v129: i64;  // [sp-0x508]
    let v130: i128;  // [sp-0x500]
    let v131: i64;  // [bp-0x4f8]
    let v132: i64;  // [sp-0x4f0]
    let v133: i128;  // [bp-0x4e8]
    let v134: i64;  // [bp-0x4e4]
    let v135: i32;  // [sp-0x4e0]
    let v136: i16;  // [bp-0x4dc]
    let v137: i64;  // [sp-0x4d8]
    let v138: i64;  // [sp-0x4c8]
    let v139: i64;  // [sp-0x4c0]
    let v140: i64;  // [sp-0x4b8]
    let v141: i64;  // [sp-0x4a8]
    let v142: i8;  // [bp-0x4a0]
    let v143: i64;  // [sp-0x498]
    let v144: i64;  // [sp-0x488]
    let v145: i64;  // [sp-0x478]
    let v146: i32;  // [sp-0x470]
    let v147: i64;  // [sp-0x46c]
    let v148: i8;  // [bp-0x464]
    let v149: i64;  // [bp-0x458], Other Possible Types: Enum, struct24
    let v150: i64;  // [sp-0x450]
    let v151: i64;  // [sp-0x448]
    let v152: i8;  // [bp-0x438]
    let v153: i8;  // [bp-0x428]
    let v154: i8;  // [bp-0x420]
    let v155: i8;  // [bp-0x418]
    let v156: i8;  // [bp-0x410]
    let v157: i8;  // [bp-0x408]
    let v158: i128;  // [bp-0x3d8], Other Possible Types: struct16
    let v159: i64;  // [sp-0x3c8]
    let v160: i64;  // [sp-0x2a0]
    let v161: i128;  // [sp-0x298]
    let v162: i8;  // [bp-0x238]
    let v163: i8;  // [bp-0x230]
    let v164: i8;  // [bp-0x220]
    let v165: i8;  // [bp-0x218]
    let v166: i8;  // [bp-0x214]
    let v167: i8;  // [sp-0x20c]
    let v168: i16;  // [sp-0x20b]
    let v169: i8;  // [sp-0x209]
    let v170: i128;  // [sp-0x208]
    let v171: i128;  // [sp-0x1f8]
    let v172: i64;  // [sp-0x1e8]
    let v174: i128;  // xmm0
    let v175: i64;  // rcx
    let v176: i64;  // rdx
    let v177: i64;  // rbx
    let v178: i64;  // rax
    let v179: i64;  // rcx
    let v180: i64;  // rbx
    let v181: i64;  // rax
    let v182: i64;  // rcx
    let v183: i64;  // r13
    let v184: i64;  // r14
    let v185: i64;  // rbp
    let v186: i64;  // rbx
    let v187: i64;  // r12
    let v188: i64;  // rcx
    let v189: i32;  // r15d
    let v190: i64;  // rax
    let v192: i64;  // rbx
    let v193: i128;  // xmm1
    let v194: i64;  // rbx
    let v195: i64;  // rbx
    let v196: i64;  // rax
    let v197: i64;  // rcx
    let v198: i64;  // rbx
    let v199: i64;  // rbx
    let v200: i64;  // rax
    let v201: i64;  // rcx
    let v202: i64;  // r13
    let v203: i64;  // r12
    let v204: i64;  // rbp
    let v205: i64;  // rdx
    let v206: i32;  // ebx
    let v207: i64;  // r13
    let v209: i64;  // rcx
    let v211: i64;  // rbx
    let v212: i64;  // rax
    let v213: i64;  // rcx
    let v214: i64;  // rbx
    let v215: i64;  // rax
    let v216: i64;  // rcx
    let v217: i64;  // r13
    let v218: i64;  // r15
    let v219: i64;  // rbp
    let v220: i64;  // r12
    let v221: i64;  // r14
    let v222: i64;  // rdx
    let v223: i32;  // ebx
    let v224: i64;  // r13
    let v226: i64;  // rcx
    let v228: i128;  // xmm1
    let v229: i64;  // rbx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v174 = g_4e0270;
    v80 = 0;
    v83 = 0;
    v89 = 0;
    v91 = 0;
    v93 = 0;
    v97 = 0;
    v71 = 0;
    v73 = &g_1;
    v74 = 0;
    v75 = &g_1;
    v78 = 0;
    v79 = &g_1;
    v82 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v88 = &g_1;
    v90 = &g_1;
    v92 = &g_1;
    v94 = &g_1;
    v95 = 0;
    v96 = &g_1;
    v98 = &g_1;
    v99 = 0;
    v100 = 0x8000000000000000;
    v103 = 0x8000000000000000;
    v106 = 0x8000000000000000;
    v109 = 0x8000000000000000;
    v112 = 0x8000000000000000;
    v115 = 0x8000000000000000;
    v118 = 0x8000000000000000;
    v121 = 0x8000000000000000;
    v123 = 0x8000000000000000;
    v124 = 0x8000000000000000;
    v126 = 0x8000000000000000;
    v128 = 0x8000000000000000;
    v131 = v174;
    v133 = 0;
    v137 = 0;
    v138 = &g_418656;
    v139 = &g_1;
    v140 = 0;
    v141 = 0;
    v143 = 0;
    v144 = 0;
    v145 = 0;
    v146 = 0x110000;
    v148 = 0;
    v147 = 0;
    v9 = 0;
    v10 = &g_1;
    v11 = 0;
    v9 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_61);
    v175 = v10;
    v176 = v11;
    *((v175 + v176 + &g_41 as &u8) as &i128) = 113415997512755095963589543501919970678;
    *((v175 + v176 + &g_31 as &u8) as &i128) = 148112325455124709700332510765453502057;
    *((v175 + v176 + &g_21 as &u8) as &i128) = 132120274316560162807783527640302187040;
    *((v175 + v176 + &g_11 as &u8) as &i128) = 153465765052134253783384742151620359267;
    *((v175 + v176 + &g_1 as &u8) as &i128) = 134846087002002669442923029881899544161;
    *((v175 + v176) as &i128) = 43077655853743746661173700088558088784;
    *((v175 + v176 + &g_51 as &u8) as &i32) = 1481197126;
    v11 = v176 + &g_61 as &u8;
    v149 = *((&v9 as &char + 8) as &i128);
    if v106 != 0x8000000000000000 {
        v9 = v149;
    }
    v106 = v9;
    v107 = v9;
    memcpy(&v9, &v71, 712);
    v149 = uucore::format_usage(&g_41865c, &g_21);
    v177 = v149;
    if v177 != 0x8000000000000000 {
        v71 = *((&v149 as &char + 8) as &i128);
    }
    v53 = v177;
    v54 = v71;
    memcpy(&v71, &v9, 700);
    v147 = 549755814016 | v69;
    v148 = v70;
    v22 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v41 = 0;
    v44 = 0;
    v46 = 0;
    v48 = 0;
    v9 = 0;
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v19 = &g_1;
    v20 = 0;
    v21 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v40 = &g_1;
    v43 = &g_1;
    v45 = &g_1;
    v47 = &g_1;
    v49 = &g_1;
    v50 = 0;
    v51 = 0x8000000000000000;
    v53 = 0x8000000000000000;
    v55 = 9223372036854775809;
    v56 = &g_412230;
    v57 = &g_1;
    v58 = &g_412230;
    v59 = &g_1;
    v60 = 0;
    v62 = 4785074604081249;
    v64 = 0;
    v65 = 3337;
    v149 = 0;
    v150 = &g_1;
    v151 = 0;
    v149 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v178 = v150;
    v179 = v151;
    *((v178 + v179 + &g_11 as &u8) as &i128) = 103847907135437502214407105961481299314;
    *((v178 + v179 + &g_1 as &u8) as &i128) = 154358637996640874275894991917254074656;
    *((v178 + v179) as &i128) = 134815075619862317189715363741368874355;
    *((v178 + v179 + &g_21 as &u8) as &i32) = 1162690894;
    v151 = v179 + &g_31 as &u8;
    v170 = *((&v149 as &char + 8) as &i128);
    v149 = v149;
    if v51 != 0x8000000000000000 {
        v149 = v170;
        v149 = v149;
    }
    v149 = v149;
    v8 = 9223372036854775809;
    v51 = v149;
    v52 = v149;
    memcpy(&v149, &v9, 588);
    v168 = v66;
    v169 = v67;
    v167 = &g_1;
    v180 = v159;
    if v180 == v158 {
        v158 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v181 = *((&v158 as &char + 8) as &i64);
    v182 = v180 * &g_1;
    *((v181 + v182) as &&i64) = &g_412230;
    *((v181 + v182 + &g_1 as &u8) as &&i64) = &g_1;
    v159 = v180 + &g_1 as &u8;
    v183 = v149;
    v184 = v150;
    v5 = v151;
    v6 = v152;
    v7 = v153;
    v185 = v154;
    v186 = v155;
    v187 = v156;
    memcpy(&v170, &v157, 464);
    v188 = v162;
    v2 = v163;
    v4 = v164;
    v189 = v165;
    v0 = v166;
    v1 = v167;
    if !(!v73 || !v188 && v189 == 0x110000) {
        v190 = v74;
        v183 += v183 < &g_1;
        v74 = v190 + &g_1 as &u8;
    }
    if !v185 {
        v187 = v142;
        v192 = v141;
    }
    v9 = v183;
    v10 = v184;
    v193 = v6;
    v11 = v5;
    v13 = v193;
    v15 = v7;
    v16 = v185 + (v185 < &g_1);
    v17 = v192;
    v18 = v187;
    memcpy(&v19, &v170, 464);
    v58 = v188;
    v59 = v2;
    v61 = v4;
    v62 = v189;
    v63 = v0;
    v65 = v1;
    v194 = v89;
    if v194 == *((&v86 as &char + 8) as &i64) {
        v87 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v194 * 592 + v88, &v9, 592);
    v89 = v194 + &g_1 as &u8;
    memcpy(&v9, &v71, 712);
    v86 = 0;
    v89 = 0;
    v91 = 0;
    v93 = 0;
    v95 = 0;
    v97 = 0;
    v99 = 0;
    v102 = 0;
    v105 = 0;
    v108 = 0;
    v111 = 0;
    v114 = 0;
    v117 = 0;
    v71 = 0;
    v73 = 0;
    v76 = 0;
    v78 = &g_1;
    v79 = v68;
    v81 = &g_1;
    v84 = 0;
    v85 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v92 = &g_1;
    v94 = &g_1;
    v96 = &g_1;
    v98 = &g_1;
    v101 = &g_1;
    v104 = &g_1;
    v107 = &g_1;
    v110 = &g_1;
    v113 = &g_1;
    v116 = &g_1;
    v119 = &g_1;
    v120 = 0;
    v121 = 0x8000000000000000;
    v123 = 0x8000000000000000;
    v125 = v8;
    v127 = &g_4100f0;
    v128 = &g_1;
    v129 = 0;
    v131 = 0;
    v133 = 0x201000002040011000000110000;
    v195 = v25;
    if v195 == *((&v22 as &char + 8) as &i64) {
        v23 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v195 * 592 + v24, &v71, 592);
    v25 = v195 + &g_1 as &u8;
    memcpy(&v71, &v9, 712);
    v22 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v41 = 0;
    v44 = 0;
    v46 = 0;
    v48 = 0;
    v9 = 0;
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v19 = &g_1;
    v20 = 0;
    v21 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v40 = &g_1;
    v43 = &g_1;
    v45 = &g_1;
    v47 = &g_1;
    v49 = &g_1;
    v50 = 0;
    v51 = 0x8000000000000000;
    v53 = 0x8000000000000000;
    v55 = v125;
    v56 = &g_418650;
    v57 = &g_1;
    v58 = &g_418650;
    v59 = &g_1;
    v60 = 0;
    v62 = 4785074604081267;
    v64 = 0;
    v65 = 3337;
    *(v43 as &&i64) = &g_4186b9;
    *((v43 + &g_1 as &u8) as &&i64) = &g_1;
    v42 = &g_1;
    v43 = __rust_alloc(&g_1, &g_1);
    v44 = &g_1;
    memcpy(&v149, &v9, 592);
    v9 = 0;
    v10 = &g_1;
    v11 = 0;
    v9 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v196 = v10;
    v197 = v11;
    *((v196 + v197 + &g_1 as &u8) as &i128) = 134799418152075011534325005931330609255;
    *((v196 + v197) as &i128) = 146762469555839573186488780380714132850;
    *((v196 + v197 + &g_11 as &u8) as &i32) = 1630347379;
    v11 = v197 + &g_21 as &u8;
    v198 = v9;
    v170 = *((&v9 as &char + 8) as &i128);
    if v198 != 0x8000000000000000 {
        v9 = v170;
    }
    v160 = v198;
    v161 = v9;
    memcpy(&v9, &v149, 592);
    v199 = v25;
    if v199 == *((&v22 as &char + 8) as &i64) {
        v23 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v200 = v24;
    v201 = v199 * &g_1;
    *((v200 + v201) as &&i64) = &g_418650;
    *((v200 + v201 + &g_1 as &u8) as &&i64) = &g_1;
    v25 = v199 + &g_1 as &u8;
    v202 = v9;
    v203 = v10;
    v170 = v11;
    v171 = v13;
    v172 = v15;
    v204 = v16;
    memcpy(&v149, &v19, 464);
    v205 = v58;
    v5 = v59;
    v6 = v61;
    v206 = v62;
    v2 = *((&v62 as &char + 4) as &i64);
    v3 = v65;
    if !(!v73 || !v205 && v206 == 0x110000) {
        v209 = v74;
        v74 = v209 + &g_1 as &u8;
    }
    v17 = v17;
    if !v204 {
        v18 = v142;
        v17 = v141;
    }
    v9 = v207;
    v10 = v203;
    v11 = v170;
    v13 = v171;
    v15 = v172;
    v16 = v204 + (v204 < &g_1);
    v17 = v17;
    v18 = v18;
    memcpy(&v19, &v149, 464);
    v58 = v205;
    v59 = v5;
    v61 = v6;
    v62 = v206;
    v63 = v2;
    v65 = v3;
    v211 = v89;
    if v211 == *((&v86 as &char + 8) as &i64) {
        v87 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v211 * 592 + v88, &v9, 592);
    v89 = v211 + &g_1 as &u8;
    memcpy(&v9, &v71, 712);
    v86 = 0;
    v89 = 0;
    v91 = 0;
    v93 = 0;
    v95 = 0;
    v97 = 0;
    v99 = 0;
    v102 = 0;
    v105 = 0;
    v108 = 0;
    v111 = 0;
    v114 = 0;
    v117 = 0;
    v71 = 0;
    v73 = 0;
    v76 = 0;
    v78 = 0;
    v81 = &g_1;
    v84 = 0;
    v85 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v92 = &g_1;
    v94 = &g_1;
    v96 = &g_1;
    v98 = &g_1;
    v101 = &g_1;
    v104 = &g_1;
    v107 = &g_1;
    v110 = &g_1;
    v113 = &g_1;
    v116 = &g_1;
    v119 = &g_1;
    v120 = 0;
    v121 = 0x8000000000000000;
    v123 = 0x8000000000000000;
    v125 = v8;
    v127 = &g_4100d4;
    v128 = &g_1;
    v129 = &g_4100d4;
    v130 = &g_1;
    v131 = 0;
    v133 = 4785074604081274;
    v135 = 0;
    v136 = 3337;
    v149 = 0;
    v150 = &g_1;
    v151 = 0;
    v149 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v212 = v150;
    v213 = v151;
    *((v212 + v213 + &g_11 as &u8) as &i128) = 134825318475316606903885954708509840718;
    *((v212 + v213 + &g_1 as &u8) as &i128) = 146382131509577447352441537475422087532;
    *((v212 + v213) as &i128) = 43139984252227407021545087172924960357;
    v151 = v213 + &g_21 as &u8;
    v170 = *((&v149 as &char + 8) as &i128);
    v149 = v149;
    if v121 != 0x8000000000000000 {
        v149 = v170;
        v149 = v149;
    }
    v149 = v149;
    v121 = v149;
    v122 = v149;
    memcpy(&v149, &v71, 588);
    v168 = *((&v133 as &char + 13) as &i16);
    v169 = *((&v133 as &char + 15) as &i8);
    v167 = &g_1;
    v214 = v159;
    if v214 == v158 {
        v158 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v215 = *((&v158 as &char + 8) as &i64);
    v216 = v214 * &g_1;
    *((v215 + v216) as &&i64) = &g_4100d4;
    *((v215 + v216 + &g_1 as &u8) as &&i64) = &g_1;
    v159 = v214 + &g_1 as &u8;
    v217 = v149;
    v218 = v150;
    v5 = v151;
    v6 = v152;
    v7 = v153;
    v219 = v154;
    v220 = v155;
    v221 = v156;
    memcpy(&v170, &v157, 464);
    v222 = v162;
    v2 = v163;
    v4 = v164;
    v223 = v165;
    v0 = v166;
    v1 = v167;
    if !(!v11 || !v222 && v223 == 0x110000) {
        v226 = v12;
        v12 = v226 + &g_1 as &u8;
    }
    if !v219 {
        v220 = v68;
        v221 = (&v68)[8];
    }
    v71 = v224;
    v72 = v218;
    v228 = v6;
    v73 = v5;
    v75 = v228;
    v77 = v7;
    v78 = v219 + (v219 < &g_1);
    v79 = v220;
    v80 = v221;
    memcpy(&v81, &v170, 464);
    v129 = v222;
    v130 = v2;
    v132 = v4;
    v133 = v223;
    v134 = v0;
    v136 = v1;
    v229 = v25;
    if v229 == *((&v22 as &char + 8) as &i64) {
        v23 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v229 * 592 + v24, &v71, 592);
    v25 = v229 + &g_1 as &u8;
    memcpy(a0, &v9, 712);
    return a0;
}
