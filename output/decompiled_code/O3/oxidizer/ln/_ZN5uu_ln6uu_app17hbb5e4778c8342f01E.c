fn uu_ln::uu_app(a0: u32) -> u64 {
    let v0: i64;  // [bp-0xa88], Other Possible Types: struct712, Enum
    let v1: i64;  // [sp-0xa80]
    let v2: i64;  // [sp-0xa78]
    let v3: i64;  // [sp-0xa70]
    let v4: i64;  // [sp-0xa68]
    let v5: i64;  // [sp-0xa60]
    let v6: i64;  // [sp-0xa50]
    let v7: i64;  // [sp-0xa38]
    let v8: i64;  // [sp-0xa20]
    let v9: i64;  // [sp-0xa18]
    let v10: i128;  // [sp-0xa10]
    let v11: i64;  // [sp-0xa00]
    let v12: i128;  // [sp-0x9f8]
    let v13: i64;  // [sp-0x9e8]
    let v14: i128;  // [sp-0x9e0]
    let v15: i64;  // [sp-0x9d0]
    let v16: i128;  // [sp-0x9c8]
    let v17: i64;  // [sp-0x9b8]
    let v18: i128;  // [sp-0x9b0]
    let v19: i64;  // [sp-0x9a0]
    let v20: i128;  // [sp-0x998]
    let v21: i64;  // [sp-0x988]
    let v22: i128;  // [sp-0x980]
    let v23: i64;  // [sp-0x970]
    let v24: i128;  // [sp-0x968]
    let v25: i64;  // [sp-0x958]
    let v26: i128;  // [sp-0x950]
    let v27: i64;  // [sp-0x940]
    let v28: i128;  // [bp-0x938]
    let v29: i128;  // [bp-0x930]
    let v30: i64;  // [sp-0x928]
    let v31: i128;  // [bp-0x920]
    let v32: i64;  // [sp-0x910]
    let v33: i128;  // [sp-0x908]
    let v34: i64;  // [sp-0x8f8]
    let v35: i128;  // [sp-0x8f0]
    let v36: i64;  // [sp-0x8e0]
    let v37: i64;  // [sp-0x8d8]
    let v38: i192;  // [sp-0x8d0]
    let v39: i128;  // [sp-0x8c8]
    let v40: i64;  // [sp-0x8b8]
    let v41: i128;  // [sp-0x8b0]
    let v42: i128;  // [sp-0x8a0]
    let v43: i64;  // [sp-0x890]
    let v44: i128;  // [sp-0x888]
    let v45: i64;  // [sp-0x878]
    let v46: i64;  // [sp-0x870]
    let v47: i64;  // [sp-0x868]
    let v48: i64;  // [sp-0x860]
    let v49: i64;  // [sp-0x858]
    let v50: i128;  // [sp-0x848]
    let v51: i32;  // [sp-0x840]
    let v52: i16;  // [bp-0x83c]
    let v53: i8;  // [sp-0x83b]
    let v54: i16;  // [sp-0x83a]
    let v55: i64;  // [sp-0x7cc]
    let v56: i32;  // [sp-0x7c4]
    let v57: i64;  // [sp-0x7b8], Other Possible Types: Enum, struct24, struct592
    let v58: i64;  // [sp-0x7b0]
    let v59: i64;  // [sp-0x7a8]
    let v60: i64;  // [sp-0x790]
    let v61: i64;  // [sp-0x780]
    let v62: i64;  // [sp-0x768]
    let v63: struct16;  // [sp-0x750], Other Possible Types: i64
    let v64: i64;  // [sp-0x748]
    let v65: i64;  // [bp-0x740]
    let v66: struct16;  // [sp-0x738]
    let v67: i64;  // [sp-0x730]
    let v68: i64;  // [bp-0x728]
    let v69: i64;  // [sp-0x718]
    let v70: i128;  // [sp-0x710]
    let v71: struct16;  // [sp-0x708]
    let v72: i64;  // [sp-0x700]
    let v73: i64;  // [bp-0x6f8]
    let v74: i64;  // [sp-0x6e8]
    let v75: i128;  // [sp-0x6e0]
    let v76: i64;  // [sp-0x6d0]
    let v77: i128;  // [sp-0x6c8]
    let v78: i64;  // [sp-0x6b8]
    let v79: i128;  // [sp-0x6b0]
    let v80: i64;  // [sp-0x6a0]
    let v81: i128;  // [sp-0x698]
    let v82: i64;  // [sp-0x688]
    let v83: i128;  // [sp-0x680]
    let v84: i64;  // [sp-0x670]
    let v85: i128;  // [sp-0x668]
    let v86: i64;  // [sp-0x658]
    let v87: i64;  // [bp-0x650]
    let v88: i64;  // [sp-0x640]
    let v89: i128;  // [sp-0x638]
    let v90: i64;  // [sp-0x628]
    let v91: i128;  // [sp-0x620]
    let v92: i64;  // [sp-0x610]
    let v93: i64;  // [sp-0x608]
    let v94: i64;  // [sp-0x600]
    let v95: i64;  // [sp-0x5e8]
    let v96: i64;  // [sp-0x5c0]
    let v97: i64;  // [sp-0x5a8]
    let v98: i64;  // [sp-0x5a0]
    let v99: i64;  // [sp-0x598]
    let v100: i64;  // [sp-0x590]
    let v101: i64;  // [sp-0x588]
    let v102: i64;  // [sp-0x578]
    let v103: i32;  // [sp-0x570]
    let v104: i8;  // [sp-0x56c]
    let v105: i16;  // [bp-0x56b]
    let v106: i16;  // [bp-0x56a]
    let v107: i8;  // [sp-0x569]
    let v108: i64;  // [sp-0x568], Other Possible Types: struct712, Enum
    let v109: i64;  // [sp-0x558]
    let v110: i64;  // [sp-0x540]
    let v111: i64;  // [sp-0x530]
    let v112: i64;  // [sp-0x518]
    let v113: i64;  // [sp-0x500]
    let v114: i64;  // [sp-0x4f8]
    let v115: i128;  // [sp-0x4f0]
    let v116: i64;  // [sp-0x4e0]
    let v117: i128;  // [sp-0x4d8]
    let v118: i64;  // [sp-0x4c8]
    let v119: i128;  // [sp-0x4c0]
    let v120: i64;  // [sp-0x4b0]
    let v121: i128;  // [sp-0x4a8]
    let v122: i64;  // [sp-0x498]
    let v123: i128;  // [sp-0x490]
    let v124: i64;  // [sp-0x480]
    let v125: i128;  // [sp-0x478]
    let v126: i64;  // [sp-0x468]
    let v127: i128;  // [sp-0x460]
    let v128: i64;  // [sp-0x450]
    let v129: i128;  // [sp-0x448]
    let v130: i64;  // [sp-0x438]
    let v131: i128;  // [sp-0x430]
    let v132: i64;  // [sp-0x420]
    let v133: i128;  // [sp-0x418]
    let v134: i64;  // [sp-0x408]
    let v135: i128;  // [sp-0x400]
    let v136: i64;  // [sp-0x3f0]
    let v137: i128;  // [sp-0x3e8]
    let v138: i64;  // [sp-0x3d8]
    let v139: i128;  // [sp-0x3d0]
    let v140: i64;  // [sp-0x3c0]
    let v141: i64;  // [sp-0x3b8]
    let v142: i64;  // [sp-0x3b0]
    let v143: i64;  // [sp-0x398]
    let v144: i128;  // [sp-0x390]
    let v145: i64;  // [sp-0x370]
    let v146: i64;  // [sp-0x358]
    let v147: i64;  // [sp-0x350]
    let v148: i64;  // [sp-0x348]
    let v149: i64;  // [sp-0x340]
    let v150: i64;  // [sp-0x338]
    let v151: i64;  // [sp-0x328]
    let v152: i32;  // [sp-0x320]
    let v153: i16;  // [sp-0x31c]
    let v154: i64;  // [sp-0x308]
    let v155: i64;  // [sp-0x300]
    let v156: i128;  // [bp-0x298], Other Possible Types: struct32
    let v157: i8;  // [sp-0x4c]
    let v158: i16;  // [sp-0x4b]
    let v159: i8;  // [sp-0x49]
    let v160: i8;  // [bp-0x40]
    let v162: i64;  // rbx
    let v163: i64;  // rax
    let v164: i64;  // rcx
    let v165: i64;  // rax
    let v166: i64;  // rcx
    let v167: i64;  // rax
    let v168: i64;  // rcx
    let v169: i64;  // rax
    let v170: i64;  // rcx
    let v171: i64;  // r14
    let v172: i64;  // rax
    let v173: i64;  // rcx
    let v174: i64;  // rax
    let v175: i64;  // rcx
    let v176: i64;  // rax
    let v177: i64;  // rcx
    let v178: i64;  // rbx
    let v179: i64;  // rax
    let v180: i64;  // rcx
    let v181: i64;  // rcx
    let v182: i64;  // rsi
    let v184: i16;  // bx
    let v186: i64;  // r14
    let v187: i64;  // rax
    let v188: i64;  // rcx
    let v189: i64;  // rax
    let v190: i64;  // rcx
    let v191: i64;  // rax
    let v192: i64;  // rcx
    let v193: i64;  // rbx
    let v194: i64;  // rax
    let v195: i64;  // rcx
    let v196: i64;  // rax
    let v197: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v108 = clap_builder::builder::command::Command::new(g_4f4ae0, g_4f4ae8);
    v154 = &g_41a463;
    v155 = &g_1;
    memcpy(&v0, &v108, 712);
    v108 = clap_builder::builder::command::Command::about(&v0, &g_41a469, &g_11);
    v57 = uucore::format_usage(&g_41a482, 131);
    v162 = v57;
    if v162 != 0x8000000000000000 {
        v0 = *((&v57 as &char + 8) as &i128);
    }
    v143 = v162;
    v144 = v0;
    memcpy(&v0, &v108, 700);
    v55 = 549755814016 | *((&v108 as &char + 700) as &i64);
    v56 = *((&v108 as &char + 708) as &i32);
    v57 = uucore::features::backup_control::arguments::backup();
    v108 = clap_builder::builder::command::Command::arg(&v0, &v57);
    v57 = uucore::features::backup_control::arguments::backup_no_args();
    v0 = clap_builder::builder::command::Command::arg(&v108, &v57);
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v127 = 0;
    v129 = 0;
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v108 = 0;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v112 = &g_1;
    v113 = 0;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v126 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v143 = 0x8000000000000000;
    v145 = 9223372036854775809;
    v146 = &g_41a505;
    v147 = &g_1;
    v148 = &g_41a505;
    v149 = &g_1;
    v150 = 0;
    v151 = 4785074604081254;
    v152 = 0;
    v153 = 3337;
    v57 = 0;
    v58 = &g_1;
    v59 = 0;
    v57 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v163 = v58;
    v164 = v59;
    *((v163 + v164 + &g_1 as &u8) as &i128) = 134814933379316252709937238753615766884;
    *((v163 + v164) as &i128) = 43072341861599646538071184812131837298;
    *((v163 + v164 + &g_11 as &u8) as &i8) = 115;
    v59 = v164 + &g_21 as &u8;
    v156 = *((&v57 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v57 = v156;
    }
    v142 = v57;
    memcpy(&v57, &v108, 588);
    v105 = *((&v108 as &char + 589) as &i16);
    v107 = *((&v108 as &char + 591) as &i8);
    v104 = &g_1;
    v108 = clap_builder::builder::command::Command::arg(&v0, &v57);
    v10 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
    v9 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v37 = 0;
    v38 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v43 = 9223372036854775809;
    v45 = &g_41a52b;
    v46 = &g_1;
    v47 = &g_41a52b;
    v48 = &g_1;
    v49 = 0;
    v50 = 4785074604081257;
    v51 = 0;
    v52 = 3337;
    v57 = 0;
    v58 = &g_1;
    v59 = 0;
    v57 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_30);
    v165 = v58;
    v166 = v59;
    *((v165 + v166 + &g_11 as &u8) as &i128) = 140099211623672235388571598533056274535;
    *((v165 + v166 + &g_1 as &u8) as &i128) = 146762632609881090340799201354775142511;
    *((v165 + v166) as &i128) = 154358921239589741274636348357233046128;
    *((v165 + v166 + 47) as &i32) = 1936026729;
    v59 = v166 + &g_30 as &u8;
    v156 = *((&v57 as &char + 8) as &i128);
    if v38 != 0x8000000000000000 {
        v57 = v156;
    }
    v38 = v57;
    memcpy(&v57, &v0, 588);
    v105 = *((&v0 as &char + 589) as &i16);
    v107 = *((&v0 as &char + 591) as &i8);
    v104 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v108, &v57);
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v127 = 0;
    v129 = 0;
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v108 = 0;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v112 = &g_1;
    v113 = 0;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v126 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v143 = 0x8000000000000000;
    v145 = 9223372036854775809;
    v146 = &g_41a569;
    v147 = &g_1;
    v148 = &g_41a569;
    v149 = &g_1;
    v150 = 0;
    v151 = 4785074604081262;
    v152 = 0;
    v153 = 3337;
    v57 = 0;
    v58 = &g_1;
    v59 = 0;
    v57 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_41);
    v167 = v58;
    v168 = v59;
    *((v167 + v168 + &g_30 as &u8) as &i128) = 133090923041490681025713284218725428335;
    *((v167 + v168 + &g_11 as &u8) as &i128) = 130832767237323722112066900984804567328;
    *((v167 + v168 + &g_1 as &u8) as &i128) = 134814933379313768818814050762812846945;
    *((v167 + v168) as &i128) = 42895131267981289985637207946480153204;
    *((v167 + v168 + 64) as &i64) = 8751179571608777321;
    v59 = v168 + &g_41 as &u8;
    v156 = *((&v57 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v57 = v156;
    }
    v142 = v57;
    memcpy(&v57, &v108, 588);
    v105 = *((&v108 as &char + 589) as &i16);
    v107 = *((&v108 as &char + 591) as &i8);
    v104 = &g_1;
    v108 = clap_builder::builder::command::Command::arg(&v0, &v57);
    v10 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
    v9 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v37 = 0;
    v38 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v43 = 9223372036854775809;
    v45 = &g_41a5bf;
    v46 = &g_1;
    v47 = &g_41a5bf;
    v48 = &g_1;
    v49 = 0;
    v50 = 4785074604081228;
    v51 = 0;
    v52 = 3337;
    v57 = 0;
    v58 = &g_1;
    v59 = 0;
    v57 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 38);
    v169 = v58;
    v170 = v59;
    *((v169 + v170 + &g_1 as &u8) as &i128) = 132140962077877939189104065030923772264;
    *((v169 + v170) as &i128) = 154358940164234114731275091600971951974;
    *((v169 + v170 + &g_11 as &u8) as &i64) = 8316862535934436201;
    v59 = v170 + 38;
    v156 = *((&v57 as &char + 8) as &i128);
    if v38 != 0x8000000000000000 {
        v57 = v156;
    }
    v38 = v57;
    memcpy(&v57, &v0, 592);
    v171 = *((&v57 as &char + 144) as &i64);
    if v171 == *((&v57 as &char + 128) as &i64) {
        v66 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v172 = v67;
    v173 = v171 * &g_1;
    *((v172 + v173) as &&i64) = &g_411bd8;
    *((v172 + v173 + &g_1 as &u8) as &&i64) = &g_1;
    v68 = v171 + &g_1 as &u8;
    memcpy(&v156, &v57, 588);
    v158 = v105;
    v159 = v107;
    v157 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v108, &v156);
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v127 = 0;
    v129 = 0;
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v108 = 0;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v112 = &g_1;
    v113 = 0;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v126 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v143 = 0x8000000000000000;
    v145 = 9223372036854775809;
    v146 = &g_411bd8;
    v147 = &g_1;
    v148 = &g_411bd8;
    v149 = &g_1;
    v150 = 0;
    v151 = 4785074604081232;
    v152 = 0;
    v153 = 3337;
    v57 = 0;
    v58 = &g_1;
    v59 = 0;
    v57 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 42);
    v174 = v58;
    v175 = v59;
    *((v174 + v175 + &g_11 as &u8) as &i128) = 153419034696605553767629096050308096111;
    *((v174 + v175 + &g_1 as &u8) as &i128) = 130832767237341042222420622303781087588;
    *((v174 + v175) as &i128) = 43134588969400923396418785300540252525;
    v59 = v175 + 42;
    v156 = *((&v57 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v57 = v156;
    }
    v142 = v57;
    memcpy(&v57, &v108, 588);
    v105 = *((&v108 as &char + 589) as &i16);
    v107 = *((&v108 as &char + 591) as &i8);
    v104 = &g_1;
    v108 = clap_builder::builder::command::Command::arg(&v0, &v57);
    v10 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
    v9 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v37 = 0;
    v38 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v43 = 9223372036854775809;
    v45 = &g_411c60;
    v46 = &g_1;
    v47 = &g_411c60;
    v48 = &g_1;
    v49 = 0;
    v50 = 4785074604081267;
    v51 = 0;
    v52 = 3337;
    v57 = 0;
    v58 = &g_1;
    v59 = 0;
    v57 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 41);
    v176 = v58;
    v177 = v59;
    *((v176 + v177 + &g_11 as &u8) as &i128) = 153419034696605558655221599126079693921;
    *((v176 + v177 + &g_1 as &u8) as &i128) = 138407942671234849657139292500131015534;
    *((v176 + v177) as &i128) = 140130364531460349822512615732303061357;
    v59 = v177 + 41;
    v156 = *((&v57 as &char + 8) as &i128);
    if v38 != 0x8000000000000000 {
        v57 = v156;
    }
    v38 = v57;
    memcpy(&v57, &v0, 592);
    v178 = v68;
    if v178 == *((&v57 as &char + 128) as &i64) {
        v66 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v179 = v67;
    v180 = v178 * &g_1;
    *((v179 + v180) as &&i64) = &g_411c60;
    *((v179 + v180 + &g_1 as &u8) as &&i64) = &g_1;
    v68 = v178 + &g_1 as &u8;
    memcpy(&v156, &v57, 588);
    v158 = v105;
    v159 = v107;
    v157 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v108, &v156);
    v57 = uucore::features::backup_control::arguments::suffix();
    v108 = clap_builder::builder::command::Command::arg(&v0, &v57);
    v65 = 0;
    v68 = 0;
    v70 = 0;
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
    v57 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = &g_1;
    v63 = 0;
    v64 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
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
    v92 = &g_1;
    v93 = 0;
    v94 = 0x8000000000000000;
    v95 = 0x8000000000000000;
    v96 = 9223372036854775809;
    v97 = &g_411680;
    v98 = &g_1;
    v99 = &g_411680;
    v100 = &g_1;
    v101 = 0;
    v102 = 4785074604081268;
    v103 = 0;
    v104 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_30);
    v181 = v1;
    v182 = v2;
    *((v181 + v182 + &g_11 as &u8) as &i128) = 146762463773409560426593239838341931119;
    *((v181 + v182 + &g_1 as &u8) as &i128) = 154358718257332441303192458431529178179;
    *((v181 + v182) as &i128) = 92143986065001283728158757192141729907;
    *((v181 + v182 + &g_30 as &u8) as &i16) = 29547;
    v2 = v182 + &g_30 as &u8;
    v156 = *((&v0 as &char + 8) as &i128);
    if v94 != 0x8000000000000000 {
        v0 = v156;
    }
    v94 = v0;
    memcpy(&v0, &v57, 360);
    memcpy(&v0, &v87, 221);
    v184 = *((&v105 as &char + 1) as &i16);
    v31 = v87;
    v53 = &g_1;
    v54 = v184;
    v156 = struct32 {
        field_0: &g_41a671
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v57 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v156);
    v31 = v59;
    v29 = v57;
    memcpy(&v57, &v0, 360);
    memcpy(&v87, &v0, 221);
    v87 = v31;
    v105 = &g_1;
    v106 = v184;
    v186 = v65;
    if v186 == v63 {
        v63 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v187 = v64;
    v188 = v186 * &g_1;
    *((v187 + v188) as &&i64) = &g_41a67a;
    *((v187 + v188 + &g_1 as &u8) as &&i64) = &g_11;
    v65 = v186 + &g_1 as &u8;
    memcpy(&v156, &v57, 592);
    v0 = clap_builder::builder::command::Command::arg(&v108, &v156);
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v127 = 0;
    v129 = 0;
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v108 = 0;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v112 = &g_1;
    v113 = 0;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v126 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v143 = 0x8000000000000000;
    v145 = 9223372036854775809;
    v146 = &g_41a67a;
    v147 = &g_11;
    v148 = &g_41a67a;
    v149 = &g_11;
    v150 = 0;
    v151 = 4785074604081236;
    v152 = 0;
    v153 = 3337;
    v57 = 0;
    v58 = &g_1;
    v59 = 0;
    v57 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 39);
    v189 = v58;
    v190 = v59;
    *((v189 + v190 + &g_1 as &u8) as &i128) = 134814933379313768818814050762812846945;
    *((v189 + v190) as &i128) = 42895131267981289985637207946480153204;
    *((v189 + v190 + &g_11 as &u8) as &i64) = 8320788952091009125;
    v59 = v190 + 39;
    v156 = *((&v57 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v57 = v156;
    }
    v142 = v57;
    memcpy(&v57, &v108, 588);
    v105 = *((&v108 as &char + 589) as &i16);
    v107 = *((&v108 as &char + 591) as &i8);
    v104 = &g_1;
    v108 = clap_builder::builder::command::Command::arg(&v0, &v57);
    v10 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
    v9 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v37 = 0;
    v38 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v43 = 9223372036854775809;
    v45 = &g_411be8;
    v46 = &g_1;
    v47 = &g_411be8;
    v48 = &g_1;
    v49 = 0;
    v50 = 4785074604081266;
    v51 = 0;
    v52 = 3337;
    v57 = 0;
    v58 = &g_1;
    v59 = 0;
    v57 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 47);
    v191 = v58;
    v192 = v59;
    *((v191 + v192 + &g_11 as &u8) as &i128) = 146793563361253602752319697712500993908;
    *((v191 + v192 + &g_1 as &u8) as &i128) = 154358658915453122738282917927477733740;
    *((v191 + v192) as &i128) = 43051471498234018632879263691592528483;
    v59 = v192 + 47;
    v156 = *((&v57 as &char + 8) as &i128);
    if v38 != 0x8000000000000000 {
        v57 = v156;
    }
    v38 = v57;
    memcpy(&v57, &v0, 592);
    v193 = v73;
    if v193 == *((&v70 as &char + 8) as &i64) {
        v71 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v194 = v72;
    v195 = v193 * &g_11;
    *((v194 + v195) as &i64) = 0;
    *((v194 + v195 + &g_1 as &u8) as &&i64) = &g_411c60;
    *((v194 + v195 + &g_11 as &u8) as &&i64) = &g_1;
    v73 = v193 + &g_1 as &u8;
    memcpy(&v156, &v57, 588);
    v158 = v105;
    v159 = v107;
    v157 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v108, &v156);
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v127 = 0;
    v129 = 0;
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v108 = 0;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v112 = &g_1;
    v113 = 0;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v126 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v143 = 0x8000000000000000;
    v145 = 9223372036854775809;
    v146 = &g_41a6e3;
    v147 = &g_1;
    v148 = &g_41a6e3;
    v149 = &g_1;
    v150 = 0;
    v151 = 4785074604081270;
    v152 = 0;
    v153 = 3337;
    v57 = 0;
    v58 = &g_1;
    v59 = 0;
    v57 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v196 = v58;
    v197 = v59;
    *((v196 + v197 + &g_1 as &u8) as &i128) = 134814933379304116264539655635663544677;
    *((v196 + v197) as &i128) = 129460194726620751263694295014075626096;
    v59 = v197 + &g_11 as &u8;
    v156 = *((&v57 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v57 = v156;
    }
    v142 = v57;
    memcpy(&v57, &v108, 588);
    v105 = *((&v108 as &char + 589) as &i16);
    v107 = *((&v108 as &char + 591) as &i8);
    v104 = &g_1;
    v108 = clap_builder::builder::command::Command::arg(&v0, &v57);
    v10 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v0 = 0;
    v2 = &g_1;
    v3 = &g_1;
    v4 = -1;
    v5 = 0;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
    v9 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v37 = 0;
    v38 = 0x8000000000000000;
    v39 = v156;
    v40 = 0x8000000000000000;
    v42 = *((&v57 as &char + 16) as &i128);
    v41 = v57;
    v43 = 9223372036854775809;
    v44 = v160;
    v45 = &g_41a45e;
    v46 = &g_1;
    v47 = 0;
    v49 = 0;
    v50 = 0x201000000010011000000110000;
    clap_builder::builder::command::Command::arg(a0, &v108, &v0);
    return a0;
}
