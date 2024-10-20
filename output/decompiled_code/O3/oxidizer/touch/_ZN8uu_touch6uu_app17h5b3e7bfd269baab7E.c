fn uu_touch::uu_app(a0: u32) -> u64 {
    let v0: i192;  // [sp-0xaf8], Other Possible Types: struct24, Enum, struct592, struct96
    let v1: i64;  // [sp-0xaf0]
    let v2: i64;  // [sp-0xae8]
    let v3: i64;  // [sp-0xad0]
    let v4: i64;  // [sp-0xac0]
    let v5: i64;  // [sp-0xaa8]
    let v6: i8;  // [sp-0xa9f]
    let v7: i64;  // [sp-0xa90], Other Possible Types: struct16
    let v8: i64;  // [sp-0xa88]
    let v9: i128;  // [bp-0xa80]
    let v10: i64;  // [sp-0xa70]
    let v11: i128;  // [sp-0xa68]
    let v12: i64;  // [sp-0xa58]
    let v13: i128;  // [sp-0xa50]
    let v14: i64;  // [sp-0xa40]
    let v15: i128;  // [sp-0xa38]
    let v16: i64;  // [sp-0xa28]
    let v17: i128;  // [sp-0xa20]
    let v18: i64;  // [sp-0xa10]
    let v19: i128;  // [sp-0xa08]
    let v20: i64;  // [sp-0x9f8]
    let v21: i128;  // [sp-0x9f0]
    let v22: i64;  // [sp-0x9e0]
    let v23: i128;  // [sp-0x9d8]
    let v24: i64;  // [sp-0x9c8]
    let v25: i128;  // [sp-0x9c0]
    let v26: i64;  // [sp-0x9b0]
    let v27: i128;  // [sp-0x9a8]
    let v28: i64;  // [sp-0x998]
    let v29: i128;  // [sp-0x990]
    let v30: i64;  // [sp-0x980]
    let v31: i128;  // [sp-0x978]
    let v32: i64;  // [sp-0x968]
    let v33: i128;  // [sp-0x960]
    let v34: i64;  // [sp-0x950]
    let v35: i64;  // [sp-0x948]
    let v36: i64;  // [sp-0x940]
    let v37: i64;  // [sp-0x928]
    let v38: i64;  // [sp-0x900]
    let v39: i64;  // [sp-0x8e8]
    let v40: i64;  // [sp-0x8e0]
    let v41: i64;  // [sp-0x8d8]
    let v42: i64;  // [sp-0x8d0]
    let v43: i64;  // [sp-0x8c8]
    let v44: i64;  // [sp-0x8b8]
    let v45: i32;  // [sp-0x8b0]
    let v46: i8;  // [sp-0x8ac]
    let v47: i16;  // [bp-0x8ab]
    let v48: i8;  // [sp-0x8a9]
    let v49: i64;  // [sp-0x8a8], Other Possible Types: struct712, Enum, struct16
    let v50: i64;  // [sp-0x8a0]
    let v51: i64;  // [sp-0x898]
    let v52: i64;  // [sp-0x890]
    let v53: i128;  // [bp-0x888]
    let v54: i64;  // [sp-0x880]
    let v55: i64;  // [sp-0x878]
    let v56: i64;  // [sp-0x870]
    let v57: i64;  // [bp-0x868]
    let v58: i64;  // [sp-0x858]
    let v59: i8;  // [bp-0x850]
    let v60: i8;  // [sp-0x84f]
    let v61: i32;  // [sp-0x84e]
    let v62: i16;  // [sp-0x84a]
    let v63: i64;  // [sp-0x840]
    let v64: i64;  // [sp-0x838]
    let v65: i128;  // [sp-0x830]
    let v66: i64;  // [sp-0x820]
    let v67: i128;  // [bp-0x818]
    let v68: i64;  // [sp-0x810]
    let v69: i64;  // [sp-0x808]
    let v70: i128;  // [sp-0x800]
    let v71: i64;  // [sp-0x7f0]
    let v72: i128;  // [sp-0x7e8]
    let v73: i64;  // [sp-0x7d8]
    let v74: i128;  // [sp-0x7d0]
    let v75: i64;  // [sp-0x7c0]
    let v76: i128;  // [sp-0x7b8]
    let v77: i64;  // [sp-0x7a8]
    let v78: i128;  // [sp-0x7a0]
    let v79: i64;  // [sp-0x790]
    let v80: i128;  // [sp-0x788]
    let v81: i64;  // [sp-0x778]
    let v82: i128;  // [sp-0x770]
    let v83: i64;  // [sp-0x760]
    let v84: i128;  // [bp-0x758]
    let v85: i128;  // [bp-0x750]
    let v86: i64;  // [sp-0x748]
    let v87: i128;  // [bp-0x740]
    let v88: i64;  // [sp-0x730]
    let v89: i128;  // [sp-0x728]
    let v90: i64;  // [sp-0x718]
    let v91: i128;  // [sp-0x710]
    let v92: i64;  // [sp-0x700]
    let v93: i64;  // [sp-0x6f8]
    let v94: i64;  // [sp-0x6f0]
    let v95: i64;  // [sp-0x6d8]
    let v96: i128;  // [sp-0x6d0]
    let v97: i64;  // [sp-0x6b0]
    let v98: i64;  // [sp-0x698]
    let v99: i64;  // [sp-0x690]
    let v100: i64;  // [sp-0x688]
    let v101: i64;  // [sp-0x680]
    let v102: i64;  // [sp-0x678]
    let v103: i64;  // [sp-0x668]
    let v104: i32;  // [sp-0x660]
    let v105: i16;  // [sp-0x65c]
    let v106: i64;  // [sp-0x648]
    let v107: i64;  // [sp-0x640]
    let v108: i64;  // [bp-0x5d8], Other Possible Types: struct712, Enum, struct592
    let v109: i64;  // [sp-0x5d0]
    let v110: i64;  // [sp-0x5c8]
    let v111: i64;  // [sp-0x5c0]
    let v112: i64;  // [sp-0x5b8]
    let v113: i64;  // [sp-0x5b0]
    let v114: i64;  // [sp-0x5a0]
    let v115: i64;  // [sp-0x588]
    let v116: i64;  // [sp-0x570]
    let v117: i64;  // [sp-0x568]
    let v118: i128;  // [sp-0x560]
    let v119: i64;  // [sp-0x550]
    let v120: i128;  // [sp-0x548]
    let v121: i64;  // [sp-0x538]
    let v122: i128;  // [sp-0x530]
    let v123: i64;  // [sp-0x520]
    let v124: i128;  // [sp-0x518]
    let v125: struct16;  // [sp-0x510]
    let v126: i64;  // [sp-0x508]
    let v127: i128;  // [bp-0x500]
    let v128: i64;  // [sp-0x4f0]
    let v129: i128;  // [sp-0x4e8]
    let v130: i64;  // [sp-0x4d8]
    let v131: i128;  // [sp-0x4d0]
    let v132: i64;  // [sp-0x4c0]
    let v133: i128;  // [sp-0x4b8]
    let v134: i64;  // [sp-0x4a8]
    let v135: i128;  // [sp-0x4a0]
    let v136: i64;  // [sp-0x490]
    let v137: i128;  // [bp-0x488]
    let v138: i128;  // [bp-0x480]
    let v139: i64;  // [sp-0x478]
    let v140: i64;  // [bp-0x470]
    let v141: i64;  // [sp-0x460]
    let v142: i128;  // [sp-0x458]
    let v143: i64;  // [sp-0x448]
    let v144: i128;  // [sp-0x440]
    let v145: i64;  // [sp-0x430]
    let v146: i64;  // [sp-0x428]
    let v147: i64;  // [sp-0x420]
    let v148: i64;  // [sp-0x408]
    let v149: i64;  // [sp-0x3e0]
    let v150: i64;  // [sp-0x3c8]
    let v151: i64;  // [sp-0x3c0]
    let v152: i64;  // [sp-0x3b8]
    let v153: i64;  // [sp-0x3b0]
    let v154: i64;  // [sp-0x3a8]
    let v155: i64;  // [sp-0x398]
    let v156: i32;  // [sp-0x390]
    let v157: i16;  // [bp-0x38c]
    let v158: i16;  // [bp-0x38b]
    let v159: i8;  // [bp-0x389]
    let v160: i64;  // [sp-0x31c]
    let v161: i32;  // [sp-0x314]
    let v162: i64;  // [sp-0x300]
    let v163: i8;  // [bp-0x2f8]
    let v164: i8;  // [bp-0x2f0]
    let v165: i128;  // [bp-0x2e8], Other Possible Types: struct24
    let v166: i64;  // [sp-0x2d8]
    let v167: i64;  // [sp-0x2d0]
    let v168: i128;  // [sp-0x2c8]
    let v169: i128;  // [sp-0x2b8]
    let v170: i64;  // [sp-0x2a8]
    let v171: i128;  // [bp-0x298], Other Possible Types: struct32, struct592, struct16, struct48
    let v172: i64;  // [sp-0x290]
    let v173: i64;  // [sp-0x288]
    let v174: i64;  // [sp-0x280]
    let v175: i128;  // [bp-0x278]
    let v176: i128;  // [sp-0x268]
    let v177: i64;  // [sp-0x258]
    let v178: i128;  // [bp-0x250]
    let v179: i64;  // [sp-0x240]
    let v180: i64;  // [sp-0x238]
    let v181: i128;  // [sp-0x230]
    let v182: i128;  // [sp-0x220]
    let v183: i64;  // [sp-0x210]
    let v184: i8;  // [bp-0x40]
    let v186: i64;  // rbx
    let v187: i64;  // rax
    let v188: i64;  // rcx
    let v189: i64;  // rax
    let v190: i64;  // rcx
    let v191: i64;  // rax
    let v192: i64;  // rcx
    let v194: i64;  // rax
    let v195: i64;  // rcx
    let v197: i64;  // r14
    let v198: i64;  // rax
    let v199: i64;  // rcx
    let v200: i64;  // rax
    let v201: i64;  // rcx
    let v202: i64;  // rax
    let v203: i64;  // rcx
    let v204: i64;  // rax
    let v205: i64;  // rcx
    let v206: i64;  // rax
    let v207: i64;  // rcx
    let v209: i64;  // r14
    let v210: i64;  // rax
    let v211: i64;  // rcx
    let v212: i64;  // rax
    let v213: i64;  // rcx
    let v215: i64;  // rax
    let v216: i128;  // xmm1
    let v217: i128;  // xmm2
    let v218: i64;  // r14
    let v219: i64;  // rax
    let v220: i64;  // rcx
    let v221: i64;  // rax
    let v222: i128;  // xmm1
    let v223: i128;  // xmm0
    let v224: i128;  // xmm1
    let v225: i128;  // xmm2
    let v226: i64;  // rbx
    let v227: i64;  // rax
    let v228: i64;  // rcx
    let v229: i128;  // xmm0
    let v230: i128;  // xmm1
    let v231: i128;  // xmm2

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v49 = clap_builder::builder::command::Command::new(g_6d0ad0, g_6d0ad8);
    v106 = &g_46aef8;
    v107 = &g_1;
    memcpy(&v108, &v49, 712);
    v49 = clap_builder::builder::command::Command::about(&v108, &g_46aefe, &g_41);
    v0 = uucore::format_usage(&g_46af4a, &g_11);
    v186 = v0;
    if v186 != 0x8000000000000000 {
        v108 = *((&v0 as &char + 8) as &i128);
    }
    v95 = v186;
    v96 = v108;
    memcpy(&v108, &v49, 700);
    v160 = 1126449662918784 | *((&v49 as &char + 700) as &i64);
    v161 = *((&v49 as &char + 708) as &i32);
    v65 = 0;
    v67 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v49 = 0;
    v51 = 0;
    v54 = 0;
    v56 = 0;
    v58 = &g_1;
    v63 = 0;
    v64 = &g_1;
    v66 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v92 = &g_1;
    v93 = 0;
    v94 = 0x8000000000000000;
    v95 = 0x8000000000000000;
    v97 = 9223372036854775809;
    v98 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v99 = &g_1;
    v100 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v101 = &g_1;
    v102 = 0;
    v103 = 0x11000000110000;
    v104 = 0;
    v105 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v187 = v1;
    v188 = v2;
    *((v187 + v188) as &i128) = 152110414024190366979331735664405869136;
    *((v187 + v188 + &g_1 as &u8) as &i64) = 3345734071897648498;
    v2 = v188 + &g_11 as &u8;
    v171 = *((&v0 as &char + 8) as &i128);
    if v94 != 0x8000000000000000 {
        v0 = v171;
    }
    v94 = v0;
    memcpy(&v0, &v49, 588);
    v47 = *((&v49 as &char + 589) as &i16);
    v48 = *((&v49 as &char + 591) as &i8);
    v46 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v108, &v0);
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v127 = 0;
    v129 = 0;
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v140 = 0;
    v142 = 0;
    v144 = 0;
    v108 = 0;
    v110 = 0;
    v113 = 0;
    v114 = 0;
    v115 = &g_1;
    v116 = 0;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v126 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v139 = &g_1;
    v141 = &g_1;
    v143 = &g_1;
    v145 = &g_1;
    v146 = 0;
    v147 = 0x8000000000000000;
    v148 = 0x8000000000000000;
    v149 = 9223372036854775809;
    v150 = &anon.a8009f0f96d850c1c46a2cf3287456a4.20.llvm.17503802422331354604;
    v151 = &g_1;
    v152 = 0;
    v154 = 0;
    v155 = 4785074604081249;
    v156 = 0;
    v157 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v189 = v1;
    v190 = v2;
    *((v189 + v190 + &g_1 as &u8) as &i128) = 134820126785375126180819093133048968224;
    *((v189 + v190) as &i128) = 43061836418945269342976579414893095011;
    v2 = v190 + &g_11 as &u8;
    v171 = *((&v0 as &char + 8) as &i128);
    if v147 != 0x8000000000000000 {
        v0 = v171;
    }
    v147 = v0;
    memcpy(&v0, &v108, 588);
    v47 = v158;
    v48 = v159;
    v46 = &g_1;
    v108 = clap_builder::builder::command::Command::arg(&v49, &v0);
    v9 = 0;
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
    v31 = 0;
    v33 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v7 = 0;
    v8 = &g_1;
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
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &anon.a8009f0f96d850c1c46a2cf3287456a4.18.llvm.17503802422331354604;
    v40 = &g_1;
    v41 = 0;
    v43 = 0;
    v44 = 4785074604081268;
    v45 = 0;
    v46 = 3337;
    v49 = 0;
    v50 = &g_1;
    v51 = 0;
    v49 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 53);
    v191 = v50;
    v192 = v51;
    *((v191 + v192 + &g_11 as &u8) as &i128) = 154763657756292771293240359904686841956;
    *((v191 + v192 + &g_1 as &u8) as &i128) = 129461899478772011127320054328749549672;
    *((v191 + v192) as &i128) = 90742147774752764735517378202973860725;
    *((v191 + v192 + &g_21 as &u8) as &i64) = 7308613717773807205;
    v51 = v192 + 53;
    v171 = *((&v49 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v49 = v171;
    }
    v36 = v49;
    memcpy(&v49, &v0, 360);
    memcpy(&v49, &v29, 224);
    v87 = v29;
    v171 = struct32 {
        field_0: &g_46afc6
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v171);
    v87 = v2;
    v85 = v0;
    memcpy(&v0, &v49, 592);
    v49 = clap_builder::builder::command::Command::arg(&v108, &v0);
    v9 = 0;
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
    v31 = 0;
    v33 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v7 = 0;
    v8 = &g_1;
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
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &anon.a8009f0f96d850c1c46a2cf3287456a4.16.llvm.17503802422331354604;
    v40 = &g_1;
    v41 = &anon.a8009f0f96d850c1c46a2cf3287456a4.16.llvm.17503802422331354604;
    v42 = &g_1;
    v43 = 0;
    v44 = 264384378310690395145089472004196;
    v108 = 0;
    v109 = &g_1;
    v110 = 0;
    v108 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v194 = v109;
    v195 = v110;
    *((v194 + v195 + &g_11 as &u8) as &i128) = 145433398041550933147363491261436600420;
    *((v194 + v195 + &g_1 as &u8) as &i128) = 129461899478772011550851290236970886254;
    *((v194 + v195) as &i128) = 129103630596612167650057460175697240432;
    *((v194 + v195 + &g_21 as &u8) as &&i64) = &g_61;
    v110 = v195 + &g_31 as &u8;
    v171 = *((&v108 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v108 = v171;
    }
    v36 = v108;
    memcpy(&v108, &v0, 360);
    memcpy(&v108, &v29, 224);
    v140 = v29;
    v171 = struct32 {
        field_0: &g_46affc
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v171);
    v140 = v2;
    v138 = v0;
    memcpy(&v0, &v108, 592);
    v197 = v9;
    if v197 == v7 {
        v7 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v198 = v8;
    v199 = v197 * &g_1;
    *((v198 + v199) as &&i64) = &anon.a8009f0f96d850c1c46a2cf3287456a4.18.llvm.17503802422331354604;
    *((v198 + v199 + &g_1 as &u8) as &&i64) = &g_1;
    v9 = v197 + &g_1 as &u8;
    memcpy(&v171, &v0, 592);
    v108 = clap_builder::builder::command::Command::arg(&v49, &v171);
    v65 = 0;
    v67 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v49 = 0;
    v51 = 0;
    v54 = 0;
    v56 = 0;
    v58 = &g_1;
    v63 = 0;
    v64 = &g_1;
    v66 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v92 = &g_1;
    v93 = 0;
    v94 = 0x8000000000000000;
    v95 = 0x8000000000000000;
    v97 = 9223372036854775809;
    v98 = &anon.a8009f0f96d850c1c46a2cf3287456a4.21.llvm.17503802422331354604;
    v99 = &g_1;
    v100 = 0;
    v102 = 0;
    v103 = 4785074604081261;
    v104 = 0;
    v105 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v200 = v1;
    v201 = v2;
    *((v200 + v201 + &g_1 as &u8) as &i128) = 145433398039695250939384416353804119917;
    *((v200 + v201) as &i128) = 43061836418945269342976579414893095011;
    *((v200 + v201 + &g_11 as &u8) as &&i64) = &g_61;
    v2 = v201 + &g_21 as &u8;
    v171 = *((&v0 as &char + 8) as &i128);
    if v94 != 0x8000000000000000 {
        v0 = v171;
    }
    v94 = v0;
    memcpy(&v0, &v49, 588);
    v47 = *((&v49 as &char + 589) as &i16);
    v48 = *((&v49 as &char + 591) as &i8);
    v46 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v108, &v0);
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v127 = 0;
    v129 = 0;
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v140 = 0;
    v142 = 0;
    v144 = 0;
    v108 = 0;
    v110 = 0;
    v113 = 0;
    v114 = 0;
    v115 = &g_1;
    v116 = 0;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v126 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v139 = &g_1;
    v141 = &g_1;
    v143 = &g_1;
    v145 = &g_1;
    v146 = 0;
    v147 = 0x8000000000000000;
    v148 = 0x8000000000000000;
    v149 = 9223372036854775809;
    v150 = &anon.a8009f0f96d850c1c46a2cf3287456a4.22.llvm.17503802422331354604;
    v151 = &g_1;
    v152 = &anon.a8009f0f96d850c1c46a2cf3287456a4.22.llvm.17503802422331354604;
    v153 = &g_1;
    v154 = 0;
    v155 = 4785074604081251;
    v156 = 0;
    v157 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v202 = v1;
    v203 = v2;
    *((v202 + v203) as &i128) = 146719389406788361106402976304776376164;
    *((v202 + v203 + &g_1 as &u8) as &i64) = 8315171486950259054;
    v2 = v203 + &g_11 as &u8;
    v171 = *((&v0 as &char + 8) as &i128);
    if v147 != 0x8000000000000000 {
        v0 = v171;
    }
    v147 = v0;
    memcpy(&v0, &v108, 588);
    v47 = *((&v108 as &char + 589) as &i16);
    v48 = *((&v108 as &char + 591) as &i8);
    v46 = &g_1;
    v108 = clap_builder::builder::command::Command::arg(&v49, &v0);
    v65 = 0;
    v67 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v49 = 0;
    v51 = 0;
    v56 = 0;
    v58 = &g_1;
    v63 = 0;
    v64 = &g_1;
    v66 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v92 = &g_1;
    v93 = 0;
    v94 = 0x8000000000000000;
    v95 = 0x8000000000000000;
    v97 = 9223372036854775809;
    v98 = &anon.a8009f0f96d850c1c46a2cf3287456a4.23.llvm.17503802422331354604;
    v99 = &g_1;
    v100 = &anon.a8009f0f96d850c1c46a2cf3287456a4.23.llvm.17503802422331354604;
    v101 = &g_1;
    v102 = 0;
    v103 = 4785074604081256;
    v104 = 0;
    v105 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 119);
    v204 = v1;
    v205 = v2;
    *((v204 + v205 + &g_51 as &u8) as &i128) = 153029342975473009549499393302610668905;
    *((v204 + v205 + &g_41 as &u8) as &i128) = 154358657809561651675645381999789498723;
    *((v204 + v205 + 64) as &i128) = 43139577970107295489008521324900938351;
    *((v204 + v205 + &g_21 as &u8) as &i128) = 135749871831915858251559692476581438819;
    *((v204 + v205 + &g_11 as &u8) as &i128) = 146741821747482105299409953667320586340;
    *((v204 + v205 + &g_1 as &u8) as &i128) = 129461899478772011385211436556876344431;
    *((v204 + v205) as &i128) = 130832767237332500659028931927721010785;
    *((v204 + v205 + &g_61 as &u8) as &i64) = 2984600577132820851;
    v2 = v205 + 119;
    v171 = *((&v0 as &char + 8) as &i128);
    if v94 != 0x8000000000000000 {
        v0 = v171;
    }
    v94 = v0;
    memcpy(&v0, &v49, 588);
    v47 = *((&v49 as &char + 589) as &i16);
    v48 = *((&v49 as &char + 591) as &i8);
    v46 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v108, &v0);
    v9 = 0;
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
    v31 = 0;
    v33 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v7 = 0;
    v8 = &g_1;
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
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &anon.a8009f0f96d850c1c46a2cf3287456a4.17.llvm.17503802422331354604;
    v40 = &g_1;
    v41 = &anon.a8009f0f96d850c1c46a2cf3287456a4.17.llvm.17503802422331354604;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081266;
    v45 = 0;
    v46 = 3337;
    v108 = 0;
    v109 = &g_1;
    v110 = 0;
    v108 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v206 = v109;
    v207 = v110;
    *((v206 + v207 + &g_11 as &u8) as &i128) = 145433398041550933147363491261419385888;
    *((v206 + v207 + &g_1 as &u8) as &i128) = 136158257511425050567137587372688763252;
    *((v206 + v207) as &i128) = 43133209053419570017805623480593773429;
    *((v206 + v207 + &g_21 as &u8) as &&i64) = &g_61;
    v110 = v207 + &g_31 as &u8;
    v171 = *((&v108 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v108 = v171;
    }
    v36 = v108;
    memcpy(&v108, &v0, 360);
    memcpy(&v108, &v29, 224);
    v140 = v29;
    v171 = struct32 {
        field_0: &g_45c074
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v171);
    v140 = v2;
    v138 = v0;
    memcpy(&v0, &v108, 592);
    v162 = &g_1;
    v173 = v164;
    v171 = v162;
    v172 = v163;
    v108 = clap_builder::builder::arg::Arg::value_parser(&v0, &v171);
    v158 = &g_1;
    memcpy(&v0, &v108, 592);
    v209 = v9;
    if v209 == v7 {
        v7 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v210 = v8;
    v211 = v209 * &g_1;
    *((v210 + v211) as &&i64) = &anon.a8009f0f96d850c1c46a2cf3287456a4.18.llvm.17503802422331354604;
    *((v210 + v211 + &g_1 as &u8) as &&i64) = &g_1;
    v9 = v209 + &g_1 as &u8;
    memcpy(&v171, &v0, 592);
    v108 = clap_builder::builder::command::Command::arg(&v49, &v171);
    v9 = 0;
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
    v31 = 0;
    v33 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v7 = 0;
    v8 = &g_1;
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
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &anon.a8009f0f96d850c1c46a2cf3287456a4.24.llvm.17503802422331354604;
    v40 = &g_1;
    v41 = &anon.a8009f0f96d850c1c46a2cf3287456a4.24.llvm.17503802422331354604;
    v42 = &g_1;
    v43 = 0;
    v44 = 0x11000000110000;
    v45 = 0;
    v46 = 3337;
    v49 = 0;
    v50 = &g_1;
    v51 = 0;
    v49 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 122);
    v212 = v50;
    v213 = v51;
    *((v212 + v213 + &g_61 as &u8) as &i128) = 145120162766562749923059761649871581541;
    *((v212 + v213 + &g_51 as &u8) as &i128) = 129549945578241407530841474031093115252;
    *((v212 + v213 + &g_41 as &u8) as &i128) = 145063047737255542281766019564795207739;
    *((v212 + v213 + 64) as &i128) = 129169426817143759448214076926507446629;
    *((v212 + v213 + &g_21 as &u8) as &i128) = 43062037737601008578453104848038538274;
    *((v212 + v213 + &g_11 as &u8) as &i128) = 134820126805393335815256027329701568802;
    *((v212 + v213 + &g_1 as &u8) as &i128) = 42838506274788325202928083957916725363;
    *((v212 + v213) as &i128) = 43061836418945269342976579414893095011;
    v51 = v213 + 122;
    v171 = *((&v49 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v49 = v171;
    }
    v36 = v49;
    memcpy(&v49, &v0, 360);
    memcpy(&v49, &v29, 224);
    v87 = v29;
    v171 = struct32 {
        field_0: &g_45c078
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v171);
    v87 = v2;
    v85 = v0;
    memcpy(&v0, &v49, 592);
    v55 = &g_46b15c;
    v56 = &g_1;
    v52 = 0x8000000000000000;
    v53 = v184;
    v49 = 0;
    v50 = &g_1;
    v51 = 0;
    v57 = 0;
    v49 = alloc::raw_vec::RawVec<T,A>::grow_one();
    v215 = v50;
    *(v215 as &&i64) = &g_46b161;
    *((v215 + &g_1 as &u8) as &&i64) = &g_1;
    v51 = &g_1;
    v216 = v53;
    v217 = v55;
    v171 = v49;
    v175 = v216;
    v176 = v217;
    v177 = *((&v49 as &char + 64) as &i64);
    v173 = v51;
    v174 = v52;
    v218 = v173;
    if v218 == v171 {
        v171 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v219 = v172;
    v220 = v218 * &g_1;
    *((v219 + v220) as &&i64) = &g_46b167;
    *((v219 + v220 + &g_1 as &u8) as &&i64) = &g_1;
    v173 = v218 + &g_1 as &u8;
    v165 = v171;
    v168 = v175;
    v169 = v176;
    v170 = v177;
    v166 = v173;
    v167 = v174;
    v56 = &g_1;
    v53 = v184;
    v49 = 0;
    v50 = &g_1;
    v51 = 0;
    v57 = 0;
    v49 = alloc::raw_vec::RawVec<T,A>::grow_one();
    v221 = v50;
    *(v221 as &&i64) = &g_46b16f;
    *((v221 + &g_1 as &u8) as &&i64) = &g_1;
    v178 = v49;
    v181 = v53;
    v182 = v55;
    v183 = *((&v49 as &char + 64) as &i64);
    v179 = v51;
    v180 = v52;
    v222 = v166;
    v171 = v165;
    v173 = v222;
    v175 = v168;
    v176 = v169;
    v177 = v170;
    memcpy(&v49, &v171, 144);
    v67 = 0;
    v68 = &g_1;
    v165 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v49);
    v171 = clap_builder::builder::arg::Arg::value_parser(&v0, &v165);
    v49 = clap_builder::builder::command::Command::arg(&v108, &v171);
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v127 = 0;
    v129 = 0;
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v140 = 0;
    v142 = 0;
    v144 = 0;
    v108 = 0;
    v110 = &g_1;
    v111 = &g_1;
    v112 = -1;
    v113 = 0;
    v114 = 0;
    v115 = &g_1;
    v116 = 0;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v126 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v139 = &g_1;
    v141 = &g_1;
    v143 = &g_1;
    v145 = &g_1;
    v146 = 0;
    v147 = 0x8000000000000000;
    v148 = 0x8000000000000000;
    v149 = 9223372036854775809;
    v150 = &g_46aef3;
    v151 = &g_1;
    v152 = 0;
    v154 = 0;
    v155 = 0x11000000110000;
    v156 = 0;
    v157 = 3329;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v108, &v162);
    *(&v47 as &&i64) = &g_1;
    memcpy(&v171, &v0, 592);
    v108 = clap_builder::builder::command::Command::arg(&v49, &v171);
    v51 = 0;
    v54 = 0;
    *(&v49 as &Enum) = Enum {
        field_0: 0
        field_16: &g_1
        field_32: &g_1
        field_48: &g_46b16a
        field_64: <UNKNOWN>
        field_80: &g_1
    };
    v57 = 0;
    v59 = 0;
    v171 = struct48 {
        field_0: &anon.a8009f0f96d850c1c46a2cf3287456a4.18.llvm.17503802422331354604
        field_8: &g_1
        field_16: &anon.a8009f0f96d850c1c46a2cf3287456a4.16.llvm.17503802422331354604
        field_24: &g_1
        field_32: &anon.a8009f0f96d850c1c46a2cf3287456a4.17.llvm.17503802422331354604
        field_40: &g_1
    };
    v0 = clap_builder::builder::arg_group::ArgGroup::args(&v49, &v171);
    v6 = &g_1;
    v58 = v5;
    v59 = *((&v0 as &char + 88) as &i8);
    v60 = v6;
    v61 = *((&v0 as &char + 90) as &i32);
    v62 = *((&v0 as &char + 94) as &i16);
    v57 = *((&v0 as &char + 64) as &i128);
    v223 = v0;
    v224 = *((&v0 as &char + 16) as &i128);
    v225 = *((&v0 as &char + 32) as &i128);
    v55 = *((&v0 as &char + 48) as &i128);
    v53 = v225;
    v51 = v224;
    v49 = v223;
    v226 = *((&v108 as &char + 216) as &i64);
    if v226 == *((&v108 as &char + 200) as &i64) {
        v125 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v227 = v126;
    v228 = v226 * &g_51;
    *((v227 + v228 + &g_41 as &u8) as &i64) = v58;
    *((v227 + v228 + 64) as &i128) = v57;
    v229 = v49;
    v230 = v51;
    v231 = v53;
    *((v227 + v228 + &g_21 as &u8) as &i128) = v55;
    *((v227 + v228 + &g_11 as &u8) as &i128) = v231;
    *((v227 + v228 + &g_1 as &u8) as &i128) = v230;
    *((v227 + v228) as &i128) = v229;
    v127 = v226 + &g_1 as &u8;
    memcpy(a0, &v108, 712);
    return a0;
}
