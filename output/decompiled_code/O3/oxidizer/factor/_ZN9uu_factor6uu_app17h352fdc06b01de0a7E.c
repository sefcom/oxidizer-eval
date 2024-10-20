fn uu_factor::uu_app(a0: u32) -> u64 {
    let v0: i16;  // [sp-0x814]
    let v1: i8;  // [sp-0x812]
    let v2: i64;  // [sp-0x810]
    let v3: i128;  // [sp-0x808]
    let v4: i128;  // [sp-0x7f8]
    let v5: i64;  // [sp-0x7e8]
    let v6: i128;  // [sp-0x7d8]
    let v7: i64;  // [sp-0x7c8]
    let v8: i64;  // [sp-0x7b0]
    let v9: i64;  // [sp-0x7a8], Other Possible Types: Enum
    let v10: i64;  // [sp-0x7a0]
    let v11: i64;  // [sp-0x798]
    let v12: i64;  // [sp-0x790]
    let v13: i8;  // [bp-0x788]
    let v14: i64;  // [sp-0x780]
    let v15: i64;  // [sp-0x778]
    let v16: i64;  // [sp-0x770]
    let v17: i64;  // [bp-0x768]
    let v18: i64;  // [sp-0x760]
    let v19: i64;  // [sp-0x758]
    let v20: i64;  // [sp-0x740]
    let v21: i64;  // [sp-0x738]
    let v22: i128;  // [sp-0x730]
    let v23: struct16;  // [sp-0x728]
    let v24: i64;  // [sp-0x720]
    let v25: i64;  // [bp-0x718]
    let v26: i64;  // [sp-0x708]
    let v27: i128;  // [sp-0x700]
    let v28: i64;  // [sp-0x6f0]
    let v29: i128;  // [sp-0x6e8]
    let v30: i64;  // [sp-0x6d8]
    let v31: i128;  // [sp-0x6d0]
    let v32: i64;  // [sp-0x6c0]
    let v33: i128;  // [sp-0x6b8]
    let v34: i64;  // [sp-0x6a8]
    let v35: i128;  // [sp-0x6a0]
    let v36: i64;  // [sp-0x690]
    let v37: i128;  // [sp-0x688]
    let v38: i64;  // [sp-0x678]
    let v39: i128;  // [sp-0x670]
    let v40: i64;  // [sp-0x660]
    let v41: i128;  // [sp-0x658]
    let v42: i64;  // [sp-0x648]
    let v43: i128;  // [sp-0x640]
    let v44: i64;  // [sp-0x630]
    let v45: i128;  // [sp-0x628]
    let v46: i64;  // [sp-0x618]
    let v47: i128;  // [sp-0x610]
    let v48: i64;  // [sp-0x600]
    let v49: i64;  // [sp-0x5f8]
    let v50: i64;  // [sp-0x5f0]
    let v51: i64;  // [sp-0x5d8]
    let v52: i128;  // [sp-0x5d0]
    let v53: i64;  // [sp-0x5b0]
    let v54: i64;  // [sp-0x598]
    let v55: i64;  // [sp-0x590]
    let v56: i64;  // [sp-0x588]
    let v57: i128;  // [sp-0x580]
    let v58: i64;  // [sp-0x578]
    let v59: i64;  // [sp-0x570]
    let v60: i64;  // [bp-0x568]
    let v61: i64;  // [bp-0x564]
    let v62: i32;  // [sp-0x560]
    let v63: i16;  // [bp-0x55c]
    let v64: i16;  // [sp-0x55b]
    let v65: i8;  // [sp-0x559]
    let v66: i8;  // [bp-0x528]
    let v67: i8;  // [bp-0x520]
    let v68: i8;  // [bp-0x4ec]
    let v69: i8;  // [bp-0x4e4]
    let v70: i64;  // [sp-0x4d8]
    let v71: i64;  // [sp-0x4d0]
    let v72: i64;  // [sp-0x4c8]
    let v73: i64;  // [sp-0x4c0]
    let v74: i128;  // [sp-0x4b8]
    let v75: i64;  // [sp-0x4b0]
    let v76: i64;  // [sp-0x4a8]
    let v77: i64;  // [sp-0x4a0]
    let v78: i64;  // [sp-0x498]
    let v79: i64;  // [bp-0x490]
    let v80: i64;  // [sp-0x488]
    let v81: i64;  // [sp-0x480]
    let v82: i128;  // [bp-0x478]
    let v83: i64;  // [sp-0x470]
    let v84: i64;  // [sp-0x468]
    let v85: i128;  // [sp-0x460]
    let v86: struct16;  // [sp-0x458]
    let v87: i64;  // [sp-0x450]
    let v88: i128;  // [bp-0x448]
    let v89: i64;  // [sp-0x438]
    let v90: i128;  // [sp-0x430]
    let v91: i64;  // [sp-0x420]
    let v92: i128;  // [sp-0x418]
    let v93: i64;  // [sp-0x408]
    let v94: i128;  // [sp-0x400]
    let v95: i64;  // [sp-0x3f0]
    let v96: i128;  // [sp-0x3e8]
    let v97: i64;  // [sp-0x3d8]
    let v98: i128;  // [sp-0x3d0]
    let v99: i64;  // [sp-0x3c8]
    let v100: i64;  // [sp-0x3c0]
    let v101: i128;  // [bp-0x3b8]
    let v102: i64;  // [sp-0x3b0]
    let v103: i64;  // [sp-0x3a8]
    let v104: i128;  // [bp-0x3a0]
    let v105: i64;  // [sp-0x398]
    let v106: i64;  // [bp-0x390]
    let v107: i128;  // [bp-0x388]
    let v108: i64;  // [sp-0x380]
    let v109: i64;  // [sp-0x378]
    let v110: i128;  // [bp-0x370]
    let v111: i64;  // [sp-0x368]
    let v112: i64;  // [sp-0x360]
    let v113: i128;  // [bp-0x358]
    let v114: i64;  // [sp-0x350]
    let v115: i64;  // [sp-0x348]
    let v116: i128;  // [bp-0x340]
    let v117: i64;  // [sp-0x338]
    let v118: i64;  // [sp-0x330]
    let v119: i64;  // [sp-0x328]
    let v120: i64;  // [sp-0x320]
    let v121: i64;  // [sp-0x308]
    let v122: i64;  // [sp-0x2f0]
    let v123: i64;  // [sp-0x2e0]
    let v124: i64;  // [sp-0x2d8]
    let v125: i64;  // [sp-0x2c8]
    let v126: i64;  // [sp-0x2c0]
    let v127: i64;  // [sp-0x2b8]
    let v128: i128;  // [sp-0x2b0]
    let v129: i128;  // [bp-0x2a8]
    let v130: i64;  // [sp-0x2a0]
    let v131: i32;  // [bp-0x298]
    let v132: i64;  // [bp-0x294]
    let v133: i32;  // [sp-0x290]
    let v134: i16;  // [bp-0x28c]
    let v135: i16;  // [sp-0x28b]
    let v136: i8;  // [sp-0x289]
    let v137: i64;  // [sp-0x288]
    let v138: i64;  // [sp-0x278]
    let v139: i64;  // [sp-0x270]
    let v140: i64;  // [sp-0x268]
    let v141: i64;  // [sp-0x258]
    let v142: i64;  // [sp-0x248]
    let v143: i64;  // [sp-0x238]
    let v144: i64;  // [sp-0x228]
    let v145: i32;  // [sp-0x220]
    let v146: i64;  // [sp-0x21c]
    let v147: i8;  // [bp-0x214]
    let v148: i192;  // [bp-0x208], Other Possible Types: Enum, struct24
    let v149: i64;  // [sp-0x200]
    let v150: i64;  // [sp-0x1f8]
    let v152: i128;  // xmm0
    let v153: i64;  // rcx
    let v154: i64;  // rsi
    let v155: i64;  // rbx
    let v156: i64;  // rbx
    let v157: i64;  // rax
    let v158: i64;  // rcx
    let v159: i64;  // r14
    let v160: i64;  // r13
    let v161: i64;  // rbx
    let v162: i64;  // rdx
    let v163: i32;  // r15d
    let v165: i64;  // rcx
    let v166: i64;  // r14
    let v168: i64;  // rbp
    let v169: i64;  // rbx
    let v170: i64;  // rax
    let v171: i64;  // rcx
    let v172: i64;  // r14
    let v173: i64;  // r15
    let v174: i64;  // rbp
    let v175: i64;  // rdx
    let v176: i32;  // r12d
    let v178: i64;  // rcx
    let v179: i64;  // r14
    let v181: i64;  // rbx
    let v182: i64;  // rbx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v152 = g_53f660;
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
    v129 = v152;
    v131 = 0;
    v137 = 0;
    v138 = &g_41e943;
    v139 = &g_1;
    v140 = 0;
    v141 = 0;
    v142 = 0;
    v143 = 0;
    v144 = 0;
    v145 = 0x110000;
    v147 = 0;
    v146 = 0;
    v9 = 0;
    v10 = &g_1;
    v11 = 0;
    v9 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_51);
    v153 = v10;
    v154 = v11;
    *((v153 + v154 + &g_41 as &u8) as &i128) = 61749176191344440261581406693389267744;
    *((v153 + v154 + &g_31 as &u8) as &i128) = 145464516777845461595810735837432866409;
    *((v153 + v154 + &g_21 as &u8) as &i128) = 132120274316559149098956519888652363337;
    *((v153 + v154 + &g_11 as &u8) as &i128) = 13531966315853059035243753755610805865;
    *((v153 + v154 + &g_1 as &u8) as &i128) = 137078693864357750192220910938153509222;
    *((v153 + v154) as &i128) = 43061936984850031351040519767914541648;
    v11 = v154 + &g_51 as &u8;
    v148 = *((&v9 as &char + 8) as &i128);
    if v105 != 0x8000000000000000 {
        v9 = v148;
    }
    v105 = v9;
    v106 = v9;
    memcpy(&v9, &v70, 712);
    v148 = uucore::format_usage(&g_41e9a9, &g_11);
    v155 = v148;
    if v155 != 0x8000000000000000 {
        v70 = *((&v148 as &char + 8) as &i128);
    }
    v51 = v155;
    v52 = v70;
    memcpy(&v70, &v9, 700);
    v146 = 1126484022657160 | v68;
    v147 = v69;
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
    v53 = 9223372036854775809;
    v54 = &g_41e93d;
    v55 = &g_1;
    v56 = 0;
    v58 = 0;
    v60 = 0x11000000110000;
    v62 = 0;
    v63 = 3329;
    v156 = v88;
    if v156 == *((&v85 as &char + 8) as &i64) {
        v86 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v156 * 592 + v87, &v9, 592);
    v88 = v156 + &g_1 as &u8;
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
    v123 = 9223372036854775809;
    v125 = &g_41e934;
    v126 = &g_1;
    v127 = &g_41e934;
    v128 = &g_1;
    v129 = 0;
    v131 = 4785074604081256;
    v133 = 0;
    v134 = 3337;
    v148 = 0;
    v149 = &g_1;
    v150 = 0;
    v148 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v8 = 9223372036854775809;
    v157 = v149;
    v158 = v150;
    *((v157 + v158 + &g_1 as &u8) as &i128) = 134742377678027796084457225924553632032;
    *((v157 + v158) as &i128) = 146760928890248940427635438917853475408;
    v150 = v158 + &g_11 as &u8;
    v3 = *((&v148 as &char + 8) as &i128);
    if v120 != 0x8000000000000000 {
        v148 = v3;
    }
    v120 = v148;
    v159 = v70;
    v160 = v71;
    v3 = v72;
    v4 = v74;
    v5 = v76;
    v161 = v77;
    memcpy(&v148, &v80, 464);
    v162 = v127;
    v6 = v128;
    v7 = v130;
    v2 = *((&v131 as &char + 4) as &i64);
    v0 = v135;
    v1 = v136;
    if !v11 {
        goto LABEL_4b5da5;
    } else {
        v163 = v131;
        if v162 || v163 != 0x110000 {
            v165 = v12;
            v12 = v165 + &g_1 as &u8;
        } else {
LABEL_4b5da5:
        }
    }
    if !v161 {
        v78 = v66;
        v168 = v67;
    }
    v70 = v166;
    v71 = v160;
    v72 = v3;
    v74 = v4;
    v76 = v5;
    v77 = v161 + (v161 < &g_1);
    v78 = v78;
    v79 = v168;
    memcpy(&v80, &v148, 464);
    v127 = v162;
    v128 = v6;
    v130 = v7;
    v131 = v163;
    v132 = v2;
    v134 = &g_1;
    v135 = v0;
    v136 = v1;
    v169 = v25;
    if v169 == *((&v22 as &char + 8) as &i64) {
        v23 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v169 * 592 + v24, &v70, 592);
    v25 = v169 + &g_1 as &u8;
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
    v53 = v8;
    v54 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v55 = &g_1;
    v56 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v57 = &g_1;
    v58 = 0;
    v60 = 0x11000000110000;
    v62 = 0;
    v63 = 3337;
    v148 = 0;
    v149 = &g_1;
    v150 = 0;
    v148 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v170 = v149;
    v171 = v150;
    *((v170 + v171) as &i128) = 152110414024190366979331735664405869136;
    *((v170 + v171 + &g_1 as &u8) as &i64) = 3345734071897648498;
    v150 = v171 + &g_11 as &u8;
    v3 = *((&v148 as &char + 8) as &i128);
    if v50 != 0x8000000000000000 {
        v148 = v3;
    }
    v50 = v148;
    v172 = v9;
    v173 = v10;
    v3 = v11;
    v4 = v13;
    v5 = v15;
    v174 = v16;
    memcpy(&v148, &v19, 464);
    v175 = v56;
    v6 = v57;
    v7 = v59;
    v2 = *((&v60 as &char + 4) as &i64);
    v0 = v64;
    v1 = v65;
    if !v72 {
        goto LABEL_4b6291;
    } else {
        v176 = v60;
        if v175 || v176 != 0x110000 {
            v178 = v73;
            v73 = v178 + &g_1 as &u8;
        } else {
LABEL_4b6291:
        }
    }
    v17 = v17;
    if !v174 {
        v181 = (&v141)[1];
        v17 = v141;
    }
    v9 = v179;
    v10 = v173;
    v11 = v3;
    v13 = v4;
    v15 = v5;
    v16 = v174 + (v174 < &g_1);
    v17 = v17;
    v18 = v181;
    memcpy(&v19, &v148, 464);
    v56 = v175;
    v57 = v6;
    v59 = v7;
    v60 = v176;
    v61 = v2;
    v63 = &g_1;
    v64 = v0;
    v65 = v1;
    v182 = v88;
    if v182 == *((&v85 as &char + 8) as &i64) {
        v86 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v182 * 592 + v87, &v9, 592);
    v88 = v182 + &g_1 as &u8;
    memcpy(a0, &v70, 712);
    return a0;
}
