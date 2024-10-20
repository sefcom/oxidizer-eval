fn uu_nproc::uu_app(a0: i64) -> u64 {
    let v0: i128;  // [sp-0xa68]
    let v1: i8;  // [sp-0xa66]
    let v2: i64;  // [sp-0xa58]
    let v3: i64;  // [sp-0xa48]
    let v4: i32;  // [sp-0xa40]
    let v5: i128;  // [sp-0xa38]
    let v6: i64;  // [bp-0xa28]
    let v7: i64;  // [sp-0xa18]
    let v8: i64;  // [sp-0xa08]
    let v9: i64;  // [sp-0xa00]
    let v10: i64;  // [sp-0x9f8], Other Possible Types: Enum
    let v11: i64;  // [sp-0x9f0]
    let v12: i64;  // [sp-0x9e8]
    let v13: i64;  // [sp-0x9e0]
    let v14: i64;  // [sp-0x9d8]
    let v15: i64;  // [sp-0x9d0]
    let v16: i64;  // [sp-0x9c8]
    let v17: i64;  // [sp-0x9c0]
    let v18: i64;  // [sp-0x9b8]
    let v19: i128;  // [bp-0x9b0]
    let v20: i64;  // [sp-0x9a8]
    let v21: i64;  // [sp-0x9a0]
    let v22: i128;  // [bp-0x998]
    let v23: i64;  // [sp-0x990]
    let v24: i64;  // [sp-0x988]
    let v25: i128;  // [sp-0x980]
    let v26: struct16;  // [sp-0x978]
    let v27: i64;  // [sp-0x970]
    let v28: i128;  // [bp-0x968]
    let v29: i64;  // [sp-0x958]
    let v30: i128;  // [sp-0x950]
    let v31: i64;  // [sp-0x940]
    let v32: i128;  // [sp-0x938]
    let v33: i64;  // [sp-0x928]
    let v34: i128;  // [sp-0x920]
    let v35: i64;  // [sp-0x910]
    let v36: i128;  // [sp-0x908]
    let v37: i64;  // [sp-0x8f8]
    let v38: i128;  // [sp-0x8f0]
    let v39: i64;  // [sp-0x8e8]
    let v40: i64;  // [sp-0x8e0]
    let v41: i128;  // [bp-0x8d8]
    let v42: i64;  // [sp-0x8d0]
    let v43: i64;  // [sp-0x8c8]
    let v44: i128;  // [bp-0x8c0]
    let v45: i64;  // [sp-0x8b8]
    let v46: i128;  // [bp-0x8b0]
    let v47: i128;  // [bp-0x8a8]
    let v48: i64;  // [sp-0x8a0]
    let v49: i64;  // [sp-0x898]
    let v50: i64;  // [bp-0x890]
    let v51: i64;  // [sp-0x888]
    let v52: i64;  // [sp-0x880]
    let v53: i128;  // [bp-0x878]
    let v54: i64;  // [sp-0x870]
    let v55: i64;  // [sp-0x868]
    let v56: i128;  // [bp-0x860]
    let v57: i64;  // [sp-0x858]
    let v58: i64;  // [sp-0x850]
    let v59: i64;  // [sp-0x848]
    let v60: i64;  // [sp-0x840]
    let v61: i64;  // [sp-0x828]
    let v62: i64;  // [sp-0x810]
    let v63: i64;  // [sp-0x800]
    let v64: i64;  // [sp-0x7f8]
    let v65: i64;  // [sp-0x7e8]
    let v66: i64;  // [sp-0x7e0]
    let v67: i64;  // [sp-0x7d8]
    let v68: i128;  // [sp-0x7d0]
    let v69: i128;  // [bp-0x7c8]
    let v70: i64;  // [sp-0x7c0]
    let v71: i32;  // [bp-0x7b8]
    let v72: i64;  // [bp-0x7b4]
    let v73: i32;  // [sp-0x7b0]
    let v74: i32;  // [bp-0x7ac]
    let v75: i64;  // [sp-0x7a8]
    let v76: i64;  // [sp-0x798]
    let v77: i64;  // [sp-0x790]
    let v78: i64;  // [sp-0x788]
    let v79: i64;  // [sp-0x778]
    let v80: i8;  // [bp-0x770]
    let v81: i64;  // [sp-0x768]
    let v82: i64;  // [sp-0x758]
    let v83: i64;  // [sp-0x748]
    let v84: i32;  // [sp-0x740]
    let v85: i64;  // [sp-0x73c]
    let v86: i32;  // [bp-0x734]
    let v87: i64;  // [sp-0x728], Other Possible Types: Enum
    let v88: i64;  // [sp-0x720]
    let v89: i128;  // [sp-0x718]
    let v90: i64;  // [sp-0x710]
    let v91: i128;  // [bp-0x708]
    let v92: i64;  // [sp-0x700]
    let v93: i64;  // [sp-0x6f8]
    let v94: i64;  // [sp-0x6f0]
    let v95: i64;  // [sp-0x6e8]
    let v96: i64;  // [sp-0x6e0]
    let v97: i64;  // [sp-0x6d8]
    let v98: i64;  // [sp-0x6c0]
    let v99: i64;  // [sp-0x6b8]
    let v100: i128;  // [sp-0x6b0]
    let v101: struct16;  // [sp-0x6a8]
    let v102: i64;  // [sp-0x6a0]
    let v103: i64;  // [bp-0x698]
    let v104: i64;  // [sp-0x688]
    let v105: i128;  // [sp-0x680]
    let v106: i64;  // [sp-0x670]
    let v107: i128;  // [sp-0x668]
    let v108: i64;  // [sp-0x658]
    let v109: i128;  // [sp-0x650]
    let v110: i64;  // [sp-0x640]
    let v111: i128;  // [sp-0x638]
    let v112: i64;  // [sp-0x628]
    let v113: i128;  // [sp-0x620]
    let v114: i64;  // [sp-0x610]
    let v115: i128;  // [sp-0x608]
    let v116: i64;  // [sp-0x5f8]
    let v117: i128;  // [sp-0x5f0]
    let v118: i64;  // [sp-0x5e0]
    let v119: i128;  // [sp-0x5d8]
    let v120: i64;  // [sp-0x5c8]
    let v121: i128;  // [sp-0x5c0]
    let v122: i64;  // [sp-0x5b0]
    let v123: i128;  // [sp-0x5a8]
    let v124: i64;  // [sp-0x598]
    let v125: i128;  // [sp-0x590]
    let v126: i64;  // [sp-0x580]
    let v127: i64;  // [sp-0x578]
    let v128: i64;  // [sp-0x570]
    let v129: i128;  // [sp-0x568]
    let v130: i64;  // [sp-0x558]
    let v131: i128;  // [sp-0x550]
    let v132: i64;  // [sp-0x530]
    let v133: i64;  // [sp-0x518]
    let v134: i64;  // [sp-0x510]
    let v135: i64;  // [sp-0x508]
    let v136: i128;  // [sp-0x500]
    let v137: i64;  // [sp-0x4f8]
    let v138: i64;  // [sp-0x4f0]
    let v139: i32;  // [bp-0x4e8]
    let v140: i64;  // [bp-0x4e4]
    let v141: i32;  // [sp-0x4e0]
    let v142: i8;  // [bp-0x4dc]
    let v143: i16;  // [sp-0x4db]
    let v144: i8;  // [sp-0x4d9]
    let v145: i8;  // [bp-0x4a8]
    let v146: i8;  // [bp-0x4a0]
    let v147: i8;  // [bp-0x46c]
    let v148: i8;  // [bp-0x464]
    let v149: i192;  // [bp-0x458], Other Possible Types: Enum, struct24
    let v150: i64;  // [sp-0x450]
    let v151: i64;  // [sp-0x448]
    let v152: i8;  // [bp-0x438]
    let v153: i8;  // [bp-0x428]
    let v154: i8;  // [bp-0x420]
    let v155: i8;  // [bp-0x418]
    let v156: i8;  // [bp-0x410]
    let v157: i8;  // [bp-0x408]
    let v158: i64;  // [sp-0x2a0]
    let v159: i128;  // [sp-0x298]
    let v160: i8;  // [bp-0x238]
    let v161: i8;  // [bp-0x230]
    let v162: i8;  // [bp-0x220]
    let v163: i8;  // [bp-0x218]
    let v164: i8;  // [bp-0x214]
    let v165: i8;  // [bp-0x20c]
    let v166: i128;  // [sp-0x208]
    let v167: i128;  // [sp-0x1f8]
    let v168: i64;  // [sp-0x1e8]
    let v170: i128;  // xmm0
    let v171: i64;  // r15
    let v172: i64;  // rbx
    let v173: i64;  // rax
    let v174: i64;  // rdx
    let v175: i64;  // rbx
    let v176: i64;  // r14
    let v177: i64;  // r12
    let v178: i64;  // rdx
    let v179: i32;  // r15d
    let v180: i64;  // rax
    let v182: i64;  // rbp
    let v183: i64;  // rbx
    let v184: i64;  // rcx
    let v185: i64;  // rdx
    let v186: i64;  // rbx
    let v187: i64;  // r13
    let v188: i64;  // r14
    let v189: i64;  // rbp
    let v190: i64;  // r12
    let v191: i64;  // rbx
    let v192: i64;  // rdx
    let v193: i32;  // r15d
    let v194: i64;  // r13
    let v196: i64;  // rcx
    let v198: i128;  // xmm1
    let v199: i64;  // rbx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v170 = g_4e1f68;
    v19 = 0;
    v22 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v36 = 0;
    v10 = 0;
    v12 = &g_1;
    v13 = 0;
    v14 = &g_1;
    v17 = 0;
    v18 = &g_1;
    v21 = &g_1;
    v24 = &g_1;
    v25 = 0;
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v42 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = 0x8000000000000000;
    v51 = 0x8000000000000000;
    v54 = 0x8000000000000000;
    v57 = 0x8000000000000000;
    v60 = 0x8000000000000000;
    v61 = 0x8000000000000000;
    v62 = 0x8000000000000000;
    v64 = 0x8000000000000000;
    v66 = 0x8000000000000000;
    v69 = v170;
    v71 = 0;
    v75 = 0;
    v76 = &g_41856d;
    v77 = &g_1;
    v78 = 0;
    v79 = 0;
    v81 = 0;
    v82 = 0;
    v83 = 0;
    v84 = 0x110000;
    v86 = 0;
    v85 = 0;
    v87 = 0;
    v88 = &g_1;
    v89 = 0;
    v87 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 215);
    v171 = v89;
    memcpy(v88 + v171, &g_418573, 215);
    v89 = v171 + 215;
    v149 = *((&v87 as &char + 8) as &i128);
    if v45 != 0x8000000000000000 {
        v87 = v149;
    }
    v45 = v87;
    v46 = v87;
    memcpy(&v87, &v10, 712);
    v149 = uucore::format_usage(&g_41864a, &g_1);
    v172 = v149;
    if v172 != 0x8000000000000000 {
        v10 = *((&v149 as &char + 8) as &i128);
    }
    v130 = v172;
    v131 = v10;
    memcpy(&v10, &v87, 700);
    v85 = 549755814016 | v147;
    v86 = v148;
    v100 = 0;
    v103 = 0;
    v105 = 0;
    v107 = 0;
    v109 = 0;
    v111 = 0;
    v113 = 0;
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v87 = 0;
    v89 = 0;
    v92 = 0;
    v94 = 0;
    v97 = &g_1;
    v98 = 0;
    v99 = &g_1;
    v102 = &g_1;
    v104 = &g_1;
    v106 = &g_1;
    v108 = &g_1;
    v110 = &g_1;
    v112 = &g_1;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v126 = &g_1;
    v127 = 0;
    v128 = 0x8000000000000000;
    v130 = 0x8000000000000000;
    v132 = 9223372036854775809;
    v133 = &g_418564;
    v134 = &g_1;
    v135 = &g_418564;
    v136 = &g_1;
    v137 = 0;
    v139 = 0x11000000110000;
    v141 = 0;
    v142 = 3337;
    v149 = 0;
    v150 = &g_1;
    v151 = 0;
    v149 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v8 = 9223372036854775809;
    v173 = v150;
    v174 = v151;
    *((v173 + v174 + &g_11 as &u8) as &i128) = 134856676109208567977803968604325375074;
    *((v173 + v174 + &g_1 as &u8) as &i128) = 129498021026635398572420224547325112096;
    *((v173 + v174) as &i128) = 152058409850546179995660191613139382896;
    *((v173 + v174 + &g_21 as &u8) as &i8) = 109;
    v151 = v174 + &g_31 as &u8;
    v166 = *((&v149 as &char + 8) as &i128);
    v149 = v149;
    if v128 != 0x8000000000000000 {
        v149 = v166;
        v149 = v149;
    }
    v149 = v149;
    v128 = v149;
    v129 = v149;
    v175 = v87;
    v176 = v88;
    v166 = v89;
    v167 = v91;
    v168 = v93;
    v177 = v94;
    memcpy(&v149, &v97, 464);
    v178 = v135;
    v5 = v136;
    v6 = v138;
    v9 = *((&v139 as &char + 4) as &i64);
    v0 = v143;
    v1 = v144;
    if !v12 {
        goto LABEL_481ae4;
    } else {
        v179 = v139;
        if v178 || v179 != 0x110000 {
            v180 = v13;
            v175 += v175 < &g_1;
            v13 = v180 + &g_1 as &u8;
        } else {
LABEL_481ae4:
        }
    }
    v95 = v95;
    if !v177 {
        v182 = v80;
        v95 = v79;
    }
    v87 = v175;
    v88 = v176;
    v89 = v166;
    v91 = v167;
    v93 = v168;
    v94 = v177 + (v177 < &g_1);
    v95 = v95;
    v96 = v182;
    memcpy(&v97, &v149, 464);
    v135 = v178;
    v136 = v5;
    v138 = v6;
    v139 = v179;
    v140 = v9;
    v142 = &g_1;
    v143 = v0;
    v144 = v1;
    v183 = v28;
    if v183 == *((&v25 as &char + 8) as &i64) {
        v26 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v183 * 592 + v27, &v87, 592);
    v28 = v183 + &g_1 as &u8;
    memcpy(&v87, &v10, 712);
    v25 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v47 = 0;
    v50 = 0;
    v53 = 0;
    v56 = 0;
    v10 = 0;
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v20 = &g_1;
    v23 = 0;
    v24 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v40 = &g_1;
    v43 = &g_1;
    v46 = &g_1;
    v49 = &g_1;
    v52 = &g_1;
    v55 = &g_1;
    v58 = &g_1;
    v59 = 0;
    v60 = 0x8000000000000000;
    v61 = 0x8000000000000000;
    v63 = v8;
    v65 = &g_418567;
    v66 = &g_1;
    v67 = &g_418567;
    v68 = &g_1;
    v69 = 0;
    v71 = 0x11000000110000;
    v73 = 0;
    v74 = 3337;
    *(v49 as &&i64) = &g_41868a;
    *((v49 + &g_1 as &u8) as &&i64) = &g_1;
    v48 = &g_1;
    v49 = __rust_alloc(&g_1, &g_1);
    v50 = &g_1;
    memcpy(&v149, &v10, 592);
    v10 = 0;
    v11 = &g_1;
    v12 = 0;
    v10 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v184 = v11;
    v185 = v12;
    *((v184 + v185) as &i128) = 131761309679923295863788990669991602025;
    *((v184 + v185 + &g_1 as &u8) as &i32) = 1936028271;
    v12 = v185 + &g_11 as &u8;
    v186 = v10;
    v166 = *((&v10 as &char + 8) as &i128);
    if v186 != 0x8000000000000000 {
        v10 = v166;
    }
    v158 = v186;
    v159 = v10;
    v187 = v149;
    v188 = v150;
    v5 = v151;
    v6 = v152;
    v7 = v153;
    v189 = v154;
    v190 = v155;
    v191 = v156;
    memcpy(&v166, &v157, 464);
    v192 = v160;
    v0 = v161;
    v2 = v162;
    v193 = v163;
    v3 = v164;
    v4 = v165;
    if !(!v89 || !v192 && v193 == 0x110000) {
        v196 = v90;
        v90 = v196 + &g_1 as &u8;
    }
    if !v189 {
        v190 = v145;
        v191 = v146;
    }
    v10 = v194;
    v11 = v188;
    v198 = v6;
    v12 = v5;
    v14 = v198;
    v16 = v7;
    v17 = v189 + (v189 < &g_1);
    v18 = v190;
    v19 = v191;
    memcpy(&v20, &v166, 464);
    v67 = v192;
    v68 = v0;
    v70 = v2;
    v71 = v193;
    v72 = v3;
    v74 = v4;
    v199 = v103;
    if v199 == *((&v100 as &char + 8) as &i64) {
        v101 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v199 * 592 + v102, &v10, 592);
    v103 = v199 + &g_1 as &u8;
    memcpy(a0, &v87, 712);
    return a0;
}
