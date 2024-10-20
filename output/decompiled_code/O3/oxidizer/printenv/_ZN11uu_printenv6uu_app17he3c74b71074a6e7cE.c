fn uu_printenv::uu_app(a0: u32) -> u64 {
    let v0: i16;  // [sp-0x814]
    let v1: i8;  // [sp-0x812]
    let v2: i64;  // [sp-0x810]
    let v3: i64;  // [sp-0x800]
    let v4: i128;  // [sp-0x7f8]
    let v5: i128;  // [sp-0x7e8]
    let v6: i64;  // [sp-0x7d8]
    let v7: i64;  // [bp-0x7c8]
    let v8: i64;  // [sp-0x7b8]
    let v9: i64;  // [sp-0x7b0]
    let v10: i64;  // [sp-0x7a8]
    let v11: i64;  // [sp-0x7a0]
    let v12: i64;  // [sp-0x790]
    let v13: i128;  // [sp-0x788]
    let v14: i128;  // [bp-0x780]
    let v15: i64;  // [sp-0x778]
    let v16: i64;  // [sp-0x770]
    let v17: i128;  // [bp-0x768]
    let v18: i64;  // [sp-0x760]
    let v19: i64;  // [sp-0x758]
    let v20: i128;  // [sp-0x750]
    let v21: struct16;  // [sp-0x748]
    let v22: i64;  // [sp-0x740]
    let v23: i64;  // [bp-0x738]
    let v24: i64;  // [sp-0x728]
    let v25: i128;  // [sp-0x720]
    let v26: i64;  // [sp-0x710]
    let v27: i128;  // [sp-0x708]
    let v28: i64;  // [sp-0x6f8]
    let v29: i128;  // [sp-0x6f0]
    let v30: i64;  // [sp-0x6e0]
    let v31: i128;  // [sp-0x6d8]
    let v32: i64;  // [sp-0x6c8]
    let v33: i64;  // [sp-0x6c0]
    let v34: i64;  // [sp-0x6b8]
    let v35: i64;  // [sp-0x6b0]
    let v36: i128;  // [bp-0x6a8]
    let v37: i64;  // [sp-0x6a0]
    let v38: i64;  // [sp-0x698]
    let v39: i128;  // [bp-0x690]
    let v40: i64;  // [sp-0x688]
    let v41: i64;  // [bp-0x680]
    let v42: i128;  // [bp-0x678]
    let v43: i64;  // [sp-0x670]
    let v44: i64;  // [sp-0x668]
    let v45: i128;  // [bp-0x660]
    let v46: i64;  // [sp-0x658]
    let v47: i64;  // [sp-0x650]
    let v48: i128;  // [bp-0x648]
    let v49: i64;  // [sp-0x640]
    let v50: i64;  // [sp-0x638]
    let v51: i128;  // [bp-0x630]
    let v52: i64;  // [sp-0x628]
    let v53: i64;  // [sp-0x620]
    let v54: i64;  // [sp-0x618]
    let v55: i64;  // [sp-0x610]
    let v56: i64;  // [sp-0x5f8]
    let v57: i64;  // [sp-0x5e0]
    let v58: i64;  // [sp-0x5d0]
    let v59: i64;  // [sp-0x5c8]
    let v60: i64;  // [sp-0x5b8]
    let v61: i64;  // [sp-0x5b0]
    let v62: i64;  // [sp-0x5a8]
    let v63: i128;  // [bp-0x598]
    let v64: i64;  // [sp-0x588]
    let v65: i32;  // [sp-0x580]
    let v66: i16;  // [sp-0x57c]
    let v67: i64;  // [sp-0x578]
    let v68: i64;  // [sp-0x568]
    let v69: i64;  // [sp-0x560]
    let v70: i64;  // [sp-0x558]
    let v71: i64;  // [sp-0x548]
    let v72: i8;  // [bp-0x540]
    let v73: i64;  // [sp-0x538]
    let v74: i64;  // [sp-0x528]
    let v75: i64;  // [sp-0x518]
    let v76: i32;  // [sp-0x510]
    let v77: i64;  // [sp-0x50c]
    let v78: i32;  // [bp-0x504]
    let v79: i128;  // [sp-0x4f8]
    let v80: i64;  // [sp-0x4e8]
    let v81: i64;  // [sp-0x4d8], Other Possible Types: struct16
    let v82: i64;  // [sp-0x4d0]
    let v83: i64;  // [bp-0x4c8]
    let v84: i8;  // [bp-0x4b8]
    let v85: i64;  // [sp-0x4b0]
    let v86: i64;  // [sp-0x4a8]
    let v87: i64;  // [sp-0x4a0]
    let v88: i64;  // [sp-0x498]
    let v89: i64;  // [sp-0x490]
    let v90: i64;  // [sp-0x488]
    let v91: i64;  // [sp-0x470]
    let v92: i64;  // [sp-0x468]
    let v93: i128;  // [sp-0x460]
    let v94: struct16;  // [sp-0x458]
    let v95: i64;  // [sp-0x450]
    let v96: i64;  // [bp-0x448]
    let v97: i64;  // [sp-0x438]
    let v98: i128;  // [sp-0x430]
    let v99: i64;  // [sp-0x420]
    let v100: i128;  // [sp-0x418]
    let v101: i64;  // [sp-0x408]
    let v102: i128;  // [sp-0x400]
    let v103: i64;  // [sp-0x3f0]
    let v104: i128;  // [sp-0x3e8]
    let v105: i64;  // [sp-0x3d8]
    let v106: i128;  // [sp-0x3d0]
    let v107: i64;  // [sp-0x3c0]
    let v108: i128;  // [sp-0x3b8]
    let v109: i64;  // [sp-0x3a8]
    let v110: i128;  // [sp-0x3a0]
    let v111: i64;  // [sp-0x390]
    let v112: i128;  // [sp-0x388]
    let v113: i64;  // [sp-0x378]
    let v114: i128;  // [sp-0x370]
    let v115: i64;  // [sp-0x360]
    let v116: i128;  // [sp-0x358]
    let v117: i64;  // [sp-0x348]
    let v118: i128;  // [sp-0x340]
    let v119: i64;  // [sp-0x330]
    let v120: i64;  // [sp-0x328]
    let v121: i64;  // [sp-0x320]
    let v122: i128;  // [bp-0x318]
    let v123: i64;  // [sp-0x308]
    let v124: i128;  // [sp-0x300]
    let v125: i64;  // [sp-0x2e0]
    let v126: i64;  // [sp-0x2c8]
    let v127: i64;  // [sp-0x2c0]
    let v128: i64;  // [sp-0x2b8]
    let v129: i64;  // [sp-0x2b0]
    let v130: i64;  // [sp-0x2a8]
    let v131: i64;  // [sp-0x2a0]
    let v132: i32;  // [bp-0x298]
    let v133: i64;  // [bp-0x294]
    let v134: i32;  // [sp-0x290]
    let v135: i16;  // [bp-0x28c]
    let v136: i16;  // [sp-0x28b]
    let v137: i8;  // [sp-0x289]
    let v138: i8;  // [bp-0x258]
    let v139: i8;  // [bp-0x21c]
    let v140: i8;  // [bp-0x214]
    let v141: i128;  // [bp-0x208], Other Possible Types: struct24, struct16
    let v142: i64;  // [sp-0x200]
    let v143: i64;  // [sp-0x1f8]
    let v145: i128;  // xmm0
    let v146: i64;  // rcx
    let v147: i64;  // rsi
    let v148: i64;  // rbx
    let v149: i64;  // rax
    let v150: i64;  // rdx
    let v151: i64;  // r13
    let v152: i64;  // r15
    let v153: i64;  // rbx
    let v154: i64;  // rdx
    let v155: i32;  // r14d
    let v156: i64;  // rax
    let v158: i64;  // rbp
    let v159: i64;  // rbx
    let v160: i128;  // xmm0
    let v161: i64;  // rbx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v145 = g_4d6ca8;
    v14 = 0;
    v17 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v31 = 0;
    v7 = 0;
    v8 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v12 = 0;
    v13 = &g_1;
    v16 = &g_1;
    v19 = &g_1;
    v20 = 0;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v29 = 0;
    v30 = &g_1;
    v32 = &g_1;
    v33 = 0;
    v34 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = 0x8000000000000000;
    v49 = 0x8000000000000000;
    v52 = 0x8000000000000000;
    v55 = 0x8000000000000000;
    v56 = 0x8000000000000000;
    v57 = 0x8000000000000000;
    v59 = 0x8000000000000000;
    v61 = 0x8000000000000000;
    v63 = v145;
    v64 = 0;
    v67 = 0;
    v68 = &g_4170c5;
    v69 = &g_1;
    v70 = 0;
    v71 = 0;
    v73 = 0;
    v74 = 0;
    v75 = 0;
    v76 = 0x110000;
    v78 = 0;
    v77 = 0;
    v81 = 0;
    v82 = &g_1;
    v83 = 0;
    v81 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 125);
    v146 = v82;
    v147 = v83;
    *((v146 + v147 + 109) as &i128) = 61707454062232621915967955462984332146;
    *((v146 + v147 + 96) as &i128) = 43134730547656292030163768682674941537;
    *((v146 + v147 + 80) as &i128) = 43061936349690497349188463202565892421;
    *((v146 + v147 + 64) as &i128) = 101365343438053763569514524737708586792;
    *((v146 + v147 + &g_21 as &u8) as &i128) = 43129471603424934280202278361453707606;
    *((v146 + v147 + &g_11 as &u8) as &i128) = 43139841401675537766168122084315915625;
    *((v146 + v147 + &g_1 as &u8) as &i128) = 136128462735604251948875699816123888485;
    *((v146 + v147) as &i128) = 156082420320237764499190337916932155716;
    v83 = v147 + 125;
    v141 = *((&v81 as &char + 8) as &i128);
    if v40 != 0x8000000000000000 {
        v81 = v141;
    }
    v40 = v81;
    v41 = v81;
    memcpy(&v81, &v7, 712);
    v141 = uucore::format_usage(&g_417148, &g_11);
    v148 = v141;
    if v148 != 0x8000000000000000 {
        v7 = *((&v141 as &char + 8) as &i128);
    }
    v123 = v148;
    v124 = v7;
    memcpy(&v7, &v81, 700);
    v77 = 549755814016 | v139;
    v78 = v140;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v100 = 0;
    v102 = 0;
    v104 = 0;
    v106 = 0;
    v108 = 0;
    v110 = 0;
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v90 = &g_1;
    v91 = 0;
    v92 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v99 = &g_1;
    v101 = &g_1;
    v103 = &g_1;
    v105 = &g_1;
    v107 = &g_1;
    v109 = &g_1;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v120 = 0;
    v121 = 0x8000000000000000;
    v123 = 0x8000000000000000;
    v125 = 9223372036854775809;
    v126 = &g_4110a4;
    v127 = &g_1;
    v128 = &g_4110a4;
    v129 = &g_1;
    v130 = 0;
    v132 = 4785074604081200;
    v134 = 0;
    v135 = 3337;
    v141 = 0;
    v142 = &g_1;
    v143 = 0;
    v141 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v2 = 9223372036854775809;
    v149 = v142;
    v150 = v143;
    *((v149 + v150 + &g_11 as &u8) as &i128) = 158704787115635718759365207732604989984;
    *((v149 + v150 + &g_1 as &u8) as &i128) = 134856795955750213214422179103214823788;
    *((v149 + v150) as &i128) = 43139984252227407021545087172924960357;
    *((v149 + v150 + &g_21 as &u8) as &i32) = 1701734764;
    v143 = v150 + &g_31 as &u8;
    v4 = *((&v141 as &char + 8) as &i128);
    if v121 != 0x8000000000000000 {
        v141 = v4;
    }
    v121 = v141;
    v122 = v141;
    v151 = v81;
    v152 = v82;
    v4 = v83;
    v5 = v84;
    v6 = v86;
    v153 = v87;
    memcpy(&v141, &v90, 464);
    v154 = v128;
    v79 = v129;
    v80 = v131;
    v3 = *((&v132 as &char + 4) as &i64);
    v0 = v136;
    v1 = v137;
    if !v8 {
        goto LABEL_4798e6;
    } else {
        v155 = v132;
        if v154 || v155 != 0x110000 {
            v156 = v9;
            v151 += v151 < &g_1;
            v9 = v156 + &g_1 as &u8;
        } else {
LABEL_4798e6:
        }
    }
    v88 = v88;
    if !v153 {
        v158 = v72;
        v88 = v71;
    }
    v81 = v151;
    v82 = v152;
    v83 = v4;
    v84 = v5;
    v86 = v6;
    v87 = v153 + (v153 < &g_1);
    v88 = v88;
    v89 = v158;
    memcpy(&v90, &v141, 464);
    v128 = v154;
    v129 = v79;
    v131 = v80;
    v132 = v155;
    v133 = v3;
    v135 = &g_1;
    v136 = v0;
    v137 = v1;
    v159 = v23;
    if v159 == *((&v20 as &char + 8) as &i64) {
        v21 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v159 * 592 + v22, &v81, 592);
    v23 = v159 + &g_1 as &u8;
    memcpy(&v81, &v7, 712);
    v20 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v48 = 0;
    v51 = 0;
    v160 = v138;
    v7 = 0;
    v8 = &g_1;
    v9 = &g_1;
    v10 = -1;
    v11 = 0;
    v12 = &g_1;
    v13 = v160;
    v15 = &g_1;
    v18 = 0;
    v19 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v35 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v44 = &g_1;
    v47 = &g_1;
    v50 = &g_1;
    v53 = &g_1;
    v54 = 0;
    v55 = 0x8000000000000000;
    v56 = 0x8000000000000000;
    v58 = v2;
    v60 = &g_4170bc;
    v61 = &g_1;
    v62 = 0;
    v63 = 0;
    v64 = 0x11000000110000;
    v65 = 0;
    v66 = 3329;
    v161 = v96;
    if v161 == *((&v93 as &char + 8) as &i64) {
        v94 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v161 * 592 + v95, &v7, 592);
    v96 = v161 + &g_1 as &u8;
    memcpy(a0, &v81, 712);
    return a0;
}
