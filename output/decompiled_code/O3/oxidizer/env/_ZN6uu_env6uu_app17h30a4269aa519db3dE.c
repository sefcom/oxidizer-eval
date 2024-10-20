fn uu_env::uu_app(a0: u32) -> u64 {
    let v0: i64;  // [sp-0xdd0]
    let v1: i128;  // [sp-0xdc8], Other Possible Types: struct24, Enum, struct592
    let v2: i64;  // [sp-0xdc0]
    let v3: i64;  // [sp-0xdb8]
    let v4: i128;  // [sp-0xdb0]
    let v5: i128;  // [bp-0xda0]
    let v6: i64;  // [sp-0xd90]
    let v7: i128;  // [sp-0xd88]
    let v8: i64;  // [sp-0xd78]
    let v9: i128;  // [sp-0xd70]
    let v10: i128;  // [bp-0xd60]
    let v11: i64;  // [sp-0xd58]
    let v12: i128;  // [sp-0xd50]
    let v13: struct16;  // [sp-0xd48]
    let v14: i64;  // [sp-0xd40]
    let v15: i128;  // [bp-0xd38]
    let v16: i64;  // [sp-0xd28]
    let v17: i128;  // [sp-0xd20]
    let v18: i64;  // [sp-0xd10]
    let v19: i128;  // [sp-0xd08]
    let v20: i64;  // [sp-0xcf8]
    let v21: i128;  // [sp-0xcf0]
    let v22: i64;  // [sp-0xce0]
    let v23: i128;  // [sp-0xcd8]
    let v24: i64;  // [sp-0xcc8]
    let v25: i128;  // [sp-0xcc0]
    let v26: i64;  // [sp-0xcb0]
    let v27: i128;  // [sp-0xca8]
    let v28: i64;  // [sp-0xc98]
    let v29: i128;  // [sp-0xc90]
    let v30: i64;  // [sp-0xc80]
    let v31: i128;  // [sp-0xc78]
    let v32: i64;  // [bp-0xc68]
    let v33: i64;  // [bp-0xc60]
    let v34: i64;  // [sp-0xc58]
    let v35: i64;  // [sp-0xc50]
    let v36: i128;  // [sp-0xc48]
    let v37: i64;  // [sp-0xc38]
    let v38: i128;  // [sp-0xc30]
    let v39: i64;  // [sp-0xc20]
    let v40: i64;  // [sp-0xc18]
    let v41: i64;  // [sp-0xc10]
    let v42: i128;  // [sp-0xc08]
    let v43: i64;  // [sp-0xbf8]
    let v44: i128;  // [sp-0xbf0]
    let v45: i128;  // [sp-0xbe0]
    let v46: i64;  // [sp-0xbd0]
    let v47: i128;  // [sp-0xbc8]
    let v48: i64;  // [sp-0xbb8]
    let v49: i64;  // [sp-0xbb0]
    let v50: i64;  // [sp-0xba8]
    let v51: i64;  // [sp-0xba0]
    let v52: i64;  // [sp-0xb98]
    let v53: i64;  // [sp-0xb90]
    let v54: i32;  // [bp-0xb88]
    let v55: i64;  // [bp-0xb84]
    let v56: i32;  // [sp-0xb80]
    let v57: i16;  // [sp-0xb7c]
    let v58: i16;  // [sp-0xb7b]
    let v59: i8;  // [sp-0xb79]
    let v60: struct24;  // [bp-0xb70]
    let v61: i192;  // [bp-0xb58], Other Possible Types: struct712, struct592, Enum
    let v62: i64;  // [sp-0xb50]
    let v63: i64;  // [sp-0xb48]
    let v64: i64;  // [sp-0xb40]
    let v65: i64;  // [sp-0xb38]
    let v66: i64;  // [sp-0xb30]
    let v67: i64;  // [sp-0xb20]
    let v68: i128;  // [sp-0xb18]
    let v69: i64;  // [sp-0xb08]
    let v70: i128;  // [sp-0xb00]
    let v71: i64;  // [sp-0xaf0]
    let v72: i64;  // [sp-0xae8]
    let v73: i128;  // [sp-0xae0]
    let v74: i64;  // [sp-0xad0]
    let v75: i128;  // [sp-0xac8]
    let v76: i64;  // [sp-0xab8]
    let v77: i128;  // [sp-0xab0]
    let v78: i64;  // [sp-0xaa0]
    let v79: i128;  // [sp-0xa98]
    let v80: i64;  // [sp-0xa88]
    let v81: i128;  // [sp-0xa80]
    let v82: i64;  // [sp-0xa70]
    let v83: i128;  // [sp-0xa68]
    let v84: i64;  // [sp-0xa58]
    let v85: i128;  // [sp-0xa50]
    let v86: i64;  // [sp-0xa40]
    let v87: i128;  // [sp-0xa38]
    let v88: i64;  // [sp-0xa28]
    let v89: i128;  // [sp-0xa20]
    let v90: i64;  // [sp-0xa10]
    let v91: i128;  // [bp-0xa08]
    let v92: i128;  // [bp-0xa00]
    let v93: i64;  // [sp-0x9f8]
    let v94: i64;  // [bp-0x9f0]
    let v95: i64;  // [sp-0x9e0]
    let v96: i128;  // [sp-0x9d8]
    let v97: i64;  // [sp-0x9c8]
    let v98: i128;  // [sp-0x9c0]
    let v99: i64;  // [sp-0x9b0]
    let v100: i64;  // [sp-0x9a8]
    let v101: i64;  // [sp-0x9a0]
    let v102: i128;  // [sp-0x998]
    let v103: i64;  // [sp-0x988]
    let v104: i128;  // [sp-0x980]
    let v105: i128;  // [sp-0x970]
    let v106: i64;  // [sp-0x960]
    let v107: i128;  // [sp-0x958]
    let v108: i64;  // [sp-0x948]
    let v109: i64;  // [sp-0x940]
    let v110: i64;  // [sp-0x938]
    let v111: i64;  // [sp-0x930]
    let v112: i64;  // [bp-0x928]
    let v113: i32;  // [bp-0x918]
    let v114: i64;  // [bp-0x914]
    let v115: i32;  // [sp-0x910]
    let v116: i16;  // [bp-0x90c]
    let v117: i8;  // [bp-0x90b]
    let v118: i8;  // [sp-0x909]
    let v119: i64;  // [sp-0x89c]
    let v120: i32;  // [sp-0x894]
    let v121: i5696;  // [sp-0x888], Other Possible Types: struct712, struct592
    let v122: i64;  // [sp-0x878]
    let v123: i128;  // [sp-0x870]
    let v124: i64;  // [sp-0x860]
    let v125: i64;  // [sp-0x850]
    let v126: i128;  // [sp-0x848]
    let v127: i64;  // [sp-0x838]
    let v128: i128;  // [sp-0x830]
    let v129: i64;  // [sp-0x820]
    let v130: i64;  // [sp-0x818]
    let v131: i128;  // [sp-0x810]
    let v132: i64;  // [sp-0x800]
    let v133: i128;  // [sp-0x7f8]
    let v134: i64;  // [sp-0x7e8]
    let v135: i128;  // [sp-0x7e0]
    let v136: i64;  // [sp-0x7d0]
    let v137: i128;  // [sp-0x7c8]
    let v138: i64;  // [sp-0x7b8]
    let v139: i128;  // [sp-0x7b0]
    let v140: i64;  // [sp-0x7a0]
    let v141: i128;  // [sp-0x798]
    let v142: i64;  // [sp-0x788]
    let v143: i128;  // [sp-0x780]
    let v144: i64;  // [sp-0x770]
    let v145: i128;  // [sp-0x768]
    let v146: i64;  // [sp-0x758]
    let v147: i128;  // [sp-0x750]
    let v148: i64;  // [sp-0x740]
    let v149: i128;  // [bp-0x738]
    let v150: i128;  // [bp-0x730]
    let v151: i64;  // [sp-0x728]
    let v152: i64;  // [bp-0x720]
    let v153: i64;  // [sp-0x710]
    let v154: i128;  // [sp-0x708]
    let v155: i64;  // [sp-0x6f8]
    let v156: i128;  // [sp-0x6f0]
    let v157: i64;  // [sp-0x6e0]
    let v158: i64;  // [sp-0x6d8]
    let v159: i64;  // [sp-0x6d0]
    let v160: i128;  // [sp-0x6c8]
    let v161: i64;  // [sp-0x6b8]
    let v162: i128;  // [sp-0x6b0]
    let v163: i128;  // [sp-0x6a0]
    let v164: i64;  // [sp-0x690]
    let v165: i128;  // [sp-0x688]
    let v166: i64;  // [sp-0x678]
    let v167: i64;  // [sp-0x670]
    let v168: i64;  // [sp-0x668]
    let v169: i64;  // [sp-0x660]
    let v170: i64;  // [sp-0x658]
    let v171: i64;  // [sp-0x648]
    let v172: i32;  // [sp-0x640]
    let v173: i16;  // [sp-0x63c]
    let v174: i8;  // [bp-0x5b8]
    let v175: i8;  // [bp-0x5a8]
    let v176: i8;  // [bp-0x598]
    let v177: i8;  // [bp-0x588]
    let v178: i8;  // [bp-0x578]
    let v179: i8;  // [bp-0x568]
    let v180: i8;  // [bp-0x558]
    let v181: i128;  // [bp-0x548], Other Possible Types: struct32
    let v182: i3336;  // [sp-0x2f8], Other Possible Types: Enum
    let v183: i64;  // [sp-0x98]
    let v184: i64;  // [sp-0x90]
    let v186: i64;  // rbx
    let v187: i64;  // rax
    let v188: i64;  // rcx
    let v189: i64;  // rax
    let v190: i64;  // rcx
    let v191: i64;  // rbx
    let v192: i64;  // rax
    let v193: i64;  // rcx
    let v194: i128;  // xmm0
    let v195: i128;  // xmm1
    let v196: i64;  // rsi
    let v197: i128;  // xmm3
    let v198: i64;  // rax
    let v199: i64;  // rcx
    let v200: i64;  // rbx
    let v201: i128;  // xmm0
    let v202: i128;  // xmm1
    let v203: i64;  // rsi
    let v204: i128;  // xmm3
    let v205: i64;  // rax
    let v206: i64;  // rcx
    let v207: i64;  // r14
    let v208: i64;  // r15
    let v209: i64;  // rax
    let v210: i64;  // rcx
    let v211: i128;  // xmm0
    let v212: i128;  // xmm1
    let v213: i64;  // rsi
    let v214: i128;  // xmm3
    let v215: i64;  // rax
    let v216: i64;  // rcx
    let v217: i64;  // rbx
    let v218: i64;  // rax
    let v219: i64;  // rbp
    let v220: i64;  // r14
    let v221: i64;  // rax
    let v222: i64;  // rcx
    let v223: i64;  // rbx
    let v224: i128;  // xmm0
    let v225: i128;  // xmm1
    let v226: i64;  // rsi
    let v227: i128;  // xmm3
    let v228: i64;  // rax
    let v229: i64;  // rcx
    let v230: i64;  // rbx

    v182 = clap_builder::builder::command::Command::new(&g_41ff08, &g_1);
    v183 = &g_41ff0e;
    v184 = &g_1;
    v121 = clap_builder::builder::command::Command::about(&v182, &g_41ff14, &g_31);
    v1 = uucore::format_usage(&g_41ff4d, &g_31);
    v186 = v1;
    if v186 != 0x8000000000000000 {
        v61 = *((&v1 as &char + 8) as &i128);
    }
    v161 = v186;
    v162 = v61;
    memcpy(&v61, &v121, 712);
    v121 = clap_builder::builder::command::Command::after_help(&v61, &g_41ff82, &g_41);
    memcpy(&v61, &v121, 700);
    v119 = 549755814048 | *((&v121 as &char + 700) as &i64);
    v120 = *((&v121 as &char + 708) as &i32);
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v143 = 0;
    v145 = 0;
    v147 = 0;
    v149 = 0;
    v152 = 0;
    v154 = 0;
    v156 = 0;
    v121 = 0;
    v122 = 0;
    v124 = 0;
    v125 = 0;
    v127 = &g_1;
    v129 = 0;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v148 = &g_1;
    v151 = &g_1;
    v153 = &g_1;
    v155 = &g_1;
    v157 = &g_1;
    v158 = 0;
    v159 = 0x8000000000000000;
    v161 = 0x8000000000000000;
    v164 = 9223372036854775809;
    v166 = &g_41ffc6;
    v167 = &g_10;
    v168 = &g_41ffc6;
    v169 = &g_10;
    v170 = 0;
    v171 = 4785074604081257;
    v172 = 0;
    v173 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_10);
    v187 = v2;
    v188 = v3;
    *((v187 + v188 + &g_1 as &u8) as &i128) = 154763657358906837311051815768644939885;
    *((v187 + v188) as &i128) = 145410931305532266011961500675707335795;
    v3 = v188 + &g_10 as &u8;
    v181 = *((&v1 as &char + 8) as &i128);
    if v159 != 0x8000000000000000 {
        v1 = v181;
    }
    v159 = v1;
    memcpy(&v1, &v121, 588);
    v58 = *((&v121 as &char + 589) as &i16);
    v59 = *((&v121 as &char + 591) as &i8);
    v57 = &g_1;
    v121 = clap_builder::builder::command::Command::arg(&v61, &v1);
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v96 = 0;
    v98 = 0;
    v61 = 0;
    v63 = &g_1;
    v64 = &g_1;
    v65 = &g_1;
    v66 = 0;
    v67 = 0;
    v68 = v179;
    v69 = &g_1;
    v70 = v178;
    v71 = 0;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = &g_1;
    v97 = &g_1;
    v99 = &g_1;
    v100 = 0;
    v101 = 0x8000000000000000;
    v102 = v177;
    v103 = 0x8000000000000000;
    v105 = v175;
    v104 = v174;
    v106 = 9223372036854775809;
    v107 = v176;
    v108 = &g_41fff7;
    v109 = &g_1;
    v110 = &g_41fff7;
    v111 = &g_1;
    v112 = 0;
    v113 = 4785074604081219;
    v115 = 0;
    v116 = 3337;
    v181 = struct32 {
        field_0: &g_41fffc
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v181);
    v94 = v3;
    v92 = v1;
    memcpy(&v1, &v61, 592);
    *(&v60.field_0 as &struct24) = struct24 {
        field_0: &g_1
        field_8: <UNKNOWN>
        field_16: <UNKNOWN>
    };
    v181 = *(&v60.field_0 as &i192);
    v61 = clap_builder::builder::arg::Arg::value_parser(&v1, &v181);
    *(&v117 as &&i64) = &g_1;
    memcpy(&v1, &v61, 592);
    v61 = 0;
    v62 = &g_1;
    v63 = 0;
    v61 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_10);
    v189 = v62;
    v190 = v63;
    *((v189 + v190 + &g_1 as &u8) as &i128) = 109377115098683617606316558354725628260;
    *((v189 + v190) as &i128) = 133091050913877575965516093011072739427;
    v63 = v190 + &g_10 as &u8;
    v191 = v61;
    v181 = *((&v61 as &char + 8) as &i128);
    if v191 != 0x8000000000000000 {
        v61 = v181;
    }
    v41 = v191;
    v42 = v61;
    memcpy(&v181, &v1, 592);
    v61 = clap_builder::builder::command::Command::arg(&v121, &v181);
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v143 = 0;
    v145 = 0;
    v147 = 0;
    v149 = 0;
    v152 = 0;
    v154 = 0;
    v156 = 0;
    v121 = 0;
    v122 = 0;
    v124 = 0;
    v125 = 0;
    v127 = &g_1;
    v129 = 0;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v148 = &g_1;
    v151 = &g_1;
    v153 = &g_1;
    v155 = &g_1;
    v157 = &g_1;
    v158 = 0;
    v159 = 0x8000000000000000;
    v161 = 0x8000000000000000;
    v164 = 9223372036854775809;
    v166 = &g_4159c4;
    v167 = &g_1;
    v168 = &g_4159c4;
    v169 = &g_1;
    v170 = 0;
    v171 = 4785074604081200;
    v172 = 0;
    v173 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_61);
    v192 = v2;
    v193 = v3;
    *((v192 + v193 + &g_41 as &u8) as &i128) = 134820227826648027748249080589759571822;
    *((v192 + v193 + &g_31 as &u8) as &i128) = 140173485412436516304918058038687525985;
    *((v192 + v193 + &g_21 as &u8) as &i128) = 157017519764474512218021168418249862688;
    *((v192 + v193 + 32) as &i128) = 129103507873124949365628320221595985268;
    *((v192 + v193 + &g_10 as &u8) as &i128) = 161346085432191290428461277221894383980;
    *((v192 + v193) as &i128) = 43139984252227407021545087172924960357;
    *((v192 + v193 + &g_51 as &u8) as &i32) = 695496293;
    v3 = v193 + &g_61 as &u8;
    v181 = *((&v1 as &char + 8) as &i128);
    if v159 != 0x8000000000000000 {
        v1 = v181;
    }
    v159 = v1;
    memcpy(&v1, &v121, 588);
    v58 = *((&v121 as &char + 589) as &i16);
    v59 = *((&v121 as &char + 591) as &i8);
    v57 = &g_1;
    v121 = clap_builder::builder::command::Command::arg(&v61, &v1);
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v96 = 0;
    v98 = 0;
    v61 = 0;
    v63 = 0;
    v64 = v179;
    v66 = 0;
    v67 = 0;
    v68 = v178;
    v69 = &g_1;
    v70 = v177;
    v71 = 0;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = &g_1;
    v97 = &g_1;
    v99 = &g_1;
    v100 = 0;
    v101 = 0x8000000000000000;
    v102 = v176;
    v103 = 0x8000000000000000;
    v105 = v175;
    v104 = v174;
    v106 = 9223372036854775809;
    v107 = v180;
    v108 = &g_415a7c;
    v109 = &g_1;
    v110 = &g_415a7c;
    v111 = &g_1;
    v112 = 0;
    v113 = 4785074604081254;
    v115 = 0;
    v116 = 3337;
    v181 = struct32 {
        field_0: &g_415a00
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v181);
    v94 = v3;
    v92 = v1;
    v4 = v64;
    v7 = v68;
    v9 = v70;
    v194 = v71;
    v12 = v73;
    v15 = v75;
    v17 = v77;
    v19 = v79;
    v21 = v81;
    v23 = v83;
    v25 = v85;
    v27 = v87;
    v29 = v89;
    v31 = v91;
    v195 = *((&v92 as &char + 8) as &i128);
    v36 = v96;
    v38 = v98;
    v42 = v102;
    v44 = v104;
    v45 = v105;
    v47 = v107;
    v196 = *((&v61 as &char + 568) as &i64);
    v197 = *((&v61 as &char + 40) as &i128);
    v1 = v61;
    v3 = v63;
    v5 = v197;
    v6 = v67;
    v8 = v69;
    v10 = v194;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = v195;
    v34 = 0;
    v35 = &g_1;
    v37 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = 9223372036854775809;
    v48 = &g_415a7c;
    v49 = &g_1;
    v50 = &g_415a7c;
    v51 = &g_1;
    v52 = 0;
    v53 = v196;
    v54 = 4785074604081254;
    v56 = 0;
    v57 = 777;
    v181 = v60.field_0;
    v61 = clap_builder::builder::arg::Arg::value_parser(&v1, &v181);
    v116 = &g_1;
    memcpy(&v1, &v61, 592);
    v61 = 0;
    v62 = &g_1;
    v63 = 0;
    v61 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_51);
    v198 = v62;
    v199 = v63;
    *((v198 + v199 + &g_41 as &u8) as &i128) = 55102711907422111667709777338945598318;
    *((v198 + v199 + &g_31 as &u8) as &i128) = 134851382057809745783680570362927475058;
    *((v198 + v199 + &g_21 as &u8) as &i128) = 149081884474955502215918835427844453735;
    *((v198 + v199 + 32) as &i128) = 140100793727047340398653665381755285093;
    *((v198 + v199 + &g_10 as &u8) as &i128) = 61321682631571214551627942917207908713;
    *((v198 + v199) as &i128) = 152038040210415625461305566114558862706;
    v63 = v199 + &g_51 as &u8;
    v200 = v61;
    v181 = *((&v61 as &char + 8) as &i128);
    if v200 != 0x8000000000000000 {
        v61 = v181;
    }
    v41 = v200;
    v42 = v61;
    memcpy(&v181, &v1, 592);
    v61 = clap_builder::builder::command::Command::arg(&v121, &v181);
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v143 = 0;
    v145 = 0;
    v147 = 0;
    v149 = 0;
    v154 = 0;
    v156 = 0;
    v121 = 0;
    v122 = 0;
    v123 = v179;
    v124 = 0;
    v125 = 0;
    v126 = v178;
    v127 = &g_1;
    v128 = v177;
    v129 = 0;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v148 = &g_1;
    v151 = &g_1;
    v152 = 0;
    v153 = &g_1;
    v155 = &g_1;
    v157 = &g_1;
    v158 = 0;
    v159 = 0x8000000000000000;
    v160 = v176;
    v161 = 0x8000000000000000;
    v163 = v175;
    v162 = v174;
    v0 = 9223372036854775809;
    v164 = 9223372036854775809;
    v165 = v180;
    v166 = &g_4200de;
    v167 = &g_1;
    v168 = &g_4200de;
    v169 = &g_1;
    v170 = 0;
    v171 = 4785074604081269;
    v172 = 0;
    v173 = 3337;
    v181 = struct32 {
        field_0: &g_415a28
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v181);
    v152 = v3;
    v150 = v1;
    v4 = v123;
    v7 = v126;
    v9 = v128;
    v201 = v129;
    v12 = v131;
    v15 = v133;
    v17 = v135;
    v19 = v137;
    v21 = v139;
    v23 = v141;
    v25 = v143;
    v27 = v145;
    v29 = v147;
    v31 = v149;
    v202 = *((&v150 as &char + 8) as &i128);
    v36 = v154;
    v38 = v156;
    v42 = v160;
    v44 = v162;
    v45 = v163;
    v47 = v165;
    v203 = *((&v121 as &char + 568) as &i64);
    v204 = *((&v121 as &char + 40) as &i128);
    v1 = v121;
    v3 = v122;
    v5 = v204;
    v6 = v125;
    v8 = v127;
    v10 = v201;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = v202;
    v34 = 0;
    v35 = &g_1;
    v37 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = v0;
    v48 = &g_4200de;
    v49 = &g_1;
    v50 = &g_4200de;
    v51 = &g_1;
    v52 = 0;
    v53 = v203;
    v54 = 4785074604081269;
    v56 = 0;
    v57 = 3329;
    v181 = v60.field_0;
    v121 = clap_builder::builder::arg::Arg::value_parser(&v1, &v181);
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v205 = v2;
    v206 = v3;
    *((v205 + v206 + &g_10 as &u8) as &i128) = 146793745037942682730063564621789229670;
    *((v205 + v206) as &i128) = 43061916142573969613069421402777281906;
    *((v205 + v206 + 32) as &i32) = 1953391981;
    v3 = v206 + &g_21 as &u8;
    v207 = v1;
    v181 = *((&v1 as &char + 8) as &i128);
    v208 = v0;
    if v207 != 0x8000000000000000 {
        v1 = v181;
    }
    v159 = v207;
    v160 = v1;
    memcpy(&v1, &v121, 592);
    v121 = clap_builder::builder::command::Command::arg(&v61, &v1);
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v94 = 0;
    v96 = 0;
    v98 = 0;
    v61 = 0;
    v63 = 0;
    v66 = 0;
    v67 = 0;
    v69 = &g_1;
    v71 = 0;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v99 = &g_1;
    v100 = 0;
    v101 = 0x8000000000000000;
    v103 = 0x8000000000000000;
    v106 = v208;
    v108 = &g_420107;
    v109 = &g_1;
    v110 = &g_420107;
    v111 = &g_1;
    v112 = 0;
    v113 = 4785074604081270;
    v115 = 0;
    *(&v117 as &&i64) = &g_1;
    v116 = &g_1;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v209 = v2;
    v210 = v3;
    *((v209 + v210 + 32) as &i128) = 154788218881560635749037362184139597923;
    *((v209 + v210 + &g_10 as &u8) as &i128) = 129460195677443000418406287466025873254;
    *((v209 + v210) as &i128) = 146760927781364065512153261104771461744;
    *((v209 + v210 + &g_21 as &u8) as &i16) = 28773;
    v3 = v210 + &g_31 as &u8;
    v181 = *((&v1 as &char + 8) as &i128);
    if v101 != 0x8000000000000000 {
        v1 = v181;
    }
    v101 = v1;
    memcpy(&v1, &v61, 592);
    v61 = clap_builder::builder::command::Command::arg(&v121, &v1);
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v143 = 0;
    v145 = 0;
    v147 = 0;
    v149 = 0;
    v154 = 0;
    v156 = 0;
    v121 = 0;
    v122 = 0;
    v123 = v179;
    v124 = 0;
    v125 = 0;
    v126 = v178;
    v127 = &g_1;
    v128 = v177;
    v129 = 0;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v148 = &g_1;
    v151 = &g_1;
    v152 = 0;
    v153 = &g_1;
    v155 = &g_1;
    v157 = &g_1;
    v158 = 0;
    v159 = 0x8000000000000000;
    v160 = v176;
    v161 = 0x8000000000000000;
    v163 = v175;
    v162 = v174;
    v164 = v208;
    v165 = v180;
    v166 = &g_42013e;
    v167 = &g_1;
    v168 = &g_42013e;
    v169 = &g_1;
    v170 = 0;
    v171 = 4785074604081235;
    v172 = 0;
    v173 = 3337;
    v181 = struct32 {
        field_0: &g_42014a
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v181);
    v152 = v3;
    v150 = v1;
    v4 = v123;
    v7 = v126;
    v9 = v128;
    v211 = v129;
    v12 = v131;
    v15 = v133;
    v17 = v135;
    v19 = v137;
    v21 = v139;
    v23 = v141;
    v25 = v143;
    v27 = v145;
    v29 = v147;
    v31 = v149;
    v212 = *((&v150 as &char + 8) as &i128);
    v36 = v154;
    v38 = v156;
    v42 = v160;
    v44 = v162;
    v45 = v163;
    v47 = v165;
    v213 = *((&v121 as &char + 568) as &i64);
    v214 = *((&v121 as &char + 40) as &i128);
    v1 = v121;
    v3 = v122;
    v5 = v214;
    v6 = v125;
    v8 = v127;
    v10 = v211;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = v212;
    v34 = 0;
    v35 = &g_1;
    v37 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = v0;
    v48 = &g_42013e;
    v49 = &g_1;
    v50 = &g_42013e;
    v51 = &g_1;
    v52 = 0;
    v53 = v213;
    v54 = 4785074604081235;
    v56 = 0;
    v57 = 0xd00;
    v181 = v60.field_0;
    v121 = clap_builder::builder::arg::Arg::value_parser(&v1, &v181);
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_51);
    v215 = v2;
    v216 = v3;
    *((v215 + v216 + &g_41 as &u8) as &i128) = 153387880915454363782761275487300906607;
    *((v215 + v216 + &g_31 as &u8) as &i128) = 43108702438054877619787612720101090668;
    *((v215 + v216 + &g_21 as &u8) as &i128) = 149421088050553982109392168447663939684;
    *((v215 + v216 + 32) as &i128) = 134851517308632027922141454242183979109;
    *((v215 + v216 + &g_10 as &u8) as &i128) = 154696420220939665989122384741891514484;
    *((v215 + v216) as &i128) = 140131988369277160314497475720986456688;
    v3 = v216 + &g_51 as &u8;
    v217 = v1;
    v181 = *((&v1 as &char + 8) as &i128);
    if v217 != 0x8000000000000000 {
        v1 = v181;
    }
    v159 = v217;
    v160 = v1;
    memcpy(&v1, &v121, 592);
    v121 = clap_builder::builder::command::Command::arg(&v61, &v1);
    v1 = 0;
    v3 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v12 = 0;
    v14 = &g_1;
    v15 = 0;
    v16 = &g_1;
    v17 = 0;
    v18 = &g_1;
    v19 = 0;
    v20 = &g_1;
    v21 = 0;
    v22 = &g_1;
    v23 = 0;
    v24 = &g_1;
    v25 = 0;
    v26 = &g_1;
    v27 = 0;
    v28 = &g_1;
    v29 = 0;
    v30 = &g_1;
    v31 = 0;
    v32 = &g_1;
    v33 = 0;
    v35 = &g_1;
    v36 = 0;
    v37 = &g_1;
    v38 = 0;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = v0;
    v48 = &g_4201a8;
    v49 = &g_1;
    v50 = 0;
    v52 = 0;
    v54 = 0x11000000110000;
    v56 = 0;
    v57 = 3337;
    v13 = alloc::raw_vec::RawVec<T,A>::grow_one();
    v218 = v14;
    *(v218 as &&i64) = &g_4201a8;
    *((v218 + &g_1 as &u8) as &&i64) = &g_1;
    v15 = &g_1;
    memcpy(&v61, &v1, 360);
    memcpy(&v61, &v33, 176);
    v112 = v52;
    v219 = *((&v54 as &char + 4) as &i64);
    v117 = v58;
    v118 = v59;
    v94 = v33;
    v110 = &g_4201a8;
    v111 = &g_1;
    v113 = &g_61;
    v114 = v219;
    v116 = v57;
    v181 = struct32 {
        field_0: &g_4201ad
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v181);
    v94 = v3;
    v92 = v1;
    memcpy(&v1, &v61, 360);
    v220 = v94;
    memcpy(&v33, &v61, 176);
    v52 = v112;
    v58 = v117;
    v59 = v118;
    v33 = v220;
    v50 = &g_4201a8;
    v51 = &g_1;
    v54 = &g_61;
    v55 = v219;
    v57 = 0;
    v181 = v60.field_0;
    v61 = clap_builder::builder::arg::Arg::value_parser(&v1, &v181);
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_6d);
    v221 = v2;
    v222 = v3;
    *((v221 + v222 + &g_61 as &u8) as &i128) = 61665775162817247662251490291066170735;
    *((v221 + v222 + &g_51 as &u8) as &i128) = 129503295556445198854895817324861945376;
    *((v221 + v222 + &g_41 as &u8) as &i128) = 154753596330517439113304348123762815087;
    *((v221 + v222 + &g_31 as &u8) as &i128) = 43134547932525594745401017136884756068;
    *((v221 + v222 + &g_21 as &u8) as &i128) = 134856714926781793972876272204299396206;
    *((v221 + v222 + 32) as &i128) = 129503295556368153482981586170355672435;
    *((v221 + v222 + &g_10 as &u8) as &i128) = 153367146511753735065054922398044288111;
    *((v221 + v222) as &i128) = 152058890522849535731075786607964812879;
    v3 = v222 + &g_6d as &u8;
    v223 = v1;
    v181 = *((&v1 as &char + 8) as &i128);
    if v223 != 0x8000000000000000 {
        v1 = v181;
    }
    v101 = v223;
    v102 = v1;
    memcpy(&v1, &v61, 592);
    v61 = clap_builder::builder::command::Command::arg(&v121, &v1);
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v143 = 0;
    v145 = 0;
    v147 = 0;
    v149 = 0;
    v152 = 0;
    v154 = 0;
    v156 = 0;
    v121 = 0;
    v122 = 0;
    v124 = 0;
    v125 = 0;
    v127 = &g_1;
    v129 = 0;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v148 = &g_1;
    v151 = &g_1;
    v153 = &g_1;
    v155 = &g_1;
    v157 = &g_1;
    v158 = 0;
    v159 = 0x8000000000000000;
    v161 = 0x8000000000000000;
    v164 = v0;
    v166 = &g_415a04;
    v167 = &g_1;
    v168 = 0;
    v170 = 0;
    v171 = 0x11000000110000;
    v172 = 0;
    v173 = 3329;
    v181 = v60.field_0;
    v1 = clap_builder::builder::arg::Arg::value_parser(&v121, &v181);
    v121 = clap_builder::builder::command::Command::arg(&v61, &v1);
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v91 = 0;
    v96 = 0;
    v98 = 0;
    v61 = 0;
    v63 = 0;
    v66 = 0;
    v67 = 0;
    v69 = &g_1;
    v71 = 0;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v93 = &g_1;
    v94 = 0;
    v95 = &g_1;
    v97 = &g_1;
    v99 = &g_1;
    v100 = 0;
    v101 = 0x8000000000000000;
    v103 = 0x8000000000000000;
    v106 = v164;
    v108 = &g_42022a;
    v109 = &g_1;
    v110 = &g_42022a;
    v111 = &g_1;
    v112 = 0;
    v113 = 0x11000000110000;
    v115 = 0;
    v116 = 3337;
    v181 = struct32 {
        field_0: &g_420237
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v181);
    v94 = v3;
    v92 = v1;
    v4 = *((&v61 as &char + 24) as &i128);
    v7 = v68;
    v9 = v70;
    v224 = v71;
    v12 = v73;
    v15 = v75;
    v17 = v77;
    v19 = v79;
    v21 = v81;
    v23 = v83;
    v25 = v85;
    v27 = v87;
    v29 = v89;
    v31 = v91;
    v225 = *((&v92 as &char + 8) as &i128);
    v36 = v96;
    v38 = v98;
    v42 = v102;
    v44 = v104;
    v45 = v105;
    v47 = v107;
    v226 = *((&v61 as &char + 568) as &i64);
    v227 = *((&v61 as &char + 40) as &i128);
    v1 = v61;
    v3 = v63;
    v5 = v227;
    v6 = v67;
    v8 = v69;
    v10 = v224;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = v225;
    v34 = 0;
    v35 = &g_1;
    v37 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = v0;
    v48 = &g_42022a;
    v49 = &g_1;
    v50 = &g_42022a;
    v51 = &g_1;
    v52 = 0;
    v53 = v226;
    v54 = 0x11000000110000;
    v56 = 0;
    v57 = 3329;
    v61 = clap_builder::builder::arg::Arg::value_parser(&v1, &v60);
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v228 = v2;
    v229 = v3;
    *((v228 + v229 + &g_10 as &u8) as &i128) = 137483774149057422821004859924134504819;
    *((v228 + v229 + &g_10 as &u8) as &i128) = 148147266288817326810632565264455518547;
    *((v228 + v229) as &i128) = 43067164059465501842629839005179733363;
    v3 = v229 + &g_21 as &u8;
    v230 = v1;
    v181 = *((&v1 as &char + 8) as &i128);
    if v230 != 0x8000000000000000 {
        v1 = v181;
    }
    v101 = v230;
    v102 = v1;
    memcpy(&v1, &v61, 592);
    clap_builder::builder::command::Command::arg(a0, &v121, &v1);
    return a0;
}
