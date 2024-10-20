fn uu_tail::args::uu_app(a0: u32) -> u64 {
    let v0: i4736;  // [bp-0xae8], Other Possible Types: struct712, Enum, struct24, struct48, struct592
    let v1: i64;  // [sp-0xae0]
    let v2: i64;  // [sp-0xad8]
    let v3: i64;  // [sp-0xad0]
    let v4: i64;  // [sp-0xac8]
    let v5: i64;  // [sp-0xac0]
    let v6: i64;  // [sp-0xab0]
    let v7: i128;  // [sp-0xaa8]
    let v8: i64;  // [sp-0xa98]
    let v9: i128;  // [sp-0xa90]
    let v10: i64;  // [sp-0xa80]
    let v11: i64;  // [sp-0xa78]
    let v12: i128;  // [sp-0xa70]
    let v13: struct16;  // [sp-0xa68]
    let v14: i64;  // [sp-0xa60]
    let v15: i128;  // [bp-0xa58]
    let v16: i64;  // [sp-0xa48]
    let v17: i128;  // [sp-0xa40]
    let v18: i64;  // [sp-0xa30]
    let v19: i128;  // [sp-0xa28]
    let v20: i64;  // [sp-0xa18]
    let v21: i128;  // [sp-0xa10]
    let v22: i64;  // [sp-0xa00]
    let v23: i128;  // [sp-0x9f8]
    let v24: i64;  // [sp-0x9e8]
    let v25: i128;  // [sp-0x9e0]
    let v26: i64;  // [sp-0x9d0]
    let v27: i128;  // [sp-0x9c8]
    let v28: struct16;  // [sp-0x9c0]
    let v29: i64;  // [sp-0x9b8]
    let v30: i128;  // [bp-0x9b0]
    let v31: i64;  // [sp-0x9a0]
    let v32: i128;  // [sp-0x998]
    let v33: i64;  // [sp-0x988]
    let v34: i128;  // [sp-0x980]
    let v35: i64;  // [sp-0x970]
    let v36: i128;  // [sp-0x968]
    let v37: i64;  // [sp-0x958]
    let v38: i128;  // [bp-0x950]
    let v39: i128;  // [bp-0x948]
    let v40: i64;  // [sp-0x940]
    let v41: i64;  // [sp-0x938]
    let v42: i64;  // [sp-0x930]
    let v43: i128;  // [sp-0x928]
    let v44: i64;  // [sp-0x918]
    let v45: i128;  // [sp-0x910]
    let v46: i128;  // [sp-0x900]
    let v47: i64;  // [sp-0x8f0]
    let v48: i128;  // [sp-0x8e8]
    let v49: i64;  // [sp-0x8d8]
    let v50: i64;  // [sp-0x8d0]
    let v51: i64;  // [sp-0x8c8]
    let v52: i64;  // [sp-0x8c0]
    let v53: i64;  // [bp-0x8b8]
    let v54: i8;  // [bp-0x8b0]
    let v55: i64;  // [bp-0x8a8]
    let v56: i32;  // [sp-0x8a0]
    let v57: i16;  // [sp-0x89c]
    let v58: i64;  // [sp-0x82c]
    let v59: i32;  // [sp-0x824]
    let v60: i64;  // [sp-0x818], Other Possible Types: struct712, Enum, struct24
    let v61: i64;  // [sp-0x810]
    let v62: i64;  // [sp-0x808]
    let v63: i64;  // [sp-0x7f0]
    let v64: i64;  // [sp-0x7e0]
    let v65: i64;  // [sp-0x7c8]
    let v66: i64;  // [sp-0x7b0]
    let v67: i64;  // [sp-0x7a8]
    let v68: i128;  // [sp-0x7a0]
    let v69: struct16;  // [sp-0x798]
    let v70: i64;  // [sp-0x790]
    let v71: i128;  // [bp-0x788]
    let v72: i64;  // [sp-0x778]
    let v73: i128;  // [sp-0x770]
    let v74: i64;  // [sp-0x760]
    let v75: i128;  // [sp-0x758]
    let v76: i64;  // [sp-0x748]
    let v77: i128;  // [sp-0x740]
    let v78: i64;  // [sp-0x730]
    let v79: i128;  // [sp-0x728]
    let v80: i64;  // [sp-0x718]
    let v81: i128;  // [sp-0x710]
    let v82: i64;  // [sp-0x700]
    let v83: i128;  // [sp-0x6f8]
    let v84: struct16;  // [sp-0x6f0]
    let v85: i64;  // [sp-0x6e8]
    let v86: i128;  // [bp-0x6e0]
    let v87: i64;  // [sp-0x6d0]
    let v88: i128;  // [sp-0x6c8]
    let v89: i64;  // [sp-0x6b8]
    let v90: i128;  // [sp-0x6b0]
    let v91: i64;  // [sp-0x6a0]
    let v92: i128;  // [sp-0x698]
    let v93: i64;  // [sp-0x688]
    let v94: i128;  // [sp-0x680]
    let v95: i64;  // [sp-0x670]
    let v96: i64;  // [sp-0x668]
    let v97: i64;  // [sp-0x660]
    let v98: i128;  // [sp-0x658]
    let v99: i64;  // [sp-0x648]
    let v100: i128;  // [sp-0x640]
    let v101: i64;  // [sp-0x620]
    let v102: i64;  // [sp-0x608]
    let v103: i64;  // [sp-0x600]
    let v104: i64;  // [sp-0x5f8]
    let v105: i64;  // [sp-0x5f0]
    let v106: i64;  // [sp-0x5e8]
    let v107: i128;  // [bp-0x5d8]
    let v108: i32;  // [sp-0x5d0]
    let v109: i16;  // [sp-0x5cc]
    let v110: i64;  // [sp-0x5b8]
    let v111: i64;  // [sp-0x5b0]
    let v112: i192;  // [sp-0x548], Other Possible Types: Enum, struct592, struct24
    let v113: i64;  // [sp-0x540]
    let v114: i64;  // [sp-0x538]
    let v115: i64;  // [sp-0x530]
    let v116: i64;  // [sp-0x528]
    let v117: i128;  // [sp-0x520]
    let v118: i64;  // [sp-0x510]
    let v119: i128;  // [sp-0x508]
    let v120: i64;  // [sp-0x4f8]
    let v121: i128;  // [sp-0x4f0]
    let v122: i64;  // [sp-0x4e0]
    let v123: i64;  // [sp-0x4d8]
    let v124: i128;  // [sp-0x4d0]
    let v125: struct16;  // [sp-0x4c8]
    let v126: i64;  // [sp-0x4c0]
    let v127: i64;  // [bp-0x4b8]
    let v128: i64;  // [sp-0x4a8]
    let v129: i128;  // [sp-0x4a0]
    let v130: i64;  // [sp-0x490]
    let v131: i128;  // [sp-0x488]
    let v132: i64;  // [sp-0x478]
    let v133: i128;  // [sp-0x470]
    let v134: i64;  // [sp-0x460]
    let v135: i128;  // [sp-0x458]
    let v136: i64;  // [sp-0x448]
    let v137: i128;  // [sp-0x440]
    let v138: i64;  // [sp-0x430]
    let v139: i128;  // [sp-0x428]
    let v140: struct16;  // [sp-0x420]
    let v141: i64;  // [sp-0x418]
    let v142: i64;  // [bp-0x410]
    let v143: i64;  // [sp-0x400]
    let v144: i128;  // [sp-0x3f8]
    let v145: i64;  // [sp-0x3e8]
    let v146: i128;  // [sp-0x3e0]
    let v147: i64;  // [sp-0x3d0]
    let v148: i128;  // [sp-0x3c8]
    let v149: i64;  // [sp-0x3b8]
    let v150: i128;  // [sp-0x3b0]
    let v151: i128;  // [sp-0x3a0]
    let v152: i64;  // [sp-0x390]
    let v153: i128;  // [sp-0x388]
    let v154: i64;  // [sp-0x378]
    let v155: i128;  // [sp-0x370]
    let v156: i128;  // [sp-0x360]
    let v157: i64;  // [sp-0x350]
    let v158: i128;  // [sp-0x348]
    let v159: i64;  // [sp-0x338]
    let v160: i64;  // [sp-0x330]
    let v161: i64;  // [sp-0x328]
    let v162: i64;  // [sp-0x320]
    let v163: i64;  // [sp-0x318]
    let v164: i64;  // [sp-0x310]
    let v165: i128;  // [bp-0x308]
    let v166: i32;  // [sp-0x300]
    let v167: i8;  // [sp-0x2fc]
    let v168: i8;  // [bp-0x2fb]
    let v169: i8;  // [sp-0x2f9]
    let v170: i128;  // [bp-0x2e8], Other Possible Types: struct16, struct32, struct8, struct24
    let v171: i8;  // [sp-0x9c]
    let v172: i16;  // [sp-0x9b]
    let v173: i8;  // [sp-0x99]
    let v174: i8;  // [bp-0x90]
    let v175: i8;  // [bp-0x80]
    let v176: i8;  // [bp-0x70]
    let v177: i8;  // [bp-0x60]
    let v178: i8;  // [bp-0x50]
    let v179: i8;  // [bp-0x40]
    let v181: i64;  // rbx
    let v182: i64;  // rsi
    let v183: i64;  // rax
    let v184: i64;  // rcx
    let v185: i64;  // rax
    let v186: i64;  // rcx
    let v187: i64;  // rbx
    let v189: i128;  // xmm0
    let v190: i64;  // rdx
    let v191: i128;  // xmm2
    let v192: i64;  // rbx
    let v193: i64;  // rax
    let v194: i64;  // rcx
    let v195: i64;  // rax
    let v196: i64;  // rcx
    let v197: i64;  // rbx
    let v198: i64;  // rsi
    let v199: i64;  // rax
    let v200: i64;  // rcx
    let v201: i64;  // rax
    let v202: i64;  // rcx
    let v203: i64;  // rbx
    let v204: i64;  // rax
    let v205: i64;  // rcx
    let v206: i64;  // r14
    let v207: i64;  // r14
    let v208: i64;  // rax
    let v209: i64;  // rcx
    let v210: i64;  // rbx
    let v212: i64;  // rax
    let v213: i64;  // rcx
    let v214: i64;  // rsi
    let v215: i64;  // rax
    let v216: i64;  // rcx
    let v217: i64;  // rax
    let v218: i64;  // rcx
    let v219: i64;  // r14
    let v220: i64;  // rax
    let v221: i64;  // rcx
    let v222: i64;  // r14
    let v223: i64;  // r14
    let v224: i64;  // r14
    let v225: i64;  // rsi
    let v226: i64;  // rax
    let v227: i64;  // rcx
    let v228: i64;  // rax
    let v229: i64;  // rcx
    let v230: i64;  // rbx
    let v231: i64;  // rax
    let v232: i64;  // rcx
    let v233: i64;  // rax
    let v234: i64;  // rbp
    let v235: i64;  // rax
    let v236: i64;  // rcx
    let v237: i128;  // xmm1
    let v238: i64;  // rax
    let v239: i64;  // rcx
    let v240: i64;  // r14
    let v241: i64;  // rax
    let v242: i64;  // rcx
    let v243: i64;  // rbx
    let v244: i64;  // rax
    let v245: i64;  // rcx
    let v246: i64;  // rax
    let v247: i64;  // rcx
    let v248: i64;  // r14
    let v249: i64;  // rax
    let v250: i64;  // rcx
    let v251: i64;  // r14
    let v253: i64;  // rax
    let v254: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v60 = clap_builder::builder::command::Command::new(g_563010, g_563018);
    v110 = &g_422ac1;
    v111 = &g_1;
    memcpy(&v0, &v60, 712);
    v60 = clap_builder::builder::command::Command::about(&v0, &g_422ac7, 254);
    v112 = uucore::format_usage(&g_422bc5, &g_11);
    v181 = v112;
    if v181 != 0x8000000000000000 {
        v0 = *((&v112 as &char + 8) as &i128);
    }
    v99 = v181;
    v100 = v0;
    memcpy(&v0, &v60, 700);
    v58 = 549755814016 | *((&v60 as &char + 700) as &i64);
    v59 = *((&v60 as &char + 708) as &i32);
    v68 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v86 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v94 = 0;
    v60 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = &g_1;
    v66 = 0;
    v67 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v95 = &g_1;
    v96 = 0;
    v97 = 0x8000000000000000;
    v99 = 0x8000000000000000;
    v101 = 9223372036854775809;
    v102 = &g_42284e;
    v103 = &g_1;
    v104 = &g_42284e;
    v105 = &g_1;
    v106 = 0;
    v107 = 264384378310690395145089472004195;
    v182 = v71;
    if *((&v68 as &char + 8) as &i64) - v182 <= 1 {
        v69 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v182, &g_1);
        v182 = v71;
    }
    v183 = v70;
    v184 = v182 * &g_1;
    *((v183 + v184) as &&i64) = &g_42284e;
    *((v183 + v184 + &g_1 as &u8) as &&i64) = &g_1;
    *((v183 + v184 + &g_1 as &u8) as &&i64) = &g_42286e;
    *((v183 + v184 + &g_11 as &u8) as &&i64) = &g_1;
    v71 = v182 + &g_1 as &u8;
    memcpy(&v112, &v60, 592);
    v60 = 0;
    v61 = &g_1;
    v62 = 0;
    v60 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v185 = v61;
    v186 = v62;
    *((v185 + v186) as &i128) = 43134467755251947507586672769383626062;
    *((v185 + v186 + &g_1 as &u8) as &i64) = 8389759096066174836;
    v62 = v186 + &g_11 as &u8;
    v187 = v60;
    v170 = *((&v60 as &char + 8) as &i128);
    if v187 != 0x8000000000000000 {
        v60 = v170;
    }
    v152 = v187;
    v153 = v60;
    memcpy(&v170, &v112, 592);
    v60 = clap_builder::builder::command::Command::arg(&v0, &v170);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v7 = v179;
    v8 = &g_1;
    v9 = v178;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v40 = &g_1;
    v41 = 0;
    v42 = 0x8000000000000000;
    v43 = v177;
    v44 = 0x8000000000000000;
    v46 = v176;
    v45 = v175;
    v47 = 9223372036854775809;
    v48 = v174;
    v49 = &g_422892;
    v50 = &g_1;
    v51 = &g_422892;
    v52 = &g_1;
    v53 = 0;
    v55 = 264384378310100099334730766352486;
    v170 = struct32 {
        field_0: &g_422bf3
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v112 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v170);
    v41 = v114;
    v39 = v112;
    v119 = v7;
    v121 = v9;
    v124 = v12;
    v127 = v15;
    v129 = v17;
    v131 = v19;
    v133 = v21;
    v135 = v23;
    v137 = v25;
    v139 = v27;
    v142 = v30;
    v144 = v32;
    v146 = v34;
    v148 = v36;
    v150 = v38;
    v189 = *((&v39 as &char + 8) as &i128);
    v153 = v43;
    v156 = v46;
    v155 = v45;
    v158 = v48;
    v190 = v54;
    v191 = v5;
    v112 = v0;
    v114 = &g_1;
    v115 = 0;
    v116 = &g_1;
    v117 = v191;
    v118 = v6;
    v120 = v8;
    v122 = 0;
    v123 = &g_1;
    v126 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v141 = &g_1;
    v143 = &g_1;
    v145 = &g_1;
    v147 = &g_1;
    v149 = &g_1;
    v151 = v189;
    v152 = 0x8000000000000000;
    v154 = 0x8000000000000000;
    v157 = 9223372036854775809;
    v159 = &g_422892;
    v160 = &g_1;
    v161 = &g_422892;
    v162 = &g_1;
    v163 = 0;
    v164 = v190;
    v165 = 264384378312461282576165588959334;
    v0 = struct48 {
        field_0: &g_422bf3
        field_8: &g_1
        field_16: &g_4197f0
        field_24: &g_1
        field_32: 0
        field_40: &g_1
    };
    v170 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v112, &v170);
    v192 = *((&v0 as &char + 144) as &i64);
    if v192 == *((&v0 as &char + 128) as &i64) {
        v13 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v193 = v14;
    v194 = v192 * &g_1;
    *((v193 + v194) as &&i64) = &g_422892;
    *((v193 + v194 + &g_1 as &u8) as &&i64) = &g_1;
    v15 = v192 + &g_1 as &u8;
    memcpy(&v112, &v0, 592);
    v0 = 0;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 26);
    v195 = v1;
    v196 = v2;
    *((v195 + v196 + &g_1 as &u8) as &i128) = 153481363252823693204869155058214529382;
    *((v195 + v196) as &i128) = 129103326203240863966260743731772224080;
    v2 = v196 + 26;
    v197 = v0;
    v170 = *((&v0 as &char + 8) as &i128);
    if v197 != 0x8000000000000000 {
        v0 = v170;
    }
    v152 = v197;
    v153 = v0;
    memcpy(&v170, &v112, 592);
    v0 = clap_builder::builder::command::Command::arg(&v60, &v170);
    v68 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v86 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v94 = 0;
    v60 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = &g_1;
    v66 = 0;
    v67 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v95 = &g_1;
    v96 = 0;
    v97 = 0x8000000000000000;
    v99 = 0x8000000000000000;
    v101 = 9223372036854775809;
    v102 = &g_42286e;
    v103 = &g_1;
    v104 = &g_42286e;
    v105 = &g_1;
    v106 = 0;
    v107 = 264384378310690395145089472004206;
    v198 = v71;
    if *((&v68 as &char + 8) as &i64) - v198 <= 1 {
        v69 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v198, &g_1);
        v198 = v71;
    }
    v199 = v70;
    v200 = v198 * &g_1;
    *((v199 + v200) as &&i64) = &g_42284e;
    *((v199 + v200 + &g_1 as &u8) as &&i64) = &g_1;
    *((v199 + v200 + &g_1 as &u8) as &&i64) = &g_42286e;
    *((v199 + v200 + &g_11 as &u8) as &&i64) = &g_1;
    v71 = v198 + &g_1 as &u8;
    memcpy(&v112, &v60, 592);
    v60 = 0;
    v62 = 0;
    v60 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v201 = v61;
    v202 = v62;
    *((v201 + v202) as &i128) = 43134467274943301523055272400270488910;
    *((v201 + v202 + &g_1 as &u8) as &i64) = 8389759096066174836;
    v62 = v202 + &g_11 as &u8;
    v203 = v60;
    v170 = *((&v60 as &char + 8) as &i128);
    if v203 != 0x8000000000000000 {
        v60 = v170;
    }
    v152 = v203;
    v153 = v60;
    memcpy(&v170, &v112, 592);
    v60 = clap_builder::builder::command::Command::arg(&v0, &v170);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v30 = 0;
    v32 = 0;
    v36 = 0;
    v38 = 0;
    v0 = struct24 {
        field_344: 0
        field_352: &g_1
        field_360: 0
    };
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = &g_1;
    v37 = &g_1;
    v40 = &g_1;
    v41 = 0;
    v42 = 0x8000000000000000;
    v44 = 0x8000000000000000;
    v47 = 9223372036854775809;
    v49 = &g_422933;
    v50 = &g_1;
    v51 = &g_422933;
    v52 = &g_1;
    v53 = 0;
    v55 = 0x11000000110000;
    v56 = 0;
    v57 = 3337;
    v170 = struct16 {
        field_0: &g_422c2f
        field_8: &g_1
    };
    v112 = clap_builder::builder::arg::Arg::value_names(&v0, &v170);
    v0 = 0;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 45);
    v204 = v1;
    v205 = v2;
    *((v204 + v205 + 29) as &i128) = 153387779083788051307075581230265365349;
    *((v204 + v205 + &g_1 as &u8) as &i128) = 153460390055446071429291444232704255348;
    *((v204 + v205) as &i128) = 129508406569857709206436484422412036439;
    v2 = v205 + 45;
    v206 = v0;
    v170 = *((&v0 as &char + 8) as &i128);
    if v206 != 0x8000000000000000 {
        v0 = v170;
    }
    v152 = v206;
    v153 = v0;
    memcpy(&v0, &v112, 592);
    v207 = v15;
    if v207 == *((&v12 as &char + 8) as &i64) {
        v13 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v208 = v14;
    v209 = v207 * &g_1;
    *((v208 + v209) as &&i64) = &g_422933;
    *((v208 + v209 + &g_1 as &u8) as &&i64) = &g_1;
    v15 = v207 + &g_1 as &u8;
    memcpy(&v112, &v0, 592);
    v0 = clap_builder::builder::command::Command::arg(&v60, &v112);
    v68 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v86 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v94 = 0;
    v60 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = &g_1;
    v66 = 0;
    v67 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v95 = &g_1;
    v96 = 0;
    v97 = 0x8000000000000000;
    v99 = 0x8000000000000000;
    v101 = 9223372036854775809;
    v102 = &g_42294a;
    v103 = &g_1;
    v104 = &g_42294a;
    v105 = &g_1;
    v106 = 0;
    v107 = 4785074604081265;
    v108 = 0;
    v109 = 3337;
    v210 = v86;
    v212 = &g_1;
    if v210 == *((&v83 as &char + 8) as &i64) {
        v84 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v212 = v85;
    }
    v213 = v210 * &g_1;
    *((v212 + v213 * &g_1) as &&i64) = &g_422c5f;
    *((v212 + v213 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    *((v212 + v213 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    v86 = v210 + &g_1 as &u8;
    memcpy(&v112, &v60, 592);
    v214 = *((&v112 as &char + 144) as &i64);
    if *((&v112 as &char + 128) as &i64) - v214 <= 1 {
        v125 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v214, &g_1);
        v214 = *((&v112 as &char + 144) as &i64);
    }
    v215 = v126;
    v216 = v214 * &g_1;
    *((v215 + v216) as &&i64) = &g_42294a;
    *((v215 + v216 + &g_1 as &u8) as &&i64) = &g_1;
    *((v215 + v216 + &g_1 as &u8) as &&i64) = &g_4228a3;
    *((v215 + v216 + &g_11 as &u8) as &&i64) = &g_1;
    v127 = v214 + &g_1 as &u8;
    memcpy(&v60, &v112, 592);
    v112 = 0;
    v113 = &g_1;
    v114 = 0;
    v112 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1f);
    v217 = v113;
    v218 = v114;
    *((v217 + v218 + &g_1 as &u8) as &i128) = 134814933379307785506979812457506301284;
    *((v217 + v218) as &i128) = 129461649515791074005835109920625026382;
    *((v217 + v218 + 30) as &i64) = 8315172552236361068;
    v114 = v218 + &g_1f as &u8;
    v219 = v112;
    v170 = *((&v112 as &char + 8) as &i128);
    if v219 != 0x8000000000000000 {
        v112 = v170;
    }
    v97 = v219;
    v98 = v112;
    memcpy(&v112, &v60, 588);
    v168 = *((&v60 as &char + 589) as &i16);
    v169 = *((&v60 as &char + 591) as &i8);
    v167 = &g_1;
    v60 = clap_builder::builder::command::Command::arg(&v0, &v112);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v30 = 0;
    v32 = 0;
    v36 = 0;
    v38 = 0;
    v0 = struct24 {
        field_344: 0
        field_352: &g_1
        field_360: 0
    };
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = &g_1;
    v37 = &g_1;
    v40 = &g_1;
    v41 = 0;
    v42 = 0x8000000000000000;
    v44 = 0x8000000000000000;
    v47 = 9223372036854775809;
    v49 = &g_4228bd;
    v50 = &g_1;
    v51 = 0;
    v53 = 0;
    v55 = 4785074604081267;
    v56 = 0;
    v57 = 3337;
    v170 = struct16 {
        field_0: &g_422c8b
        field_8: &g_1
    };
    v112 = clap_builder::builder::arg::Arg::value_names(&v0, &v170);
    v161 = &g_4228bd;
    v162 = &g_1;
    memcpy(&v0, &v112, 592);
    v112 = 0;
    v113 = &g_1;
    v114 = 0;
    v112 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_41);
    v220 = v113;
    v221 = v114;
    *((v220 + v221 + 48) as &i128) = 137483774622576760291974737405409586281;
    *((v220 + v221 + &g_1f as &u8) as &i128) = 135749465868572839028495070116599328357;
    *((v220 + v221 + &g_1 as &u8) as &i128) = 134872271692369332549741977572589445235;
    *((v220 + v221) as &i128) = 133496211455381678043619948090541045070;
    *((v220 + v221 + &g_31 as &u8) as &i64) = 7362576598822385440;
    v114 = v221 + &g_41 as &u8;
    v222 = v112;
    v170 = *((&v112 as &char + 8) as &i128);
    if v222 != 0x8000000000000000 {
        v112 = v170;
    }
    v42 = v222;
    v43 = v112;
    memcpy(&v112, &v0, 592);
    v0 = clap_builder::builder::command::Command::arg(&v60, &v112);
    v68 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v86 = 0;
    v88 = 0;
    v92 = 0;
    v94 = 0;
    v60 = struct24 {
        field_344: 0
        field_352: &g_1
        field_360: 0
    };
    v63 = 0;
    v64 = 0;
    v65 = &g_1;
    v66 = 0;
    v67 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = &g_1;
    v93 = &g_1;
    v95 = &g_1;
    v96 = 0;
    v97 = 0x8000000000000000;
    v99 = 0x8000000000000000;
    v101 = 9223372036854775809;
    v102 = &g_4228e7;
    v103 = &g_11;
    v104 = 0;
    v106 = 0;
    v107 = 0x11000000110000;
    v108 = 0;
    v109 = 3337;
    v170 = struct16 {
        field_0: &g_422c8b
        field_8: &g_1
    };
    v112 = clap_builder::builder::arg::Arg::value_names(&v60, &v170);
    v161 = &g_4228e7;
    v162 = &g_11;
    memcpy(&v60, &v112, 592);
    v112 = 0;
    v113 = &g_1;
    v114 = 0;
    v112 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 254);
    v223 = v114;
    memcpy(v113 + v223, &g_422cd4, 254);
    v114 = v223 + 254;
    v224 = v112;
    v170 = *((&v112 as &char + 8) as &i128);
    if v224 != 0x8000000000000000 {
        v112 = v170;
    }
    v97 = v224;
    v98 = v112;
    memcpy(&v112, &v60, 592);
    v60 = clap_builder::builder::command::Command::arg(&v0, &v112);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v40 = &g_1;
    v41 = 0;
    v42 = 0x8000000000000000;
    v44 = 0x8000000000000000;
    v47 = 9223372036854775809;
    v49 = &g_4228a3;
    v50 = &g_1;
    v51 = &g_4228a3;
    v52 = &g_1;
    v53 = 0;
    v55 = 4785074604081270;
    v56 = 0;
    v57 = 3337;
    v225 = v15;
    if *((&v12 as &char + 8) as &i64) - v225 <= 1 {
        v13 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v225, &g_1);
        v225 = v15;
    }
    v226 = v14;
    v227 = v225 * &g_1;
    *((v226 + v227) as &&i64) = &g_42294a;
    *((v226 + v227 + &g_1 as &u8) as &&i64) = &g_1;
    *((v226 + v227 + &g_1 as &u8) as &&i64) = &g_4228a3;
    *((v226 + v227 + &g_11 as &u8) as &&i64) = &g_1;
    v15 = v225 + &g_1 as &u8;
    memcpy(&v112, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 39);
    v228 = v1;
    v229 = v2;
    *((v228 + v229 + &g_1 as &u8) as &i128) = 144103886088008279985996638513023771745;
    *((v228 + v229) as &i128) = 134792684711483989546451219983550082113;
    *((v228 + v229 + &g_1f as &u8) as &i64) = 8315172552236361068;
    v2 = v229 + 39;
    v230 = v0;
    v170 = *((&v0 as &char + 8) as &i128);
    if v230 != 0x8000000000000000 {
        v0 = v170;
    }
    v152 = v230;
    v153 = v0;
    memcpy(&v170, &v112, 588);
    v172 = *((&v112 as &char + 589) as &i16);
    v173 = v169;
    v171 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v60, &v170);
    v68 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v86 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v94 = 0;
    v60 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = &g_1;
    v66 = 0;
    v67 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v95 = &g_1;
    v96 = 0;
    v97 = 0x8000000000000000;
    v99 = 0x8000000000000000;
    v101 = 9223372036854775809;
    v102 = &g_42283f;
    v103 = &g_1;
    v104 = &g_42283f;
    v105 = &g_1;
    v106 = 0;
    v107 = 4785074604081274;
    v108 = 0;
    v109 = 3337;
    v112 = 0;
    v113 = &g_1;
    v114 = 0;
    v112 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1f);
    v231 = v113;
    v232 = v114;
    *((v231 + v232 + &g_1 as &u8) as &i128) = 140132129261007763084871203607542636659;
    *((v231 + v232) as &i128) = 139737413289656226403140227931854235980;
    *((v231 + v232 + &g_1f as &u8) as &i16) = 25966;
    v114 = v232 + &g_1f as &u8;
    v170 = *((&v112 as &char + 8) as &i128);
    if v97 != 0x8000000000000000 {
        v112 = v170;
    }
    v97 = v112;
    memcpy(&v112, &v60, 588);
    v168 = *((&v60 as &char + 589) as &i16);
    v169 = *((&v60 as &char + 591) as &i8);
    v167 = &g_1;
    v60 = clap_builder::builder::command::Command::arg(&v0, &v112);
    v0 = 0;
    v2 = 0;
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
    v29 = &g_1;
    v30 = 0;
    v31 = &g_1;
    v32 = 0;
    v33 = &g_1;
    v34 = 0;
    v35 = &g_1;
    v36 = 0;
    v37 = &g_1;
    v38 = 0;
    v40 = &g_1;
    v41 = 0;
    v42 = 0x8000000000000000;
    v44 = 0x8000000000000000;
    v47 = 9223372036854775809;
    v49 = &g_422898;
    v50 = &g_1;
    v51 = 0;
    v53 = 0;
    v55 = 0x11000000110000;
    v56 = 0;
    v57 = 3337;
    v28 = alloc::raw_vec::RawVec<T,A>::grow_one();
    v233 = v29;
    *(v233 as &&i64) = &g_419a70;
    *((v233 + &g_1 as &u8) as &&i64) = &g_1;
    *((v233 + &g_1 as &u8) as &i8) = 0;
    v30 = &g_1;
    memcpy(&v112, &v0, 592);
    v234 = *((&v112 as &char + 312) as &i64);
    if v234 == *((&v112 as &char + 296) as &i64) {
        v140 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v235 = v141;
    v236 = &g_1 * v234;
    *((v235 + v236 * &g_1) as &&i64) = &g_422e1b;
    *((v235 + v236 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    *((v235 + v236 * &g_1 + &g_1 as &u8) as &i8) = 0;
    v142 = v234 + &g_1 as &u8;
    memcpy(&v0, &v112, 544);
    v237 = *((&v112 as &char + 576) as &i128);
    v53 = *((&v112 as &char + 560) as &i128);
    v55 = v237;
    v51 = &g_422898;
    v52 = &g_1;
    v112 = 0;
    v113 = &g_1;
    v114 = 0;
    v112 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v238 = v113;
    v239 = v114;
    *((v238 + v239 + &g_1f as &u8) as &i128) = 129461899478772011311424460588657418341;
    *((v238 + v239 + &g_1 as &u8) as &i128) = 153469375241798238645009479708869599271;
    *((v238 + v239) as &i128) = 161368340647506922620093463408732760388;
    *((v238 + v239 + 48) as &i8) = 100;
    v114 = v239 + &g_31 as &u8;
    v240 = v112;
    v170 = *((&v112 as &char + 8) as &i128);
    if v240 != 0x8000000000000000 {
        v112 = v170;
    }
    v42 = v240;
    v43 = v112;
    memcpy(&v112, &v0, 588);
    v168 = *((&v55 as &char + 13) as &i16);
    v169 = *((&v55 as &char + 15) as &i8);
    v167 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v60, &v112);
    v68 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v86 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v94 = 0;
    v60 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = &g_1;
    v66 = 0;
    v67 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v95 = &g_1;
    v96 = 0;
    v97 = 0x8000000000000000;
    v99 = 0x8000000000000000;
    v101 = 9223372036854775809;
    v102 = &g_42288d;
    v103 = &g_1;
    v104 = &g_42288d;
    v105 = &g_1;
    v106 = 0;
    v107 = 0x11000000110000;
    v108 = 0;
    v109 = 3337;
    v112 = 0;
    v113 = &g_1;
    v114 = 0;
    v112 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 48);
    v241 = v113;
    v242 = v114;
    *((v241 + v242 + &g_1f as &u8) as &i128) = 134814791665826767799736725514755467552;
    *((v241 + v242 + &g_1 as &u8) as &i128) = 154736295832111382082580145528237876592;
    *((v241 + v242) as &i128) = 147712721579560194446191555682916197707;
    v114 = v242 + 48;
    v170 = *((&v112 as &char + 8) as &i128);
    if v97 != 0x8000000000000000 {
        v112 = v170;
    }
    v97 = v112;
    memcpy(&v112, &v60, 592);
    v243 = *((&v112 as &char + 144) as &i64);
    if v243 == *((&v112 as &char + 128) as &i64) {
        v125 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v244 = v126;
    v245 = v243 * &g_1;
    *((v244 + v245) as &&i64) = &g_42288d;
    *((v244 + v245 + &g_1 as &u8) as &&i64) = &g_1;
    v127 = v243 + &g_1 as &u8;
    memcpy(&v170, &v112, 588);
    v172 = v168;
    v173 = v169;
    v171 = &g_1;
    v60 = clap_builder::builder::command::Command::arg(&v0, &v170);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v40 = &g_1;
    v41 = 0;
    v42 = 0x8000000000000000;
    v44 = 0x8000000000000000;
    v47 = 9223372036854775809;
    v49 = &g_42288c;
    v50 = &g_1;
    v51 = 0;
    v53 = 0;
    v55 = 4785074604081222;
    v56 = 0;
    v57 = 3337;
    v112 = 0;
    v113 = &g_1;
    v114 = 0;
    v112 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 29);
    v246 = v113;
    v247 = v114;
    *((v246 + v247 + &g_1 as &u8) as &i128) = 161430870128742134391092546241165750124;
    *((v246 + v247) as &i128) = 158756675541057460525977698350329061715;
    v114 = v247 + 29;
    v170 = *((&v112 as &char + 8) as &i128);
    if v42 != 0x8000000000000000 {
        v112 = v170;
    }
    v42 = v112;
    memcpy(&v112, &v0, 592);
    v248 = v127;
    if v248 == *((&v112 as &char + 128) as &i64) {
        v125 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v249 = v126;
    v250 = v248 * &g_1;
    *((v249 + v250) as &&i64) = &g_42288c;
    *((v249 + v250 + &g_1 as &u8) as &&i64) = &g_1;
    v127 = v248 + &g_1 as &u8;
    memcpy(&v170, &v112, 588);
    v172 = v168;
    v173 = v169;
    v171 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v60, &v170);
    v68 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v86 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v94 = 0;
    v60 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = &g_1;
    v66 = 0;
    v67 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v95 = &g_1;
    v96 = 0;
    v97 = 0x8000000000000000;
    v99 = 0x8000000000000000;
    v101 = 9223372036854775809;
    v102 = &g_4228aa;
    v103 = &g_11;
    v104 = &g_422e9c;
    v105 = &g_11;
    v106 = 0;
    v107 = 0x11000000110000;
    v108 = 0;
    v109 = 3337;
    v251 = v86;
    v253 = &g_1;
    if v251 == *((&v83 as &char + 8) as &i64) {
        v84 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v253 = v85;
    }
    v254 = v251 * &g_1;
    *((v253 + v254 * &g_1) as &&i64) = &g_4228aa;
    *((v253 + v254 * &g_1 + &g_1 as &u8) as &&i64) = &g_11;
    *((v253 + v254 * &g_1 + &g_1 as &u8) as &i8) = 0;
    v86 = v251 + &g_1 as &u8;
    memcpy(&v112, &v60, 584);
    v166 = v108 | &g_1;
    *(&v167 as &unsigned long) = -0x100 & *((&v60 as &char + 588) as &i32) | &g_1;
    v60 = clap_builder::builder::command::Command::arg(&v0, &v112);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v0 = 0;
    v2 = &g_1;
    v3 = &g_1;
    v4 = -1;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v40 = &g_1;
    v41 = 0;
    v42 = 0x8000000000000000;
    v44 = 0x8000000000000000;
    v47 = 9223372036854775809;
    v49 = &g_422945;
    v50 = &g_1;
    v51 = 0;
    v53 = 0;
    v55 = 0x11000000110000;
    v56 = 0;
    v57 = 3329;
    v170 = struct8 {
        field_0: &g_1
    };
    v112 = clap_builder::builder::arg::Arg::value_parser(&v0, &v170);
    *(&v168 as &&i64) = &g_1;
    memcpy(&v0, &v112, 592);
    clap_builder::builder::command::Command::arg(a0, &v60, &v0);
    return a0;
}
