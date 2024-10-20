fn uu_numfmt::uu_app(a0: u32) -> u64 {
    let v0: i64;  // [sp-0xaf0]
    let v1: i192;  // [sp-0xae8], Other Possible Types: struct24, Enum
    let v2: i64;  // [sp-0xae0]
    let v3: i64;  // [sp-0xad8]
    let v4: i64;  // [sp-0xad0]
    let v5: i64;  // [sp-0xac8]
    let v6: i64;  // [sp-0xac0]
    let v7: i64;  // [sp-0xab0]
    let v8: i64;  // [sp-0xa98]
    let v9: i64;  // [sp-0xa80]
    let v10: i64;  // [sp-0xa78]
    let v11: i128;  // [sp-0xa70]
    let v12: i64;  // [sp-0xa60]
    let v13: i128;  // [sp-0xa58]
    let v14: i64;  // [sp-0xa48]
    let v15: i128;  // [sp-0xa40]
    let v16: i64;  // [sp-0xa30]
    let v17: i128;  // [sp-0xa28]
    let v18: i64;  // [sp-0xa18]
    let v19: i128;  // [sp-0xa10]
    let v20: i64;  // [sp-0xa00]
    let v21: i128;  // [sp-0x9f8]
    let v22: i64;  // [sp-0x9e8]
    let v23: i128;  // [sp-0x9e0]
    let v24: i64;  // [sp-0x9d0]
    let v25: i128;  // [sp-0x9c8]
    let v26: i64;  // [sp-0x9b8]
    let v27: i128;  // [sp-0x9b0]
    let v28: i64;  // [sp-0x9a0]
    let v29: i128;  // [bp-0x998]
    let v30: i128;  // [bp-0x990]
    let v31: i64;  // [sp-0x988]
    let v32: i64;  // [sp-0x980]
    let v33: i128;  // [bp-0x978]
    let v34: i64;  // [sp-0x970]
    let v35: i128;  // [sp-0x968]
    let v36: i64;  // [sp-0x958]
    let v37: i128;  // [bp-0x950]
    let v38: i128;  // [bp-0x948]
    let v39: i64;  // [sp-0x940]
    let v40: i64;  // [sp-0x938]
    let v41: i64;  // [sp-0x930]
    let v42: i128;  // [sp-0x928]
    let v43: i64;  // [sp-0x918]
    let v44: i64;  // [sp-0x8f0]
    let v45: i64;  // [sp-0x8d8]
    let v46: i64;  // [sp-0x8d0]
    let v47: i64;  // [sp-0x8c8]
    let v48: i64;  // [sp-0x8c0]
    let v49: i64;  // [sp-0x8b8]
    let v50: i64;  // [sp-0x8a8]
    let v51: i32;  // [sp-0x8a0]
    let v52: i32;  // [bp-0x89c]
    let v53: i5696;  // [bp-0x898], Other Possible Types: struct712, Enum, struct24
    let v54: i64;  // [sp-0x890]
    let v55: i64;  // [sp-0x888]
    let v56: i128;  // [bp-0x880]
    let v57: i64;  // [sp-0x878]
    let v58: i64;  // [sp-0x870]
    let v59: i64;  // [sp-0x860]
    let v60: i128;  // [sp-0x858]
    let v61: i64;  // [sp-0x848]
    let v62: i128;  // [sp-0x840]
    let v63: i64;  // [sp-0x830]
    let v64: i64;  // [sp-0x828]
    let v65: i128;  // [sp-0x820]
    let v66: i64;  // [sp-0x810]
    let v67: i128;  // [sp-0x808]
    let v68: i64;  // [sp-0x7f8]
    let v69: i128;  // [sp-0x7f0]
    let v70: i64;  // [sp-0x7e0]
    let v71: i128;  // [sp-0x7d8]
    let v72: i64;  // [sp-0x7c8]
    let v73: i128;  // [sp-0x7c0]
    let v74: i64;  // [sp-0x7b0]
    let v75: i128;  // [sp-0x7a8]
    let v76: i64;  // [sp-0x798]
    let v77: i128;  // [sp-0x790]
    let v78: i64;  // [sp-0x780]
    let v79: i128;  // [sp-0x778]
    let v80: i64;  // [sp-0x768]
    let v81: i128;  // [sp-0x760]
    let v82: i64;  // [sp-0x750]
    let v83: i128;  // [bp-0x748]
    let v84: i128;  // [bp-0x740]
    let v85: i64;  // [sp-0x738]
    let v86: i64;  // [bp-0x730]
    let v87: i128;  // [bp-0x728]
    let v88: i64;  // [sp-0x720]
    let v89: i64;  // [bp-0x718]
    let v90: i64;  // [sp-0x708]
    let v91: i128;  // [bp-0x700]
    let v92: i128;  // [bp-0x6f8]
    let v93: i64;  // [sp-0x6f0]
    let v94: i64;  // [sp-0x6e8]
    let v95: i64;  // [sp-0x6e0]
    let v96: i128;  // [sp-0x6d8]
    let v97: i64;  // [sp-0x6c8]
    let v98: i128;  // [sp-0x6c0]
    let v99: i128;  // [sp-0x6b0]
    let v100: i64;  // [sp-0x6a0]
    let v101: i128;  // [sp-0x698]
    let v102: i64;  // [sp-0x688]
    let v103: i64;  // [sp-0x680]
    let v104: i64;  // [sp-0x678]
    let v105: i64;  // [sp-0x670]
    let v106: i64;  // [sp-0x668]
    let v107: i64;  // [sp-0x658]
    let v108: i32;  // [sp-0x650]
    let v109: i32;  // [bp-0x64c]
    let v110: i5696;  // [sp-0x5c8], Other Possible Types: struct712, struct24, Enum, struct64, struct96
    let v111: i64;  // [sp-0x5c0]
    let v112: i64;  // [sp-0x5b8]
    let v113: i64;  // [sp-0x5a0]
    let v114: i64;  // [sp-0x590]
    let v115: i64;  // [sp-0x578]
    let v116: i64;  // [sp-0x560]
    let v117: i64;  // [sp-0x558]
    let v118: i128;  // [sp-0x550]
    let v119: i64;  // [sp-0x540]
    let v120: i128;  // [sp-0x538]
    let v121: i64;  // [sp-0x528]
    let v122: i128;  // [sp-0x520]
    let v123: i64;  // [sp-0x510]
    let v124: i128;  // [sp-0x508]
    let v125: i64;  // [sp-0x4f8]
    let v126: i128;  // [sp-0x4f0]
    let v127: i64;  // [sp-0x4e0]
    let v128: i128;  // [sp-0x4d8]
    let v129: i64;  // [sp-0x4c8]
    let v130: i128;  // [sp-0x4c0]
    let v131: i64;  // [sp-0x4b0]
    let v132: i128;  // [sp-0x4a8]
    let v133: i64;  // [sp-0x498]
    let v134: i128;  // [sp-0x490]
    let v135: i64;  // [sp-0x480]
    let v136: i128;  // [bp-0x478]
    let v137: i128;  // [bp-0x470]
    let v138: i64;  // [sp-0x468]
    let v139: i128;  // [bp-0x460]
    let v140: i128;  // [bp-0x458]
    let v141: i64;  // [sp-0x450]
    let v142: i64;  // [bp-0x448]
    let v143: i64;  // [sp-0x438]
    let v144: i128;  // [sp-0x430]
    let v145: i64;  // [sp-0x420]
    let v146: i64;  // [sp-0x418]
    let v147: i64;  // [sp-0x410]
    let v148: i64;  // [sp-0x3f8]
    let v149: i64;  // [sp-0x3d0]
    let v150: i64;  // [sp-0x3b8]
    let v151: i64;  // [sp-0x3b0]
    let v152: i64;  // [sp-0x3a8]
    let v153: i64;  // [sp-0x3a0]
    let v154: i64;  // [sp-0x398]
    let v155: i64;  // [sp-0x388]
    let v156: i32;  // [sp-0x380]
    let v157: i16;  // [bp-0x37c]
    let v158: i64;  // [sp-0x368]
    let v159: i64;  // [sp-0x360]
    let v160: i32;  // [sp-0x30c]
    let v161: i64;  // [sp-0x308]
    let v162: i8;  // [bp-0x300], Other Possible Types: struct24, struct32
    let v163: i8;  // [bp-0x2f0]
    let v164: struct32;  // [bp-0x2d8], Other Possible Types: i128, struct592
    let v165: i8;  // [bp-0x80]
    let v166: i8;  // [bp-0x70]
    let v167: i8;  // [bp-0x60]
    let v168: i8;  // [bp-0x50]
    let v169: i8;  // [bp-0x40]
    let v171: i64;  // rbx
    let v172: i64;  // rax
    let v173: i64;  // rcx
    let v174: i64;  // rbx
    let v175: i64;  // rax
    let v176: i64;  // rcx
    let v177: i32;  // ebp
    let v178: i64;  // rax
    let v179: i64;  // rcx
    let v180: i32;  // ebp
    let v181: i64;  // rax
    let v182: i64;  // rcx
    let v183: i64;  // rax
    let v184: i64;  // rcx
    let v185: i64;  // rax
    let v186: i64;  // rcx
    let v187: i64;  // r13
    let v188: i64;  // rax
    let v189: i64;  // rcx
    let v190: i64;  // r14
    let v191: i64;  // rax
    let v192: i64;  // rcx
    let v193: i32;  // r14d
    let v194: i128;  // xmm2
    let v195: i128;  // xmm3
    let v196: i128;  // xmm1
    let v197: i128;  // xmm2
    let v198: i128;  // xmm3
    let v199: i64;  // r13
    let v200: i64;  // rax
    let v201: i64;  // rcx
    let v202: i64;  // rax
    let v203: i64;  // rcx
    let v204: i64;  // rax
    let v205: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v110 = clap_builder::builder::command::Command::new(g_4ffde0, g_4ffde8);
    v158 = &g_41e079;
    v159 = &g_1;
    memcpy(&v53, &v110, 712);
    v110 = clap_builder::builder::command::Command::about(&v53, &g_41e07f, &g_20);
    v53 = clap_builder::builder::command::Command::after_help(&v110, &g_41e0ad, 1082);
    v1 = uucore::format_usage(&g_41e4e7, &g_11);
    v171 = v1;
    if v171 != 0x8000000000000000 {
        v110 = *((&v1 as &char + 8) as &i128);
    }
    v97 = v171;
    v98 = v110;
    memcpy(&v110, &v53, 700);
    v160 = 132 | *((&v53 as &char + 700) as &i32);
    v161 = 128 | *((&v53 as &char + 704) as &i64);
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v89 = 0;
    v91 = 0;
    v53 = 0;
    v55 = 0;
    v56 = v169;
    v58 = 0;
    v59 = 0;
    v60 = v168;
    v61 = &g_1;
    v62 = v167;
    v63 = 0;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = 0x8000000000000000;
    v96 = v166;
    v97 = 0x8000000000000000;
    v99 = v163;
    v98 = v162;
    v100 = 9223372036854775809;
    v101 = v165;
    v102 = &g_41df82;
    v103 = &g_1;
    v104 = &g_41df82;
    v105 = &g_1;
    v106 = 0;
    v107 = 4785074604081252;
    v108 = 0;
    v109 = 3337;
    v164 = struct32 {
        field_0: &g_41e501
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v86 = v3;
    v84 = v1;
    memcpy(&v1, &v53, 592);
    v53 = 0;
    v54 = &g_1;
    v55 = 0;
    v53 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v172 = v54;
    v173 = v55;
    *((v172 + v173 + &g_11 as &u8) as &i128) = 152058774614524829860542537144935736864;
    *((v172 + v173 + &g_1 as &u8) as &i128) = 43129477145754951206736825892647499552;
    *((v172 + v173) as &i128) = 136158257511425050567137587255566496629;
    v55 = v173 + &g_20 as &u8;
    v174 = v53;
    v164 = *((&v53 as &char + 8) as &i128);
    if v174 != 0x8000000000000000 {
        v53 = v164;
    }
    v41 = v174;
    v42 = v53;
    memcpy(&v164, &v1, 592);
    v53 = clap_builder::builder::command::Command::arg(&v110, &v164);
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v136 = 0;
    v139 = 0;
    v142 = 0;
    v144 = 0;
    v110 = 0;
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v115 = &g_1;
    v116 = 0;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v135 = &g_1;
    v138 = &g_1;
    v141 = &g_1;
    v143 = &g_1;
    v145 = &g_1;
    v146 = 0;
    v147 = 0x8000000000000000;
    v148 = 0x8000000000000000;
    v149 = 9223372036854775809;
    v150 = &g_41df77;
    v151 = &g_1;
    v152 = &g_41df77;
    v153 = &g_1;
    v154 = 0;
    v155 = 0x11000000110000;
    v156 = 0;
    v157 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v0 = 9223372036854775809;
    v175 = v2;
    v176 = v3;
    *((v175 + v176 + &g_20 as &u8) as &i128) = 158756674982352572868435848064219309427;
    *((v175 + v176 + &g_20 as &u8) as &i128) = 93214169765461350850707064749721416821;
    *((v175 + v176 + &g_1 as &u8) as &i128) = 149446820402056484033273560104107733605;
    *((v175 + v176) as &i128) = 130832685711549670660934685116786042226;
    v3 = v176 + &g_31 as &u8;
    v164 = *((&v1 as &char + 8) as &i128);
    if v147 != 0x8000000000000000 {
        v1 = v164;
    }
    v147 = v1;
    memcpy(&v1, &v110, 360);
    memcpy(&v33, &v139, 216);
    v177 = *((&v110 as &char + 588) as &i32);
    v32 = v139;
    v51 = 0;
    v52 = v177;
    v164 = struct32 {
        field_0: &g_41e56c
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v110 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v32 = v112;
    v30 = v110;
    memcpy(&v110, &v1, 360);
    memcpy(&v139, &v33, 216);
    v139 = v32;
    v156 = &g_20;
    v157 = v177;
    v164 = struct32 {
        field_0: &g_41e572
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v142 = v3;
    v140 = v1;
    memcpy(&v1, &v110, 592);
    v110 = clap_builder::builder::command::Command::arg(&v53, &v1);
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v1 = 0;
    v3 = 0;
    v6 = 0;
    v7 = 0;
    v8 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v44 = v0;
    v45 = &g_41df7c;
    v46 = &g_1;
    v47 = &g_41df7c;
    v48 = &g_1;
    v49 = 0;
    v50 = 0x11000000110000;
    v51 = 0;
    v52 = 3337;
    v53 = 0;
    v54 = &g_1;
    v55 = 0;
    v53 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_41);
    v178 = v54;
    v179 = v55;
    *((v178 + v179 + 48) as &i128) = 154716900305439788636718238171463177281;
    *((v178 + v179 + &g_20 as &u8) as &i128) = 102777931884194543464376768450400505670;
    *((v178 + v179 + &g_1 as &u8) as &i128) = 43139841719209263815761973023609742880;
    *((v178 + v179) as &i128) = 134815259032657103638792197494066738037;
    *((v178 + v179 + &g_31 as &u8) as &i32) = 1936484705;
    v55 = v179 + &g_41 as &u8;
    v164 = *((&v53 as &char + 8) as &i128);
    if v41 != 0x8000000000000000 {
        v53 = v164;
    }
    v41 = v53;
    memcpy(&v53, &v1, 360);
    memcpy(&v53, &v32, 216);
    v180 = v52;
    v86 = v32;
    v108 = 0;
    v109 = v180;
    v164 = struct32 {
        field_0: &g_41e5b7
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v86 = v3;
    v84 = v1;
    memcpy(&v1, &v53, 360);
    memcpy(&v32, &v53, 216);
    v32 = v86;
    v51 = &g_20;
    v52 = v180;
    v53 = clap_builder::builder::command::Command::arg(&v110, &v1);
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v136 = 0;
    v139 = 0;
    v142 = 0;
    v144 = 0;
    v110 = 0;
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v115 = &g_1;
    v116 = 0;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v135 = &g_1;
    v138 = &g_1;
    v141 = &g_1;
    v143 = &g_1;
    v145 = &g_1;
    v146 = 0;
    v147 = 0x8000000000000000;
    v148 = 0x8000000000000000;
    v149 = v0;
    v150 = &g_413d6c;
    v151 = &g_1;
    v152 = &g_413d6c;
    v153 = &g_1;
    v154 = 0;
    v155 = 0x11000000110000;
    v156 = 0;
    v157 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v181 = v2;
    v182 = v3;
    *((v181 + v182 + &g_20 as &u8) as &i128) = 148107131890582734753685752596551187315;
    *((v181 + v182 + &g_1 as &u8) as &i128) = 112035778088987133756951194842678259232;
    *((v181 + v182) as &i128) = 154800226621007392261293913872862049633;
    *((v181 + v182 + 48) as &i8) = 119;
    v3 = v182 + &g_31 as &u8;
    v164 = *((&v1 as &char + 8) as &i128);
    if v147 != 0x8000000000000000 {
        v1 = v164;
    }
    v147 = v1;
    memcpy(&v1, &v110, 360);
    memcpy(&v32, &v139, 224);
    v32 = v139;
    v164 = struct32 {
        field_0: &g_413d80
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v110 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v32 = v112;
    v30 = v110;
    memcpy(&v110, &v1, 360);
    memcpy(&v139, &v32, 224);
    v139 = v32;
    v164 = struct32 {
        field_0: &g_413db4
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v142 = v3;
    v140 = v1;
    memcpy(&v1, &v110, 592);
    v110 = clap_builder::builder::command::Command::arg(&v53, &v1);
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v86 = 0;
    v89 = 0;
    v91 = 0;
    v53 = 0;
    v55 = 0;
    v58 = 0;
    v59 = 0;
    v61 = &g_1;
    v63 = 0;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v85 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = 0x8000000000000000;
    v97 = 0x8000000000000000;
    v100 = v0;
    v102 = &g_41df5a;
    v103 = &g_1;
    v104 = &g_41df5a;
    v105 = &g_1;
    v106 = 0;
    v107 = 0x11000000110000;
    v108 = 0;
    v109 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v183 = v2;
    v184 = v3;
    *((v183 + v184 + &g_1 as &u8) as &i128) = 134887626565309078295179333713114589472;
    *((v183 + v184) as &i128) = 156103452149030638595983587984898617459;
    v3 = v184 + &g_11 as &u8;
    v164 = *((&v1 as &char + 8) as &i128);
    if v95 != 0x8000000000000000 {
        v1 = v164;
    }
    v95 = v1;
    memcpy(&v1, &v53, 360);
    memcpy(&v32, &v86, 224);
    v32 = v86;
    v164 = struct32 {
        field_0: &g_41e609
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v53 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v32 = v55;
    v30 = v53;
    memcpy(&v53, &v1, 360);
    memcpy(&v86, &v32, 224);
    v86 = v32;
    v164 = struct32 {
        field_0: &g_41e572
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v89 = v3;
    v87 = v1;
    memcpy(&v1, &v53, 592);
    v53 = clap_builder::builder::command::Command::arg(&v110, &v1);
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v136 = 0;
    v139 = 0;
    v142 = 0;
    v144 = 0;
    v110 = 0;
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v115 = &g_1;
    v116 = 0;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v135 = &g_1;
    v138 = &g_1;
    v141 = &g_1;
    v143 = &g_1;
    v145 = &g_1;
    v146 = 0;
    v147 = 0x8000000000000000;
    v148 = 0x8000000000000000;
    v149 = v0;
    v150 = &g_41df58;
    v151 = &g_1;
    v152 = &g_41df58;
    v153 = &g_1;
    v154 = 0;
    v155 = 0x11000000110000;
    v156 = 0;
    v157 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v185 = v2;
    v186 = v3;
    *((v185 + v186 + &g_20 as &u8) as &i128) = 144083035765010652508971239790832481108;
    *((v185 + v186 + &g_1 as &u8) as &i128) = 97440369421875310856038855457104601204;
    *((v185 + v186) as &i128) = 156103574818592096261515197807657776481;
    *((v185 + v186 + 48) as &i16) = 30575;
    v3 = v186 + &g_31 as &u8;
    v164 = *((&v1 as &char + 8) as &i128);
    if v147 != 0x8000000000000000 {
        v1 = v164;
    }
    v147 = v1;
    memcpy(&v1, &v110, 360);
    memcpy(&v32, &v139, 224);
    v32 = v139;
    v164 = struct32 {
        field_0: &g_413d80
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v110 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v32 = v112;
    v30 = v110;
    memcpy(&v110, &v1, 360);
    memcpy(&v139, &v32, 224);
    v139 = v32;
    v164 = struct32 {
        field_0: &g_413db4
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v187 = v0;
    v142 = v3;
    v140 = v1;
    memcpy(&v1, &v110, 592);
    v110 = clap_builder::builder::command::Command::arg(&v53, &v1);
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v86 = 0;
    v89 = 0;
    v91 = 0;
    v53 = 0;
    v55 = 0;
    v58 = 0;
    v59 = 0;
    v61 = &g_1;
    v63 = 0;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v85 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = 0x8000000000000000;
    v97 = 0x8000000000000000;
    v100 = v187;
    v102 = &g_41df63;
    v103 = &g_1;
    v104 = &g_41df63;
    v105 = &g_1;
    v106 = 0;
    v107 = 0x11000000110000;
    v108 = 0;
    v109 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v188 = v2;
    v189 = v3;
    *((v188 + v189) as &i128) = 43139740705062589668512354681324136564;
    *((v188 + v189 + &g_1 as &u8) as &i32) = 1702521203;
    v3 = v189 + &g_11 as &u8;
    v164 = *((&v1 as &char + 8) as &i128);
    if v95 != 0x8000000000000000 {
        v1 = v164;
    }
    v95 = v1;
    memcpy(&v1, &v53, 360);
    memcpy(&v32, &v86, 224);
    v32 = v86;
    v164 = struct32 {
        field_0: &g_41e609
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v53 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v32 = v55;
    v30 = v53;
    memcpy(&v53, &v1, 360);
    memcpy(&v86, &v32, 224);
    v86 = v32;
    v164 = struct32 {
        field_0: &g_41e572
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v89 = v3;
    v87 = v1;
    memcpy(&v1, &v53, 592);
    v53 = clap_builder::builder::command::Command::arg(&v110, &v1);
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v1 = 0;
    v3 = 0;
    v6 = 0;
    v7 = 0;
    v8 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v44 = v187;
    v45 = &g_41df6a;
    v46 = &g_1;
    v47 = &g_41df6a;
    v48 = &g_1;
    v49 = 0;
    v50 = 0x11000000110000;
    v51 = 0;
    v52 = 3337;
    v110 = 0;
    v111 = &g_1;
    v112 = 0;
    v110 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 199);
    v190 = v112;
    memcpy(v111 + v190, &g_41e650, 199);
    v112 = v190 + 199;
    v164 = *((&v110 as &char + 8) as &i128);
    if v41 != 0x8000000000000000 {
        v110 = v164;
    }
    v41 = v110;
    memcpy(&v110, &v1, 360);
    memcpy(&v110, &v32, 224);
    v139 = v32;
    v164 = struct32 {
        field_0: &g_41e609
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v139 = v3;
    v137 = v1;
    memcpy(&v1, &v110, 592);
    v110 = clap_builder::builder::command::Command::arg(&v53, &v1);
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v86 = 0;
    v89 = 0;
    v91 = 0;
    v53 = 0;
    v55 = 0;
    v58 = 0;
    v59 = 0;
    v61 = &g_1;
    v63 = 0;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v85 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = 0x8000000000000000;
    v97 = 0x8000000000000000;
    v100 = v187;
    v102 = &g_41df71;
    v103 = &g_1;
    v104 = &g_41df71;
    v105 = &g_1;
    v106 = 0;
    v107 = 0x11000000110000;
    v108 = 0;
    v109 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_4e);
    v191 = v2;
    v192 = v3;
    *((v191 + v192 + &g_31 as &u8) as &i128) = 132120274316577269058959239312654233460;
    *((v191 + v192 + 48) as &i128) = 43134771356331883749837719713340417390;
    *((v191 + v192 + &g_20 as &u8) as &i128) = 140130365718635110032459474448466276969;
    *((v191 + v192 + &g_1 as &u8) as &i128) = 135749465868572546113005376036687736431;
    *((v191 + v192) as &i128) = 131762087145867937779702064231070921328;
    *((v191 + v192 + &g_4a as &u8) as &i64) = 7234304265016272240;
    v3 = v192 + &g_4e as &u8;
    v164 = *((&v1 as &char + 8) as &i128);
    if v95 != 0x8000000000000000 {
        v1 = v164;
    }
    v95 = v1;
    v1 = v53;
    memcpy(&v6, &v58, 320);
    v33 = *((&v86 as &char + 8) as &i128);
    v35 = v89;
    v36 = v90;
    v38 = *((&v91 as &char + 8) as &i128);
    memcpy(&v41, &v95, 144);
    v193 = *((&v53 as &char + 588) as &i32);
    v3 = &g_1;
    v4 = 0;
    v5 = &g_1;
    v32 = v86;
    v40 = 0;
    v51 = 0;
    v52 = v193;
    v164 = struct32 {
        field_0: &g_41e609
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v53 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v32 = v55;
    v30 = v53;
    v53 = v1;
    memcpy(&v58, &v6, 320);
    v194 = v36;
    v195 = v38;
    v87 = v33;
    v89 = v35;
    v90 = v194;
    v92 = v195;
    memcpy(&v95, &v41, 144);
    v55 = &g_1;
    v56 = 0;
    v57 = &g_1;
    v86 = v32;
    v94 = 0;
    v108 = 0;
    v109 = v193;
    v164 = struct32 {
        field_0: &g_41e572
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v94 = v3;
    v92 = v1;
    v1 = v53;
    memcpy(&v6, &v58, 320);
    v196 = v89;
    v197 = v90;
    v198 = v92;
    v33 = v87;
    v35 = v196;
    v36 = v197;
    v38 = v198;
    memcpy(&v41, &v95, 144);
    v3 = &g_1;
    v4 = 0;
    v5 = &g_1;
    v32 = v86;
    v40 = v94;
    v51 = 0x400;
    v52 = v193;
    v53 = clap_builder::builder::command::Command::arg(&v110, &v1);
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v136 = 0;
    v139 = 0;
    v142 = 0;
    v144 = 0;
    v110 = 0;
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v115 = &g_1;
    v116 = 0;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v135 = &g_1;
    v138 = &g_1;
    v141 = &g_1;
    v143 = &g_1;
    v145 = &g_1;
    v146 = 0;
    v147 = 0x8000000000000000;
    v148 = 0x8000000000000000;
    v199 = v0;
    v149 = v199;
    v150 = &g_41df8b;
    v151 = &g_1;
    v152 = &g_41df8b;
    v153 = &g_1;
    v154 = 0;
    v155 = 0x11000000110000;
    v156 = 0;
    v157 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v200 = v2;
    v201 = v3;
    *((v200 + v201 + &g_1 as &u8) as &i128) = 129451488026703353917192115562751096175;
    *((v200 + v201) as &i128) = 151700466039580858580347132593299616629;
    *((v200 + v201 + &g_20 as &u8) as &i32) = 1735289196;
    v3 = v201 + &g_20 as &u8;
    v164 = *((&v1 as &char + 8) as &i128);
    if v147 != 0x8000000000000000 {
        v1 = v164;
    }
    v147 = v1;
    memcpy(&v1, &v110, 360);
    memcpy(&v33, &v139, 224);
    v32 = v139;
    v164 = struct32 {
        field_0: &g_41e790
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v110 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v32 = v112;
    v30 = v110;
    memcpy(&v110, &v1, 360);
    memcpy(&v139, &v33, 224);
    v139 = v32;
    v164 = struct32 {
        field_0: &g_41df92
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v142 = v3;
    v140 = v1;
    memcpy(&v1, &v110, 592);
    v110 = struct96 {
        field_0: &g_41df90
        field_8: &g_1
        field_16: &g_413db8
        field_24: &g_1
        field_32: &g_41df92
        field_40: &g_1
        field_48: &g_41df9b
        field_56: &g_1
        field_64: &g_41dfa7
        field_72: &g_1
        field_80: 0
        field_88: &g_1
    };
    v162 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v110);
    v164 = clap_builder::builder::arg::Arg::value_parser(&v1, &v162);
    v110 = clap_builder::builder::command::Command::arg(&v53, &v164);
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v1 = 0;
    v3 = 0;
    v6 = 0;
    v7 = 0;
    v8 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v44 = v199;
    v45 = &g_41dff4;
    v46 = &g_1;
    v47 = &g_41dff4;
    v48 = &g_1;
    v49 = 0;
    v50 = 0x11000000110000;
    v51 = 0;
    v52 = 3337;
    v53 = 0;
    v54 = &g_1;
    v55 = 0;
    v53 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 89);
    v202 = v54;
    v203 = v55;
    *((v202 + v203 + 73) as &i128) = 117352526640795990568270602711929350500;
    *((v202 + v203 + &g_31 as &u8) as &i128) = 140187480115360629529859795238990737007;
    *((v202 + v203 + 48) as &i128) = 140173526427250951474659556304094258531;
    *((v202 + v203 + &g_20 as &u8) as &i128) = 132097881372068886797809553354896842852;
    *((v202 + v203 + &g_1 as &u8) as &i128) = 134856694488384540326149375060078522981;
    *((v202 + v203) as &i128) = 154722031746976812655626069107980989040;
    v55 = v203 + 89;
    v164 = *((&v53 as &char + 8) as &i128);
    if v41 != 0x8000000000000000 {
        v53 = v164;
    }
    v41 = v53;
    memcpy(&v53, &v1, 360);
    memcpy(&v53, &v32, 224);
    v86 = v32;
    v164 = struct32 {
        field_0: &g_41e7ef
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v86 = v3;
    v84 = v1;
    memcpy(&v1, &v53, 592);
    v53 = clap_builder::builder::command::Command::arg(&v110, &v1);
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v1 = 0;
    v3 = 0;
    v6 = 0;
    v7 = 0;
    v8 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v44 = v199;
    v45 = &g_41dffa;
    v46 = &g_1;
    v47 = &g_41dffa;
    v48 = &g_1;
    v49 = 0;
    v50 = 0x11000000110000;
    v51 = 0;
    v52 = 3337;
    v110 = 0;
    v111 = &g_1;
    v112 = 0;
    v110 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v204 = v111;
    v205 = v112;
    *((v204 + v205 + &g_1 as &u8) as &i128) = 133470188970659411901521701741764308845;
    *((v204 + v205) as &i128) = 43062039345770934207975158678923011443;
    *((v204 + v205 + &g_11 as &u8) as &i64) = 8391737100187231337;
    v112 = v205 + &g_20 as &u8;
    v164 = *((&v110 as &char + 8) as &i128);
    if v41 != 0x8000000000000000 {
        v110 = v164;
    }
    v41 = v110;
    memcpy(&v110, &v1, 592);
    v164 = struct32 {
        field_0: &g_41e81b
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v164);
    v142 = v3;
    v140 = v1;
    memcpy(&v1, &v110, 592);
    v110 = struct64 {
        field_0: &g_41e81b
        field_8: &g_1
        field_16: &g_413d4c
        field_24: &g_1
        field_32: &g_413d28
        field_40: &g_1
        field_48: &g_41e820
        field_56: &g_1
    };
    v164 = clap_builder::builder::arg::Arg::value_parser(&v1, &v110);
    memcpy(&v110, &v164, 592);
    v162 = struct32 {
        field_0: &g_41e826
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v162);
    v139 = v3;
    v137 = v1;
    memcpy(&v1, &v110, 592);
    v110 = clap_builder::builder::command::Command::arg(&v53, &v1);
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v86 = 0;
    v89 = 0;
    v91 = 0;
    v53 = 0;
    v55 = 0;
    v58 = 0;
    v59 = 0;
    v61 = &g_1;
    v63 = 0;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v85 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = 0x8000000000000000;
    v97 = 0x8000000000000000;
    v100 = v199;
    v102 = &g_41e82d;
    v103 = &g_1;
    v104 = 0;
    v106 = 0;
    v107 = 0xd01000000040011000000110000;
    clap_builder::builder::command::Command::arg(a0, &v110, &v53);
    return a0;
}
