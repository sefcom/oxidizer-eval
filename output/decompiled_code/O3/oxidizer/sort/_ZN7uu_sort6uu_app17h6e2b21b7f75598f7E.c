fn uu_sort::uu_app(a0: u32) -> u64 {
    let v0: i128;  // [sp-0xac8], Other Possible Types: struct16, struct24, Enum, struct592, struct112, struct64
    let v1: i64;  // [sp-0xac0]
    let v2: i64;  // [sp-0xab8]
    let v3: i64;  // [sp-0xab0]
    let v4: i64;  // [sp-0xaa8]
    let v5: i64;  // [sp-0xaa0]
    let v6: i64;  // [sp-0xa90]
    let v7: i64;  // [sp-0xa78]
    let v8: i64;  // [sp-0xa60], Other Possible Types: struct16
    let v9: i64;  // [sp-0xa58]
    let v10: i128;  // [bp-0xa50]
    let v11: i64;  // [sp-0xa40]
    let v12: i128;  // [sp-0xa38]
    let v13: i64;  // [sp-0xa28]
    let v14: i128;  // [sp-0xa20]
    let v15: i64;  // [sp-0xa10]
    let v16: i128;  // [sp-0xa08]
    let v17: i64;  // [sp-0x9f8]
    let v18: i128;  // [sp-0x9f0]
    let v19: i64;  // [sp-0x9e0]
    let v20: i128;  // [sp-0x9d8]
    let v21: i64;  // [sp-0x9c8]
    let v22: i128;  // [sp-0x9c0]
    let v23: i64;  // [sp-0x9b0]
    let v24: i128;  // [sp-0x9a8]
    let v25: i64;  // [sp-0x998]
    let v26: i128;  // [sp-0x990]
    let v27: i64;  // [sp-0x980]
    let v28: i128;  // [sp-0x978]
    let v29: i64;  // [sp-0x968]
    let v30: i64;  // [bp-0x960]
    let v31: i64;  // [sp-0x950]
    let v32: i128;  // [sp-0x948]
    let v33: i64;  // [sp-0x938]
    let v34: i128;  // [sp-0x930]
    let v35: i64;  // [sp-0x920]
    let v36: i64;  // [sp-0x918]
    let v37: i64;  // [sp-0x910]
    let v38: i128;  // [sp-0x908]
    let v39: i64;  // [sp-0x8f8]
    let v40: i64;  // [sp-0x8d0]
    let v41: i64;  // [sp-0x8b8]
    let v42: i64;  // [sp-0x8b0]
    let v43: i64;  // [sp-0x8a8]
    let v44: i64;  // [sp-0x8a0]
    let v45: i64;  // [sp-0x898]
    let v46: i64;  // [sp-0x888]
    let v47: i32;  // [sp-0x880]
    let v48: i16;  // [sp-0x87c]
    let v49: i16;  // [bp-0x87b]
    let v50: i16;  // [bp-0x87a]
    let v51: i8;  // [sp-0x879]
    let v52: i64;  // [bp-0x878], Other Possible Types: struct712, struct16, struct24, struct592
    let v53: i64;  // [sp-0x870]
    let v54: i64;  // [sp-0x868]
    let v55: i64;  // [sp-0x850]
    let v56: i64;  // [sp-0x840]
    let v57: i64;  // [sp-0x828]
    let v58: i64;  // [sp-0x810], Other Possible Types: struct16
    let v59: i64;  // [sp-0x808]
    let v60: i128;  // [bp-0x800]
    let v61: i64;  // [sp-0x7f0]
    let v62: i128;  // [sp-0x7e8]
    let v63: i64;  // [sp-0x7d8]
    let v64: i128;  // [sp-0x7d0]
    let v65: i64;  // [sp-0x7c0]
    let v66: i128;  // [sp-0x7b8]
    let v67: i64;  // [sp-0x7a8]
    let v68: i128;  // [sp-0x7a0]
    let v69: i64;  // [sp-0x790]
    let v70: i128;  // [sp-0x788]
    let v71: i64;  // [sp-0x778]
    let v72: i128;  // [sp-0x770]
    let v73: i64;  // [sp-0x760]
    let v74: i128;  // [sp-0x758]
    let v75: i64;  // [sp-0x748]
    let v76: i128;  // [sp-0x740]
    let v77: i64;  // [sp-0x730]
    let v78: i128;  // [bp-0x728]
    let v79: i128;  // [bp-0x720]
    let v80: i64;  // [sp-0x718]
    let v81: i128;  // [bp-0x710]
    let v82: i64;  // [sp-0x700]
    let v83: i128;  // [sp-0x6f8]
    let v84: i64;  // [sp-0x6e8]
    let v85: i128;  // [sp-0x6e0]
    let v86: i64;  // [sp-0x6d0]
    let v87: i64;  // [sp-0x6c8]
    let v88: i64;  // [sp-0x6c0]
    let v89: i128;  // [sp-0x6b8]
    let v90: i64;  // [sp-0x6a8]
    let v91: i128;  // [sp-0x6a0]
    let v92: i64;  // [sp-0x680]
    let v93: i64;  // [sp-0x668]
    let v94: i64;  // [sp-0x660]
    let v95: i64;  // [sp-0x658]
    let v96: i64;  // [sp-0x650]
    let v97: i64;  // [sp-0x648]
    let v98: i64;  // [sp-0x638]
    let v99: i32;  // [sp-0x630]
    let v100: i16;  // [bp-0x62c]
    let v101: i8;  // [sp-0x62b]
    let v102: i16;  // [bp-0x62a]
    let v103: i8;  // [sp-0x629]
    let v104: i5696;  // [sp-0x5a8], Other Possible Types: struct712, struct16, Enum, struct24
    let v105: i64;  // [sp-0x5a0]
    let v106: i64;  // [sp-0x598]
    let v107: i64;  // [sp-0x590]
    let v108: i64;  // [sp-0x588]
    let v109: i64;  // [sp-0x580]
    let v110: i64;  // [sp-0x570]
    let v111: i128;  // [sp-0x568]
    let v112: i64;  // [sp-0x558]
    let v113: i128;  // [sp-0x550]
    let v114: i64;  // [sp-0x540]
    let v115: i64;  // [sp-0x538]
    let v116: i128;  // [sp-0x530]
    let v117: i64;  // [sp-0x520]
    let v118: i128;  // [sp-0x518]
    let v119: i64;  // [sp-0x508]
    let v120: i128;  // [sp-0x500]
    let v121: i64;  // [sp-0x4f0]
    let v122: i128;  // [sp-0x4e8]
    let v123: i64;  // [sp-0x4d8]
    let v124: i128;  // [sp-0x4d0]
    let v125: i64;  // [sp-0x4c0]
    let v126: i128;  // [sp-0x4b8]
    let v127: i64;  // [sp-0x4a8]
    let v128: i128;  // [sp-0x4a0]
    let v129: i64;  // [sp-0x490]
    let v130: i128;  // [sp-0x488]
    let v131: i64;  // [sp-0x478]
    let v132: i128;  // [sp-0x470]
    let v133: i64;  // [sp-0x460]
    let v134: i128;  // [bp-0x458]
    let v135: i128;  // [bp-0x450]
    let v136: i64;  // [sp-0x448]
    let v137: i128;  // [bp-0x440]
    let v138: i64;  // [sp-0x430]
    let v139: i128;  // [sp-0x428]
    let v140: i64;  // [sp-0x418]
    let v141: i128;  // [sp-0x410]
    let v142: i64;  // [sp-0x400]
    let v143: i64;  // [sp-0x3f8]
    let v144: i64;  // [sp-0x3f0]
    let v145: i128;  // [sp-0x3e8]
    let v146: i64;  // [sp-0x3d8]
    let v147: i128;  // [sp-0x3d0]
    let v148: i128;  // [sp-0x3c0]
    let v149: i64;  // [sp-0x3b0]
    let v150: i128;  // [sp-0x3a8]
    let v151: i64;  // [sp-0x398]
    let v152: i64;  // [sp-0x390]
    let v153: i64;  // [sp-0x388]
    let v154: i64;  // [sp-0x380]
    let v155: i64;  // [sp-0x378]
    let v156: i64;  // [sp-0x368]
    let v157: i32;  // [sp-0x360]
    let v158: i16;  // [bp-0x35c]
    let v159: i8;  // [sp-0x35b]
    let v160: i16;  // [sp-0x35a]
    let v161: i64;  // [sp-0x348]
    let v162: i64;  // [sp-0x340]
    let v163: i64;  // [sp-0x2ec]
    let v164: i32;  // [sp-0x2e4]
    let v165: i64;  // [sp-0x2e0]
    let v166: i64;  // [sp-0x2d8]
    let v167: i8;  // [bp-0x2d0]
    let v168: i8;  // [bp-0x2c8]
    let v169: i128;  // [bp-0x2b8], Other Possible Types: struct32, struct24, struct592
    let v170: i64;  // [sp-0x2a8]
    let v171: i8;  // [sp-0x6c]
    let v172: i16;  // [sp-0x6b]
    let v173: i8;  // [sp-0x69]
    let v174: i8;  // [bp-0x60]
    let v175: i8;  // [bp-0x50]
    let v176: i8;  // [bp-0x40]
    let v178: i64;  // r14
    let v179: i64;  // rax
    let v180: i64;  // rcx
    let v181: i64;  // rax
    let v182: i64;  // rcx
    let v183: i64;  // rax
    let v184: i64;  // rcx
    let v185: i64;  // rsi
    let v186: i64;  // rax
    let v187: i64;  // rcx
    let v188: i64;  // rax
    let v189: i64;  // rcx
    let v190: i64;  // rbp
    let v191: i64;  // rax
    let v192: i64;  // rcx
    let v193: i64;  // rax
    let v194: i64;  // rcx
    let v195: i64;  // rbp
    let v196: i64;  // rbp
    let v197: i64;  // rax
    let v198: i64;  // rcx
    let v199: i64;  // rax
    let v200: i64;  // rcx
    let v201: i64;  // rbp
    let v202: i64;  // rax
    let v203: i64;  // rcx
    let v204: i64;  // rax
    let v205: i64;  // rcx
    let v206: i64;  // rsi
    let v207: i64;  // rax
    let v208: i64;  // rcx
    let v209: i64;  // rax
    let v210: i64;  // rcx
    let v211: i64;  // rax
    let v212: i64;  // rcx
    let v214: i16;  // r13w
    let v216: i64;  // r12
    let v217: i64;  // rax
    let v218: i64;  // rcx
    let v219: i64;  // rax
    let v220: i64;  // rcx
    let v221: i64;  // rax
    let v222: i64;  // rcx
    let v223: i64;  // rax
    let v224: i64;  // rcx
    let v225: i64;  // rax
    let v226: i64;  // rcx
    let v227: i64;  // rax
    let v228: i64;  // rcx
    let v229: i64;  // rax
    let v230: i64;  // rcx
    let v232: i64;  // rax
    let v233: i64;  // rcx
    let v235: i64;  // rax
    let v236: i64;  // rcx
    let v238: i16;  // r13w
    let v240: i64;  // rax
    let v241: i64;  // rcx
    let v243: i16;  // r13w
    let v245: i64;  // rax
    let v246: i64;  // rcx
    let v248: i64;  // rax
    let v249: i64;  // rcx
    let v250: i64;  // r13
    let v251: i64;  // r13
    let v252: i64;  // rax
    let v253: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v104 = clap_builder::builder::command::Command::new(g_59a4a0, g_59a4a8);
    v161 = &g_4293b2;
    v162 = &g_1;
    memcpy(&v52, &v104, 712);
    v104 = clap_builder::builder::command::Command::about(&v52, &g_4293b8, &g_61);
    v52 = clap_builder::builder::command::Command::after_help(&v104, &g_42941a, 663);
    v0 = uucore::format_usage(&g_4296b1, &g_11);
    v178 = v0;
    if v178 != 0x8000000000000000 {
        v104 = *((&v0 as &char + 8) as &i128);
    }
    v90 = v178;
    v91 = v104;
    memcpy(&v104, &v52, 700);
    v163 = 5630083651076232 | *((&v52 as &char + 700) as &i64);
    v164 = *((&v52 as &char + 708) as &i32);
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v52 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v87 = 0;
    v88 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v94 = &g_1;
    v95 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v96 = &g_1;
    v97 = 0;
    v98 = 0x11000000110000;
    v99 = 0;
    v100 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v179 = v1;
    v180 = v2;
    *((v179 + v180) as &i128) = 152110414024190366979331735664405869136;
    *((v179 + v180 + &g_1 as &u8) as &i64) = 3345734071897648498;
    v2 = v180 + &g_11 as &u8;
    v169 = *((&v0 as &char + 8) as &i128);
    if v88 != 0x8000000000000000 {
        v0 = v169;
    }
    v88 = v0;
    v89 = v0;
    memcpy(&v0, &v52, 588);
    v49 = *((&v52 as &char + 589) as &i16);
    v51 = v103;
    v48 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v104 = 0;
    v106 = 0;
    v109 = 0;
    v110 = 0;
    v112 = &g_1;
    v114 = 0;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v143 = 0;
    v144 = 0x8000000000000000;
    v146 = 0x8000000000000000;
    v149 = 9223372036854775809;
    v151 = &g_4296e0;
    v152 = &g_1;
    v153 = &g_4296e0;
    v154 = &g_1;
    v155 = 0;
    v156 = 0x11000000110000;
    v157 = 0;
    v158 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v181 = v1;
    v182 = v2;
    *((v181 + v182 + &g_1 as &u8) as &i128) = 61717900162986074318567313815985090409;
    *((v181 + v182) as &i128) = 146760928493172414826559440180688286288;
    v2 = v182 + &g_11 as &u8;
    v169 = *((&v0 as &char + 8) as &i128);
    if v144 != 0x8000000000000000 {
        v0 = v169;
    }
    v144 = v0;
    v145 = v0;
    memcpy(&v0, &v104, 588);
    v49 = *((&v104 as &char + 589) as &i16);
    v51 = *((&v104 as &char + 591) as &i8);
    v48 = &g_1;
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v52 = struct24 {
        field_80: 0
        field_88: <UNKNOWN>
        field_96: 0
    };
    v55 = 0;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v87 = 0;
    v88 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &g_41eb90;
    v94 = &g_1;
    v95 = &g_41eb90;
    v96 = &g_1;
    v97 = 0;
    v98 = 0x11000000110000;
    v99 = 0;
    v100 = 3337;
    v0 = struct112 {
        field_0: &g_429701
        field_8: &g_1
        field_16: &g_429710
        field_24: &g_1
        field_32: &g_42971d
        field_40: &g_1
        field_48: &g_429722
        field_56: &g_1
        field_64: &g_4296e0
        field_72: &g_1
        field_80: &g_429729
        field_88: &g_1
        field_96: 0
        field_104: &g_1
    };
    v169 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v52, &v169);
    v169 = clap_builder::builder::arg::Arg::conflicts_with_all(&v0, "general-numeric-sort");
    v52 = clap_builder::builder::command::Command::arg(&v104, &v169);
    v0 = uu_sort::make_sort_mode_arg(&g_42935d, &g_11, 104, 4364079, 55);
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
    v0 = uu_sort::make_sort_mode_arg(&g_42936f, &g_1, 77, 4364134, 44);
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v0 = uu_sort::make_sort_mode_arg(&g_429379, &g_1, 110, 4364178, 43);
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
    v0 = uu_sort::make_sort_mode_arg(&g_429349, &g_11, 103, 4364221, 51);
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v0 = uu_sort::make_sort_mode_arg(&g_429385, &g_1, 86, 4364272, 48);
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
    v0 = uu_sort::make_sort_mode_arg(&g_429391, &g_1, 82, 4364320, 23);
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v104 = 0;
    v106 = 0;
    v109 = 0;
    v110 = 0;
    v112 = &g_1;
    v114 = 0;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v143 = 0;
    v144 = 0x8000000000000000;
    v146 = 0x8000000000000000;
    v149 = 9223372036854775809;
    v151 = &g_41f1b0;
    v152 = &g_1;
    v153 = &g_41f1b0;
    v154 = &g_1;
    v155 = 0;
    v156 = 4785074604081252;
    v157 = 0;
    v158 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v183 = v1;
    v184 = v2;
    *((v183 + v184 + &g_11 as &u8) as &i128) = 153455199101731938130417162574311351661;
    *((v183 + v184 + &g_1 as &u8) as &i128) = 156092803829527787619996518066529463905;
    *((v183 + v184) as &i128) = 144066127294180196142726956899260854115;
    v2 = v184 + &g_21 as &u8;
    v169 = *((&v0 as &char + 8) as &i128);
    if v144 != 0x8000000000000000 {
        v0 = v169;
    }
    v144 = v0;
    v145 = v0;
    memcpy(&v0, &v104, 592);
    v185 = *((&v0 as &char + 120) as &i64);
    if v8 - v185 <= 3 {
        v8 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v185, &g_1);
        v185 = *((&v0 as &char + 120) as &i64);
    }
    v186 = v9;
    v187 = v185 * &g_1;
    *((v186 + v187) as &&i64) = &g_429379;
    *((v186 + v187 + &g_1 as &u8) as &&i64) = &g_1;
    *((v186 + v187 + &g_1 as &u8) as &&i64) = &g_429349;
    *((v186 + v187 + &g_11 as &u8) as &&i64) = &g_11;
    *((v186 + v187 + &g_11 as &u8) as &&i64) = &g_42935d;
    *((v186 + v187 + &g_21 as &u8) as &&i64) = &g_11;
    *((v186 + v187 + &g_21 as &u8) as &&i64) = &g_42936f;
    *((v186 + v187 + &g_31 as &u8) as &&i64) = &g_1;
    v10 = v185 + &g_1 as &u8;
    memcpy(&v169, &v0, 588);
    v172 = *((&v0 as &char + 589) as &i16);
    v173 = v51;
    v171 = &g_1;
    v104 = clap_builder::builder::command::Command::arg(&v52, &v169);
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v52 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v87 = 0;
    v88 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &g_429867;
    v94 = &g_1;
    v95 = &g_429867;
    v96 = &g_1;
    v97 = 0;
    v98 = 4785074604081261;
    v99 = 0;
    v100 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v188 = v1;
    v189 = v2;
    *((v188 + v189 + &g_1 as &u8) as &i128) = 146383492316071509146101444104985867378;
    *((v188 + v189) as &i128) = 148142080325638394005432284888054261101;
    *((v188 + v189 + &g_11 as &u8) as &i64) = 8390891596001079150;
    v2 = v189 + &g_21 as &u8;
    v169 = *((&v0 as &char + 8) as &i128);
    if v88 != 0x8000000000000000 {
        v0 = v169;
    }
    v88 = v0;
    v89 = v0;
    memcpy(&v0, &v52, 588);
    v49 = *((&v52 as &char + 589) as &i16);
    v51 = v103;
    v48 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v104 = struct24 {
        field_80: 0
        field_88: <UNKNOWN>
        field_96: &g_1
    };
    v107 = 0;
    v108 = -1;
    v109 = 0;
    v110 = 0;
    v111 = v169;
    v112 = &g_1;
    v113 = v176;
    v114 = 0;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v143 = 0;
    v144 = 0x8000000000000000;
    v145 = v175;
    v146 = 0x8000000000000000;
    v148 = *((&v0 as &char + 16) as &i128);
    v147 = v0;
    v149 = 9223372036854775809;
    v150 = v174;
    v151 = &g_429893;
    v152 = &g_1;
    v153 = &g_429893;
    v154 = &g_1;
    v155 = 0;
    v156 = 264384378312461282576165588959331;
    v0 = struct64 {
        field_0: &g_429898
        field_8: &g_1
        field_16: &g_42989e
        field_24: &g_1
        field_32: &g_4298a3
        field_40: &g_1
        field_48: 0
        field_56: &g_1
    };
    v169 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v104, &v169);
    v190 = *((&v0 as &char + 120) as &i64);
    if v190 == v8 {
        v8 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v191 = v9;
    v192 = v190 * &g_1;
    *((v191 + v192) as &&i64) = &g_4298b1;
    *((v191 + v192 + &g_1 as &u8) as &&i64) = &g_1;
    v10 = v190 + &g_1 as &u8;
    memcpy(&v104, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v193 = v1;
    v194 = v2;
    *((v193 + v194 + &g_1 as &u8) as &i128) = 153029734602661065281413648254778632480;
    *((v193 + v194) as &i128) = 133449583387220170886874349948958500963;
    *((v193 + v194 + &g_11 as &u8) as &i32) = 1953656691;
    v2 = v194 + &g_21 as &u8;
    v195 = v0;
    v169 = *((&v0 as &char + 8) as &i128);
    if v195 != 0x8000000000000000 {
        v0 = v169;
    }
    v144 = v195;
    v145 = v0;
    memcpy(&v0, &v104, 592);
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v52 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v87 = 0;
    v88 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &g_4298da;
    v94 = &g_1;
    v95 = &g_4298da;
    v96 = &g_1;
    v97 = 0;
    v98 = 4785074604081219;
    v99 = 0;
    v100 = 3337;
    v196 = v60;
    if !v196 {
        v58 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v197 = v59;
    v198 = v196 * &g_1;
    *((v197 + v198) as &&i64) = &g_4298b1;
    *((v197 + v198 + &g_1 as &u8) as &&i64) = &g_1;
    v60 = v196 + &g_1 as &u8;
    memcpy(&v0, &v52, 592);
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_51);
    v199 = v53;
    v200 = v54;
    *((v199 + v200 + &g_31 as &u8) as &i128) = 154767445391677988623276509635846367607;
    *((v199 + v200 + &g_21 as &u8) as &i128) = 43139741492392378965918686967829394031;
    *((v199 + v200 + &g_11 as &u8) as &i128) = 153029835139259420956083521815996361833;
    *((v199 + v200 + &g_1 as &u8) as &i128) = 135749648173282004516075045359656181881;
    *((v199 + v200) as &i128) = 144119772764419160749014051838828836965;
    *((v199 + v200 + &g_41 as &u8) as &i64) = 3343205195205207400;
    v54 = v200 + &g_51 as &u8;
    v201 = v52;
    v169 = *((&v52 as &char + 8) as &i128);
    if v201 != 0x8000000000000000 {
        v52 = v169;
    }
    v37 = v201;
    v38 = v52;
    memcpy(&v169, &v0, 588);
    v172 = *((&v0 as &char + 589) as &i16);
    v173 = v51;
    v171 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v169);
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v104 = 0;
    v106 = 0;
    v109 = 0;
    v110 = 0;
    v112 = &g_1;
    v114 = 0;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v143 = 0;
    v144 = 0x8000000000000000;
    v146 = 0x8000000000000000;
    v149 = 9223372036854775809;
    v151 = &g_42993e;
    v152 = &g_1;
    v153 = &g_42993e;
    v154 = &g_1;
    v155 = 0;
    v156 = 4785074604081254;
    v157 = 0;
    v158 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v202 = v1;
    v203 = v2;
    *((v202 + v203 + &g_1 as &u8) as &i128) = 138754406025486439558150151373882158964;
    *((v202 + v203) as &i128) = 43062058040743751169190151386754215782;
    *((v202 + v203 + &g_11 as &u8) as &i64) = 8318823012264669793;
    v2 = v203 + &g_21 as &u8;
    v169 = *((&v0 as &char + 8) as &i128);
    if v144 != 0x8000000000000000 {
        v0 = v169;
    }
    v144 = v0;
    v145 = v0;
    memcpy(&v0, &v104, 588);
    v49 = *((&v104 as &char + 589) as &i16);
    v51 = *((&v104 as &char + 591) as &i8);
    v48 = &g_1;
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v52 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v87 = 0;
    v88 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &g_429971;
    v94 = &g_11;
    v95 = &g_429971;
    v96 = &g_11;
    v97 = 0;
    v98 = 4785074604081257;
    v99 = 0;
    v100 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v204 = v1;
    v205 = v2;
    *((v204 + v205 + &g_1 as &u8) as &i128) = 153455199101731938130417162591574520942;
    *((v204 + v205) as &i128) = 140173485412436884668578698653904824169;
    v2 = v205 + &g_11 as &u8;
    v169 = *((&v0 as &char + 8) as &i128);
    if v88 != 0x8000000000000000 {
        v0 = v169;
    }
    v88 = v0;
    v89 = v0;
    memcpy(&v0, &v52, 592);
    v206 = v10;
    if v8 - v206 <= 3 {
        v8 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v206, &g_1);
        v206 = v10;
    }
    v207 = v9;
    v208 = v206 * &g_1;
    *((v207 + v208) as &&i64) = &g_429379;
    *((v207 + v208 + &g_1 as &u8) as &&i64) = &g_1;
    *((v207 + v208 + &g_1 as &u8) as &&i64) = &g_429349;
    *((v207 + v208 + &g_11 as &u8) as &&i64) = &g_11;
    *((v207 + v208 + &g_11 as &u8) as &&i64) = &g_42935d;
    *((v207 + v208 + &g_21 as &u8) as &&i64) = &g_11;
    *((v207 + v208 + &g_21 as &u8) as &&i64) = &g_42936f;
    *((v207 + v208 + &g_31 as &u8) as &&i64) = &g_1;
    v10 = v206 + &g_1 as &u8;
    memcpy(&v169, &v0, 588);
    v172 = v49;
    v173 = v51;
    v171 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v169);
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v104 = 0;
    v106 = 0;
    v109 = 0;
    v110 = 0;
    v112 = &g_1;
    v114 = 0;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v143 = 0;
    v144 = 0x8000000000000000;
    v146 = 0x8000000000000000;
    v149 = 9223372036854775809;
    v151 = &g_4299a0;
    v152 = &g_11;
    v153 = &g_4299a0;
    v154 = &g_11;
    v155 = 0;
    v156 = 4785074604081250;
    v157 = 0;
    v158 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v209 = v1;
    v210 = v2;
    *((v209 + v210 + &g_21 as &u8) as &i128) = 134825318448394987078791730721606302053;
    *((v209 + v210 + &g_11 as &u8) as &i128) = 43108580743603257942696556664065124206;
    *((v209 + v210 + &g_1 as &u8) as &i128) = 140090408658889793058221525713539719532;
    *((v209 + v210) as &i128) = 130432594922299201273480893478070019945;
    v2 = v210 + &g_31 as &u8;
    v169 = *((&v0 as &char + 8) as &i128);
    if v144 != 0x8000000000000000 {
        v0 = v169;
    }
    v144 = v0;
    v145 = v0;
    memcpy(&v0, &v104, 588);
    v49 = *((&v104 as &char + 589) as &i16);
    v51 = *((&v104 as &char + 591) as &i8);
    v48 = &g_1;
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
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
    v30 = 0;
    v32 = 0;
    v34 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_4298b1;
    v42 = &g_1;
    v43 = &g_4298b1;
    v44 = &g_1;
    v45 = 0;
    v46 = 4785074604081263;
    v47 = 0;
    v48 = 3337;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v211 = v53;
    v212 = v54;
    *((v211 + v212 + &g_11 as &u8) as &i128) = 154800205549820513465065072743454897006;
    *((v211 + v212 + &g_1 as &u8) as &i128) = 133428510123330540457106666845717154118;
    *((v211 + v212) as &i128) = 43113996147272134363418043277126496887;
    v54 = v212 + &g_21 as &u8;
    v169 = *((&v52 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v52 = v169;
    }
    v37 = v52;
    v38 = v52;
    memcpy(&v52, &v0, 360);
    memcpy(&v52, &v30, 221);
    v214 = *((&v49 as &char + 1) as &i16);
    v81 = v30;
    v101 = &g_1;
    v102 = v214;
    v169 = struct32 {
        field_0: &g_41e9c8
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v169);
    v165 = 9223372036854775809;
    v81 = v2;
    v79 = v0;
    memcpy(&v0, &v52, 360);
    memcpy(&v30, &v52, 221);
    v30 = v81;
    v49 = &g_1;
    v50 = v214;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v104 = 0;
    v106 = 0;
    v109 = 0;
    v110 = 0;
    v112 = &g_1;
    v114 = 0;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v143 = 0;
    v144 = 0x8000000000000000;
    v146 = 0x8000000000000000;
    v216 = v165;
    v149 = v216;
    v151 = &g_429a18;
    v152 = &g_1;
    v153 = &g_429a18;
    v154 = &g_1;
    v155 = 0;
    v156 = 4785074604081266;
    v157 = 0;
    v158 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v217 = v1;
    v218 = v2;
    *((v217 + v218) as &i128) = 149478223809776399189252052693642798450;
    *((v217 + v218 + &g_1 as &u8) as &i16) = 29813;
    v2 = v218 + &g_11 as &u8;
    v169 = *((&v0 as &char + 8) as &i128);
    if v144 != 0x8000000000000000 {
        v0 = v169;
    }
    v144 = v0;
    v145 = v0;
    memcpy(&v0, &v104, 588);
    v49 = *((&v104 as &char + 589) as &i16);
    v51 = *((&v104 as &char + 591) as &i8);
    v48 = &g_1;
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v52 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v87 = 0;
    v88 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v92 = v216;
    v93 = &g_429a31;
    v94 = &g_1;
    v95 = &g_429a31;
    v96 = &g_1;
    v97 = 0;
    v98 = 4785074604081267;
    v99 = 0;
    v100 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v219 = v1;
    v220 = v2;
    *((v219 + v220 + &g_11 as &u8) as &i128) = 153408730600032682484577114641815401005;
    *((v219 + v220 + &g_1 as &u8) as &i128) = 154789537610183413265436713313296982137;
    *((v219 + v220) as &i128) = 130432858912411435795684020137081533555;
    *((v219 + v220 + &g_21 as &u8) as &i16) = 28271;
    v2 = v220 + &g_31 as &u8;
    v169 = *((&v0 as &char + 8) as &i128);
    if v88 != 0x8000000000000000 {
        v0 = v169;
    }
    v88 = v0;
    v89 = v0;
    memcpy(&v0, &v52, 588);
    v49 = *((&v52 as &char + 589) as &i16);
    v51 = v103;
    v48 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v104 = 0;
    v106 = 0;
    v109 = 0;
    v110 = 0;
    v112 = &g_1;
    v114 = 0;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v143 = 0;
    v144 = 0x8000000000000000;
    v146 = 0x8000000000000000;
    v149 = v216;
    v151 = &g_429a69;
    v152 = &g_1;
    v153 = &g_429a69;
    v154 = &g_1;
    v155 = 0;
    v156 = 4785074604081269;
    v157 = 0;
    v158 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v221 = v1;
    v222 = v2;
    *((v221 + v222 + &g_1 as &u8) as &i128) = 129544914247952001905329810026557237606;
    *((v221 + v222) as &i128) = 43061836418945269342976595967731856751;
    *((v221 + v222 + &g_11 as &u8) as &i64) = 7959393400030066033;
    v2 = v222 + &g_21 as &u8;
    v169 = *((&v0 as &char + 8) as &i128);
    if v144 != 0x8000000000000000 {
        v0 = v169;
    }
    v144 = v0;
    v145 = v0;
    memcpy(&v0, &v104, 588);
    v49 = *((&v104 as &char + 589) as &i16);
    v51 = *((&v104 as &char + 591) as &i8);
    v48 = &g_1;
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v52 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v87 = 0;
    v88 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v92 = v216;
    v93 = &g_429a94;
    v94 = &g_1;
    v95 = &g_429a94;
    v96 = &g_1;
    v97 = 0;
    v98 = 4785074604081259;
    v99 = 0;
    v100 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1);
    v223 = v1;
    v224 = v2;
    *((v223 + v224 + &g_1 as &u8) as &i64) = 8747515638049700194;
    *((v223 + v224) as &i64) = 2340009372927815539;
    v2 = v224 + &g_1 as &u8;
    v169 = *((&v0 as &char + 8) as &i128);
    if v88 != 0x8000000000000000 {
        v0 = v169;
    }
    v88 = v0;
    v89 = v0;
    v0 = v52;
    memcpy(&v5, &v55, 548);
    v49 = *((&v52 as &char + 589) as &i16);
    v51 = v103;
    v2 = &g_1;
    v3 = &g_1;
    v4 = &g_1;
    v48 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v104 = 0;
    v106 = 0;
    v109 = 0;
    v110 = 0;
    v112 = &g_1;
    v114 = 0;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v143 = 0;
    v144 = 0x8000000000000000;
    v146 = 0x8000000000000000;
    v149 = v216;
    v151 = &g_429a97;
    v152 = &g_1;
    v153 = &g_429a97;
    v154 = &g_1;
    v155 = 0;
    v156 = 4785074604081268;
    v157 = 0;
    v158 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v225 = v1;
    v226 = v2;
    *((v225 + v226) as &i128) = 152110696950822650555809754967994234211;
    *((v225 + v226 + &g_1 as &u8) as &i64) = 7722864611877593202;
    v2 = v226 + &g_11 as &u8;
    v169 = *((&v0 as &char + 8) as &i128);
    if v144 != 0x8000000000000000 {
        v0 = v169;
    }
    v144 = v0;
    v145 = v0;
    memcpy(&v0, &v104, 592);
    v166 = &g_1;
    v106 = v168;
    v104 = v166;
    v105 = v167;
    v169 = clap_builder::builder::arg::Arg::value_parser(&v0, &v104);
    v104 = clap_builder::builder::command::Command::arg(&v52, &v169);
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v52 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v87 = 0;
    v88 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v92 = v216;
    v93 = &g_429abd;
    v94 = &g_1;
    v95 = &g_429abd;
    v96 = &g_1;
    v97 = 0;
    v98 = 4785074604081274;
    v99 = 0;
    v100 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v227 = v1;
    v228 = v2;
    *((v227 + v228 + &g_1 as &u8) as &i128) = 140132129261007763084871203607542636659;
    *((v227 + v228) as &i128) = 139737413289656226403140227931854236012;
    *((v227 + v228 + &g_11 as &u8) as &i16) = 25966;
    v2 = v228 + &g_21 as &u8;
    v169 = *((&v0 as &char + 8) as &i128);
    if v88 != 0x8000000000000000 {
        v0 = v169;
    }
    v88 = v0;
    v89 = v0;
    memcpy(&v0, &v52, 588);
    v49 = *((&v52 as &char + 589) as &i16);
    v51 = v103;
    v48 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
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
    v30 = 0;
    v32 = 0;
    v34 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = v216;
    v41 = &g_41ea78;
    v42 = &g_1;
    v43 = &g_41ea78;
    v44 = &g_1;
    v45 = 0;
    v46 = 0x11000000110000;
    v47 = 0;
    v48 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v229 = v105;
    v230 = v106;
    *((v229 + v230 + &g_21 as &u8) as &i128) = 110680323685361048473733153283294634105;
    *((v229 + v230 + &g_11 as &u8) as &i128) = 144161169082881432917098683893736696174;
    *((v229 + v230 + &g_1 as &u8) as &i128) = 146824893034497466251174080102888579186;
    *((v229 + v230) as &i128) = 134763092752837244064303789219449497699;
    v106 = v230 + &g_31 as &u8;
    v169 = *((&v104 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v104 = v169;
    }
    v37 = v104;
    v38 = v104;
    memcpy(&v104, &v0, 360);
    memcpy(&v104, &v30, 224);
    v137 = v30;
    v169 = struct32 {
        field_0: &g_429b2e
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v169);
    v137 = v2;
    v135 = v0;
    memcpy(&v0, &v104, 592);
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
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
    v30 = 0;
    v32 = 0;
    v34 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = v216;
    v41 = &g_429b39;
    v42 = &g_1;
    v43 = &g_429b39;
    v44 = &g_1;
    v45 = 0;
    v46 = 4785074604081235;
    v47 = 0;
    v48 = 3337;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v232 = v53;
    v233 = v54;
    *((v232 + v233 + &g_21 as &u8) as &i128) = 153429237619217527834452845910481596192;
    *((v232 + v233 + &g_11 as &u8) as &i128) = 43129274028596003949178581375477181799;
    *((v232 + v233 + &g_1 as &u8) as &i128) = 134849799020600986011017711029882278688;
    *((v232 + v233) as &i128) = 145495569411864249327498383718668854643;
    v54 = v233 + &g_31 as &u8;
    v169 = *((&v52 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v52 = v169;
    }
    v37 = v52;
    v38 = v52;
    memcpy(&v52, &v0, 360);
    memcpy(&v52, &v30, 224);
    v81 = v30;
    v169 = struct32 {
        field_0: &g_41eaec
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v169);
    v81 = v2;
    v79 = v0;
    memcpy(&v0, &v52, 592);
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
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
    v30 = 0;
    v32 = 0;
    v34 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = v216;
    v41 = &g_429b83;
    v42 = &g_11;
    v43 = &g_429b83;
    v44 = &g_11;
    v45 = 0;
    v46 = 4785074604081236;
    v47 = 0;
    v48 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v235 = v105;
    v236 = v106;
    *((v235 + v236 + &g_11 as &u8) as &i128) = 149441852378770398377553123939527697440;
    *((v235 + v236 + &g_1 as &u8) as &i128) = 102787441349637351610048963521395389039;
    *((v235 + v236) as &i128) = 149441553609369558374407802863118283637;
    v106 = v236 + &g_21 as &u8;
    v169 = *((&v104 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v104 = v169;
    }
    v37 = v104;
    v38 = v104;
    memcpy(&v104, &v0, 360);
    memcpy(&v104, &v30, 221);
    v238 = *((&v49 as &char + 1) as &i16);
    v137 = v30;
    v159 = &g_1;
    v160 = v238;
    v169 = struct32 {
        field_0: &g_429bc2
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v169);
    v137 = v2;
    v135 = v0;
    memcpy(&v0, &v104, 360);
    memcpy(&v30, &v104, 221);
    v30 = v137;
    v49 = &g_1;
    v50 = v238;
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
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
    v30 = 0;
    v32 = 0;
    v34 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = v165;
    v41 = &g_41ede0;
    v42 = &g_1;
    v43 = &g_41ede0;
    v44 = &g_1;
    v45 = 0;
    v46 = 0x11000000110000;
    v47 = 0;
    v48 = 3337;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 115);
    v240 = v53;
    v241 = v54;
    *((v240 + v241 + 96) as &i128) = 133527441060980472443104556268753282158;
    *((v240 + v241 + &g_41 as &u8) as &i128) = 129103508505712699884821133729639724400;
    *((v240 + v241 + &g_31 as &u8) as &i128) = 146760927778871343962791586341870641223;
    *((v240 + v241 + &g_21 as &u8) as &i128) = 105436405155858423678379754903573132393;
    *((v240 + v241 + &g_11 as &u8) as &i128) = 158346626617617546901323068790687942479;
    *((v240 + v241 + &g_1 as &u8) as &i128) = 109412736715909867035897302058792941938;
    *((v240 + v241) as &i128) = 129529297687886532925779247804606934883;
    *((v240 + v241 + &g_61 as &u8) as &i32) = 1953853284;
    v54 = v241 + 115;
    v169 = *((&v52 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v52 = v169;
    }
    v37 = v52;
    v38 = v52;
    memcpy(&v52, &v0, 360);
    memcpy(&v52, &v30, 221);
    v243 = v50;
    v81 = v30;
    v101 = &g_1;
    v102 = v243;
    v169 = struct32 {
        field_0: &g_41eb34
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v169);
    v81 = v2;
    v79 = v0;
    memcpy(&v0, &v52, 360);
    memcpy(&v30, &v52, 221);
    v30 = v81;
    v49 = &g_1;
    v50 = v243;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
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
    v30 = 0;
    v32 = 0;
    v34 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = v165;
    v41 = &g_429c38;
    v42 = &g_1;
    v43 = &g_429c38;
    v44 = &g_1;
    v45 = 0;
    v46 = 0x11000000110000;
    v47 = 0;
    v48 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v245 = v105;
    v246 = v106;
    *((v245 + v246 + &g_1 as &u8) as &i128) = 43139572265471668721721026970165331277;
    *((v245 + v246) as &i128) = 126682317017832375221064146096267355469;
    *((v245 + v246 + &g_11 as &u8) as &i64) = 3343187624354411617;
    v106 = v246 + &g_21 as &u8;
    v169 = *((&v104 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v104 = v169;
    }
    v37 = v104;
    v38 = v104;
    memcpy(&v104, &v0, 360);
    memcpy(&v104, &v30, 224);
    v137 = v30;
    v169 = struct32 {
        field_0: &g_429c67
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v169);
    v137 = v2;
    v135 = v0;
    memcpy(&v0, &v104, 592);
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
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
    v30 = 0;
    v32 = 0;
    v34 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = v40;
    v41 = &g_429c6e;
    v42 = &g_1;
    v43 = &g_429c6e;
    v44 = &g_1;
    v45 = 0;
    v46 = 0x11000000110000;
    v47 = 0;
    v48 = 3337;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v248 = v53;
    v249 = v54;
    *((v248 + v249 + &g_21 as &u8) as &i128) = 110685739401951820739446553431590923881;
    *((v248 + v249 + &g_11 as &u8) as &i128) = 140137220147690716372150256003761595753;
    *((v248 + v249 + &g_1 as &u8) as &i128) = 136128462735604252206911772529158088820;
    *((v248 + v249) as &i128) = 43103516633780842694870656851669771634;
    v54 = v249 + &g_31 as &u8;
    v169 = *((&v52 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v52 = v169;
    }
    v37 = v52;
    v38 = v52;
    memcpy(&v52, &v0, 360);
    v250 = v30;
    memcpy(&v52, &v30, 220);
    v101 = *((&v48 as &char + 1) as &i16);
    v103 = v51;
    v81 = v250;
    v100 = &g_1;
    v169 = struct32 {
        field_0: &g_429cb8
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v169);
    v81 = v2;
    v79 = v0;
    memcpy(&v0, &v52, 360);
    v251 = v81;
    memcpy(&v30, &v52, 220);
    v49 = v101;
    v51 = v103;
    v30 = v251;
    v48 = &g_1;
    v170 = v168;
    v169 = v166;
    v52 = clap_builder::builder::arg::Arg::value_parser(&v0, &v169);
    v101 = &g_1;
    memcpy(&v0, &v52, 592);
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v104 = 0;
    v106 = 0;
    v109 = 0;
    v110 = 0;
    v112 = &g_1;
    v114 = 0;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v143 = 0;
    v144 = 0x8000000000000000;
    v146 = 0x8000000000000000;
    v149 = v165;
    v151 = &g_429cc1;
    v152 = &g_1;
    v153 = &g_429cc1;
    v154 = &g_1;
    v155 = 0;
    v156 = 0x11000000110000;
    v157 = 0;
    v158 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_41);
    v252 = v1;
    v253 = v2;
    *((v252 + v253 + &g_21 as &u8) as &i128) = 140173567017657064193988064309920735353;
    *((v252 + v253 + &g_11 as &u8) as &i128) = 144119368304939647501023614353706936436;
    *((v252 + v253 + &g_1 as &u8) as &i128) = 43061957265306336777682377368931628146;
    *((v252 + v253) as &i128) = 129517309910771300563516160556310752885;
    *((v252 + v253 + &g_31 as &u8) as &i16) = 26478;
    v2 = v253 + &g_41 as &u8;
    v169 = *((&v0 as &char + 8) as &i128);
    if v144 != 0x8000000000000000 {
        v0 = v169;
    }
    v144 = v0;
    v145 = v0;
    memcpy(&v0, &v104, 588);
    v49 = *((&v104 as &char + 589) as &i16);
    v51 = *((&v104 as &char + 591) as &i8);
    v48 = &g_1;
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v52 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v87 = 0;
    v88 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v92 = v149;
    v93 = &g_429d08;
    v94 = &g_1;
    v95 = 0;
    v97 = 0;
    v98 = 0x11000000110000;
    v99 = 0;
    v100 = 3329;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v52, &v166);
    v49 = &g_1;
    memcpy(&v52, &v0, 592);
    clap_builder::builder::command::Command::arg(a0, &v104, &v52);
    return a0;
}
