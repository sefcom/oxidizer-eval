fn uu_csplit::uu_app(a0: u32) -> u64 {
    let v0: i3336;  // [sp-0xae8], Other Possible Types: struct712, Enum
    let v1: i64;  // [sp-0xae0]
    let v2: i64;  // [sp-0xad8]
    let v3: i128;  // [sp-0xad0]
    let v4: i64;  // [sp-0xac0]
    let v5: i64;  // [sp-0xab0]
    let v6: i128;  // [sp-0xaa8]
    let v7: i64;  // [sp-0xa98]
    let v8: i128;  // [sp-0xa90]
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
    let v32: i128;  // [bp-0x980]
    let v33: i64;  // [sp-0x970]
    let v34: i128;  // [sp-0x968]
    let v35: i64;  // [sp-0x958]
    let v36: i128;  // [sp-0x950]
    let v37: i64;  // [sp-0x940]
    let v38: i64;  // [sp-0x938]
    let v39: i192;  // [sp-0x930]
    let v40: i128;  // [sp-0x928]
    let v41: i64;  // [sp-0x918]
    let v42: i128;  // [sp-0x910]
    let v43: i128;  // [sp-0x900]
    let v44: i64;  // [sp-0x8f0]
    let v45: i128;  // [sp-0x8e8]
    let v46: i64;  // [sp-0x8d8]
    let v47: i64;  // [sp-0x8d0]
    let v48: i64;  // [sp-0x8c8]
    let v49: i64;  // [sp-0x8c0]
    let v50: i64;  // [sp-0x8b8]
    let v51: i64;  // [sp-0x8a8]
    let v52: i32;  // [sp-0x8a0]
    let v53: i16;  // [sp-0x89c]
    let v54: i64;  // [sp-0x888]
    let v55: i64;  // [sp-0x880]
    let v56: i64;  // [sp-0x818], Other Possible Types: struct24, Enum
    let v57: i64;  // [sp-0x810]
    let v58: i64;  // [sp-0x808]
    let v59: i64;  // [sp-0x7f0]
    let v60: i64;  // [sp-0x7e0]
    let v61: i64;  // [sp-0x7c8]
    let v62: i64;  // [sp-0x7b0]
    let v63: i64;  // [sp-0x7a8]
    let v64: i128;  // [sp-0x7a0]
    let v65: i64;  // [sp-0x790]
    let v66: i128;  // [sp-0x788]
    let v67: i64;  // [sp-0x778]
    let v68: i128;  // [sp-0x770]
    let v69: i64;  // [sp-0x760]
    let v70: i128;  // [sp-0x758]
    let v71: i64;  // [sp-0x748]
    let v72: i128;  // [sp-0x740]
    let v73: i64;  // [sp-0x730]
    let v74: i128;  // [sp-0x728]
    let v75: i64;  // [sp-0x718]
    let v76: i128;  // [sp-0x710]
    let v77: i64;  // [sp-0x700]
    let v78: i128;  // [sp-0x6f8]
    let v79: i64;  // [sp-0x6e8]
    let v80: i128;  // [sp-0x6e0]
    let v81: i64;  // [sp-0x6d0]
    let v82: i128;  // [sp-0x6c8]
    let v83: i64;  // [sp-0x6b8]
    let v84: i128;  // [sp-0x6b0]
    let v85: i64;  // [sp-0x6a0]
    let v86: i128;  // [sp-0x698]
    let v87: i64;  // [sp-0x688]
    let v88: i128;  // [sp-0x680]
    let v89: i64;  // [sp-0x670]
    let v90: i64;  // [sp-0x668]
    let v91: i64;  // [sp-0x660]
    let v92: i128;  // [sp-0x658]
    let v93: i64;  // [sp-0x648]
    let v94: i64;  // [sp-0x620]
    let v95: i64;  // [sp-0x608]
    let v96: i64;  // [sp-0x600]
    let v97: i64;  // [sp-0x5f8]
    let v98: i64;  // [sp-0x5e8]
    let v99: i128;  // [bp-0x5d8]
    let v100: i8;  // [sp-0x5cc]
    let v101: i16;  // [sp-0x5cb]
    let v102: i8;  // [sp-0x5c9]
    let v103: i192;  // [bp-0x5c8], Other Possible Types: struct712, Enum
    let v104: i64;  // [sp-0x5c0]
    let v105: i64;  // [sp-0x5b8]
    let v106: i128;  // [sp-0x5b0]
    let v107: i64;  // [sp-0x5a0]
    let v108: i64;  // [sp-0x590]
    let v109: i128;  // [sp-0x588]
    let v110: i64;  // [sp-0x578]
    let v111: i128;  // [sp-0x570]
    let v112: i64;  // [sp-0x560]
    let v113: i64;  // [sp-0x558]
    let v114: i128;  // [sp-0x550]
    let v115: i64;  // [sp-0x540]
    let v116: i128;  // [sp-0x538]
    let v117: i64;  // [sp-0x528]
    let v118: i128;  // [sp-0x520]
    let v119: i64;  // [sp-0x510]
    let v120: i128;  // [sp-0x508]
    let v121: i64;  // [sp-0x4f8]
    let v122: i128;  // [sp-0x4f0]
    let v123: i64;  // [sp-0x4e0]
    let v124: i128;  // [sp-0x4d8]
    let v125: i64;  // [sp-0x4c8]
    let v126: i128;  // [sp-0x4c0]
    let v127: i64;  // [sp-0x4b0]
    let v128: i128;  // [sp-0x4a8]
    let v129: struct16;  // [sp-0x4a0]
    let v130: i64;  // [sp-0x498]
    let v131: i128;  // [bp-0x490]
    let v132: i64;  // [sp-0x480]
    let v133: i128;  // [bp-0x478]
    let v134: i128;  // [bp-0x470]
    let v135: i64;  // [sp-0x468]
    let v136: i64;  // [bp-0x460]
    let v137: i64;  // [sp-0x450]
    let v138: i128;  // [sp-0x448]
    let v139: i64;  // [sp-0x438]
    let v140: i128;  // [sp-0x430]
    let v141: i64;  // [sp-0x420]
    let v142: i64;  // [sp-0x418]
    let v143: i64;  // [sp-0x410]
    let v144: i128;  // [sp-0x408]
    let v145: i64;  // [sp-0x3f8]
    let v146: i128;  // [sp-0x3f0]
    let v147: i128;  // [sp-0x3e0]
    let v148: i64;  // [sp-0x3d0]
    let v149: i128;  // [sp-0x3c8]
    let v150: i64;  // [sp-0x3b8]
    let v151: i64;  // [sp-0x3b0]
    let v152: i64;  // [sp-0x3a8]
    let v153: i64;  // [sp-0x3a0]
    let v154: i64;  // [sp-0x398]
    let v155: i64;  // [sp-0x388]
    let v156: i32;  // [sp-0x380]
    let v157: i16;  // [sp-0x37c]
    let v158: i64;  // [sp-0x30c]
    let v159: i32;  // [sp-0x304]
    let v160: i8;  // [bp-0x2f8]
    let v161: i8;  // [bp-0x2e8]
    let v162: i8;  // [bp-0x2d8]
    let v163: i8;  // [bp-0x2c8]
    let v164: i8;  // [bp-0x2b8]
    let v165: i8;  // [bp-0x2a8]
    let v166: i8;  // [bp-0x298]
    let v167: i128;  // [bp-0x288], Other Possible Types: struct32
    let v168: i8;  // [sp-0x3c]
    let v169: i16;  // [sp-0x3b]
    let v170: i8;  // [sp-0x39]
    let v172: i64;  // rbx
    let v173: i64;  // rax
    let v174: i64;  // rcx
    let v175: i64;  // rbx
    let v176: i64;  // rax
    let v177: i64;  // rcx
    let v178: i64;  // rbx
    let v179: i64;  // rax
    let v180: i64;  // rcx
    let v181: i64;  // rax
    let v182: i64;  // rcx
    let v183: i64;  // rax
    let v184: i64;  // rcx
    let v185: i64;  // rbx
    let v186: i64;  // rbx
    let v188: i64;  // rax
    let v189: i64;  // rcx
    let v190: i64;  // rax
    let v191: i64;  // rcx
    let v192: i64;  // rbx
    let v193: i64;  // rax
    let v194: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v0 = clap_builder::builder::command::Command::new(g_6b2c00, g_6b2c08);
    v54 = &g_467c3f;
    v55 = &g_1;
    memcpy(&v103, &v0, 712);
    v0 = clap_builder::builder::command::Command::about(&v103, &g_467c45, 54);
    v56 = uucore::format_usage(&g_467c7b, &g_11);
    v172 = v56;
    if v172 != 0x8000000000000000 {
        v103 = *((&v56 as &char + 8) as &i128);
    }
    v41 = v172;
    v42 = v103;
    memcpy(&v103, &v0, 700);
    v158 = 584115552392 | *((&v0 as &char + 700) as &i64);
    v159 = *((&v0 as &char + 708) as &i32);
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
    v3 = v166;
    v4 = 0;
    v5 = 0;
    v6 = v165;
    v7 = &g_1;
    v8 = v164;
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
    v40 = v163;
    v41 = 0x8000000000000000;
    v42 = v161;
    v43 = v162;
    v44 = 9223372036854775809;
    v45 = v160;
    v46 = &g_467bca;
    v47 = &g_1;
    v48 = &g_467bca;
    v49 = &g_1;
    v50 = 0;
    v51 = 4785074604081250;
    v52 = 0;
    v53 = 3337;
    v167 = struct32 {
        field_0: &g_467c99
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v56 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v167);
    v32 = v58;
    v30 = v56;
    memcpy(&v56, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v173 = v1;
    v174 = v2;
    *((v173 + v174 + &g_1 as &u8) as &i128) = 63995715934213639579744396000727422017;
    *((v173 + v174) as &i128) = 102777931884195823138735622244513706869;
    *((v173 + v174 + &g_11 as &u8) as &i16) = 25650;
    v2 = v174 + &g_21 as &u8;
    v175 = v0;
    v167 = *((&v0 as &char + 8) as &i128);
    if v175 != 0x8000000000000000 {
        v0 = v167;
    }
    v91 = v175;
    v92 = v0;
    memcpy(&v167, &v56, 592);
    v0 = clap_builder::builder::command::Command::arg(&v103, &v167);
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v131 = 0;
    v133 = 0;
    v138 = 0;
    v140 = 0;
    v103 = 0;
    v105 = 0;
    v106 = v166;
    v107 = 0;
    v108 = 0;
    v109 = v165;
    v110 = &g_1;
    v111 = v164;
    v112 = 0;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v136 = 0;
    v137 = &g_1;
    v139 = &g_1;
    v141 = &g_1;
    v142 = 0;
    v143 = 0x8000000000000000;
    v144 = v163;
    v145 = 0x8000000000000000;
    v147 = v162;
    v146 = v161;
    v148 = 9223372036854775809;
    v149 = v160;
    v150 = &g_467bc4;
    v151 = &g_1;
    v152 = &g_467bc4;
    v153 = &g_1;
    v154 = 0;
    v155 = 4785074604081254;
    v156 = 0;
    v157 = 3337;
    v167 = struct32 {
        field_0: &g_467cc1
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v56 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v167);
    v136 = v58;
    v134 = v56;
    memcpy(&v56, &v103, 592);
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v103 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v176 = v104;
    v177 = v105;
    *((v176 + v177 + &g_1 as &u8) as &i128) = 52465404447714030143524492020506585376;
    *((v176 + v177) as &i128) = 134856675234603868256765194005647815541;
    v105 = v177 + &g_11 as &u8;
    v178 = v103;
    v167 = *((&v103 as &char + 8) as &i128);
    if v178 != 0x8000000000000000 {
        v103 = v167;
    }
    v91 = v178;
    v92 = v103;
    memcpy(&v167, &v56, 592);
    v103 = clap_builder::builder::command::Command::arg(&v0, &v167);
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
    v46 = &g_467ba4;
    v47 = &g_1;
    v48 = &g_467ba4;
    v49 = &g_1;
    v50 = 0;
    v51 = 4785074604081259;
    v52 = 0;
    v53 = 3337;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v56 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 36);
    v179 = v57;
    v180 = v58;
    *((v179 + v180 + &g_1 as &u8) as &i128) = 152057071288789687183521826137221460084;
    *((v179 + v180) as &i128) = 156096677533938192324851401530749775716;
    *((v179 + v180 + &g_11 as &u8) as &i32) = 1936879474;
    v58 = v180 + 36;
    v167 = *((&v56 as &char + 8) as &i128);
    if v39 != 0x8000000000000000 {
        v56 = v167;
    }
    v39 = v56;
    memcpy(&v56, &v0, 588);
    v101 = *((&v0 as &char + 589) as &i16);
    v102 = *((&v0 as &char + 591) as &i8);
    v100 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v103, &v56);
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v131 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v140 = 0;
    v103 = 0;
    v105 = 0;
    v107 = 0;
    v108 = 0;
    v110 = &g_1;
    v112 = 0;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v139 = &g_1;
    v141 = &g_1;
    v142 = 0;
    v143 = 0x8000000000000000;
    v145 = 0x8000000000000000;
    v148 = 9223372036854775809;
    v150 = &g_459a00;
    v151 = &g_1;
    v152 = &g_459a00;
    v153 = &g_1;
    v154 = 0;
    v155 = 0x11000000110000;
    v156 = 0;
    v157 = 3337;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v56 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 35);
    v181 = v57;
    v182 = v58;
    *((v181 + v182 + &g_1 as &u8) as &i128) = 112092629286955658422887494979147559781;
    *((v181 + v182) as &i128) = 146762463773409560427601769133744616819;
    *((v181 + v182 + &g_11 as &u8) as &i32) = 1314014548;
    v58 = v182 + 35;
    v167 = *((&v56 as &char + 8) as &i128);
    if v143 != 0x8000000000000000 {
        v56 = v167;
    }
    v143 = v56;
    memcpy(&v56, &v103, 588);
    v101 = *((&v103 as &char + 589) as &i16);
    v102 = *((&v103 as &char + 591) as &i8);
    v100 = &g_1;
    v103 = clap_builder::builder::command::Command::arg(&v0, &v56);
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
    v3 = v166;
    v4 = 0;
    v5 = 0;
    v6 = v165;
    v7 = &g_1;
    v8 = v164;
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
    v40 = v163;
    v41 = 0x8000000000000000;
    v43 = v162;
    v42 = v161;
    v44 = 9223372036854775809;
    v45 = v160;
    v46 = &g_467bd7;
    v47 = &g_1;
    v48 = &g_467bd7;
    v49 = &g_1;
    v50 = 0;
    v51 = 4785074604081262;
    v52 = 0;
    v53 = 3337;
    v167 = struct32 {
        field_0: &g_467d28
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v56 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v167);
    v32 = v58;
    v30 = v56;
    memcpy(&v56, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 43);
    v183 = v1;
    v184 = v2;
    *((v183 + v184 + &g_11 as &u8) as &i128) = 66629630898849392520333711244992410729;
    *((v183 + v184 + &g_1 as &u8) as &i128) = 139737434757081495821925955343753765485;
    *((v183 + v184) as &i128) = 156091485152582963277238129185482175349;
    v2 = v184 + 43;
    v185 = v0;
    v167 = *((&v0 as &char + 8) as &i128);
    if v185 != 0x8000000000000000 {
        v0 = v167;
    }
    v91 = v185;
    v92 = v0;
    memcpy(&v167, &v56, 592);
    v0 = clap_builder::builder::command::Command::arg(&v103, &v167);
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v131 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v140 = 0;
    v103 = 0;
    v105 = 0;
    v107 = 0;
    v108 = 0;
    v110 = &g_1;
    v112 = 0;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v139 = &g_1;
    v141 = &g_1;
    v142 = 0;
    v143 = 0x8000000000000000;
    v145 = 0x8000000000000000;
    v148 = 9223372036854775809;
    v150 = &g_467bae;
    v151 = &g_1;
    v152 = &g_467bae;
    v153 = &g_1;
    v154 = 0;
    v155 = 4785074604081267;
    v156 = 0;
    v157 = 3337;
    v186 = v131;
    v188 = &g_1;
    if v186 == *((&v128 as &char + 8) as &i64) {
        v129 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v188 = v130;
    }
    v189 = v186 * &g_1;
    *((v188 + v189 * &g_1) as &&i64) = &g_467d59;
    *((v188 + v189 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    *((v188 + v189 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    v131 = v186 + &g_1 as &u8;
    memcpy(&v56, &v103, 592);
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v103 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 40);
    v190 = v104;
    v191 = v105;
    *((v190 + v191 + &g_1 as &u8) as &i128) = 140099212100906583382809372894321407086;
    *((v190 + v191) as &i128) = 156098030988018225907265833566996557668;
    *((v190 + v191 + &g_11 as &u8) as &i64) = 8315186880331146604;
    v105 = v191 + 40;
    v192 = v103;
    v167 = *((&v103 as &char + 8) as &i128);
    if v192 != 0x8000000000000000 {
        v103 = v167;
    }
    v91 = v192;
    v92 = v103;
    memcpy(&v167, &v56, 588);
    v169 = v101;
    v170 = v102;
    v168 = &g_1;
    v103 = clap_builder::builder::command::Command::arg(&v0, &v167);
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
    v46 = &g_467bb3;
    v47 = &g_11;
    v48 = &g_467bb3;
    v49 = &g_11;
    v50 = 0;
    v51 = 4785074604081274;
    v52 = 0;
    v53 = 3337;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v56 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v193 = v57;
    v194 = v58;
    *((v193 + v194 + &g_1 as &u8) as &i128) = 153387840348778307941469791082818139248;
    *((v193 + v194) as &i128) = 154800200163854474387741719692342814066;
    v58 = v194 + &g_11 as &u8;
    v167 = *((&v56 as &char + 8) as &i128);
    if v39 != 0x8000000000000000 {
        v56 = v167;
    }
    v39 = v56;
    memcpy(&v56, &v0, 588);
    v101 = *((&v0 as &char + 589) as &i16);
    v102 = *((&v0 as &char + 591) as &i8);
    v100 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v103, &v56);
    v64 = 0;
    v66 = 0;
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
    v88 = 0;
    v56 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = &g_1;
    v62 = 0;
    v63 = &g_1;
    v65 = &g_1;
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
    v87 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v93 = 0x8000000000000000;
    v94 = 9223372036854775809;
    v95 = &g_45d1ac;
    v96 = &g_1;
    v97 = 0;
    v98 = 0;
    v99 = 0x309000000050011000000110000;
    v103 = clap_builder::builder::command::Command::arg(&v0, &v56);
    v64 = 0;
    v66 = 0;
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
    v88 = 0;
    v56 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = &g_1;
    v62 = 0;
    v63 = &g_1;
    v65 = &g_1;
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
    v87 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v93 = 0x8000000000000000;
    v94 = 9223372036854775809;
    v95 = &g_467da0;
    v96 = &g_1;
    v97 = 0;
    v98 = 0;
    v99 = 0xd01000000050011000000110000;
    v0 = clap_builder::builder::command::Command::arg(&v103, &v56);
    clap_builder::builder::command::Command::after_help(a0, &v0, &g_467da7, 132);
    return a0;
}
