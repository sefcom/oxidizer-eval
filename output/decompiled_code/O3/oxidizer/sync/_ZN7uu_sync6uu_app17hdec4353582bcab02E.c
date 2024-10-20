fn uu_sync::uu_app(a0: u32) -> u64 {
    let v0: i16;  // [sp-0xa5c]
    let v1: i8;  // [sp-0xa5a]
    let v2: i64;  // [sp-0xa58]
    let v3: i64;  // [sp-0xa50]
    let v4: i128;  // [sp-0xa48]
    let v5: i64;  // [sp-0xa38]
    let v6: i128;  // [sp-0xa28]
    let v7: i128;  // [sp-0xa18]
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
    let v20: i64;  // [sp-0x990], Other Possible Types: struct16
    let v21: i64;  // [sp-0x988]
    let v22: i128;  // [bp-0x980]
    let v23: struct16;  // [sp-0x978]
    let v24: i64;  // [sp-0x970]
    let v25: i128;  // [bp-0x968]
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
    let v41: i128;  // [sp-0x8a8]
    let v42: i64;  // [sp-0x898]
    let v43: i128;  // [sp-0x890]
    let v44: i64;  // [sp-0x880]
    let v45: i128;  // [sp-0x878]
    let v46: i64;  // [sp-0x868]
    let v47: i128;  // [sp-0x860]
    let v48: i64;  // [sp-0x850]
    let v49: i64;  // [sp-0x848]
    let v50: i64;  // [sp-0x840]
    let v51: i64;  // [sp-0x828]
    let v52: i128;  // [sp-0x820]
    let v53: i64;  // [sp-0x800]
    let v54: i64;  // [sp-0x7e8]
    let v55: i64;  // [sp-0x7e0]
    let v56: i64;  // [sp-0x7d8]
    let v57: i64;  // [sp-0x7d0]
    let v58: i64;  // [sp-0x7c8]
    let v59: i64;  // [sp-0x7c0]
    let v60: i64;  // [bp-0x7b8]
    let v61: i64;  // [bp-0x7b4]
    let v62: i32;  // [sp-0x7b0]
    let v63: i16;  // [bp-0x7ac]
    let v64: i16;  // [sp-0x7ab]
    let v65: i8;  // [sp-0x7a9]
    let v66: i8;  // [bp-0x778]
    let v67: i8;  // [bp-0x770]
    let v68: i8;  // [bp-0x73c]
    let v69: i8;  // [bp-0x734]
    let v70: i192;  // [sp-0x728], Other Possible Types: Enum
    let v71: i64;  // [sp-0x720]
    let v72: i64;  // [sp-0x718]
    let v73: i64;  // [sp-0x710]
    let v74: i64;  // [sp-0x708]
    let v75: i64;  // [sp-0x700]
    let v76: i64;  // [sp-0x6f8]
    let v77: i64;  // [sp-0x6f0]
    let v78: i64;  // [sp-0x6e8]
    let v79: i64;  // [bp-0x6e0]
    let v80: i64;  // [sp-0x6d8]
    let v81: i64;  // [sp-0x6d0]
    let v82: i128;  // [bp-0x6c8]
    let v83: struct16;  // [sp-0x6c0], Other Possible Types: i64
    let v84: i64;  // [sp-0x6b8]
    let v85: i128;  // [bp-0x6b0]
    let v86: struct16;  // [sp-0x6a8]
    let v87: i64;  // [sp-0x6a0]
    let v88: i128;  // [bp-0x698]
    let v89: i64;  // [sp-0x688]
    let v90: i128;  // [sp-0x680]
    let v91: i64;  // [sp-0x670]
    let v92: i128;  // [sp-0x668]
    let v93: i64;  // [sp-0x658]
    let v94: i128;  // [sp-0x650]
    let v95: i64;  // [sp-0x640]
    let v96: i128;  // [sp-0x638]
    let v97: i64;  // [sp-0x628]
    let v98: i64;  // [sp-0x620]
    let v99: i64;  // [sp-0x618]
    let v100: i64;  // [sp-0x610]
    let v101: i128;  // [bp-0x608]
    let v102: i64;  // [sp-0x600]
    let v103: i64;  // [sp-0x5f8]
    let v104: i128;  // [bp-0x5f0]
    let v105: i64;  // [sp-0x5e8]
    let v106: i128;  // [bp-0x5e0]
    let v107: i128;  // [bp-0x5d8]
    let v108: i64;  // [sp-0x5d0]
    let v109: i64;  // [sp-0x5c8]
    let v110: i128;  // [bp-0x5c0]
    let v111: i64;  // [sp-0x5b8]
    let v112: i64;  // [sp-0x5b0]
    let v113: i128;  // [bp-0x5a8]
    let v114: i64;  // [sp-0x5a0]
    let v115: i64;  // [sp-0x598]
    let v116: i128;  // [bp-0x590]
    let v117: i64;  // [sp-0x588]
    let v118: i64;  // [sp-0x580]
    let v119: i64;  // [sp-0x578]
    let v120: i64;  // [sp-0x570]
    let v121: i64;  // [sp-0x558]
    let v122: i64;  // [sp-0x540]
    let v123: i64;  // [sp-0x530]
    let v124: i64;  // [sp-0x528]
    let v125: i64;  // [sp-0x518]
    let v126: i64;  // [sp-0x510]
    let v127: i64;  // [sp-0x508]
    let v128: i64;  // [sp-0x500]
    let v129: i128;  // [bp-0x4f8]
    let v130: i64;  // [sp-0x4f0]
    let v131: i64;  // [bp-0x4e8]
    let v132: i64;  // [bp-0x4e4]
    let v133: i32;  // [sp-0x4e0]
    let v134: i8;  // [bp-0x4dc]
    let v135: i16;  // [sp-0x4db]
    let v136: i8;  // [sp-0x4d9]
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
    let v148: i32;  // [bp-0x464]
    let v149: i128;  // [sp-0x458], Other Possible Types: struct24
    let v150: i128;  // [bp-0x448]
    let v151: i8;  // [bp-0x438]
    let v152: i8;  // [bp-0x428]
    let v153: i8;  // [bp-0x420]
    let v154: i8;  // [bp-0x418]
    let v155: i8;  // [bp-0x410]
    let v156: i8;  // [bp-0x408]
    let v157: i64;  // [sp-0x2a0]
    let v158: i128;  // [sp-0x298]
    let v159: i8;  // [bp-0x238]
    let v160: i8;  // [bp-0x230]
    let v161: i8;  // [bp-0x220]
    let v162: i8;  // [bp-0x218]
    let v163: i8;  // [bp-0x214]
    let v164: i8;  // [bp-0x20b]
    let v165: i8;  // [bp-0x209]
    let v166: i128;  // [sp-0x208]
    let v168: i128;  // xmm0
    let v169: i64;  // rcx
    let v170: i64;  // rdx
    let v171: i64;  // rbx
    let v172: i64;  // rax
    let v173: i64;  // rax
    let v174: i64;  // rcx
    let v175: i64;  // rbx
    let v176: i64;  // r14
    let v177: i64;  // rbp
    let v178: i64;  // r15
    let v180: i64;  // rbx
    let v181: i64;  // rcx
    let v182: i32;  // r12d
    let v183: i64;  // rax
    let v185: i64;  // r13
    let v186: i64;  // rbx
    let v187: i64;  // rax
    let v188: i64;  // rcx
    let v189: i64;  // rdx
    let v190: i64;  // rbx
    let v191: i64;  // r15
    let v192: i64;  // r14
    let v193: i64;  // rbp
    let v194: i64;  // r12
    let v195: i64;  // rbx
    let v196: i64;  // rcx
    let v197: i32;  // r13d
    let v198: i64;  // rax
    let v200: i64;  // rbx
    let v201: i64;  // rbx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v168 = g_4e0ef0;
    v79 = 0;
    v82 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v96 = 0;
    v70 = 0;
    v72 = &g_1;
    v73 = 0;
    v74 = &g_1;
    v77 = 0;
    v78 = &g_1;
    v81 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = &g_1;
    v97 = &g_1;
    v98 = 0;
    v99 = 0x8000000000000000;
    v102 = 0x8000000000000000;
    v105 = 0x8000000000000000;
    v108 = 0x8000000000000000;
    v111 = 0x8000000000000000;
    v114 = 0x8000000000000000;
    v117 = 0x8000000000000000;
    v120 = 0x8000000000000000;
    v121 = 0x8000000000000000;
    v122 = 0x8000000000000000;
    v124 = 0x8000000000000000;
    v126 = 0x8000000000000000;
    v129 = v168;
    v131 = 0;
    v137 = 0;
    v138 = &g_4187c6;
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
    v9 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v169 = v10;
    v170 = v11;
    *((v169 + v170 + &g_11 as &u8) as &i128) = 134788810610941286403264457444896109426;
    *((v169 + v170 + &g_1 as &u8) as &i128) = 152058687701862461274720074040197801061;
    *((v169 + v170) as &i128) = 138755724197972041737061860491289065811;
    v11 = v170 + &g_20 as &u8;
    v149 = *((&v9 as &char + 8) as &i128);
    if v105 != 0x8000000000000000 {
        v9 = v149;
    }
    v105 = v9;
    v106 = v9;
    memcpy(&v9, &v70, 712);
    v149 = uucore::format_usage(&g_4187fb, &g_11);
    v171 = v149;
    if v171 != 0x8000000000000000 {
        v70 = *((&v149 as &char + 8) as &i128);
    }
    v51 = v171;
    v52 = v70;
    memcpy(&v70, &v9, 700);
    v147 = 549755814016 | v68;
    v148 = v69;
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
    v43 = 0;
    v45 = 0;
    v47 = 0;
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
    v42 = &g_1;
    v44 = &g_1;
    v46 = &g_1;
    v48 = &g_1;
    v49 = 0;
    v50 = 0x8000000000000000;
    v51 = 0x8000000000000000;
    v3 = 9223372036854775809;
    v53 = 9223372036854775809;
    v54 = &g_41879f;
    v55 = &g_1;
    v56 = &g_41879f;
    v57 = &g_1;
    v58 = 0;
    v60 = 4785074604081254;
    v62 = 0;
    v63 = 3337;
    v20 = alloc::raw_vec::RawVec<T,A>::grow_one();
    v172 = v21;
    *(v172 as &&i64) = &g_40fdd0;
    *((v172 + &g_1 as &u8) as &&i64) = &g_1;
    v22 = &g_1;
    memcpy(&v149, &v9, 592);
    v9 = 0;
    v10 = &g_1;
    v11 = 0;
    v9 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 69);
    v173 = v10;
    v174 = v11;
    *((v173 + v174 + 48) as &i128) = 43134832435999667020298419290607482222;
    *((v173 + v174 + &g_20 as &u8) as &i128) = 139964367986063549675026851335518580329;
    *((v173 + v174 + &g_1 as &u8) as &i128) = 129539661916787571633580624025789756531;
    *((v173 + v174) as &i128) = 161434358701409857143542409257764682099;
    *((v173 + v174 + &g_31 as &u8) as &i64) = 2988539049303634807;
    v11 = v174 + 69;
    v175 = v9;
    v166 = *((&v9 as &char + 8) as &i128);
    if v175 != 0x8000000000000000 {
        v9 = v166;
    }
    v157 = v175;
    v158 = v9;
    v176 = v149;
    v177 = *((&v149 as &char + 8) as &i64);
    v6 = v150;
    v7 = v151;
    v8 = v152;
    v178 = v153;
    v180 = v155;
    memcpy(&v166, &v156, 464);
    v181 = v159;
    v4 = v160;
    v5 = v161;
    v182 = v162;
    v2 = v163;
    v0 = v164;
    v1 = v165;
    if !(!v72 || !v181 && v182 == 0x110000) {
        v183 = v73;
        v176 += v176 < &g_1;
        v73 = v183 + &g_1 as &u8;
    }
    if !v178 {
        v180 = v142;
        v185 = v141;
    }
    v9 = v176;
    v10 = v177;
    v11 = v6;
    v13 = v7;
    v15 = v8;
    v16 = v178 + (v178 < &g_1);
    v17 = v185;
    v18 = v180;
    memcpy(&v19, &v166, 464);
    v56 = v181;
    v57 = v4;
    v59 = v5;
    v60 = v182;
    v61 = v2;
    v63 = &g_1;
    v64 = v0;
    v65 = v1;
    v186 = v88;
    if v186 == *((&v85 as &char + 8) as &i64) {
        v86 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v186 * 592 + v87, &v9, 592);
    v88 = v186 + &g_1 as &u8;
    memcpy(&v9, &v70, 712);
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v94 = 0;
    v96 = 0;
    v98 = 0;
    v101 = 0;
    v104 = 0;
    v107 = 0;
    v110 = 0;
    v113 = 0;
    v116 = 0;
    v70 = 0;
    v72 = 0;
    v75 = 0;
    v77 = 0;
    v80 = &g_1;
    v83 = 0;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v100 = &g_1;
    v103 = &g_1;
    v106 = &g_1;
    v109 = &g_1;
    v112 = &g_1;
    v115 = &g_1;
    v118 = &g_1;
    v119 = 0;
    v120 = 0x8000000000000000;
    v121 = 0x8000000000000000;
    v123 = v3;
    v125 = &g_40fdd0;
    v126 = &g_1;
    v127 = &g_40fdd0;
    v128 = &g_1;
    v129 = 0;
    v131 = 4785074604081252;
    v133 = 0;
    v134 = 3337;
    v83 = alloc::raw_vec::RawVec<T,A>::grow_one();
    v187 = v84;
    *(v187 as &&i64) = &g_41879f;
    *((v187 + &g_1 as &u8) as &&i64) = &g_1;
    v85 = &g_1;
    memcpy(&v149, &v70, 592);
    v70 = 0;
    v71 = &g_1;
    v72 = 0;
    v70 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v188 = v71;
    v189 = v72;
    *((v188 + v189 + &g_20 as &u8) as &i128) = 160117097634221315955151528543329283360;
    *((v188 + v189 + &g_1 as &u8) as &i128) = 133449257835599873441635619081856054369;
    *((v188 + v189) as &i128) = 133091010190595611954193674413552859507;
    *((v188 + v189 + &g_20 as &u8) as &i64) = 2988539049303636085;
    v72 = v189 + &g_31 as &u8;
    v190 = v70;
    v166 = *((&v70 as &char + 8) as &i128);
    if v190 != 0x8000000000000000 {
        v70 = v166;
    }
    v157 = v190;
    v158 = v70;
    v191 = v149;
    v192 = *((&v149 as &char + 8) as &i64);
    v6 = v150;
    v7 = v151;
    v8 = v152;
    v193 = v153;
    v194 = v154;
    v195 = v155;
    memcpy(&v166, &v156, 464);
    v196 = v159;
    v4 = v160;
    v5 = v161;
    v197 = v162;
    v2 = v163;
    v0 = v164;
    v1 = v165;
    if !(!v11 || !v196 && v197 == 0x110000) {
        v198 = v12;
        v191 += v191 < &g_1;
        v12 = v198 + &g_1 as &u8;
    }
    if !v193 {
        v194 = v66;
        v195 = v67;
    }
    v70 = v191;
    v71 = v192;
    v72 = v6;
    v74 = v7;
    v76 = v8;
    v77 = v193 + (v193 < &g_1);
    v78 = v194;
    v79 = v195;
    memcpy(&v80, &v166, 464);
    v127 = v196;
    v128 = v4;
    v130 = v5;
    v131 = v197;
    v132 = v2;
    v134 = &g_1;
    v135 = v0;
    v136 = v1;
    v200 = v25;
    if v200 == *((&v22 as &char + 8) as &i64) {
        v23 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v200 * 592 + v24, &v70, 592);
    v25 = v200 + &g_1 as &u8;
    memcpy(&v70, &v9, 712);
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
    v43 = 0;
    v45 = 0;
    v47 = 0;
    v9 = 0;
    v11 = 0;
    v14 = 0;
    v16 = &g_1;
    v17 = v141;
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
    v42 = &g_1;
    v44 = &g_1;
    v46 = &g_1;
    v48 = &g_1;
    v49 = 0;
    v50 = 0x8000000000000000;
    v51 = 0x8000000000000000;
    v53 = v3;
    v54 = &g_4187aa;
    v55 = &g_1;
    v56 = 0;
    v58 = 0;
    v60 = 0x11000000110000;
    v62 = 0;
    v63 = 513;
    v201 = v88;
    if v201 == *((&v85 as &char + 8) as &i64) {
        v86 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v201 * 592 + v87, &v9, 592);
    v88 = v201 + &g_1 as &u8;
    memcpy(a0, &v70, 712);
    return a0;
}
