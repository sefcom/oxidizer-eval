fn uu_dirname::uu_app(a0: u32) -> u64 {
    let v0: i16;  // [sp-0x814]
    let v1: i8;  // [sp-0x812]
    let v2: i64;  // [sp-0x810]
    let v3: i64;  // [sp-0x800]
    let v4: i128;  // [sp-0x7f8]
    let v5: i128;  // [sp-0x7e8]
    let v6: i64;  // [sp-0x7d8]
    let v7: i128;  // [sp-0x7c8]
    let v8: i64;  // [sp-0x7b8]
    let v9: i64;  // [bp-0x7a8]
    let v10: i64;  // [sp-0x798]
    let v11: i64;  // [sp-0x790]
    let v12: i64;  // [sp-0x788]
    let v13: i64;  // [sp-0x780]
    let v14: i64;  // [sp-0x770]
    let v15: i128;  // [sp-0x768]
    let v16: i128;  // [bp-0x760]
    let v17: i64;  // [sp-0x758]
    let v18: i64;  // [sp-0x750]
    let v19: i128;  // [bp-0x748]
    let v20: i64;  // [sp-0x740]
    let v21: i64;  // [sp-0x738]
    let v22: i128;  // [sp-0x730]
    let v23: struct16;  // [sp-0x728], Other Possible Types: i64
    let v24: i64;  // [sp-0x720]
    let v25: i128;  // [bp-0x718]
    let v26: i64;  // [sp-0x708]
    let v27: i128;  // [sp-0x700]
    let v28: i64;  // [sp-0x6f0]
    let v29: i128;  // [sp-0x6e8]
    let v30: i64;  // [sp-0x6d8]
    let v31: i64;  // [sp-0x6d0]
    let v32: i64;  // [sp-0x6c8]
    let v33: i64;  // [sp-0x6c0]
    let v34: i128;  // [sp-0x6b8]
    let v35: i64;  // [sp-0x6a8]
    let v36: i128;  // [sp-0x6a0]
    let v37: i64;  // [sp-0x698]
    let v38: i64;  // [sp-0x690]
    let v39: i128;  // [bp-0x688]
    let v40: i64;  // [sp-0x680]
    let v41: i64;  // [sp-0x678]
    let v42: i128;  // [bp-0x670]
    let v43: i64;  // [sp-0x668]
    let v44: i64;  // [bp-0x660]
    let v45: i128;  // [bp-0x658]
    let v46: i64;  // [sp-0x650]
    let v47: i64;  // [sp-0x648]
    let v48: i128;  // [bp-0x640]
    let v49: i64;  // [sp-0x638]
    let v50: i64;  // [sp-0x630]
    let v51: i128;  // [bp-0x628]
    let v52: i64;  // [sp-0x620]
    let v53: i64;  // [sp-0x618]
    let v54: i128;  // [bp-0x610]
    let v55: i64;  // [sp-0x608]
    let v56: i64;  // [sp-0x600]
    let v57: i64;  // [sp-0x5f8]
    let v58: i64;  // [sp-0x5f0]
    let v59: i64;  // [sp-0x5d8]
    let v60: i64;  // [sp-0x5c0]
    let v61: i64;  // [sp-0x5b0]
    let v62: i64;  // [sp-0x5a8]
    let v63: i64;  // [sp-0x598]
    let v64: i64;  // [sp-0x590]
    let v65: i64;  // [sp-0x588]
    let v66: i64;  // [bp-0x578]
    let v67: i64;  // [bp-0x568]
    let v68: i64;  // [sp-0x558]
    let v69: i64;  // [sp-0x548]
    let v70: i64;  // [sp-0x538]
    let v71: i64;  // [sp-0x528]
    let v72: i64;  // [sp-0x518]
    let v73: i64;  // [sp-0x508]
    let v74: i64;  // [sp-0x4f8]
    let v75: i32;  // [sp-0x4f0]
    let v76: i64;  // [sp-0x4ec]
    let v77: i8;  // [bp-0x4e4]
    let v78: i64;  // [sp-0x4d8], Other Possible Types: struct16
    let v79: i64;  // [sp-0x4d0]
    let v80: i64;  // [bp-0x4c8]
    let v81: i8;  // [bp-0x4b8]
    let v82: i64;  // [sp-0x4b0]
    let v83: i64;  // [sp-0x4a8]
    let v84: i64;  // [sp-0x4a0]
    let v85: i64;  // [sp-0x498]
    let v86: i64;  // [sp-0x490]
    let v87: i64;  // [sp-0x488]
    let v88: i64;  // [sp-0x470]
    let v89: i64;  // [sp-0x468]
    let v90: i128;  // [sp-0x460]
    let v91: struct16;  // [sp-0x458]
    let v92: i64;  // [sp-0x450]
    let v93: i64;  // [bp-0x448]
    let v94: i64;  // [sp-0x438]
    let v95: i128;  // [sp-0x430]
    let v96: i64;  // [sp-0x420]
    let v97: i128;  // [sp-0x418]
    let v98: i64;  // [sp-0x408]
    let v99: i128;  // [sp-0x400]
    let v100: i64;  // [sp-0x3f0]
    let v101: i128;  // [sp-0x3e8]
    let v102: i64;  // [sp-0x3d8]
    let v103: i128;  // [sp-0x3d0]
    let v104: i64;  // [sp-0x3c0]
    let v105: i128;  // [sp-0x3b8]
    let v106: i64;  // [sp-0x3a8]
    let v107: i128;  // [sp-0x3a0]
    let v108: i64;  // [sp-0x390]
    let v109: i128;  // [sp-0x388]
    let v110: i64;  // [sp-0x378]
    let v111: i128;  // [sp-0x370]
    let v112: i64;  // [sp-0x360]
    let v113: i128;  // [sp-0x358]
    let v114: i64;  // [sp-0x348]
    let v115: i128;  // [sp-0x340]
    let v116: i64;  // [sp-0x330]
    let v117: i64;  // [sp-0x328]
    let v118: i64;  // [sp-0x320]
    let v119: i128;  // [bp-0x318]
    let v120: i64;  // [sp-0x308]
    let v121: i128;  // [sp-0x300]
    let v122: i64;  // [sp-0x2e0]
    let v123: i64;  // [sp-0x2c8]
    let v124: i64;  // [sp-0x2c0]
    let v125: i64;  // [sp-0x2b8]
    let v126: i64;  // [sp-0x2b0]
    let v127: i64;  // [sp-0x2a8]
    let v128: i64;  // [sp-0x2a0]
    let v129: i32;  // [bp-0x298]
    let v130: i64;  // [bp-0x294]
    let v131: i32;  // [sp-0x290]
    let v132: i8;  // [bp-0x28c]
    let v133: i16;  // [sp-0x28b]
    let v134: i8;  // [sp-0x289]
    let v135: i64;  // [sp-0x278]
    let v136: i64;  // [sp-0x270]
    let v137: i128;  // [sp-0x268]
    let v138: i128;  // [sp-0x258]
    let v139: i128;  // [sp-0x248]
    let v140: i128;  // [sp-0x238]
    let v141: i128;  // [sp-0x228]
    let v142: i64;  // [sp-0x218]
    let v143: i192;  // [bp-0x208], Other Possible Types: struct16, struct24
    let v144: i64;  // [sp-0x200]
    let v145: i64;  // [sp-0x1f8]
    let v147: i64;  // rax
    let v148: i64;  // rdx
    let v149: i64;  // rbx
    let v150: i64;  // rax
    let v151: i64;  // rdx
    let v152: i64;  // r13
    let v153: i64;  // r15
    let v154: i64;  // rbx
    let v155: i64;  // rdx
    let v156: i32;  // r14d
    let v157: i64;  // rax
    let v159: i64;  // rbp
    let v160: i64;  // rbx
    let v161: i64;  // rbx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v66 = g_4db4c0;
    v67 = 0;
    v75 = 0x110000;
    v37 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    v43 = 0x8000000000000000;
    v46 = 0x8000000000000000;
    v49 = 0x8000000000000000;
    v52 = 0x8000000000000000;
    v55 = 0x8000000000000000;
    v58 = 0x8000000000000000;
    v14 = 0;
    v15 = &g_1;
    v16 = 0;
    v18 = &g_1;
    v19 = 0;
    v21 = &g_1;
    v22 = 0;
    v59 = 0x8000000000000000;
    v60 = 0x8000000000000000;
    v62 = 0x8000000000000000;
    v9 = 0;
    v64 = 0x8000000000000000;
    v76 = 0;
    v23 = 0;
    v24 = &g_1;
    v25 = 0;
    v26 = &g_1;
    v27 = 0;
    v28 = &g_1;
    v29 = 0;
    v30 = &g_1;
    v31 = 0;
    v71 = 0;
    v10 = &g_1;
    v11 = 0;
    v72 = 0;
    v73 = 0;
    v12 = &g_1;
    v77 = 0;
    v74 = 0;
    v32 = 0;
    v33 = &g_1;
    v34 = 0;
    v35 = &g_1;
    v36 = 0;
    v78 = 0;
    v79 = &g_1;
    v80 = 0;
    v78 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1d);
    v147 = v79;
    v148 = v80;
    *((v147 + v148 + &g_1 as &u8) as &i128) = 146383290148444770462088104918542869870;
    *((v147 + v148) as &i128) = 148128064387932651223584115292888003667;
    *((v147 + v148 + &g_1d as &u8) as &i32) = 1701667182;
    v80 = v148 + &g_1d as &u8;
    v143 = *((&v78 as &char + 8) as &i128);
    if v43 != 0x8000000000000000 {
        v78 = v143;
    }
    v43 = v78;
    v44 = v78;
    memcpy(&v78, &v9, 608);
    v137 = v70;
    v138 = v71;
    v139 = v72;
    v140 = v73;
    v141 = v74;
    v142 = v76;
    v135 = &g_4182a7;
    v136 = &g_1;
    v143 = uucore::format_usage(&g_4182ad, &g_11);
    v149 = v143;
    if v149 != 0x8000000000000000 {
        v9 = *((&v143 as &char + 8) as &i128);
    }
    v120 = v149;
    v121 = v9;
    memcpy(&v9, &v78, 700);
    v76 = 584115552392 | *((&v141 as &char + 12) as &i64);
    v77 = *((&v142 as &char + 4) as &i32);
    v90 = 0;
    v93 = 0;
    v95 = 0;
    v97 = 0;
    v99 = 0;
    v101 = 0;
    v103 = 0;
    v105 = 0;
    v107 = 0;
    v109 = 0;
    v111 = 0;
    v113 = 0;
    v115 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v87 = &g_1;
    v88 = 0;
    v89 = &g_1;
    v92 = &g_1;
    v94 = &g_1;
    v96 = &g_1;
    v98 = &g_1;
    v100 = &g_1;
    v102 = &g_1;
    v104 = &g_1;
    v106 = &g_1;
    v108 = &g_1;
    v110 = &g_1;
    v112 = &g_1;
    v114 = &g_1;
    v116 = &g_1;
    v117 = 0;
    v118 = 0x8000000000000000;
    v120 = 0x8000000000000000;
    v122 = 9223372036854775809;
    v123 = &g_40fe04;
    v124 = &g_1;
    v125 = &g_40fe04;
    v126 = &g_1;
    v127 = 0;
    v129 = 4785074604081274;
    v131 = 0;
    v132 = 3337;
    v143 = 0;
    v144 = &g_1;
    v145 = 0;
    v143 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1d);
    v2 = 9223372036854775809;
    v150 = v144;
    v151 = v145;
    *((v150 + v151 + &g_11 as &u8) as &i128) = 134825318475316606903449662258116978024;
    *((v150 + v151 + &g_1 as &u8) as &i128) = 43129274506107214474132123832735263095;
    *((v150 + v151) as &i128) = 43139984252227407021333699522341135731;
    v145 = v151 + &g_1d as &u8;
    v4 = *((&v143 as &char + 8) as &i128);
    if v118 != 0x8000000000000000 {
        v143 = v4;
    }
    v118 = v143;
    v119 = v143;
    v152 = v78;
    v153 = v79;
    v4 = v80;
    v5 = v81;
    v6 = v83;
    v154 = v84;
    memcpy(&v143, &v87, 464);
    v155 = v125;
    v7 = v126;
    v8 = v128;
    v3 = *((&v129 as &char + 4) as &i64);
    v0 = v133;
    v1 = v134;
    if !v10 {
        goto LABEL_47c5b2;
    } else {
        v156 = v129;
        if v155 || v156 != 0x110000 {
            v157 = v11;
            v152 += v152 < &g_1;
            v11 = v157 + &g_1 as &u8;
        } else {
LABEL_47c5b2:
        }
    }
    v85 = v85;
    if !v154 {
        v159 = (&v71)[1];
        v85 = v71;
    }
    v78 = v152;
    v79 = v153;
    v80 = v4;
    v81 = v5;
    v83 = v6;
    v84 = v154 + (v154 < &g_1);
    v85 = v85;
    v86 = v159;
    memcpy(&v87, &v143, 464);
    v125 = v155;
    v126 = v7;
    v128 = v8;
    v129 = v156;
    v130 = v3;
    v132 = &g_1;
    v133 = v0;
    v134 = v1;
    v160 = v25;
    if v160 == v23 {
        v23 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v160 * 592 + v24, &v78, 592);
    v25 = v160 + &g_1 as &u8;
    memcpy(&v78, &v9, 712);
    v22 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v34 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v48 = 0;
    v51 = 0;
    v54 = 0;
    v9 = 0;
    v10 = 0;
    v13 = 0;
    v14 = &g_1;
    v15 = v138;
    v17 = &g_1;
    v20 = 0;
    v21 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v44 = &g_1;
    v47 = &g_1;
    v50 = &g_1;
    v53 = &g_1;
    v56 = &g_1;
    v57 = 0;
    v58 = 0x8000000000000000;
    v59 = 0x8000000000000000;
    v61 = v2;
    v63 = &g_4182ec;
    v64 = &g_1;
    v65 = 0;
    v66 = 0;
    v67 = 0x201000000040011000000110000;
    v161 = v93;
    if v161 == *((&v90 as &char + 8) as &i64) {
        v91 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v161 * 592 + v92, &v9, 592);
    v93 = v161 + &g_1 as &u8;
    memcpy(a0, &v78, 712);
    return a0;
}
