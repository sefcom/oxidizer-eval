fn uu_false::uu_app(a0: i64) -> u64 {
    let v0: i16;  // [sp-0x804]
    let v1: i8;  // [sp-0x802]
    let v2: i64;  // [sp-0x800]
    let v3: i128;  // [sp-0x7f8]
    let v4: i128;  // [sp-0x7e8]
    let v5: i64;  // [sp-0x7d8]
    let v6: i128;  // [sp-0x7c8]
    let v7: i64;  // [sp-0x7b8]
    let v8: i64;  // [sp-0x7a8]
    let v9: i64;  // [sp-0x7a0]
    let v10: i64;  // [sp-0x798]
    let v11: i128;  // [sp-0x790]
    let v12: i64;  // [sp-0x788]
    let v13: i64;  // [sp-0x780]
    let v14: i64;  // [sp-0x778]
    let v15: i64;  // [sp-0x770]
    let v16: i64;  // [sp-0x768]
    let v17: i64;  // [sp-0x760]
    let v18: i128;  // [bp-0x758]
    let v19: i64;  // [sp-0x750]
    let v20: i64;  // [sp-0x748]
    let v21: i128;  // [bp-0x740]
    let v22: i64;  // [sp-0x738]
    let v23: i64;  // [sp-0x730]
    let v24: i128;  // [sp-0x728]
    let v25: struct16;  // [sp-0x720]
    let v26: i64;  // [sp-0x718]
    let v27: i128;  // [bp-0x710]
    let v28: i64;  // [sp-0x700]
    let v29: i128;  // [sp-0x6f8]
    let v30: i64;  // [sp-0x6e8]
    let v31: i128;  // [sp-0x6e0]
    let v32: i64;  // [sp-0x6d0]
    let v33: i128;  // [sp-0x6c8]
    let v34: i64;  // [sp-0x6b8]
    let v35: i128;  // [sp-0x6b0]
    let v36: i64;  // [sp-0x6a0]
    let v37: i64;  // [sp-0x698]
    let v38: i64;  // [sp-0x690]
    let v39: i64;  // [sp-0x688]
    let v40: i128;  // [bp-0x680]
    let v41: i64;  // [sp-0x678]
    let v42: i64;  // [sp-0x670]
    let v43: i128;  // [bp-0x668]
    let v44: i64;  // [sp-0x660]
    let v45: i64;  // [bp-0x658]
    let v46: i128;  // [bp-0x650]
    let v47: i64;  // [sp-0x648]
    let v48: i64;  // [sp-0x640]
    let v49: i128;  // [bp-0x638]
    let v50: i64;  // [sp-0x630]
    let v51: i64;  // [sp-0x628]
    let v52: i128;  // [bp-0x620]
    let v53: i64;  // [sp-0x618]
    let v54: i64;  // [sp-0x610]
    let v55: i128;  // [bp-0x608]
    let v56: i64;  // [sp-0x600]
    let v57: i64;  // [sp-0x5f8]
    let v58: i64;  // [sp-0x5f0]
    let v59: i64;  // [sp-0x5e8]
    let v60: i64;  // [sp-0x5d0]
    let v61: i64;  // [sp-0x5b8]
    let v62: i64;  // [sp-0x5a8]
    let v63: i64;  // [sp-0x5a0]
    let v64: i64;  // [sp-0x590]
    let v65: i64;  // [sp-0x588]
    let v66: i64;  // [sp-0x580]
    let v67: i128;  // [sp-0x578]
    let v68: i128;  // [bp-0x570]
    let v69: i64;  // [sp-0x568]
    let v70: i64;  // [bp-0x560]
    let v71: i64;  // [bp-0x55c]
    let v72: i32;  // [sp-0x558]
    let v73: i8;  // [bp-0x554]
    let v74: i16;  // [sp-0x553]
    let v75: i8;  // [sp-0x551]
    let v76: i64;  // [sp-0x550]
    let v77: i64;  // [sp-0x540]
    let v78: i64;  // [sp-0x538]
    let v79: i64;  // [sp-0x530]
    let v80: i64;  // [sp-0x520]
    let v81: i8;  // [bp-0x518]
    let v82: i64;  // [sp-0x510]
    let v83: i64;  // [sp-0x500]
    let v84: i64;  // [sp-0x4f0]
    let v85: i32;  // [sp-0x4e8]
    let v86: i64;  // [sp-0x4e4]
    let v87: i8;  // [sp-0x4dc]
    let v88: i64;  // [sp-0x4d8], Other Possible Types: Enum
    let v89: i64;  // [sp-0x4d0]
    let v90: i64;  // [sp-0x4c8]
    let v91: i64;  // [sp-0x4c0]
    let v92: i8;  // [bp-0x4b8]
    let v93: i64;  // [sp-0x4b0]
    let v94: i64;  // [sp-0x4a8]
    let v95: i64;  // [sp-0x4a0]
    let v96: i64;  // [sp-0x498]
    let v97: i64;  // [sp-0x490]
    let v98: i64;  // [sp-0x488]
    let v99: i64;  // [sp-0x470]
    let v100: i64;  // [sp-0x468]
    let v101: i128;  // [sp-0x460]
    let v102: i8;  // [bp-0x458], Other Possible Types: struct16
    let v103: i64;  // [sp-0x450]
    let v104: i64;  // [bp-0x448]
    let v105: i64;  // [sp-0x438]
    let v106: i128;  // [sp-0x430]
    let v107: i64;  // [sp-0x420]
    let v108: i128;  // [sp-0x418]
    let v109: i64;  // [sp-0x408]
    let v110: i128;  // [sp-0x400]
    let v111: i64;  // [sp-0x3f0]
    let v112: i128;  // [sp-0x3e8]
    let v113: i64;  // [sp-0x3d8]
    let v114: i128;  // [sp-0x3d0]
    let v115: i64;  // [sp-0x3c0]
    let v116: i128;  // [sp-0x3b8]
    let v117: i64;  // [sp-0x3a8]
    let v118: i128;  // [sp-0x3a0]
    let v119: i64;  // [sp-0x390]
    let v120: i128;  // [sp-0x388]
    let v121: i64;  // [sp-0x378]
    let v122: i128;  // [sp-0x370]
    let v123: i64;  // [sp-0x360]
    let v124: i128;  // [sp-0x358]
    let v125: i64;  // [sp-0x348]
    let v126: i128;  // [sp-0x340]
    let v127: i64;  // [sp-0x330]
    let v128: i64;  // [sp-0x328]
    let v129: i64;  // [sp-0x320]
    let v130: i64;  // [sp-0x308]
    let v131: i64;  // [sp-0x2e0]
    let v132: i64;  // [sp-0x2c8]
    let v133: i64;  // [sp-0x2c0]
    let v134: i64;  // [sp-0x2b8]
    let v135: i64;  // [sp-0x2b0]
    let v136: i64;  // [sp-0x2a8]
    let v137: i64;  // [sp-0x2a0]
    let v138: i64;  // [bp-0x298]
    let v139: i64;  // [bp-0x294]
    let v140: i32;  // [sp-0x290]
    let v141: i16;  // [bp-0x28c]
    let v142: i16;  // [sp-0x28b]
    let v143: i8;  // [sp-0x289]
    let v144: i8;  // [bp-0x258]
    let v145: i8;  // [bp-0x250]
    let v146: i64;  // [sp-0x21c]
    let v147: i32;  // [sp-0x214]
    let v148: i192;  // [bp-0x208], Other Possible Types: Enum
    let v149: i64;  // [sp-0x200]
    let v150: i64;  // [sp-0x1f8]
    let v152: i128;  // xmm0
    let v153: i64;  // r15
    let v154: i64;  // rax
    let v155: i64;  // rcx
    let v156: i64;  // r15
    let v157: i64;  // r12
    let v158: i64;  // r13
    let v159: i64;  // rdx
    let v160: i32;  // ecx
    let v161: i64;  // rax
    let v163: i64;  // rbx
    let v164: i64;  // rbx
    let v165: i64;  // rax
    let v166: i64;  // rcx
    let v167: i64;  // r15
    let v168: i64;  // rbx
    let v169: i64;  // rbp
    let v170: i64;  // rdx
    let v171: i32;  // r12d
    let v173: i64;  // rcx
    let v174: i64;  // r15
    let v176: i64;  // r14
    let v177: i64;  // rbx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v152 = g_4cde08;
    v18 = 0;
    v21 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v35 = 0;
    v9 = 0;
    v11 = &g_1;
    v12 = 0;
    v13 = &g_1;
    v16 = 0;
    v17 = &g_1;
    v20 = &g_1;
    v23 = &g_1;
    v24 = 0;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v33 = 0;
    v34 = &g_1;
    v36 = &g_1;
    v37 = 0;
    v38 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v44 = 0x8000000000000000;
    v47 = 0x8000000000000000;
    v50 = 0x8000000000000000;
    v53 = 0x8000000000000000;
    v56 = 0x8000000000000000;
    v59 = 0x8000000000000000;
    v60 = 0x8000000000000000;
    v61 = 0x8000000000000000;
    v63 = 0x8000000000000000;
    v65 = 0x8000000000000000;
    v68 = v152;
    v70 = 0;
    v76 = 0;
    v77 = &g_41614c;
    v78 = &g_1;
    v79 = 0;
    v80 = 0;
    v82 = 0;
    v83 = 0;
    v84 = 0;
    v85 = 0x110000;
    v87 = 0;
    v86 = 0;
    v88 = 0;
    v89 = &g_1;
    v90 = 0;
    v88 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 272);
    v153 = v90;
    memcpy(v89 + v153, &g_416152, 272);
    v90 = v153 + 272;
    v148 = *((&v88 as &char + 8) as &i128);
    if v44 != 0x8000000000000000 {
        v88 = v148;
    }
    v44 = v88;
    v45 = v88;
    memcpy(&v88, &v9, 700);
    v146 = 0x14000000140000;
    v147 = v87;
    v24 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v49 = 0;
    v52 = 0;
    v55 = 0;
    v9 = 0;
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v19 = &g_1;
    v22 = 0;
    v23 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v39 = &g_1;
    v42 = &g_1;
    v45 = &g_1;
    v48 = &g_1;
    v51 = &g_1;
    v54 = &g_1;
    v57 = &g_1;
    v58 = 0;
    v59 = 0x8000000000000000;
    v60 = 0x8000000000000000;
    v62 = 9223372036854775809;
    v64 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v65 = &g_1;
    v66 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v67 = &g_1;
    v68 = 0;
    v70 = 0x11000000110000;
    v72 = 0;
    v73 = 3337;
    v148 = 0;
    v149 = &g_1;
    v150 = 0;
    v148 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 22);
    v8 = 9223372036854775809;
    v154 = v149;
    v155 = v150;
    *((v154 + v155) as &i128) = 152110414024190366979331735664405869136;
    *((v154 + v155 + &g_1 as &u8) as &i64) = 7957695015158641263;
    v150 = v155 + 22;
    v3 = *((&v148 as &char + 8) as &i128);
    if v59 != 0x8000000000000000 {
        v148 = v3;
    }
    v59 = v148;
    v156 = v9;
    v157 = v10;
    v3 = v11;
    v4 = v13;
    v5 = v15;
    v158 = v16;
    memcpy(&v148, &v19, 464);
    v159 = v66;
    v6 = v67;
    v7 = v69;
    v160 = v70;
    v2 = *((&v70 as &char + 4) as &i64);
    v0 = v74;
    v1 = v75;
    if !(!v90 || !v159 && v160 == 0x110000) {
        v161 = v91;
        v156 += v156 < &g_1;
        v91 = v161 + &g_1 as &u8;
    }
    if !v158 {
        v163 = v145;
        v17 = v144;
    }
    v9 = v156;
    v10 = v157;
    v11 = v3;
    v13 = v4;
    v15 = v5;
    v16 = v158 + (v158 < &g_1);
    v17 = v17;
    v18 = v163;
    memcpy(&v19, &v148, 464);
    v66 = v159;
    v67 = v6;
    v69 = v7;
    v70 = v160;
    v71 = v2;
    v73 = &g_1;
    v74 = v0;
    v75 = v1;
    v164 = v104;
    if v164 == v102 {
        v102 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v164 * 592 + v103, &v9, 592);
    v104 = v164 + &g_1 as &u8;
    memcpy(&v9, &v88, 712);
    v101 = 0;
    v104 = 0;
    v106 = 0;
    v108 = 0;
    v110 = 0;
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v88 = 0;
    v90 = 0;
    v93 = 0;
    v95 = 0;
    v98 = &g_1;
    v99 = 0;
    v100 = &g_1;
    v103 = &g_1;
    v105 = &g_1;
    v107 = &g_1;
    v109 = &g_1;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v128 = 0;
    v129 = 0x8000000000000000;
    v130 = 0x8000000000000000;
    v131 = v8;
    v132 = &g_416278;
    v133 = &g_1;
    v134 = &g_416278;
    v135 = &g_1;
    v136 = 0;
    v138 = 0x11000000110000;
    v140 = 0;
    v141 = 3337;
    v148 = 0;
    v149 = &g_1;
    v150 = 0;
    v148 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 25);
    v165 = v149;
    v166 = v150;
    *((v165 + v166 + &g_1 as &u8) as &i128) = 146793563361265706238000395030845417843;
    *((v165 + v166) as &i128) = 146760928493172414826559440180688286288;
    v150 = v166 + 25;
    v3 = *((&v148 as &char + 8) as &i128);
    if v129 != 0x8000000000000000 {
        v148 = v3;
    }
    v129 = v148;
    v167 = v88;
    v168 = v89;
    v3 = v90;
    v4 = v92;
    v5 = v94;
    v169 = v95;
    memcpy(&v148, &v98, 464);
    v170 = v134;
    v6 = v135;
    v7 = v137;
    v2 = *((&v138 as &char + 4) as &i64);
    v0 = v142;
    v1 = v143;
    if !v11 {
        goto LABEL_4762d4;
    } else {
        v171 = v138;
        if v170 || v171 != 0x110000 {
            v173 = v12;
            v12 = v173 + &g_1 as &u8;
        } else {
LABEL_4762d4:
        }
    }
    v96 = v96;
    if !v169 {
        v176 = v81;
        v96 = v80;
    }
    v88 = v174;
    v89 = v168;
    v90 = v3;
    v92 = v4;
    v94 = v5;
    v95 = v169 + (v169 < &g_1);
    v96 = v96;
    v97 = v176;
    memcpy(&v98, &v148, 464);
    v134 = v170;
    v135 = v6;
    v137 = v7;
    v138 = v171;
    v139 = v2;
    v141 = &g_1;
    v142 = v0;
    v143 = v1;
    v177 = v27;
    if v177 == *((&v24 as &char + 8) as &i64) {
        v25 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v177 * 592 + v26, &v88, 592);
    v27 = v177 + &g_1 as &u8;
    memcpy(a0, &v9, 712);
    return a0;
}
