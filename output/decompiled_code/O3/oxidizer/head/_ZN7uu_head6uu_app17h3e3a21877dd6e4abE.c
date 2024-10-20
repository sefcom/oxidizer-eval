fn uu_head::uu_app(a0: u32) -> u64 {
    let v0: i128;  // [sp-0xae8], Other Possible Types: struct712, Enum
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
    let v12: struct16;  // [sp-0xa68]
    let v13: i64;  // [sp-0xa60]
    let v14: i128;  // [bp-0xa58]
    let v15: i64;  // [sp-0xa48]
    let v16: i128;  // [sp-0xa40]
    let v17: i64;  // [sp-0xa30]
    let v18: i128;  // [sp-0xa28]
    let v19: i64;  // [sp-0xa18]
    let v20: i128;  // [sp-0xa10]
    let v21: i64;  // [sp-0xa00]
    let v22: i128;  // [sp-0x9f8]
    let v23: i64;  // [sp-0x9e8]
    let v24: i128;  // [sp-0x9e0]
    let v25: i64;  // [sp-0x9d0]
    let v26: i128;  // [sp-0x9c8]
    let v27: struct16;  // [sp-0x9c0]
    let v28: i64;  // [sp-0x9b8]
    let v29: i128;  // [bp-0x9b0]
    let v30: i64;  // [sp-0x9a0]
    let v31: i128;  // [bp-0x998]
    let v32: i128;  // [bp-0x990]
    let v33: i64;  // [sp-0x988]
    let v34: i128;  // [bp-0x980]
    let v35: i64;  // [sp-0x970]
    let v36: i128;  // [sp-0x968]
    let v37: i64;  // [sp-0x958]
    let v38: i128;  // [sp-0x950]
    let v39: i64;  // [sp-0x940]
    let v40: i64;  // [sp-0x938]
    let v41: i64;  // [sp-0x930]
    let v42: i128;  // [sp-0x928]
    let v43: i64;  // [sp-0x918]
    let v44: i128;  // [sp-0x910]
    let v45: i128;  // [sp-0x900]
    let v46: i64;  // [sp-0x8f0]
    let v47: i128;  // [sp-0x8e8]
    let v48: i64;  // [sp-0x8d8]
    let v49: i64;  // [sp-0x8d0]
    let v50: i64;  // [sp-0x8c8]
    let v51: i64;  // [sp-0x8c0]
    let v52: i64;  // [sp-0x8b8]
    let v53: i64;  // [sp-0x8a8]
    let v54: i32;  // [sp-0x8a0]
    let v55: i16;  // [sp-0x89c]
    let v56: i64;  // [sp-0x888]
    let v57: i64;  // [sp-0x880]
    let v58: i64;  // [bp-0x818], Other Possible Types: struct712, Enum
    let v59: i64;  // [sp-0x810]
    let v60: i64;  // [sp-0x808]
    let v61: i128;  // [sp-0x800]
    let v62: i64;  // [sp-0x7f0]
    let v63: i64;  // [sp-0x7e0]
    let v64: i128;  // [sp-0x7d8]
    let v65: i64;  // [sp-0x7c8]
    let v66: i128;  // [sp-0x7c0]
    let v67: i64;  // [sp-0x7b0]
    let v68: i64;  // [sp-0x7a8]
    let v69: i128;  // [sp-0x7a0]
    let v70: struct16;  // [sp-0x798]
    let v71: i64;  // [sp-0x790]
    let v72: i128;  // [bp-0x788]
    let v73: i64;  // [sp-0x778]
    let v74: i128;  // [sp-0x770]
    let v75: i64;  // [sp-0x760]
    let v76: i128;  // [sp-0x758]
    let v77: i64;  // [sp-0x748]
    let v78: i128;  // [sp-0x740]
    let v79: i64;  // [sp-0x730]
    let v80: i128;  // [sp-0x728]
    let v81: i64;  // [sp-0x718]
    let v82: i128;  // [sp-0x710]
    let v83: i64;  // [sp-0x700]
    let v84: i128;  // [sp-0x6f8]
    let v85: i64;  // [sp-0x6e8]
    let v86: i128;  // [sp-0x6e0]
    let v87: i64;  // [sp-0x6d0]
    let v88: i128;  // [bp-0x6c8]
    let v89: i128;  // [bp-0x6c0]
    let v90: i64;  // [sp-0x6b8]
    let v91: i128;  // [bp-0x6b0]
    let v92: i64;  // [sp-0x6a0]
    let v93: i128;  // [sp-0x698]
    let v94: i64;  // [sp-0x688]
    let v95: i128;  // [sp-0x680]
    let v96: i64;  // [sp-0x670]
    let v97: i64;  // [sp-0x668]
    let v98: i192;  // [sp-0x660]
    let v99: i128;  // [sp-0x658]
    let v100: i64;  // [sp-0x648]
    let v101: i128;  // [sp-0x640]
    let v102: i128;  // [sp-0x630]
    let v103: i64;  // [sp-0x620]
    let v104: i128;  // [sp-0x618]
    let v105: i64;  // [sp-0x608]
    let v106: i64;  // [sp-0x600]
    let v107: i64;  // [sp-0x5f8]
    let v108: i64;  // [sp-0x5f0]
    let v109: i64;  // [sp-0x5e8]
    let v110: i64;  // [sp-0x5d8]
    let v111: i32;  // [sp-0x5d0]
    let v112: i16;  // [sp-0x5cc]
    let v113: i64;  // [sp-0x55c]
    let v114: i32;  // [sp-0x554]
    let v115: i128;  // [sp-0x548], Other Possible Types: struct24, Enum
    let v116: i64;  // [sp-0x540]
    let v117: i64;  // [sp-0x538]
    let v118: i128;  // [bp-0x4c8], Other Possible Types: struct16
    let v119: i64;  // [sp-0x4b8]
    let v120: i64;  // [sp-0x390]
    let v121: i128;  // [sp-0x388]
    let v122: i32;  // [sp-0x300]
    let v123: i32;  // [bp-0x2fc]
    let v124: i16;  // [sp-0x2fb]
    let v125: i8;  // [sp-0x2f9]
    let v126: i8;  // [bp-0x2f8]
    let v127: i8;  // [bp-0x2e8]
    let v128: i8;  // [bp-0x2d8]
    let v129: i8;  // [bp-0x2c8]
    let v130: i8;  // [bp-0x2b8]
    let v131: i8;  // [bp-0x2a8]
    let v132: i8;  // [bp-0x298]
    let v133: i128;  // [bp-0x288], Other Possible Types: struct32
    let v134: i8;  // [sp-0x3c]
    let v135: i16;  // [sp-0x3b]
    let v136: i8;  // [sp-0x39]
    let v138: i64;  // rbx
    let v139: i64;  // rax
    let v140: i64;  // rcx
    let v141: i64;  // r14
    let v142: i64;  // rsi
    let v143: i64;  // rax
    let v144: i64;  // rcx
    let v145: i64;  // rcx
    let v146: i64;  // rdx
    let v147: i64;  // rbx
    let v148: i64;  // rsi
    let v149: i64;  // rax
    let v150: i64;  // rcx
    let v151: i64;  // rbx
    let v153: i64;  // rax
    let v154: i64;  // rcx
    let v155: i64;  // rax
    let v156: i64;  // rcx
    let v157: i64;  // rbx
    let v158: i64;  // rsi
    let v159: i64;  // rax
    let v160: i64;  // rcx
    let v161: i64;  // rax
    let v162: i64;  // rcx
    let v163: i64;  // rsi
    let v164: i64;  // rsi
    let v165: i64;  // rax
    let v166: i64;  // rcx
    let v167: i64;  // rbx
    let v169: i64;  // rax
    let v170: i64;  // rcx
    let v171: i64;  // rax
    let v172: i64;  // rcx
    let v173: i64;  // r14
    let v174: i64;  // rax
    let v175: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v0 = clap_builder::builder::command::Command::new(g_4f49e8, g_4f49f0);
    v56 = &g_419ba3;
    v57 = &g_1;
    memcpy(&v58, &v0, 712);
    v0 = clap_builder::builder::command::Command::about(&v58, &g_419ba9, 265);
    v115 = uucore::format_usage(&g_419cb2, &g_11);
    v138 = v115;
    if v138 != 0x8000000000000000 {
        v58 = *((&v115 as &char + 8) as &i128);
    }
    v43 = v138;
    v44 = v58;
    memcpy(&v58, &v0, 700);
    v113 = 549755814016 | *((&v0 as &char + 700) as &i64);
    v114 = *((&v0 as &char + 708) as &i32);
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v29 = 0;
    v31 = 0;
    v36 = 0;
    v38 = 0;
    v0 = 0;
    v2 = 0;
    v3 = v132;
    v4 = 0;
    v5 = 0;
    v6 = v131;
    v7 = &g_1;
    v8 = v130;
    v9 = 0;
    v10 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = &g_1;
    v37 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v42 = v129;
    v43 = 0x8000000000000000;
    v44 = v127;
    v45 = v128;
    v46 = 9223372036854775809;
    v47 = v126;
    v48 = &g_419cc8;
    v49 = &g_1;
    v50 = &g_419ccd;
    v51 = &g_1;
    v52 = 0;
    v53 = 4785074604081251;
    v54 = 0;
    v55 = 3337;
    v133 = struct32 {
        field_0: &g_419cd2
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v115 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v133);
    v34 = v117;
    v32 = v115;
    memcpy(&v115, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_5c);
    v139 = v1;
    v140 = v2;
    *((v139 + v140 + &g_51 as &u8) as &i128) = 134814933379308942337948635397360936308;
    *((v139 + v140 + &g_41 as &u8) as &i128) = 147712801546794614810465386062392025452;
    *((v139 + v140 + &g_31 as &u8) as &i128) = 43061836418939266988144773050049785449;
    *((v139 + v140 + &g_21 as &u8) as &i128) = 152114181302907279501470609470000557088;
    *((v139 + v140 + &g_11 as &u8) as &i128) = 134794381774706523747755390277240889448;
    *((v139 + v140 + &g_1 as &u8) as &i128) = 132099275468357533984784021488524940622;
    *((v139 + v140) as &i128) = 43139943842441683957281807327986020976;
    v2 = v140 + &g_5c as &u8;
    v141 = v0;
    v133 = *((&v0 as &char + 8) as &i128);
    if v141 != 0x8000000000000000 {
        v0 = v133;
    }
    v120 = v141;
    v121 = v0;
    memcpy(&v0, &v115, 592);
    v142 = v14;
    if *((&v11 as &char + 8) as &i64) - v142 <= 1 {
        v12 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v142, &g_1);
        v142 = v14;
    }
    v143 = v13;
    v144 = v142 * &g_1;
    *((v143 + v144) as &&i64) = &g_419cc8;
    *((v143 + v144 + &g_1 as &u8) as &&i64) = &g_1;
    *((v143 + v144 + &g_1 as &u8) as &&i64) = &g_419d43;
    *((v143 + v144 + &g_11 as &u8) as &&i64) = &g_1;
    v14 = v142 + &g_1 as &u8;
    memcpy(&v115, &v0, 584);
    v122 = v54 | &g_11;
    v123 = *((&v0 as &char + 588) as &i32);
    v0 = clap_builder::builder::command::Command::arg(&v58, &v115);
    v69 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v88 = 0;
    v93 = 0;
    v95 = 0;
    v58 = 0;
    v60 = 0;
    v61 = v132;
    v62 = 0;
    v63 = 0;
    v64 = v131;
    v65 = &g_1;
    v66 = v130;
    v67 = 0;
    v68 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v90 = &g_1;
    v91 = 0;
    v92 = &g_1;
    v94 = &g_1;
    v96 = &g_1;
    v97 = 0;
    v98 = 0x8000000000000000;
    v99 = v129;
    v100 = 0x8000000000000000;
    v102 = v128;
    v101 = v127;
    v103 = 9223372036854775809;
    v104 = v126;
    v105 = &g_419d43;
    v106 = &g_1;
    v107 = &g_419d48;
    v108 = &g_1;
    v109 = 0;
    v110 = 4785074604081262;
    v111 = 0;
    v112 = 3337;
    v133 = struct32 {
        field_0: &g_419cd2
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v115 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v133);
    v91 = v117;
    v89 = v115;
    memcpy(&v115, &v58, 592);
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v58 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_6f);
    v145 = v59;
    v146 = v60;
    *((v145 + v146 + &g_5c as &u8) as &i128) = 132099275468357533984782315089428305230;
    *((v145 + v146 + &g_41 as &u8) as &i128) = 13896926589138928132464013895641623660;
    *((v145 + v146 + &g_31 as &u8) as &i128) = 129103630597856127391829326909531450985;
    *((v145 + v146 + &g_21 as &u8) as &i128) = 133428509463807101019945338089453009712;
    *((v145 + v146 + &g_11 as &u8) as &i128) = 65300687199095415600244678013376995428;
    *((v145 + v146 + &g_1 as &u8) as &i128) = 129461899478772011532138275201851675982;
    *((v145 + v146) as &i128) = 43139943842441683957281807327986020976;
    *((v145 + v146 + 110) as &i64) = 7308332182666765153;
    v60 = v146 + &g_6f as &u8;
    v147 = v58;
    v133 = *((&v58 as &char + 8) as &i128);
    if v147 != 0x8000000000000000 {
        v58 = v133;
    }
    v120 = v147;
    v121 = v58;
    memcpy(&v58, &v115, 592);
    v148 = v72;
    if *((&v69 as &char + 8) as &i64) - v148 <= 1 {
        v70 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v148, &g_1);
        v148 = v72;
    }
    v149 = v71;
    v150 = v148 * &g_1;
    *((v149 + v150) as &&i64) = &g_419d43;
    *((v149 + v150 + &g_1 as &u8) as &&i64) = &g_1;
    *((v149 + v150 + &g_1 as &u8) as &&i64) = &g_419cc8;
    *((v149 + v150 + &g_11 as &u8) as &&i64) = &g_1;
    v72 = v148 + &g_1 as &u8;
    memcpy(&v115, &v58, 584);
    v122 = v111 | &g_11;
    v123 = v112;
    v58 = clap_builder::builder::command::Command::arg(&v0, &v115);
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v29 = 0;
    v31 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = 9223372036854775809;
    v48 = &g_419dc3;
    v49 = &g_1;
    v50 = &g_419dc8;
    v51 = &g_1;
    v52 = 0;
    v53 = 4785074604081265;
    v54 = 0;
    v55 = 3337;
    v151 = v29;
    v153 = &g_1;
    if v151 == *((&v26 as &char + 8) as &i64) {
        v27 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v153 = v28;
    }
    v154 = v151 * &g_1;
    *((v153 + v154 * &g_1) as &&i64) = &g_419dcd;
    *((v153 + v154 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    *((v153 + v154 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    v29 = v151 + &g_1 as &u8;
    memcpy(&v115, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v155 = v1;
    v156 = v2;
    *((v155 + v156 + &g_1 as &u8) as &i128) = 43061916698630228970058465821383160421;
    *((v155 + v156) as &i128) = 133428509146912612987377801750270862702;
    *((v155 + v156 + &g_11 as &u8) as &i64) = 8315172552236361068;
    v2 = v156 + &g_21 as &u8;
    v157 = v0;
    v133 = *((&v0 as &char + 8) as &i128);
    if v157 != 0x8000000000000000 {
        v0 = v133;
    }
    v120 = v157;
    v121 = v0;
    memcpy(&v0, &v115, 592);
    v158 = v14;
    if *((&v11 as &char + 8) as &i64) - v158 <= 1 {
        v12 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v158, &g_1);
        v158 = v14;
    }
    v159 = v13;
    v160 = v158 * &g_1;
    *((v159 + v160) as &&i64) = &g_419df8;
    *((v159 + v160 + &g_1 as &u8) as &&i64) = &g_1;
    *((v159 + v160 + &g_1 as &u8) as &&i64) = &g_419dc3;
    *((v159 + v160 + &g_11 as &u8) as &&i64) = &g_1;
    v14 = v158 + &g_1 as &u8;
    memcpy(&v115, &v0, 588);
    v124 = *((&v0 as &char + 589) as &i16);
    v125 = *((&v0 as &char + 591) as &i8);
    v123 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v58, &v115);
    v69 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v88 = 0;
    v91 = 0;
    v93 = 0;
    v95 = 0;
    v58 = 0;
    v60 = 0;
    v62 = 0;
    v63 = 0;
    v65 = &g_1;
    v67 = 0;
    v68 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v90 = &g_1;
    v92 = &g_1;
    v94 = &g_1;
    v96 = &g_1;
    v97 = 0;
    v98 = 0x8000000000000000;
    v100 = 0x8000000000000000;
    v103 = 9223372036854775809;
    v105 = &g_419df8;
    v106 = &g_1;
    v107 = &g_419dff;
    v108 = &g_1;
    v109 = 0;
    v110 = 4785074604081270;
    v111 = 0;
    v112 = 3337;
    v115 = 0;
    v116 = &g_1;
    v117 = 0;
    v115 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v161 = v116;
    v162 = v117;
    *((v161 + v162 + &g_1 as &u8) as &i128) = 134814933379307785506979812457506301284;
    *((v161 + v162) as &i128) = 129461649515782578431256506077579537505;
    *((v161 + v162 + &g_11 as &u8) as &i64) = 8315172552236361068;
    v117 = v162 + &g_21 as &u8;
    v133 = *((&v115 as &char + 8) as &i128);
    if v98 != 0x8000000000000000 {
        v115 = v133;
    }
    v98 = v115;
    memcpy(&v115, &v58, 592);
    v163 = v119;
    if v118 - v163 > 1 {
        v164 = v163;
    } else {
        v118 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v163, &g_1);
        v164 = v119;
    }
    v165 = *((&v118 as &char + 8) as &i64);
    v166 = v164 * &g_1;
    *((v165 + v166) as &&i64) = &g_419dc3;
    *((v165 + v166 + &g_1 as &u8) as &&i64) = &g_1;
    *((v165 + v166 + &g_1 as &u8) as &&i64) = &g_419df8;
    *((v165 + v166 + &g_11 as &u8) as &&i64) = &g_1;
    v119 = v164 + &g_1 as &u8;
    memcpy(&v133, &v115, 588);
    v135 = v124;
    v136 = v125;
    v134 = &g_1;
    v58 = clap_builder::builder::command::Command::arg(&v0, &v133);
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v29 = 0;
    v31 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = 9223372036854775809;
    v48 = &g_419e2c;
    v49 = &g_11;
    v50 = &g_419e3f;
    v51 = &g_11;
    v52 = 0;
    v53 = 0x11000000110000;
    v54 = 0;
    v55 = 3337;
    v167 = v29;
    v169 = &g_1;
    if v167 == *((&v26 as &char + 8) as &i64) {
        v27 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v169 = v28;
    }
    v170 = v167 * &g_1;
    *((v169 + v170 * &g_1) as &&i64) = &g_419e51;
    *((v169 + v170 * &g_1 + &g_1 as &u8) as &&i64) = &g_11;
    *((v169 + v170 * &g_1 + &g_1 as &u8) as &i8) = 0;
    v29 = v167 + &g_1 as &u8;
    memcpy(&v115, &v0, 584);
    v122 = v54 | &g_1;
    *(&v123 as &unsigned long) = -0x100 & *((&v0 as &char + 588) as &i32) | &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v58, &v115);
    v69 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v88 = 0;
    v91 = 0;
    v93 = 0;
    v95 = 0;
    v58 = 0;
    v60 = 0;
    v62 = 0;
    v63 = 0;
    v65 = &g_1;
    v67 = 0;
    v68 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v90 = &g_1;
    v92 = &g_1;
    v94 = &g_1;
    v96 = &g_1;
    v97 = 0;
    v98 = 0x8000000000000000;
    v100 = 0x8000000000000000;
    v103 = 9223372036854775809;
    v105 = &g_410f14;
    v106 = &g_1;
    v107 = &g_419e64;
    v108 = &g_1;
    v109 = 0;
    v110 = 4785074604081274;
    v111 = 0;
    v112 = 3337;
    v115 = 0;
    v116 = &g_1;
    v117 = 0;
    v115 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v171 = v116;
    v172 = v117;
    *((v171 + v172 + &g_1 as &u8) as &i128) = 140132129261007763084871203607542636659;
    *((v171 + v172) as &i128) = 139737413289656226403140227931854236012;
    *((v171 + v172 + &g_11 as &u8) as &i16) = 25966;
    v117 = v172 + &g_21 as &u8;
    v133 = *((&v115 as &char + 8) as &i128);
    if v98 != 0x8000000000000000 {
        v115 = v133;
    }
    v98 = v115;
    memcpy(&v115, &v58, 592);
    v173 = v119;
    if v173 == v118 {
        v118 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v174 = *((&v118 as &char + 8) as &i64);
    v175 = v173 * &g_1;
    *((v174 + v175) as &&i64) = &g_410f14;
    *((v174 + v175 + &g_1 as &u8) as &&i64) = &g_1;
    v119 = v173 + &g_1 as &u8;
    memcpy(&v133, &v115, 588);
    v135 = v124;
    v136 = v125;
    v134 = &g_1;
    v58 = clap_builder::builder::command::Command::arg(&v0, &v133);
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v29 = 0;
    v31 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v39 = &g_1;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = 0x8000000000000000;
    v46 = 9223372036854775809;
    v48 = &g_410f68;
    v49 = &g_1;
    v50 = 0;
    v52 = 0;
    v53 = 0x11000000110000;
    v54 = 0;
    v55 = 769;
    clap_builder::builder::command::Command::arg(a0, &v58, &v0);
    return a0;
}
