fn uu_shuf::uu_app(a0: u32) -> u64 {
    let v0: i5696;  // [sp-0xaf8], Other Possible Types: struct712, Enum
    let v1: i64;  // [sp-0xaf0]
    let v2: i64;  // [sp-0xae8]
    let v3: i128;  // [sp-0xae0]
    let v4: i64;  // [sp-0xad0]
    let v5: i64;  // [sp-0xac0]
    let v6: i128;  // [sp-0xab8]
    let v7: i64;  // [sp-0xaa8]
    let v8: i128;  // [sp-0xaa0]
    let v9: i64;  // [sp-0xa90], Other Possible Types: struct16
    let v10: i64;  // [sp-0xa88]
    let v11: i128;  // [bp-0xa80]
    let v12: i64;  // [sp-0xa70]
    let v13: i128;  // [sp-0xa68]
    let v14: i64;  // [sp-0xa58]
    let v15: i128;  // [sp-0xa50]
    let v16: i64;  // [sp-0xa40]
    let v17: i128;  // [sp-0xa38]
    let v18: i64;  // [sp-0xa28]
    let v19: i128;  // [sp-0xa20]
    let v20: i64;  // [sp-0xa10]
    let v21: i128;  // [sp-0xa08]
    let v22: i64;  // [sp-0x9f8]
    let v23: i128;  // [sp-0x9f0]
    let v24: i64;  // [sp-0x9e0]
    let v25: i128;  // [sp-0x9d8]
    let v26: i64;  // [sp-0x9c8]
    let v27: i128;  // [sp-0x9c0]
    let v28: i64;  // [sp-0x9b0]
    let v29: i128;  // [bp-0x9a8]
    let v30: i128;  // [bp-0x9a0]
    let v31: i64;  // [sp-0x998]
    let v32: i128;  // [bp-0x990]
    let v33: i64;  // [sp-0x980]
    let v34: i128;  // [sp-0x978]
    let v35: i64;  // [sp-0x968]
    let v36: i128;  // [sp-0x960]
    let v37: i64;  // [sp-0x950]
    let v38: i64;  // [sp-0x948]
    let v39: i64;  // [sp-0x940]
    let v40: i128;  // [sp-0x938]
    let v41: i64;  // [sp-0x928]
    let v42: i128;  // [sp-0x920]
    let v43: i128;  // [sp-0x910]
    let v44: i64;  // [sp-0x900]
    let v45: i128;  // [sp-0x8f8]
    let v46: i64;  // [sp-0x8e8]
    let v47: i64;  // [sp-0x8e0]
    let v48: i64;  // [sp-0x8d8]
    let v49: i64;  // [sp-0x8d0]
    let v50: i64;  // [sp-0x8c8]
    let v51: i64;  // [sp-0x8b8]
    let v52: i32;  // [sp-0x8b0]
    let v53: i16;  // [sp-0x8ac]
    let v54: i8;  // [bp-0x8a9]
    let v55: i8;  // [bp-0x83c]
    let v56: i8;  // [bp-0x834]
    let v57: i192;  // [sp-0x828], Other Possible Types: struct712, Enum
    let v58: i64;  // [sp-0x820]
    let v59: i64;  // [sp-0x818]
    let v60: i128;  // [sp-0x810]
    let v61: i64;  // [sp-0x800]
    let v62: i64;  // [sp-0x7f0]
    let v63: i128;  // [sp-0x7e8]
    let v64: i64;  // [sp-0x7d8]
    let v65: i128;  // [sp-0x7d0]
    let v66: i64;  // [sp-0x7c0], Other Possible Types: struct16
    let v67: i64;  // [sp-0x7b8]
    let v68: i128;  // [bp-0x7b0]
    let v69: i64;  // [sp-0x7a0]
    let v70: i128;  // [sp-0x798]
    let v71: i64;  // [sp-0x788]
    let v72: i128;  // [sp-0x780]
    let v73: i64;  // [sp-0x770]
    let v74: i128;  // [sp-0x768]
    let v75: i64;  // [sp-0x758]
    let v76: i128;  // [sp-0x750]
    let v77: i64;  // [sp-0x740]
    let v78: i128;  // [sp-0x738]
    let v79: i64;  // [sp-0x728]
    let v80: i128;  // [sp-0x720]
    let v81: i64;  // [sp-0x710]
    let v82: i128;  // [sp-0x708]
    let v83: i64;  // [sp-0x6f8]
    let v84: i128;  // [sp-0x6f0]
    let v85: i64;  // [sp-0x6e0]
    let v86: i128;  // [bp-0x6d8]
    let v87: i128;  // [bp-0x6d0]
    let v88: i64;  // [sp-0x6c8]
    let v89: i128;  // [bp-0x6c0]
    let v90: i64;  // [sp-0x6b0]
    let v91: i128;  // [sp-0x6a8]
    let v92: i64;  // [sp-0x698]
    let v93: i128;  // [sp-0x690]
    let v94: i64;  // [sp-0x680]
    let v95: i64;  // [sp-0x678]
    let v96: i64;  // [sp-0x670]
    let v97: i128;  // [sp-0x668]
    let v98: i64;  // [sp-0x658]
    let v99: i128;  // [sp-0x650]
    let v100: i128;  // [sp-0x640]
    let v101: i64;  // [sp-0x630]
    let v102: i128;  // [sp-0x628]
    let v103: i64;  // [sp-0x618]
    let v104: i64;  // [sp-0x610]
    let v105: i64;  // [sp-0x608]
    let v106: i64;  // [sp-0x600]
    let v107: i64;  // [sp-0x5f8]
    let v108: i64;  // [sp-0x5e8]
    let v109: i32;  // [sp-0x5e0]
    let v110: i16;  // [sp-0x5dc]
    let v111: i64;  // [sp-0x5c8]
    let v112: i64;  // [sp-0x5c0]
    let v113: i64;  // [sp-0x56c]
    let v114: i32;  // [sp-0x564]
    let v115: i192;  // [sp-0x558], Other Possible Types: struct24, Enum
    let v116: i64;  // [sp-0x550]
    let v117: i64;  // [sp-0x548]
    let v118: i128;  // [sp-0x540]
    let v119: i128;  // [sp-0x530]
    let v120: i64;  // [sp-0x520]
    let v121: i128;  // [sp-0x518]
    let v122: i64;  // [sp-0x508]
    let v123: i128;  // [sp-0x500]
    let v124: i128;  // [sp-0x4f0]
    let v125: i128;  // [sp-0x4e0]
    let v126: struct16;  // [bp-0x4d8], Other Possible Types: i128
    let v127: i64;  // [sp-0x4d0]
    let v128: i128;  // [bp-0x4c8]
    let v129: i64;  // [sp-0x4b8]
    let v130: i128;  // [sp-0x4b0]
    let v131: i64;  // [sp-0x4a0]
    let v132: i128;  // [sp-0x498]
    let v133: i64;  // [sp-0x488]
    let v134: i128;  // [sp-0x480]
    let v135: i64;  // [sp-0x470]
    let v136: i128;  // [sp-0x468]
    let v137: i64;  // [sp-0x458]
    let v138: i128;  // [sp-0x450]
    let v139: i64;  // [sp-0x440]
    let v140: i128;  // [sp-0x438]
    let v141: i64;  // [sp-0x428]
    let v142: i128;  // [sp-0x420]
    let v143: i64;  // [sp-0x410]
    let v144: i128;  // [sp-0x408]
    let v145: i128;  // [sp-0x3f8]
    let v146: i64;  // [sp-0x3e8]
    let v147: i64;  // [sp-0x3e0]
    let v148: i128;  // [sp-0x3d8]
    let v149: i64;  // [sp-0x3c8]
    let v150: i128;  // [sp-0x3c0]
    let v151: i64;  // [sp-0x3b0]
    let v152: i64;  // [sp-0x3a8]
    let v153: i64;  // [sp-0x3a0]
    let v154: i128;  // [sp-0x398]
    let v155: i64;  // [sp-0x388]
    let v156: i128;  // [sp-0x380]
    let v157: i128;  // [sp-0x370]
    let v158: i64;  // [sp-0x360]
    let v159: i128;  // [sp-0x358]
    let v160: i64;  // [sp-0x348]
    let v161: i64;  // [sp-0x340]
    let v162: i64;  // [sp-0x338]
    let v163: i64;  // [sp-0x330]
    let v164: i64;  // [sp-0x328]
    let v165: i64;  // [sp-0x320]
    let v166: i64;  // [sp-0x318]
    let v167: i32;  // [sp-0x310]
    let v168: i8;  // [sp-0x30c]
    let v169: i16;  // [sp-0x30b]
    let v170: i8;  // [sp-0x309]
    let v171: i8;  // [bp-0x2f8]
    let v172: i8;  // [bp-0x2e8]
    let v173: i8;  // [bp-0x2d8]
    let v174: i8;  // [bp-0x2c8]
    let v175: i8;  // [bp-0x2b8]
    let v176: i8;  // [bp-0x2a8]
    let v177: i8;  // [bp-0x298]
    let v178: i128;  // [bp-0x288], Other Possible Types: struct32
    let v179: i8;  // [sp-0x3b]
    let v180: i16;  // [sp-0x3a]
    let v182: i64;  // rbx
    let v183: i64;  // rax
    let v184: i64;  // rcx
    let v185: i64;  // r14
    let v186: i64;  // rax
    let v187: i64;  // rcx
    let v188: i64;  // r14
    let v189: i64;  // rax
    let v190: i64;  // rcx
    let v191: i64;  // rax
    let v192: i64;  // rcx
    let v193: i64;  // rbx
    let v194: i64;  // rbx
    let v195: i64;  // rax
    let v196: i64;  // rcx
    let v197: i128;  // xmm0
    let v198: i128;  // xmm1
    let v199: i64;  // rsi
    let v200: i128;  // xmm3
    let v201: i64;  // rax
    let v202: i64;  // rcx
    let v203: i64;  // r14
    let v204: i64;  // rax
    let v205: i64;  // rcx
    let v206: i64;  // r14
    let v207: i64;  // rax
    let v208: i64;  // rcx
    let v209: i64;  // rbx
    let v210: i64;  // rax
    let v211: i64;  // rcx
    let v212: i64;  // r14
    let v213: i64;  // rax
    let v214: i64;  // rcx
    let v215: i64;  // rax
    let v216: i64;  // rcx
    let v217: i64;  // r14
    let v218: i64;  // rax
    let v219: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v0 = clap_builder::builder::command::Command::new(g_4f7568, g_4f7570);
    v57 = clap_builder::builder::command::Command::about(&v0, &g_41ae1a, 165);
    v111 = &g_41aebf;
    v112 = &g_1;
    memcpy(&v0, &v57, 712);
    v115 = uucore::format_usage(&g_41add2, 72);
    v182 = v115;
    if v182 != 0x8000000000000000 {
        v57 = *((&v115 as &char + 8) as &i128);
    }
    v41 = v182;
    v42 = v57;
    memcpy(&v57, &v0, 700);
    v113 = 549755814016 | v55;
    v114 = v56;
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
    v34 = 0;
    v36 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
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
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v44 = 9223372036854775809;
    v46 = &anon.6b32b05e1d077617d275c65ea4c6ad52.6.llvm.10609332461339697138;
    v47 = &g_1;
    v48 = &anon.6b32b05e1d077617d275c65ea4c6ad52.6.llvm.10609332461339697138;
    v49 = &g_1;
    v50 = 0;
    v51 = 4785074604081253;
    v52 = 0;
    v53 = 3337;
    v115 = 0;
    v116 = &g_1;
    v117 = 0;
    v115 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_10);
    v183 = v116;
    v184 = v117;
    *((v183 + v184 + &g_1 as &u8) as &i128) = 134825318448409579468593939311254074209;
    *((v183 + v184) as &i128) = 129102715658556843818033074274772021876;
    v117 = v184 + &g_10 as &u8;
    v178 = *((&v115 as &char + 8) as &i128);
    if v39 != 0x8000000000000000 {
        v115 = v178;
    }
    v39 = v115;
    memcpy(&v115, &v0, 588);
    v169 = v53;
    v170 = v54;
    v168 = &g_1;
    v185 = v128;
    if v185 == v126 {
        v126 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v186 = v127;
    v187 = v185 * &g_10;
    *((v186 + v187) as &&i64) = &anon.6b32b05e1d077617d275c65ea4c6ad52.6.llvm.10609332461339697138;
    *((v186 + v187 + &g_1 as &u8) as &&i64) = &g_1;
    v128 = v185 + &g_1 as &u8;
    memcpy(&v0, &v115, 592);
    v188 = v11;
    if v188 == v9 {
        v9 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v189 = v10;
    v190 = v188 * &g_10;
    *((v189 + v190) as &&i64) = &anon.6b32b05e1d077617d275c65ea4c6ad52.7.llvm.10609332461339697138;
    *((v189 + v190 + &g_1 as &u8) as &&i64) = &g_1;
    v11 = v188 + &g_1 as &u8;
    memcpy(&v115, &v0, 592);
    v0 = clap_builder::builder::command::Command::arg(&v57, &v115);
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v91 = 0;
    v93 = 0;
    v57 = 0;
    v59 = 0;
    v60 = v177;
    v61 = 0;
    v62 = 0;
    v63 = v176;
    v64 = &g_1;
    v65 = v175;
    v66 = 0;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = &g_1;
    v92 = &g_1;
    v94 = &g_1;
    v95 = 0;
    v96 = 0x8000000000000000;
    v97 = v174;
    v98 = 0x8000000000000000;
    v100 = v173;
    v99 = v172;
    v101 = 9223372036854775809;
    v102 = v171;
    v103 = &anon.6b32b05e1d077617d275c65ea4c6ad52.7.llvm.10609332461339697138;
    v104 = &g_1;
    v105 = &anon.6b32b05e1d077617d275c65ea4c6ad52.7.llvm.10609332461339697138;
    v106 = &g_1;
    v107 = 0;
    v108 = 4785074604081257;
    v109 = 0;
    v110 = 3337;
    v178 = struct32 {
        field_0: &g_41aee4
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v115 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v178);
    v89 = v117;
    v87 = v115;
    memcpy(&v115, &v57, 592);
    v57 = 0;
    v58 = &g_1;
    v59 = 0;
    v57 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v191 = v58;
    v192 = v59;
    *((v191 + v192 + &g_20 as &u8) as &i128) = 134825318448409579468593939311254074209;
    *((v191 + v192 + &g_10 as &u8) as &i128) = 42915796436894528680085128039145152626;
    *((v191 + v192) as &i128) = 134763092752837258137819769135824204404;
    v59 = v192 + &g_21 as &u8;
    v193 = v57;
    v178 = *((&v57 as &char + 8) as &i128);
    if v193 != 0x8000000000000000 {
        v57 = v178;
    }
    v153 = v193;
    v154 = v57;
    memcpy(&v57, &v115, 592);
    v194 = v68;
    if v194 == v66 {
        v66 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v195 = v67;
    v196 = v194 * &g_10;
    *((v195 + v196) as &&i64) = &anon.6b32b05e1d077617d275c65ea4c6ad52.13.llvm.10609332461339697138;
    *((v195 + v196 + &g_1 as &u8) as &&i64) = &g_1;
    v68 = v194 + &g_1 as &u8;
    memcpy(&v115, &v57, 592);
    v57 = clap_builder::builder::command::Command::arg(&v0, &v115);
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
    v34 = 0;
    v36 = 0;
    v0 = 0;
    v2 = 0;
    v3 = v177;
    v4 = 0;
    v5 = 0;
    v6 = v176;
    v7 = &g_1;
    v8 = v175;
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
    v32 = 0;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v40 = v174;
    v41 = 0x8000000000000000;
    v43 = v173;
    v42 = v172;
    v44 = 9223372036854775809;
    v45 = v171;
    v46 = &anon.6b32b05e1d077617d275c65ea4c6ad52.8.llvm.10609332461339697138;
    v47 = &g_1;
    v48 = &anon.6b32b05e1d077617d275c65ea4c6ad52.8.llvm.10609332461339697138;
    v49 = &g_1;
    v50 = 0;
    v51 = 4785074604081262;
    v52 = 0;
    v53 = 3337;
    v178 = struct32 {
        field_0: &g_41af19
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v115 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v178);
    v32 = v117;
    v30 = v115;
    v118 = v3;
    v121 = v6;
    v123 = v8;
    v197 = v9;
    v125 = v11;
    v128 = v13;
    v130 = v15;
    v132 = v17;
    v134 = v19;
    v136 = v21;
    v138 = v23;
    v140 = v25;
    v142 = v27;
    v144 = v29;
    v198 = *((&v30 as &char + 8) as &i128);
    v148 = v34;
    v150 = v36;
    v154 = v40;
    v156 = v42;
    v157 = v43;
    v159 = v45;
    v199 = *((&v0 as &char + 568) as &i64);
    v200 = *((&v0 as &char + 40) as &i128);
    v115 = v0;
    v117 = v2;
    v119 = v200;
    v120 = v5;
    v122 = v7;
    v124 = v197;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v139 = &g_1;
    v141 = &g_1;
    v143 = &g_1;
    v145 = v198;
    v146 = 0;
    v147 = &g_1;
    v149 = &g_1;
    v151 = &g_1;
    v152 = 0;
    v153 = 0x8000000000000000;
    v155 = 0x8000000000000000;
    v158 = 9223372036854775809;
    v160 = &anon.6b32b05e1d077617d275c65ea4c6ad52.8.llvm.10609332461339697138;
    v161 = &g_1;
    v162 = &anon.6b32b05e1d077617d275c65ea4c6ad52.8.llvm.10609332461339697138;
    v163 = &g_1;
    v164 = 0;
    v165 = v199;
    v166 = 4785074604081262;
    v167 = 0;
    v168 = 3329;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_10);
    v201 = v1;
    v202 = v2;
    *((v201 + v202 + &g_1 as &u8) as &i128) = 153387880915454273466632213759712784237;
    *((v201 + v202) as &i128) = 89226791122299952969891833516150519151;
    v2 = v202 + &g_10 as &u8;
    v203 = v0;
    v178 = *((&v0 as &char + 8) as &i128);
    if v203 != 0x8000000000000000 {
        v0 = v178;
    }
    v153 = v203;
    v154 = v0;
    memcpy(&v178, &v115, 592);
    v0 = clap_builder::builder::command::Command::arg(&v57, &v178);
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v91 = 0;
    v93 = 0;
    v57 = 0;
    v59 = 0;
    v60 = v177;
    v61 = 0;
    v62 = 0;
    v63 = v176;
    v64 = &g_1;
    v65 = v175;
    v66 = 0;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = &g_1;
    v92 = &g_1;
    v94 = &g_1;
    v95 = 0;
    v96 = 0x8000000000000000;
    v97 = v174;
    v98 = 0x8000000000000000;
    v100 = v173;
    v99 = v172;
    v101 = 9223372036854775809;
    v102 = v171;
    v103 = &anon.6b32b05e1d077617d275c65ea4c6ad52.9.llvm.10609332461339697138;
    v104 = &g_1;
    v105 = &anon.6b32b05e1d077617d275c65ea4c6ad52.9.llvm.10609332461339697138;
    v106 = &g_1;
    v107 = 0;
    v108 = 4785074604081263;
    v109 = 0;
    v110 = 3337;
    v178 = struct32 {
        field_0: &g_412410
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v115 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v178);
    v89 = v117;
    v87 = v115;
    memcpy(&v115, &v57, 592);
    v57 = 0;
    v58 = &g_1;
    v59 = 0;
    v57 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v204 = v58;
    v205 = v59;
    *((v204 + v205 + &g_10 as &u8) as &i128) = 154800227100185366614848765303383683872;
    *((v204 + v205 + &g_10 as &u8) as &i128) = 43067164058521312036699707128872192326;
    *((v204 + v205) as &i128) = 43113996147261277623275104809393943159;
    v59 = v205 + &g_21 as &u8;
    v206 = v57;
    v178 = *((&v57 as &char + 8) as &i128);
    if v206 != 0x8000000000000000 {
        v57 = v178;
    }
    v153 = v206;
    v154 = v57;
    memcpy(&v178, &v115, 589);
    v179 = &g_1;
    v180 = *((&v169 as &char + 1) as &i16);
    v57 = clap_builder::builder::command::Command::arg(&v0, &v178);
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
    v34 = 0;
    v36 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
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
    v32 = 0;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v44 = 9223372036854775809;
    v46 = &anon.6b32b05e1d077617d275c65ea4c6ad52.10.llvm.10609332461339697138;
    v47 = &g_1;
    v48 = &anon.6b32b05e1d077617d275c65ea4c6ad52.10.llvm.10609332461339697138;
    v49 = &g_1;
    v50 = 0;
    v51 = 0x11000000110000;
    v52 = 0;
    v53 = 3337;
    v178 = struct32 {
        field_0: &g_412410
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v115 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v178);
    v32 = v117;
    v30 = v115;
    memcpy(&v115, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_10);
    v207 = v1;
    v208 = v2;
    *((v207 + v208 + &g_1 as &u8) as &i128) = 92112832442316104222164052961234870816;
    *((v207 + v208) as &i128) = 153388003874467764175664957397195318631;
    v2 = v208 + &g_10 as &u8;
    v209 = v0;
    v178 = *((&v0 as &char + 8) as &i128);
    if v209 != 0x8000000000000000 {
        v0 = v178;
    }
    v153 = v209;
    v154 = v0;
    memcpy(&v178, &v115, 589);
    v179 = &g_1;
    v180 = *((&v169 as &char + 1) as &i16);
    v0 = clap_builder::builder::command::Command::arg(&v57, &v178);
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v89 = 0;
    v91 = 0;
    v93 = 0;
    v57 = 0;
    v59 = 0;
    v61 = 0;
    v62 = 0;
    v64 = &g_1;
    v66 = 0;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v92 = &g_1;
    v94 = &g_1;
    v95 = 0;
    v96 = 0x8000000000000000;
    v98 = 0x8000000000000000;
    v101 = 9223372036854775809;
    v103 = &anon.6b32b05e1d077617d275c65ea4c6ad52.11.llvm.10609332461339697138;
    v104 = &g_1;
    v105 = &anon.6b32b05e1d077617d275c65ea4c6ad52.11.llvm.10609332461339697138;
    v106 = &g_1;
    v107 = 0;
    v108 = 4785074604081266;
    v109 = 0;
    v110 = 3337;
    v115 = 0;
    v116 = &g_1;
    v117 = 0;
    v115 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_10);
    v210 = v116;
    v211 = v117;
    *((v210 + v211 + &g_1 as &u8) as &i128) = 133449582037243257106302875131315315488;
    *((v210 + v211) as &i128) = 146720742861183985313465367799625184623;
    v117 = v211 + &g_10 as &u8;
    v178 = *((&v115 as &char + 8) as &i128);
    if v96 != 0x8000000000000000 {
        v115 = v178;
    }
    v96 = v115;
    memcpy(&v115, &v57, 588);
    v169 = *((&v57 as &char + 589) as &i16);
    v170 = *((&v57 as &char + 591) as &i8);
    v168 = &g_1;
    v212 = v128;
    if v212 == *((&v125 as &char + 8) as &i64) {
        v126 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v213 = v127;
    v214 = v212 * &g_10;
    *((v213 + v214) as &&i64) = &anon.6b32b05e1d077617d275c65ea4c6ad52.11.llvm.10609332461339697138;
    *((v213 + v214 + &g_1 as &u8) as &&i64) = &g_1;
    v128 = v212 + &g_1 as &u8;
    memcpy(&v178, &v115, 592);
    v57 = clap_builder::builder::command::Command::arg(&v0, &v178);
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
    v34 = 0;
    v36 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
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
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v44 = 9223372036854775809;
    v46 = &anon.6b32b05e1d077617d275c65ea4c6ad52.12.llvm.10609332461339697138;
    v47 = &g_1;
    v48 = &anon.6b32b05e1d077617d275c65ea4c6ad52.12.llvm.10609332461339697138;
    v49 = &g_1;
    v50 = 0;
    v51 = 4785074604081274;
    v52 = 0;
    v53 = 3337;
    v115 = 0;
    v116 = &g_1;
    v117 = 0;
    v115 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v215 = v116;
    v216 = v117;
    *((v215 + v216 + &g_10 as &u8) as &i128) = 140132129261007763084871203607542636659;
    *((v215 + v216) as &i128) = 139737413289656226403140227931854236012;
    *((v215 + v216 + &g_20 as &u8) as &i16) = 25966;
    v117 = v216 + &g_21 as &u8;
    v178 = *((&v115 as &char + 8) as &i128);
    if v39 != 0x8000000000000000 {
        v115 = v178;
    }
    v39 = v115;
    memcpy(&v115, &v0, 588);
    v169 = *((&v0 as &char + 589) as &i16);
    v170 = *((&v0 as &char + 591) as &i8);
    v168 = &g_1;
    v217 = v128;
    if v217 == v126 {
        v126 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v218 = v127;
    v219 = v217 * &g_10;
    *((v218 + v219) as &&i64) = &anon.6b32b05e1d077617d275c65ea4c6ad52.12.llvm.10609332461339697138;
    *((v218 + v219 + &g_1 as &u8) as &&i64) = &g_1;
    v128 = v217 + &g_1 as &u8;
    memcpy(&v178, &v115, 592);
    v0 = clap_builder::builder::command::Command::arg(&v57, &v178);
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v89 = 0;
    v91 = 0;
    v93 = 0;
    v57 = 0;
    v59 = 0;
    v61 = 0;
    v62 = 0;
    v64 = &g_1;
    v66 = 0;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v92 = &g_1;
    v94 = &g_1;
    v95 = 0;
    v96 = 0x8000000000000000;
    v98 = 0x8000000000000000;
    v101 = 9223372036854775809;
    v103 = &anon.6b32b05e1d077617d275c65ea4c6ad52.13.llvm.10609332461339697138;
    v104 = &g_1;
    v105 = 0;
    v107 = 0;
    v108 = 0x11000000110000;
    v109 = 0;
    v110 = 769;
    clap_builder::builder::command::Command::arg(a0, &v0, &v57);
    return a0;
}
