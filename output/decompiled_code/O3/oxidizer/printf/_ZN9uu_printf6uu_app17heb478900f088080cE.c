fn uu_printf::uu_app(a0: u32) -> u64 {
    let v0: i16;  // [bp-0x890]
    let v1: i8;  // [sp-0x88e]
    let v2: i64;  // [sp-0x880]
    let v3: i128;  // [sp-0x878]
    let v4: i128;  // [sp-0x868]
    let v5: i64;  // [sp-0x858]
    let v6: i128;  // [sp-0x848]
    let v7: i64;  // [sp-0x838]
    let v8: i64;  // [sp-0x830]
    let v9: i64;  // [sp-0x828], Other Possible Types: Enum
    let v10: i64;  // [sp-0x820]
    let v11: i64;  // [sp-0x818]
    let v12: i64;  // [sp-0x810]
    let v13: i64;  // [sp-0x808]
    let v14: i128;  // [bp-0x800]
    let v15: i64;  // [sp-0x7f8]
    let v16: i64;  // [sp-0x7f0]
    let v17: i64;  // [sp-0x7e8]
    let v18: i64;  // [bp-0x7e0]
    let v19: i64;  // [sp-0x7d8]
    let v20: i64;  // [sp-0x7d0]
    let v21: i128;  // [bp-0x7c8]
    let v22: i64;  // [sp-0x7c0]
    let v23: i64;  // [sp-0x7b8]
    let v24: i128;  // [sp-0x7b0]
    let v25: struct16;  // [sp-0x7a8]
    let v26: i64;  // [sp-0x7a0]
    let v27: i128;  // [bp-0x798]
    let v28: i64;  // [sp-0x788]
    let v29: i128;  // [sp-0x780]
    let v30: i64;  // [sp-0x770]
    let v31: i128;  // [sp-0x768]
    let v32: i64;  // [sp-0x758]
    let v33: i128;  // [sp-0x750]
    let v34: i64;  // [sp-0x740]
    let v35: i128;  // [sp-0x738]
    let v36: i64;  // [sp-0x728]
    let v37: i128;  // [sp-0x720]
    let v38: i64;  // [sp-0x718]
    let v39: i128;  // [bp-0x710]
    let v40: i128;  // [bp-0x708]
    let v41: i64;  // [sp-0x700]
    let v42: i64;  // [bp-0x6f8]
    let v43: i128;  // [bp-0x6f0]
    let v44: i64;  // [sp-0x6e8]
    let v45: i128;  // [bp-0x6e0]
    let v46: i128;  // [bp-0x6d8]
    let v47: i64;  // [sp-0x6d0]
    let v48: i64;  // [bp-0x6c8]
    let v49: i128;  // [bp-0x6c0]
    let v50: i64;  // [sp-0x6b8]
    let v51: i128;  // [bp-0x6b0]
    let v52: i128;  // [bp-0x6a8]
    let v53: i64;  // [sp-0x6a0]
    let v54: i128;  // [bp-0x698]
    let v55: i128;  // [bp-0x690]
    let v56: i64;  // [sp-0x688]
    let v57: i128;  // [bp-0x680]
    let v58: i64;  // [sp-0x678]
    let v59: i64;  // [sp-0x670]
    let v60: i128;  // [sp-0x668]
    let v61: i64;  // [sp-0x658]
    let v62: i128;  // [sp-0x650]
    let v63: i64;  // [sp-0x640]
    let v64: i128;  // [bp-0x638]
    let v65: i64;  // [sp-0x630]
    let v66: i64;  // [sp-0x628]
    let v67: i128;  // [bp-0x620]
    let v68: i64;  // [sp-0x618]
    let v69: i64;  // [sp-0x610]
    let v70: i64;  // [bp-0x608]
    let v71: i128;  // [sp-0x600]
    let v72: i64;  // [bp-0x5f8]
    let v73: i64;  // [sp-0x5f0]
    let v74: i64;  // [bp-0x5e8]
    let v75: i64;  // [bp-0x5e4]
    let v76: i32;  // [sp-0x5e0]
    let v77: i16;  // [bp-0x5dc]
    let v78: i16;  // [sp-0x5db]
    let v79: i8;  // [sp-0x5d9]
    let v80: i64;  // [sp-0x5d8]
    let v81: i64;  // [sp-0x5c8]
    let v82: i64;  // [sp-0x5c0]
    let v83: i64;  // [sp-0x5b8]
    let v84: i64;  // [sp-0x5a8]
    let v85: i8;  // [bp-0x5a0]
    let v86: i64;  // [sp-0x598]
    let v87: i64;  // [sp-0x588]
    let v88: i64;  // [sp-0x578]
    let v89: i64;  // [sp-0x570]
    let v90: i64;  // [sp-0x568]
    let v91: i64;  // [bp-0x558], Other Possible Types: Enum
    let v92: i64;  // [sp-0x550]
    let v93: i64;  // [sp-0x548]
    let v94: i64;  // [sp-0x540]
    let v95: i128;  // [bp-0x538]
    let v96: i64;  // [sp-0x530]
    let v97: i64;  // [sp-0x528]
    let v98: i64;  // [sp-0x520]
    let v99: i64;  // [sp-0x518]
    let v100: i64;  // [sp-0x510]
    let v101: i64;  // [sp-0x508]
    let v102: i64;  // [sp-0x4f0]
    let v103: i64;  // [sp-0x4e8]
    let v104: i128;  // [sp-0x4e0]
    let v105: struct16;  // [bp-0x4d8], Other Possible Types: i8
    let v106: i64;  // [sp-0x4d0]
    let v107: i128;  // [bp-0x4c8]
    let v108: i64;  // [sp-0x4b8]
    let v109: i128;  // [sp-0x4b0]
    let v110: i64;  // [sp-0x4a0]
    let v111: i128;  // [sp-0x498]
    let v112: i64;  // [sp-0x488]
    let v113: i128;  // [sp-0x480]
    let v114: i64;  // [sp-0x470]
    let v115: i128;  // [sp-0x468]
    let v116: i64;  // [sp-0x458]
    let v117: i128;  // [sp-0x450]
    let v118: i64;  // [sp-0x440]
    let v119: i128;  // [sp-0x438]
    let v120: i64;  // [sp-0x428]
    let v121: i128;  // [sp-0x420]
    let v122: i64;  // [sp-0x410]
    let v123: i128;  // [sp-0x408]
    let v124: i64;  // [sp-0x3f8]
    let v125: i128;  // [sp-0x3f0]
    let v126: i64;  // [sp-0x3e0]
    let v127: i128;  // [sp-0x3d8]
    let v128: i64;  // [sp-0x3c8]
    let v129: i128;  // [bp-0x3c0]
    let v130: i64;  // [sp-0x3b8]
    let v131: i64;  // [bp-0x3b0]
    let v132: i64;  // [sp-0x3a8]
    let v133: i192;  // [sp-0x3a0]
    let v134: i64;  // [sp-0x388]
    let v135: i64;  // [sp-0x360]
    let v136: i64;  // [sp-0x348]
    let v137: i64;  // [sp-0x340]
    let v138: i64;  // [sp-0x338]
    let v139: i128;  // [sp-0x330]
    let v140: i64;  // [sp-0x328]
    let v141: i64;  // [sp-0x320]
    let v142: i32;  // [bp-0x318]
    let v143: i64;  // [bp-0x314]
    let v144: i32;  // [sp-0x310]
    let v145: i8;  // [bp-0x30c]
    let v146: i16;  // [sp-0x30b]
    let v147: i8;  // [sp-0x309]
    let v148: i8;  // [bp-0x2d8]
    let v149: i8;  // [bp-0x2d0]
    let v150: i64;  // [sp-0x29c]
    let v151: i32;  // [sp-0x294]
    let v152: i64;  // [bp-0x288], Other Possible Types: Enum, struct24
    let v153: i64;  // [sp-0x280]
    let v154: i64;  // [sp-0x278]
    let v155: i8;  // [bp-0xb0]
    let v156: i8;  // [bp-0xa0]
    let v157: i8;  // [bp-0x90]
    let v158: i8;  // [bp-0x80]
    let v159: i8;  // [bp-0x70]
    let v160: i8;  // [bp-0x60]
    let v161: i8;  // [bp-0x50]
    let v162: i8;  // [bp-0x40]
    let v164: i128;  // xmm0
    let v166: i64;  // rcx
    let v167: i64;  // rsi
    let v168: i64;  // rbx
    let v169: i64;  // rbx
    let v170: i64;  // rbx
    let v171: i64;  // rax
    let v172: i64;  // rcx
    let v173: i64;  // r14
    let v174: i64;  // r15
    let v175: i64;  // r13
    let v176: i64;  // rdx
    let v177: i32;  // r12d
    let v178: i64;  // rax
    let v180: i64;  // rbx
    let v181: i64;  // rbx
    let v182: i64;  // rax
    let v183: i64;  // rcx
    let v184: i64;  // r15
    let v185: i64;  // r14
    let v186: i64;  // r13
    let v187: i64;  // rdx
    let v188: i32;  // r12d
    let v189: i64;  // rax
    let v191: i64;  // rbp
    let v192: i64;  // rbx
    let v193: i64;  // rbx
    let v194: i64;  // rbx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v164 = g_4f0f98;
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
    v14 = v91;
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
    v39 = v152;
    v41 = 0x8000000000000000;
    v42 = v3;
    v44 = 0x8000000000000000;
    v45 = v6;
    v47 = 0x8000000000000000;
    v48 = v0;
    v50 = 0x8000000000000000;
    v51 = v162;
    v53 = 0x8000000000000000;
    v54 = v161;
    v56 = 0x8000000000000000;
    v57 = v160;
    v59 = 0x8000000000000000;
    v60 = v159;
    v61 = 0x8000000000000000;
    v62 = v158;
    v63 = 0x8000000000000000;
    v64 = v157;
    v66 = 0x8000000000000000;
    v67 = v156;
    v69 = 0x8000000000000000;
    v70 = v155;
    v72 = v164;
    v74 = 0;
    v80 = 0;
    v81 = &g_419f4c;
    v82 = &g_1;
    v83 = 0;
    v84 = 0;
    v86 = 0;
    v87 = 0;
    v88 = 0;
    v89 = 0x200110000;
    v90 = 0;
    v91 = 0;
    v92 = &g_1;
    v93 = 0;
    v91 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 69);
    v166 = v92;
    v167 = v93;
    *((v166 + v167 + &g_21 as &u8) as &i128) = 145495448423263327746623219711159005808;
    *((v166 + v167 + &g_11 as &u8) as &i128) = 43056764311187517342334192138812747122;
    *((v166 + v167 + &g_1 as &u8) as &i128) = 148074578883174774526382401782944916581;
    *((v166 + v167) as &i128) = 153366862558027798497566971345586713168;
    *((v166 + v167 + &g_31 as &u8) as &i64) = 3347146965563307367;
    v93 = v167 + 69;
    v152 = *((&v91 as &char + 8) as &i128);
    if v44 != 0x8000000000000000 {
        v91 = v152;
    }
    v44 = v91;
    v45 = v91;
    memcpy(&v91, &v9, 712);
    v9 = 0;
    v10 = &g_1;
    v11 = 0;
    v9 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 9093);
    v168 = v11;
    memcpy(v10 + v168, &g_419f97, 9093);
    v11 = v168 + 9093;
    v169 = v9;
    v152 = *((&v9 as &char + 8) as &i128);
    if v169 != 0x8000000000000000 {
        v9 = v152;
    }
    v130 = v169;
    v131 = v9;
    memcpy(&v9, &v91, 712);
    v152 = uucore::format_usage(&g_41c31c, &g_31);
    v170 = v152;
    if v170 != 0x8000000000000000 {
        v91 = *((&v152 as &char + 8) as &i128);
    }
    v61 = v170;
    v62 = v91;
    memcpy(&v91, &v9, 700);
    v150 = 0x14000000140000 | *((&v89 as &char + 4) as &i64);
    v151 = *((&v90 as &char + 4) as &i32);
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
    v61 = 0x8000000000000000;
    v65 = 9223372036854775809;
    v68 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v69 = &g_1;
    v70 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v71 = &g_1;
    v72 = 0;
    v74 = 0x11000000110000;
    v76 = 0;
    v77 = 3337;
    v152 = 0;
    v153 = &g_1;
    v154 = 0;
    v152 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v8 = 9223372036854775809;
    v171 = v153;
    v172 = v154;
    *((v171 + v172) as &i128) = 152110414024190366979331735664405869136;
    *((v171 + v172 + &g_1 as &u8) as &i64) = 7957695015158641263;
    v154 = v172 + &g_11 as &u8;
    v3 = *((&v152 as &char + 8) as &i128);
    if v59 != 0x8000000000000000 {
        v152 = v3;
    }
    v59 = v152;
    v173 = v9;
    v174 = v10;
    v3 = v11;
    v4 = v13;
    v5 = v15;
    v175 = v16;
    memcpy(&v152, &v19, 464);
    v176 = v70;
    v6 = v71;
    v7 = v73;
    v2 = *((&v74 as &char + 4) as &i64);
    v0 = v78;
    v1 = v79;
    if !v93 {
        goto LABEL_48bfeb;
    } else {
        v177 = v74;
        if v176 || v177 != 0x110000 {
            v178 = v94;
            v173 += v173 < &g_1;
            v94 = v178 + &g_1 as &u8;
        } else {
LABEL_48bfeb:
        }
    }
    if !v175 {
        v180 = v149;
        v17 = v148;
    }
    v9 = v173;
    v10 = v174;
    v11 = v3;
    v13 = v4;
    v15 = v5;
    v16 = v175 + (v175 < &g_1);
    v17 = v17;
    v18 = v180;
    memcpy(&v19, &v152, 464);
    v70 = v176;
    v71 = v6;
    v73 = v7;
    v74 = v177;
    v75 = v2;
    v77 = &g_1;
    v78 = v0;
    v79 = v1;
    v181 = v107;
    if v181 == v105 {
        v105 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v181 * 592 + v106, &v9, 592);
    v107 = v181 + &g_1 as &u8;
    memcpy(&v9, &v91, 712);
    v104 = 0;
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
    v127 = 0;
    v129 = 0;
    v91 = 0;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v101 = &g_1;
    v102 = 0;
    v103 = &g_1;
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
    v128 = &g_1;
    v131 = &g_1;
    v132 = 0;
    v133 = 0x8000000000000000;
    v134 = 0x8000000000000000;
    v135 = v8;
    v136 = &g_41c371;
    v137 = &g_1;
    v138 = &g_41c371;
    v139 = &g_1;
    v140 = 0;
    v142 = 0x11000000110000;
    v144 = 0;
    v145 = 3337;
    v152 = 0;
    v153 = &g_1;
    v154 = 0;
    v152 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v182 = v153;
    v183 = v154;
    *((v182 + v183 + &g_1 as &u8) as &i128) = 146793563361265706238000395030845417843;
    *((v182 + v183) as &i128) = 146760928493172414826559440180688286288;
    v154 = v183 + &g_11 as &u8;
    v3 = *((&v152 as &char + 8) as &i128);
    if v133 != 0x8000000000000000 {
        v152 = v3;
    }
    v133 = v152;
    v184 = v91;
    v185 = v92;
    v3 = v93;
    v4 = v95;
    v5 = v97;
    v186 = v98;
    memcpy(&v152, &v101, 464);
    v187 = v138;
    v6 = v139;
    v7 = v141;
    v2 = *((&v142 as &char + 4) as &i64);
    v0 = v146;
    v1 = v147;
    if !v11 {
        goto LABEL_48c4cb;
    } else {
        v188 = v142;
        if v187 || v188 != 0x110000 {
            v189 = v12;
            v184 += v184 < &g_1;
            v12 = v189 + &g_1 as &u8;
        } else {
LABEL_48c4cb:
        }
    }
    v99 = v99;
    if !v186 {
        v191 = v85;
        v99 = v84;
    }
    v91 = v184;
    v92 = v185;
    v93 = v3;
    v95 = v4;
    v97 = v5;
    v98 = v186 + (v186 < &g_1);
    v99 = v99;
    v100 = v191;
    memcpy(&v101, &v152, 464);
    v138 = v187;
    v139 = v6;
    v141 = v7;
    v142 = v188;
    v143 = v2;
    v145 = &g_1;
    v146 = v0;
    v147 = v1;
    v192 = v27;
    if v192 == *((&v24 as &char + 8) as &i64) {
        v25 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v192 * 592 + v26, &v91, 592);
    v27 = v192 + &g_1 as &u8;
    memcpy(&v91, &v9, 712);
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
    v16 = &g_1;
    v17 = v148;
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
    v61 = 0x8000000000000000;
    v65 = v8;
    v68 = &g_41c391;
    v69 = &g_1;
    v70 = 0;
    v72 = 0;
    v74 = 0x11000000110000;
    v76 = 0;
    v77 = 3337;
    v193 = v107;
    if v193 == *((&v104 as &char + 8) as &i64) {
        v105 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v193 * 592 + v106, &v9, 592);
    v107 = v193 + &g_1 as &u8;
    memcpy(&v9, &v91, 712);
    v104 = 0;
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
    v127 = 0;
    v129 = 0;
    v91 = 0;
    v93 = 0;
    v96 = 0;
    v98 = &g_1;
    v99 = v84;
    v101 = &g_1;
    v102 = 0;
    v103 = &g_1;
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
    v128 = &g_1;
    v131 = &g_1;
    v132 = 0;
    v133 = 0x8000000000000000;
    v134 = 0x8000000000000000;
    v135 = v65;
    v136 = &g_410ec0;
    v137 = &g_1;
    v138 = 0;
    v140 = 0;
    v142 = 0x11000000110000;
    v144 = 0;
    v145 = 3329;
    v194 = v27;
    if v194 == *((&v24 as &char + 8) as &i64) {
        v25 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v194 * 592 + v26, &v91, 592);
    v27 = v194 + &g_1 as &u8;
    memcpy(a0, &v9, 712);
    return a0;
}
