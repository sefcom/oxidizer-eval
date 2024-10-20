fn uu_tee::uu_app(a0: u32) -> u64 {
    let v0: i192;  // [sp-0xa58], Other Possible Types: Enum, struct24, struct592
    let v1: i64;  // [sp-0xa50]
    let v2: i64;  // [sp-0xa48]
    let v3: i64;  // [sp-0xa40]
    let v4: i128;  // [bp-0xa38]
    let v5: i64;  // [sp-0xa30]
    let v6: i64;  // [sp-0xa28]
    let v7: i64;  // [sp-0xa20]
    let v8: i8;  // [sp-0xa18]
    let v9: i64;  // [sp-0xa08]
    let v10: i64;  // [sp-0x9f0]
    let v11: i64;  // [sp-0x9e8]
    let v12: i128;  // [sp-0x9e0]
    let v13: i64;  // [sp-0x9d0]
    let v14: i128;  // [sp-0x9c8]
    let v15: i64;  // [sp-0x9b8]
    let v16: i128;  // [sp-0x9b0]
    let v17: i64;  // [sp-0x9a0]
    let v18: i128;  // [sp-0x998]
    let v19: i64;  // [sp-0x988]
    let v20: i128;  // [sp-0x980]
    let v21: i64;  // [sp-0x970]
    let v22: i128;  // [sp-0x968]
    let v23: i64;  // [sp-0x958]
    let v24: i128;  // [sp-0x950]
    let v25: i64;  // [sp-0x940]
    let v26: i128;  // [bp-0x938]
    let v27: i64;  // [sp-0x930]
    let v28: i64;  // [sp-0x928]
    let v29: i128;  // [sp-0x920]
    let v30: i64;  // [sp-0x910]
    let v31: i128;  // [sp-0x908]
    let v32: i64;  // [sp-0x8f8]
    let v33: i128;  // [sp-0x8f0]
    let v34: i64;  // [sp-0x8e0]
    let v35: i128;  // [sp-0x8d8]
    let v36: i64;  // [sp-0x8c8]
    let v37: i128;  // [sp-0x8c0]
    let v38: i64;  // [sp-0x8b0]
    let v39: i64;  // [sp-0x8a8]
    let v40: i64;  // [sp-0x8a0]
    let v41: i128;  // [sp-0x898]
    let v42: i64;  // [sp-0x888]
    let v43: i64;  // [sp-0x860]
    let v44: i64;  // [sp-0x848]
    let v45: i64;  // [sp-0x840]
    let v46: i64;  // [sp-0x838]
    let v47: i64;  // [sp-0x828]
    let v48: i64;  // [sp-0x818]
    let v49: i32;  // [sp-0x810]
    let v50: i8;  // [sp-0x80c]
    let v51: i16;  // [sp-0x80b]
    let v52: i8;  // [sp-0x809]
    let v53: i64;  // [bp-0x808], Other Possible Types: Enum
    let v54: i64;  // [sp-0x800]
    let v55: i64;  // [bp-0x7f8]
    let v56: i128;  // [sp-0x7e8]
    let v57: i128;  // [sp-0x7d8]
    let v58: i64;  // [sp-0x7c8]
    let v59: i128;  // [sp-0x7c0]
    let v60: i128;  // [sp-0x7b0]
    let v61: i128;  // [sp-0x7a0]
    let v62: i128;  // [sp-0x790]
    let v63: i64;  // [sp-0x780]
    let v64: i128;  // [sp-0x778]
    let v65: i128;  // [sp-0x768]
    let v66: i128;  // [sp-0x758]
    let v67: i128;  // [sp-0x748]
    let v68: i64;  // [sp-0x738]
    let v69: i128;  // [sp-0x730]
    let v70: i64;  // [sp-0x720]
    let v71: i64;  // [sp-0x718]
    let v72: i128;  // [sp-0x710]
    let v73: i128;  // [sp-0x700]
    let v74: i64;  // [sp-0x6f0]
    let v75: i128;  // [sp-0x6e8], Other Possible Types: struct24
    let v76: i64;  // [sp-0x6d8]
    let v77: i64;  // [sp-0x6d0]
    let v78: i128;  // [sp-0x6c8]
    let v79: i128;  // [sp-0x6b8]
    let v80: i64;  // [sp-0x6a8]
    let v81: i8;  // [bp-0x690]
    let v82: i64;  // [sp-0x680], Other Possible Types: struct712, Enum
    let v83: i64;  // [sp-0x670]
    let v84: i64;  // [sp-0x658]
    let v85: i64;  // [sp-0x648]
    let v86: i64;  // [sp-0x630]
    let v87: i64;  // [sp-0x618]
    let v88: i64;  // [sp-0x610]
    let v89: i128;  // [sp-0x608]
    let v90: i64;  // [sp-0x5f8]
    let v91: i128;  // [sp-0x5f0]
    let v92: i64;  // [sp-0x5e0]
    let v93: i128;  // [sp-0x5d8]
    let v94: i64;  // [sp-0x5c8]
    let v95: i128;  // [sp-0x5c0]
    let v96: i64;  // [sp-0x5b0]
    let v97: i128;  // [sp-0x5a8]
    let v98: i64;  // [sp-0x598]
    let v99: i128;  // [sp-0x590]
    let v100: i64;  // [sp-0x580]
    let v101: i128;  // [sp-0x578]
    let v102: i64;  // [sp-0x568]
    let v103: i128;  // [sp-0x560]
    let v104: i64;  // [sp-0x550]
    let v105: i128;  // [sp-0x548]
    let v106: i64;  // [sp-0x538]
    let v107: i128;  // [sp-0x530]
    let v108: i64;  // [sp-0x520]
    let v109: i128;  // [sp-0x518]
    let v110: i64;  // [sp-0x508]
    let v111: i128;  // [sp-0x500]
    let v112: i64;  // [sp-0x4f0]
    let v113: i128;  // [sp-0x4e8]
    let v114: i64;  // [sp-0x4d8]
    let v115: i64;  // [sp-0x4d0]
    let v116: i64;  // [sp-0x4c8]
    let v117: i64;  // [sp-0x4b0]
    let v118: i128;  // [sp-0x4a8]
    let v119: i64;  // [sp-0x488]
    let v120: i64;  // [sp-0x470]
    let v121: i64;  // [sp-0x468]
    let v122: i64;  // [sp-0x460]
    let v123: i64;  // [sp-0x458]
    let v124: i64;  // [sp-0x450]
    let v125: i64;  // [bp-0x440]
    let v126: i64;  // [bp-0x43c]
    let v127: i32;  // [sp-0x438]
    let v128: i16;  // [sp-0x434]
    let v129: i64;  // [sp-0x420]
    let v130: i64;  // [sp-0x418]
    let v131: i128;  // [bp-0x3b8], Other Possible Types: struct712, Enum, struct24
    let v132: i64;  // [sp-0x3b0]
    let v133: i64;  // [sp-0x3a8]
    let v134: i64;  // [sp-0x3a0]
    let v135: i64;  // [sp-0x398]
    let v136: i64;  // [sp-0x390]
    let v137: i64;  // [sp-0x380]
    let v138: i64;  // [sp-0x368]
    let v139: i64;  // [sp-0x350], Other Possible Types: struct16
    let v140: i64;  // [sp-0x348]
    let v141: i128;  // [bp-0x340]
    let v142: i64;  // [sp-0x330]
    let v143: i128;  // [sp-0x328]
    let v144: i64;  // [sp-0x318]
    let v145: i128;  // [sp-0x310]
    let v146: i64;  // [sp-0x300]
    let v147: i128;  // [sp-0x2f8]
    let v148: i64;  // [sp-0x2e8]
    let v149: i128;  // [sp-0x2e0]
    let v150: i64;  // [sp-0x2d0]
    let v151: i128;  // [sp-0x2c8]
    let v152: i64;  // [sp-0x2b8]
    let v153: i128;  // [sp-0x2b0]
    let v154: i64;  // [sp-0x2a0]
    let v155: i128;  // [sp-0x298]
    let v156: i64;  // [sp-0x288]
    let v157: i128;  // [sp-0x280]
    let v158: i64;  // [sp-0x270]
    let v159: i128;  // [sp-0x268]
    let v160: i64;  // [sp-0x258]
    let v161: i128;  // [sp-0x250]
    let v162: i64;  // [sp-0x240]
    let v163: i128;  // [sp-0x238]
    let v164: i64;  // [sp-0x228]
    let v165: i128;  // [sp-0x220]
    let v166: i64;  // [sp-0x210]
    let v167: i64;  // [sp-0x208]
    let v168: i64;  // [sp-0x200]
    let v169: i64;  // [sp-0x1e8]
    let v170: i64;  // [sp-0x1c0]
    let v171: i64;  // [sp-0x1a8]
    let v172: i64;  // [sp-0x1a0]
    let v173: i64;  // [sp-0x198]
    let v174: i64;  // [sp-0x190]
    let v175: i64;  // [sp-0x188]
    let v176: i128;  // [sp-0x178]
    let v177: i64;  // [sp-0x174]
    let v178: i16;  // [sp-0x16c]
    let v179: i8;  // [bp-0x169]
    let v180: i64;  // [sp-0xfc]
    let v181: i32;  // [sp-0xf4]
    let v182: i128;  // [sp-0xe8]
    let v183: i64;  // [sp-0xd8]
    let v184: i64;  // [sp-0xd0]
    let v185: i128;  // [sp-0xc8]
    let v186: i128;  // [sp-0xb8]
    let v187: i64;  // [sp-0xa8]
    let v188: i128;  // [sp-0x98]
    let v189: i64;  // [sp-0x88]
    let v190: i64;  // [sp-0x80]
    let v191: i128;  // [sp-0x78]
    let v192: i128;  // [sp-0x68]
    let v193: i64;  // [sp-0x58]
    let v194: i128;  // [sp-0x48]
    let v196: i64;  // rbx
    let v197: i64;  // rax
    let v198: i64;  // rcx
    let v199: i64;  // rax
    let v200: i64;  // rcx
    let v201: i64;  // rax
    let v202: i64;  // rcx
    let v203: i64;  // rax
    let v204: i64;  // rcx
    let v205: i64;  // rax
    let v206: i64;  // rcx
    let v207: i64;  // rax
    let v208: i64;  // rcx
    let v209: i64;  // rax
    let v210: i64;  // rcx
    let v211: i64;  // rax
    let v212: i64;  // rcx
    let v213: i128;  // xmm1
    let v214: i64;  // rcx
    let v215: i64;  // rdx
    let v216: i64;  // rbx
    let v217: i64;  // rbx
    let v218: i64;  // rax
    let v219: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v82 = clap_builder::builder::command::Command::new(g_4ec6b0, g_4ec6b8);
    v129 = &g_419600;
    v130 = &g_1;
    memcpy(&v131, &v82, 712);
    v82 = clap_builder::builder::command::Command::about(&v131, &g_419606, 62);
    v0 = uucore::format_usage(&g_419644, &g_11);
    v196 = v0;
    if v196 != 0x8000000000000000 {
        v131 = *((&v0 as &char + 8) as &i128);
    }
    v117 = v196;
    v118 = v131;
    memcpy(&v131, &v82, 712);
    v82 = clap_builder::builder::command::Command::after_help(&v131, &g_41965c, 45);
    memcpy(&v131, &v82, 700);
    v180 = 1126449662918784 | *((&v82 as &char + 700) as &i64);
    v181 = *((&v82 as &char + 708) as &i32);
    v89 = 0;
    v91 = 0;
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
    v82 = 0;
    v83 = 0;
    v84 = 0;
    v85 = 0;
    v86 = &g_1;
    v87 = 0;
    v88 = &g_1;
    v90 = &g_1;
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
    v115 = 0;
    v116 = 0x8000000000000000;
    v117 = 0x8000000000000000;
    v119 = 9223372036854775809;
    v120 = &g_419689;
    v121 = &g_1;
    v122 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v123 = &g_1;
    v124 = 0;
    v125 = 4785074604081256;
    v127 = 0;
    v128 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_9);
    v197 = v1;
    v198 = v2;
    *((v197 + v198) as &i64) = 7307126079849329232;
    *((v197 + v198 + &g_1 as &u8) as &i16) = 28780;
    v2 = v198 + &g_9 as &u8;
    v53 = *((&v0 as &char + 8) as &i128);
    if v116 != 0x8000000000000000 {
        v0 = v53;
    }
    v116 = v0;
    memcpy(&v0, &v82, 588);
    v51 = *((&v82 as &char + 589) as &i16);
    v52 = *((&v82 as &char + 591) as &i8);
    v50 = &g_1;
    v82 = clap_builder::builder::command::Command::arg(&v131, &v0);
    v141 = 0;
    v143 = 0;
    v145 = 0;
    v147 = 0;
    v149 = 0;
    v151 = 0;
    v153 = 0;
    v155 = 0;
    v157 = 0;
    v159 = 0;
    v161 = 0;
    v163 = 0;
    v165 = 0;
    v131 = 0;
    v133 = 0;
    v136 = 0;
    v137 = 0;
    v138 = &g_1;
    v139 = 0;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v148 = &g_1;
    v150 = &g_1;
    v152 = &g_1;
    v154 = &g_1;
    v156 = &g_1;
    v158 = &g_1;
    v160 = &g_1;
    v162 = &g_1;
    v164 = &g_1;
    v166 = &g_1;
    v167 = 0;
    v168 = 0x8000000000000000;
    v169 = 0x8000000000000000;
    v170 = 9223372036854775809;
    v171 = &g_41968f;
    v172 = &g_1;
    v173 = &g_41968f;
    v174 = &g_1;
    v175 = 0;
    v177 = 0x110000;
    v178 = 3337;
    v176 = 97;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1c);
    v199 = v1;
    v200 = v2;
    *((v199 + v200 + &g_11 as &u8) as &i128) = 134856472731852466075637280383361380196;
    *((v199 + v200 + 16) as &i128) = 148116118048985245387112413882196321654;
    *((v199 + v200) as &i128) = 140104403205323814282969072386341630049;
    v2 = v200 + &g_1c as &u8;
    v53 = *((&v0 as &char + 8) as &i128);
    if v168 != 0x8000000000000000 {
        v0 = v53;
    }
    v168 = v0;
    memcpy(&v0, &v131, 588);
    v51 = v178;
    v52 = v179;
    v50 = &g_1;
    v131 = clap_builder::builder::command::Command::arg(&v82, &v0);
    v89 = 0;
    v91 = 0;
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
    v82 = 0;
    v83 = 0;
    v84 = 0;
    v85 = 0;
    v86 = &g_1;
    v87 = 0;
    v88 = &g_1;
    v90 = &g_1;
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
    v115 = 0;
    v116 = 0x8000000000000000;
    v117 = 0x8000000000000000;
    v119 = 9223372036854775809;
    v120 = &g_4196c0;
    v121 = &g_11;
    v122 = &g_4196c0;
    v123 = &g_11;
    v124 = 0;
    v126 = 0x110000;
    v128 = 3337;
    v125 = 105;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v201 = v1;
    v202 = v2;
    *((v201 + v202 + &g_1c as &u8) as &i128) = 144138819370042943643791724450715476068;
    *((v201 + v202 + 16) as &i128) = 134846209510717438133361516129739698976;
    *((v201 + v202) as &i128) = 154774366868544238281454564557376612201;
    *((v201 + v202 + 48) as &i64) = 2986851316139455585;
    v2 = v202 + &g_31 as &u8;
    v53 = *((&v0 as &char + 8) as &i128);
    if v116 != 0x8000000000000000 {
        v0 = v53;
    }
    v116 = v0;
    memcpy(&v0, &v82, 588);
    v51 = *((&v82 as &char + 589) as &i16);
    v52 = *((&v82 as &char + 591) as &i8);
    v50 = &g_1;
    v82 = clap_builder::builder::command::Command::arg(&v131, &v0);
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v7 = 0;
    v9 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v39 = 0;
    v40 = 0x8000000000000000;
    v42 = 0x8000000000000000;
    v43 = 9223372036854775809;
    v44 = &g_410eb4;
    v45 = &g_1;
    v46 = 0;
    v47 = 0;
    v48 = 0x11000000110000;
    v49 = 0;
    v50 = 769;
    v131 = clap_builder::builder::command::Command::arg(&v82, &v0);
    v89 = 0;
    v91 = 0;
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
    v82 = 0;
    v83 = 0;
    v84 = 0;
    v85 = 0;
    v86 = &g_1;
    v87 = 0;
    v88 = &g_1;
    v90 = &g_1;
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
    v115 = 0;
    v116 = 0x8000000000000000;
    v117 = 0x8000000000000000;
    v119 = 9223372036854775809;
    v120 = &g_419709;
    v121 = &g_11;
    v122 = 0;
    v124 = 0;
    v125 = 4785074604081264;
    v127 = 0;
    v128 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v203 = v1;
    v204 = v2;
    *((v203 + v204 + &g_1c as &u8) as &i128) = 144138819370042943643791724450715476068;
    *((v203 + v204 + 16) as &i128) = 134846209510717438133290311790983931234;
    *((v203 + v204) as &i128) = 43129478121870355858777226610912552307;
    *((v203 + v204 + 48) as &i64) = 2986851316139455585;
    v2 = v204 + &g_31 as &u8;
    v53 = *((&v0 as &char + 8) as &i128);
    if v116 != 0x8000000000000000 {
        v0 = v53;
    }
    v116 = v0;
    memcpy(&v0, &v82, 588);
    v51 = *((&v82 as &char + 589) as &i16);
    v52 = *((&v82 as &char + 591) as &i8);
    v50 = &g_1;
    v82 = clap_builder::builder::command::Command::arg(&v131, &v0);
    v141 = 0;
    v143 = 0;
    v145 = 0;
    v147 = 0;
    v149 = 0;
    v151 = 0;
    v153 = 0;
    v155 = 0;
    v157 = 0;
    v159 = 0;
    v161 = 0;
    v163 = 0;
    v165 = 0;
    v131 = struct24 {
        field_80: 0
        field_88: <UNKNOWN>
        field_96: &g_1
    };
    v134 = 0;
    v135 = &g_1;
    v136 = 0;
    v137 = 0;
    v138 = &g_1;
    v139 = 0;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v148 = &g_1;
    v150 = &g_1;
    v152 = &g_1;
    v154 = &g_1;
    v156 = &g_1;
    v158 = &g_1;
    v160 = &g_1;
    v162 = &g_1;
    v164 = &g_1;
    v166 = &g_1;
    v167 = 0;
    v168 = 0x8000000000000000;
    v169 = 0x8000000000000000;
    v170 = 9223372036854775809;
    v171 = &g_419753;
    v172 = 12;
    v173 = &g_419753;
    v174 = 12;
    v175 = 0;
    v176 = 0xd09000000800011000000110000;
    v6 = &g_410e14;
    v7 = &g_1;
    v3 = 0x8000000000000000;
    v4 = v81;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v8 = 0;
    v53 = 0;
    v54 = &g_1;
    v55 = 0;
    v53 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v205 = v54;
    v206 = *((&v53 as &char + 16) as &i64);
    *((v205 + v206 + &g_1c as &u8) as &i128) = 156103574818592190745719480430111452777;
    *((v205 + v206 + 16) as &i128) = 154737960314085640834874953658765633056;
    *((v205 + v206) as &i128) = 153398265509889507202008324324279153264;
    *((v205 + v206 + 48) as &i8) = 116;
    v55 = v206 + &g_31 as &u8;
    v75 = *((&v53 as &char + 8) as &i128);
    if v3 != 0x8000000000000000 {
        v53 = v75;
    }
    v3 = v53;
    v4 = v53;
    v182 = v0;
    v183 = v2;
    v184 = v3;
    v185 = v4;
    v186 = v6;
    v187 = v8;
    v6 = &g_419790;
    v7 = 11;
    v3 = 0x8000000000000000;
    v4 = v81;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v8 = 0;
    v53 = 0;
    v54 = &g_1;
    v55 = 0;
    v53 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 84);
    v207 = v54;
    v208 = *((&v53 as &char + 16) as &i64);
    *((v207 + v208 + 64) as &i128) = 148076282289901935877278603794654916128;
    *((v207 + v208 + 48) as &i128) = 146792081478958009920737884873908449138;
    *((v207 + v208 + &g_1c as &u8) as &i128) = 152057070576133945710449369496914387232;
    *((v207 + v208 + 16) as &i128) = 154696218877436838154349457434987161120;
    *((v207 + v208) as &i128) = 153398265509889507202008324324279153264;
    *((v207 + v208 + 80) as &i32) = 695430514;
    v55 = v208 + 84;
    v75 = *((&v53 as &char + 8) as &i128);
    if v3 != 0x8000000000000000 {
        v53 = v75;
    }
    v3 = v53;
    v4 = v53;
    v188 = v0;
    v189 = v2;
    v190 = v3;
    v191 = v4;
    v192 = v6;
    v193 = v8;
    v6 = &g_410ec4;
    v7 = &g_1;
    v3 = 0x8000000000000000;
    v4 = v81;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v8 = 0;
    v53 = 0;
    v54 = &g_1;
    v55 = 0;
    v53 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1c);
    v209 = v54;
    v210 = *((&v53 as &char + 16) as &i64);
    *((v209 + v210 + 16) as &i128) = 149478223809800605689357920591852760946;
    *((v209 + v210) as &i128) = 152057070577371896793281331649434974309;
    *((v209 + v210 + &g_1c as &u8) as &i16) = 29813;
    v55 = v210 + &g_1c as &u8;
    v75 = *((&v53 as &char + 8) as &i128);
    if v3 != 0x8000000000000000 {
        v53 = v75;
    }
    v3 = v53;
    v4 = v53;
    v75 = v0;
    v76 = v2;
    v77 = v3;
    v78 = v4;
    v79 = v6;
    v80 = v8;
    v6 = &g_419811;
    v7 = 11;
    v3 = 0x8000000000000000;
    v4 = v81;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v8 = 0;
    v53 = 0;
    v54 = &g_1;
    v55 = 0;
    v53 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 102);
    v211 = v54;
    v212 = *((&v53 as &char + 16) as &i64);
    *((v211 + v212 + 80) as &i128) = 154696299690168604813523547338729090671;
    *((v211 + v212 + 64) as &i128) = 43139741492392431017970435833941030505;
    *((v211 + v212 + 48) as &i128) = 156108456754389149230208823485222906224;
    *((v211 + v212 + &g_1c as &u8) as &i128) = 43139862373297391805841500180871935093;
    *((v211 + v212 + 16) as &i128) = 149478223809800605689357920591852760946;
    *((v211 + v212) as &i128) = 152057070577371896793281331649434974309;
    *((v211 + v212 + 94) as &i64) = 2986851316139455585;
    v55 = v212 + 102;
    v194 = *((&v53 as &char + 8) as &i128);
    if v3 != 0x8000000000000000 {
        v53 = v194;
    }
    v3 = v53;
    v4 = v53;
    v69 = v0;
    v70 = v2;
    v71 = v3;
    v72 = v4;
    v73 = v6;
    v74 = v8;
    v213 = v183;
    v53 = v182;
    v55 = v213;
    v56 = v185;
    v57 = v186;
    v58 = v187;
    v63 = v193;
    v62 = v192;
    v61 = v191;
    v60 = v189;
    v59 = v188;
    v68 = v80;
    v67 = v79;
    v66 = v78;
    v65 = v76;
    v64 = v75;
    memcpy(&v0, &v53, 288);
    v26 = 0;
    v27 = &g_1;
    v75 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v131, &v75);
    v131 = 0;
    v132 = &g_1;
    v133 = 0;
    v131 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v214 = v132;
    v215 = v133;
    *((v214 + v215) as &i128) = 43129478121870355858777226610912552307;
    *((v214 + v215 + 16) as &i64) = 8245925399899956578;
    v133 = v215 + &g_11 as &u8;
    v216 = v131;
    v53 = *((&v131 as &char + 8) as &i128);
    if v216 != 0x8000000000000000 {
        v131 = v53;
    }
    v40 = v216;
    v41 = v131;
    memcpy(&v131, &v0, 592);
    v217 = v141;
    if v217 == v139 {
        v139 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v218 = v140;
    v219 = v217 * 16;
    *((v218 + v219) as &&i64) = &g_419709;
    *((v218 + v219 + &g_1 as &u8) as &&i64) = &g_11;
    v141 = v217 + &g_1 as &u8;
    memcpy(&v0, &v131, 592);
    clap_builder::builder::command::Command::arg(a0, &v82, &v0);
    return a0;
}
