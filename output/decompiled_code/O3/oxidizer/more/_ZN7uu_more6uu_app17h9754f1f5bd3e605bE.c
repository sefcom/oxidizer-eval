fn uu_more::uu_app(a0: u32) -> u64 {
    let v0: struct16;  // [bp-0xae8]
    let v1: i128;  // [sp-0xad8], Other Possible Types: struct712, Enum, struct24
    let v2: i64;  // [sp-0xad0]
    let v3: i64;  // [sp-0xac8]
    let v4: i128;  // [sp-0xac0]
    let v5: i64;  // [sp-0xab0]
    let v6: i64;  // [sp-0xaa0]
    let v7: i128;  // [sp-0xa98]
    let v8: i64;  // [sp-0xa88]
    let v9: i128;  // [sp-0xa80]
    let v10: i64;  // [sp-0xa70]
    let v11: i64;  // [sp-0xa68]
    let v12: i128;  // [sp-0xa60]
    let v13: i64;  // [sp-0xa50]
    let v14: i128;  // [sp-0xa48]
    let v15: i64;  // [sp-0xa38]
    let v16: i128;  // [sp-0xa30]
    let v17: i64;  // [sp-0xa20]
    let v18: i128;  // [sp-0xa18]
    let v19: i64;  // [sp-0xa08]
    let v20: i128;  // [sp-0xa00]
    let v21: i64;  // [sp-0x9f0]
    let v22: i128;  // [sp-0x9e8]
    let v23: i64;  // [sp-0x9d8]
    let v24: i128;  // [sp-0x9d0]
    let v25: i64;  // [sp-0x9c0]
    let v26: i128;  // [sp-0x9b8]
    let v27: i64;  // [sp-0x9a8]
    let v28: i128;  // [sp-0x9a0]
    let v29: i64;  // [sp-0x990]
    let v30: i128;  // [sp-0x988]
    let v31: i64;  // [sp-0x978]
    let v32: i128;  // [sp-0x970]
    let v33: i64;  // [sp-0x960]
    let v34: i128;  // [sp-0x958]
    let v35: i64;  // [sp-0x948]
    let v36: i128;  // [sp-0x940]
    let v37: i64;  // [sp-0x930]
    let v38: i64;  // [sp-0x928]
    let v39: i64;  // [sp-0x920]
    let v40: i128;  // [sp-0x918]
    let v41: i64;  // [sp-0x908]
    let v42: i128;  // [sp-0x900]
    let v43: i128;  // [sp-0x8f0]
    let v44: i64;  // [sp-0x8e0]
    let v45: i128;  // [sp-0x8d8]
    let v46: i64;  // [sp-0x8c8]
    let v47: i64;  // [sp-0x8c0]
    let v48: i64;  // [sp-0x8b8]
    let v49: i64;  // [sp-0x8b0]
    let v50: i64;  // [sp-0x8a8]
    let v51: i64;  // [sp-0x898]
    let v52: i32;  // [sp-0x890]
    let v53: i16;  // [sp-0x88c]
    let v54: i8;  // [bp-0x889]
    let v55: i64;  // [sp-0x878]
    let v56: i64;  // [sp-0x870]
    let v57: i128;  // [sp-0x868]
    let v58: i128;  // [sp-0x858]
    let v59: i128;  // [sp-0x848]
    let v60: i128;  // [bp-0x838]
    let v61: i128;  // [sp-0x82c]
    let v62: i64;  // [sp-0x81c]
    let v63: i32;  // [sp-0x814]
    let v64: i64;  // [sp-0x808], Other Possible Types: struct712, struct24, Enum, struct592
    let v65: i64;  // [sp-0x800]
    let v66: i64;  // [sp-0x7f8]
    let v67: i64;  // [sp-0x7f0]
    let v68: i64;  // [sp-0x7e8]
    let v69: i64;  // [sp-0x7e0]
    let v70: i64;  // [sp-0x7d0]
    let v71: i128;  // [sp-0x7c8]
    let v72: i64;  // [sp-0x7b8]
    let v73: i128;  // [sp-0x7b0]
    let v74: i64;  // [sp-0x7a0]
    let v75: i64;  // [sp-0x798]
    let v76: i128;  // [sp-0x790]
    let v77: i64;  // [sp-0x780]
    let v78: i128;  // [sp-0x778]
    let v79: i64;  // [sp-0x768]
    let v80: i128;  // [sp-0x760]
    let v81: i64;  // [sp-0x750]
    let v82: i128;  // [sp-0x748]
    let v83: i64;  // [sp-0x738]
    let v84: i128;  // [sp-0x730]
    let v85: i64;  // [sp-0x720]
    let v86: i128;  // [sp-0x718]
    let v87: i64;  // [sp-0x708]
    let v88: i128;  // [sp-0x700]
    let v89: i64;  // [sp-0x6f0]
    let v90: i128;  // [sp-0x6e8]
    let v91: i64;  // [sp-0x6d8]
    let v92: i128;  // [sp-0x6d0]
    let v93: i64;  // [sp-0x6c0]
    let v94: i128;  // [sp-0x6b8]
    let v95: i64;  // [sp-0x6a8]
    let v96: i128;  // [sp-0x6a0]
    let v97: i64;  // [sp-0x690]
    let v98: i128;  // [sp-0x688]
    let v99: i64;  // [sp-0x678]
    let v100: i128;  // [sp-0x670]
    let v101: i64;  // [sp-0x660]
    let v102: i64;  // [sp-0x658]
    let v103: i64;  // [sp-0x650]
    let v104: i128;  // [sp-0x648]
    let v105: i64;  // [sp-0x638]
    let v106: i128;  // [sp-0x630]
    let v107: i128;  // [sp-0x620]
    let v108: i64;  // [sp-0x610]
    let v109: i128;  // [sp-0x608]
    let v110: i64;  // [sp-0x5f8]
    let v111: i64;  // [sp-0x5f0]
    let v112: i64;  // [sp-0x5e8]
    let v113: i64;  // [sp-0x5e0]
    let v114: i64;  // [sp-0x5d8]
    let v115: i64;  // [sp-0x5c8]
    let v116: i32;  // [sp-0x5c0]
    let v117: i16;  // [sp-0x5bc]
    let v118: i192;  // [sp-0x538], Other Possible Types: Enum, struct592, struct24
    let v119: i64;  // [sp-0x530]
    let v120: i64;  // [sp-0x528]
    let v121: i64;  // [sp-0x520]
    let v122: i64;  // [sp-0x518]
    let v123: i64;  // [sp-0x510]
    let v124: i64;  // [sp-0x500]
    let v125: i64;  // [sp-0x4e8]
    let v126: i64;  // [sp-0x4d0]
    let v127: i64;  // [sp-0x4c8]
    let v128: i128;  // [sp-0x4c0]
    let v129: i64;  // [sp-0x4b0]
    let v130: i128;  // [sp-0x4a8]
    let v131: i64;  // [sp-0x498]
    let v132: i128;  // [sp-0x490]
    let v133: i64;  // [sp-0x480]
    let v134: i128;  // [sp-0x478]
    let v135: i64;  // [sp-0x468]
    let v136: i128;  // [sp-0x460]
    let v137: i64;  // [sp-0x450]
    let v138: i128;  // [sp-0x448]
    let v139: i64;  // [sp-0x438]
    let v140: i128;  // [sp-0x430]
    let v141: i64;  // [sp-0x420]
    let v142: i128;  // [sp-0x418]
    let v143: i64;  // [sp-0x408]
    let v144: i128;  // [sp-0x400]
    let v145: i64;  // [sp-0x3f0]
    let v146: i128;  // [sp-0x3e8]
    let v147: i64;  // [sp-0x3d8]
    let v148: i128;  // [sp-0x3d0]
    let v149: i64;  // [sp-0x3c0]
    let v150: i128;  // [sp-0x3b8]
    let v151: i64;  // [sp-0x3a8]
    let v152: i128;  // [sp-0x3a0]
    let v153: i64;  // [sp-0x390]
    let v154: i64;  // [sp-0x388]
    let v155: i64;  // [sp-0x380]
    let v156: i128;  // [sp-0x378]
    let v157: i64;  // [sp-0x368]
    let v158: i64;  // [sp-0x340]
    let v159: i64;  // [sp-0x328]
    let v160: i64;  // [sp-0x320]
    let v161: i64;  // [sp-0x318]
    let v162: i64;  // [sp-0x310]
    let v163: i64;  // [sp-0x308]
    let v164: i128;  // [bp-0x2f8]
    let v165: i8;  // [sp-0x2ec]
    let v166: i8;  // [bp-0x2eb]
    let v167: i16;  // [bp-0x2ea]
    let v168: i8;  // [sp-0x2e9]
    let v169: i8;  // [bp-0x2d8]
    let v170: i8;  // [bp-0x2c8]
    let v171: i8;  // [bp-0x2b8]
    let v172: i8;  // [bp-0x2a8]
    let v173: i8;  // [bp-0x298]
    let v174: i128;  // [bp-0x288], Other Possible Types: struct24
    let v175: i64;  // [bp-0x278]
    let v176: i64;  // [sp-0x270]
    let v178: i64;  // rbx
    let v179: i64;  // rax
    let v180: i64;  // rcx
    let v181: i64;  // rax
    let v182: i64;  // rcx
    let v183: i64;  // rax
    let v184: i64;  // rcx
    let v185: i64;  // rax
    let v186: i64;  // rcx
    let v188: i64;  // rax
    let v189: i64;  // rcx
    let v190: i64;  // rbx
    let v192: i64;  // rax
    let v193: i64;  // rcx
    let v194: i64;  // r14
    let v196: i64;  // rax
    let v197: i64;  // rcx
    let v198: i64;  // r14
    let v199: i64;  // rcx
    let v200: i64;  // rdx
    let v201: i64;  // rbx
    let v202: i64;  // rax
    let v203: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v1 = clap_builder::builder::command::Command::new(g_51dd40, g_51dd48);
    v64 = clap_builder::builder::command::Command::about(&v1, &g_41efb0, &g_20);
    v118 = uucore::format_usage(&g_41efd3, &g_11);
    v178 = v118;
    if v178 != 0x8000000000000000 {
        v1 = *((&v118 as &char + 8) as &i128);
    }
    v105 = v178;
    v106 = v1;
    memcpy(&v1, &v64, 608);
    v57 = *((&v64 as &char + 624) as &i128);
    v58 = *((&v64 as &char + 640) as &i128);
    v59 = *((&v64 as &char + 656) as &i128);
    v60 = *((&v64 as &char + 672) as &i128);
    v61 = *((&v64 as &char + 684) as &i128);
    v55 = &g_41efe7;
    v56 = &g_1;
    v62 = 549755814016 | *((&v64 as &char + 700) as &i64);
    v63 = *((&v64 as &char + 708) as &i32);
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v94 = 0;
    v96 = 0;
    v98 = 0;
    v100 = 0;
    v64 = 0;
    v66 = 0;
    v69 = 0;
    v70 = 0;
    v72 = &g_1;
    v74 = 0;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v99 = &g_1;
    v101 = &g_1;
    v102 = 0;
    v103 = 0x8000000000000000;
    v105 = 0x8000000000000000;
    v108 = 9223372036854775809;
    v110 = &g_41ef99;
    v111 = &g_1;
    v112 = &g_41ef99;
    v113 = &g_1;
    v114 = 0;
    v115 = 4785074604081251;
    v116 = 0;
    v117 = 3337;
    v118 = 0;
    v119 = &g_1;
    v120 = 0;
    v118 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v179 = v119;
    v180 = v120;
    *((v179 + v180 + &g_11 as &u8) as &i128) = 153382688278245766998312304577000268576;
    *((v179 + v180 + &g_1 as &u8) as &i128) = 43056764311203280527987512885839426409;
    *((v179 + v180) as &i128) = 133089854094187925999525755925395697476;
    v120 = v180 + &g_20 as &u8;
    v174 = *((&v118 as &char + 8) as &i128);
    if v103 != 0x8000000000000000 {
        v118 = v174;
    }
    v103 = v118;
    memcpy(&v118, &v64, 588);
    v166 = *((&v64 as &char + 589) as &i16);
    v168 = *((&v64 as &char + 591) as &i8);
    v165 = &g_1;
    v64 = clap_builder::builder::command::Command::arg(&v1, &v118);
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v1 = 0;
    v3 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v44 = 9223372036854775809;
    v46 = &g_41efa3;
    v47 = &g_1;
    v48 = &g_41efa3;
    v49 = &g_1;
    v50 = 0;
    v51 = 4785074604081252;
    v52 = 0;
    v53 = 3337;
    v118 = 0;
    v119 = &g_1;
    v120 = 0;
    v118 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v181 = v119;
    v182 = v120;
    *((v181 + v182 + &g_1 as &u8) as &i128) = 43072341857570296665662901215895315828;
    *((v181 + v182) as &i128) = 153434504392807104273254673731015633220;
    *((v181 + v182 + &g_20 as &u8) as &i32) = 1819043170;
    v120 = v182 + &g_20 as &u8;
    v174 = *((&v118 as &char + 8) as &i128);
    if v39 != 0x8000000000000000 {
        v118 = v174;
    }
    v39 = v118;
    memcpy(&v118, &v1, 588);
    v166 = v53;
    v168 = v54;
    v165 = &g_1;
    v1 = clap_builder::builder::command::Command::arg(&v64, &v118);
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v94 = 0;
    v96 = 0;
    v98 = 0;
    v100 = 0;
    v64 = 0;
    v66 = 0;
    v69 = 0;
    v70 = 0;
    v72 = &g_1;
    v74 = 0;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v99 = &g_1;
    v101 = &g_1;
    v102 = 0;
    v103 = 0x8000000000000000;
    v105 = 0x8000000000000000;
    v108 = 9223372036854775809;
    v110 = &g_41ef8e;
    v111 = &g_1;
    v112 = &g_41ef8e;
    v113 = &g_1;
    v114 = 0;
    v115 = 4785074604081264;
    v116 = 0;
    v117 = 3337;
    v118 = 0;
    v119 = &g_1;
    v120 = 0;
    v118 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v183 = v119;
    v184 = v120;
    *((v183 + v184 + &g_11 as &u8) as &i128) = 154815580857961501453997804754385006177;
    *((v183 + v184 + &g_1 as &u8) as &i128) = 43056764311195937247981387346685814124;
    *((v183 + v184) as &i128) = 131760626098403010126621948865115352900;
    v120 = v184 + &g_20 as &u8;
    v174 = *((&v118 as &char + 8) as &i128);
    if v103 != 0x8000000000000000 {
        v118 = v174;
    }
    v103 = v118;
    memcpy(&v118, &v64, 588);
    v166 = *((&v64 as &char + 589) as &i16);
    v168 = *((&v64 as &char + 591) as &i8);
    v165 = &g_1;
    v64 = clap_builder::builder::command::Command::arg(&v1, &v118);
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v1 = 0;
    v3 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v44 = 9223372036854775809;
    v46 = &g_41efa9;
    v47 = &g_1;
    v48 = &g_41efa9;
    v49 = &g_1;
    v50 = 0;
    v51 = 4785074604081267;
    v52 = 0;
    v53 = 3337;
    v118 = 0;
    v119 = &g_1;
    v120 = 0;
    v118 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v185 = v119;
    v186 = v120;
    *((v185 + v186 + &g_1 as &u8) as &i128) = 154763732389512055220081640371173220896;
    *((v185 + v186) as &i128) = 134815075619862317189711150369677341011;
    *((v185 + v186 + &g_11 as &u8) as &i64) = 7308901430368431721;
    v120 = v186 + &g_20 as &u8;
    v174 = *((&v118 as &char + 8) as &i128);
    if v39 != 0x8000000000000000 {
        v118 = v174;
    }
    v39 = v118;
    memcpy(&v118, &v1, 588);
    v166 = *((&v1 as &char + 589) as &i16);
    v168 = *((&v1 as &char + 591) as &i8);
    v165 = &g_1;
    v1 = clap_builder::builder::command::Command::arg(&v64, &v118);
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v136 = 0;
    v138 = 0;
    v140 = 0;
    v142 = 0;
    v144 = 0;
    v146 = 0;
    v148 = 0;
    v150 = 0;
    v152 = 0;
    v118 = 0;
    v120 = 0;
    v123 = 0;
    v124 = 0;
    v125 = &g_1;
    v126 = 0;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v139 = &g_1;
    v141 = &g_1;
    v143 = &g_1;
    v145 = &g_1;
    v147 = &g_1;
    v149 = &g_1;
    v151 = &g_1;
    v153 = &g_1;
    v154 = 0;
    v155 = 0x8000000000000000;
    v157 = 0x8000000000000000;
    v158 = 9223372036854775809;
    v159 = &g_41f091;
    v160 = &g_1;
    v161 = &g_41f091;
    v162 = &g_1;
    v163 = 0;
    v164 = 263829781172574035947870796906613;
    v64 = clap_builder::builder::command::Command::arg(&v1, &v118);
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v34 = 0;
    v36 = 0;
    *(&v1.field_80 as &struct24) = struct24 {
        field_344: 0
        field_352: <UNKNOWN>
        field_360: 0
    };
    v4 = v172;
    v5 = 0;
    v6 = 0;
    v7 = v171;
    v8 = &g_1;
    v9 = v170;
    v10 = 0;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v32 = 0;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v40 = v169;
    v41 = 0x8000000000000000;
    v43 = v175;
    v42 = v174;
    v44 = 9223372036854775809;
    v45 = v173;
    v46 = &g_41ef87;
    v47 = &g_1;
    v48 = &g_41ef87;
    v49 = &g_1;
    v50 = 0;
    v51 = 264384378310690395145089472004176;
    v0 = struct16 {
        field_0: &g_41ef87
        field_8: &g_1
    };
    v118 = clap_builder::builder::arg::Arg::value_names(&v1, &v0);
    v1 = 0;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v188 = v2;
    v189 = v3;
    *((v188 + v189 + &g_11 as &u8) as &i128) = 138756109429045059461937194606086090095;
    *((v188 + v189 + &g_1 as &u8) as &i128) = 154794730223961856592976545154786553449;
    *((v188 + v189) as &i128) = 137436895791389758532596894485118675268;
    v3 = v189 + &g_20 as &u8;
    v190 = v1;
    v174 = *((&v1 as &char + 8) as &i128);
    if v190 != 0x8000000000000000 {
        v1 = v174;
    }
    v155 = v190;
    v156 = v1;
    memcpy(&v174, &v118, 592);
    v1 = clap_builder::builder::command::Command::arg(&v64, &v174);
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v94 = 0;
    v98 = 0;
    v100 = 0;
    *(&v64.field_80 as &struct24) = struct24 {
        field_344: 0
        field_352: <UNKNOWN>
        field_360: &g_1
    };
    v67 = &g_1;
    v68 = &g_1;
    v69 = 0;
    v70 = 0;
    v71 = v172;
    v72 = &g_1;
    v73 = v171;
    v74 = 0;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v95 = &g_1;
    v96 = 0;
    v97 = &g_1;
    v99 = &g_1;
    v101 = &g_1;
    v102 = 0;
    v103 = 0x8000000000000000;
    v104 = v170;
    v105 = 0x8000000000000000;
    v107 = v175;
    v106 = v174;
    v108 = 9223372036854775809;
    v109 = v169;
    v110 = &g_41ef7e;
    v111 = &g_1;
    v112 = &g_41ef7e;
    v113 = &g_1;
    v114 = 0;
    v115 = 4785074604081222;
    v116 = 0;
    v117 = 3337;
    v0 = struct16 {
        field_0: &g_41ef78
        field_8: &g_1
    };
    v118 = clap_builder::builder::arg::Arg::value_names(&v64, &v0);
    *(__rust_alloc(&g_1, &g_1) as &void*) = core::num::<impl core::str::traits::FromStr for usize>::from_str;
    *(&v174.field_80 as &struct24) = struct24 {
        field_0: &g_1
        field_8: v191
        field_16: &g_517d90
    };
    v64 = clap_builder::builder::arg::Arg::value_parser(&v118, &v174);
    v118 = 0;
    v119 = &g_1;
    v120 = 0;
    v118 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v192 = v119;
    v193 = v120;
    *((v192 + v193 + &g_1 as &u8) as &i128) = 134825318448401088689954297476440551017;
    *((v192 + v193) as &i128) = 137436895791389758532596894485118675268;
    *((v192 + v193 + &g_11 as &u8) as &i64) = 8243102915232669797;
    v120 = v193 + &g_20 as &u8;
    v194 = v118;
    v174 = *((&v118 as &char + 8) as &i128);
    if v194 != 0x8000000000000000 {
        v118 = v174;
    }
    v103 = v194;
    v104 = v118;
    memcpy(&v118, &v64, 592);
    v64 = clap_builder::builder::command::Command::arg(&v1, &v118);
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v34 = 0;
    v36 = 0;
    *(&v1.field_80 as &struct24) = struct24 {
        field_344: 0
        field_352: &g_1
        field_360: 0
    };
    v4 = v172;
    v5 = 0;
    v6 = 0;
    v7 = v171;
    v8 = &g_1;
    v9 = v170;
    v10 = 0;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v32 = 0;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v40 = v169;
    v41 = 0x8000000000000000;
    v43 = *(&v174.field_96 as &i128);
    v42 = v174;
    v44 = 9223372036854775809;
    v45 = v173;
    v46 = &g_41ef73;
    v47 = &g_1;
    v48 = &g_41ef73;
    v49 = &g_1;
    v50 = 0;
    v51 = 4785074604081262;
    v52 = 0;
    v53 = 3337;
    v0 = struct16 {
        field_0: &g_41ef78
        field_8: &g_1
    };
    v118 = clap_builder::builder::arg::Arg::value_names(&v1, &v0);
    v120 = &g_1;
    v121 = &g_1;
    v122 = &g_1;
    memcpy(&v1, &v118, 592);
    v174 = 0;
    v175 = 0;
    v176 = 65535;
    v118 = clap_builder::builder::arg::Arg::value_parser(&v1, &v174);
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v196 = v2;
    v197 = v3;
    *((v196 + v197 + &g_1 as &u8) as &i128) = 135749648168031622318133362104118502766;
    *((v196 + v197) as &i128) = 140130364770909883283586659236805175380;
    *((v196 + v197 + &g_11 as &u8) as &i32) = 1819047270;
    v3 = v197 + &g_20 as &u8;
    v198 = v1;
    v174 = *((&v1 as &char + 8) as &i128);
    if v198 != 0x8000000000000000 {
        v1 = v174;
    }
    v155 = v198;
    v156 = v1;
    memcpy(&v174, &v118, 592);
    v1 = clap_builder::builder::command::Command::arg(&v64, &v174);
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v94 = 0;
    v96 = 0;
    v98 = 0;
    v100 = 0;
    v64 = struct24 {
        field_80: 0
        field_88: <UNKNOWN>
        field_96: &g_1
    };
    v67 = &g_1;
    v68 = &g_1;
    v69 = 0;
    v70 = 0;
    v72 = &g_1;
    v74 = 0;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v91 = &g_1;
    v93 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v99 = &g_1;
    v101 = &g_1;
    v102 = 0;
    v103 = 0x8000000000000000;
    v105 = 0x8000000000000000;
    v108 = 9223372036854775809;
    v110 = &g_41ef78;
    v111 = &g_1;
    v112 = &g_41ef78;
    v113 = &g_1;
    v114 = 0;
    v115 = 0x11000000110000;
    v116 = 0;
    v117 = 3337;
    v174 = 0;
    v175 = 0;
    v176 = 65535;
    v118 = clap_builder::builder::arg::Arg::value_parser(&v64, &v174);
    v64 = 0;
    v65 = &g_1;
    v66 = 0;
    v64 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1);
    v199 = v65;
    v200 = v66;
    *((v199 + v200 + &g_1 as &u8) as &i64) = 8315173686075010336;
    *((v199 + v200) as &i64) = 2338319423303934291;
    v66 = v200 + &g_1 as &u8;
    v201 = v64;
    v174 = *((&v64 as &char + 8) as &i128);
    if v201 != 0x8000000000000000 {
        v64 = v174;
    }
    v155 = v201;
    v156 = v64;
    memcpy(&v174, &v118, 592);
    v64 = clap_builder::builder::command::Command::arg(&v1, &v174);
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v1 = 0;
    v3 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v44 = 9223372036854775809;
    v46 = &g_41f109;
    v47 = &g_1;
    v48 = 0;
    v50 = 0;
    v51 = 0xd01000000000011000000110000;
    v118 = 0;
    v119 = &g_1;
    v120 = 0;
    v118 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v202 = v119;
    v203 = v120;
    *((v202 + v203 + &g_1 as &u8) as &i128) = 133428509939176046227501799553637312870;
    *((v202 + v203) as &i128) = 134814933379305339517860620848155877712;
    v120 = v203 + &g_11 as &u8;
    v174 = *((&v118 as &char + 8) as &i128);
    if v39 != 0x8000000000000000 {
        v118 = v174;
    }
    v39 = v118;
    memcpy(&v118, &v1, 589);
    v166 = &g_1;
    v167 = 0;
    clap_builder::builder::command::Command::arg(a0, &v64, &v118);
    return a0;
}
