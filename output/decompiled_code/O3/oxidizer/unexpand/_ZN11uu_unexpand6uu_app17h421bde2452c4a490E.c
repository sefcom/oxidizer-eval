fn uu_unexpand::uu_app(a0: u32) -> u64 {
    let v0: i128;  // [bp-0x838], Other Possible Types: struct32
    let v1: i192;  // [sp-0x818], Other Possible Types: Enum, struct24
    let v2: i64;  // [sp-0x810]
    let v3: i64;  // [sp-0x808]
    let v4: i64;  // [sp-0x7f0]
    let v5: i64;  // [sp-0x7e0]
    let v6: i64;  // [sp-0x7c8]
    let v7: i64;  // [sp-0x7b0]
    let v8: i64;  // [sp-0x7a8]
    let v9: i128;  // [sp-0x7a0]
    let v10: i64;  // [sp-0x790]
    let v11: i128;  // [sp-0x788]
    let v12: i64;  // [sp-0x778]
    let v13: i128;  // [sp-0x770]
    let v14: i64;  // [sp-0x760]
    let v15: i128;  // [sp-0x758]
    let v16: i64;  // [sp-0x748]
    let v17: i128;  // [sp-0x740]
    let v18: i64;  // [sp-0x730]
    let v19: i128;  // [sp-0x728]
    let v20: i64;  // [sp-0x718]
    let v21: i128;  // [sp-0x710]
    let v22: i64;  // [sp-0x700]
    let v23: i128;  // [sp-0x6f8]
    let v24: i64;  // [sp-0x6e8]
    let v25: i128;  // [sp-0x6e0]
    let v26: i64;  // [sp-0x6d0]
    let v27: i128;  // [sp-0x6c8]
    let v28: i64;  // [sp-0x6b8]
    let v29: i128;  // [sp-0x6b0]
    let v30: i64;  // [sp-0x6a0]
    let v31: i128;  // [sp-0x698]
    let v32: i64;  // [sp-0x688]
    let v33: i128;  // [sp-0x680]
    let v34: i64;  // [sp-0x670]
    let v35: i64;  // [sp-0x668]
    let v36: i64;  // [sp-0x660]
    let v37: i64;  // [sp-0x648]
    let v38: i64;  // [sp-0x620]
    let v39: i64;  // [sp-0x608]
    let v40: i64;  // [sp-0x600]
    let v41: i64;  // [sp-0x5f8]
    let v42: i64;  // [sp-0x5f0]
    let v43: i64;  // [sp-0x5e8]
    let v44: i128;  // [bp-0x5d8]
    let v45: i32;  // [sp-0x5d0]
    let v46: i8;  // [sp-0x5cc]
    let v47: i16;  // [sp-0x5cb]
    let v48: i8;  // [sp-0x5c9]
    let v49: i8;  // [bp-0x5c0], Other Possible Types: struct712
    let v50: i64;  // [sp-0x5b0]
    let v51: i64;  // [sp-0x598]
    let v52: i64;  // [sp-0x588]
    let v53: i64;  // [sp-0x570]
    let v54: i64;  // [sp-0x558]
    let v55: i64;  // [sp-0x550]
    let v56: i128;  // [sp-0x548]
    let v57: i64;  // [sp-0x538]
    let v58: i128;  // [sp-0x530]
    let v59: i64;  // [sp-0x520]
    let v60: i128;  // [sp-0x518]
    let v61: i64;  // [sp-0x508]
    let v62: i128;  // [sp-0x500]
    let v63: i64;  // [sp-0x4f0]
    let v64: i128;  // [sp-0x4e8]
    let v65: i64;  // [sp-0x4d8]
    let v66: i128;  // [sp-0x4d0]
    let v67: i64;  // [sp-0x4c0]
    let v68: i128;  // [sp-0x4b8]
    let v69: i64;  // [sp-0x4a8]
    let v70: i128;  // [sp-0x4a0]
    let v71: i64;  // [sp-0x490]
    let v72: i128;  // [sp-0x488]
    let v73: i64;  // [sp-0x478]
    let v74: i128;  // [sp-0x470]
    let v75: i64;  // [sp-0x460]
    let v76: i128;  // [sp-0x458]
    let v77: i64;  // [sp-0x448]
    let v78: i128;  // [sp-0x440]
    let v79: i64;  // [sp-0x430]
    let v80: i128;  // [sp-0x428]
    let v81: i64;  // [sp-0x418]
    let v82: i64;  // [sp-0x410]
    let v83: i192;  // [sp-0x408]
    let v84: i64;  // [sp-0x3f0]
    let v85: i128;  // [sp-0x3e8]
    let v86: i64;  // [sp-0x3c8]
    let v87: i64;  // [sp-0x3b0]
    let v88: i64;  // [sp-0x3a8]
    let v89: i64;  // [sp-0x3a0]
    let v90: i64;  // [sp-0x398]
    let v91: i64;  // [sp-0x390]
    let v92: i64;  // [sp-0x380]
    let v93: i32;  // [sp-0x378]
    let v94: i16;  // [sp-0x374]
    let v95: i3336;  // [sp-0x2f8], Other Possible Types: Enum, struct712
    let v96: i64;  // [sp-0x2f0]
    let v97: i64;  // [sp-0x2e8]
    let v98: i64;  // [sp-0x2d0]
    let v99: i64;  // [sp-0x2c0]
    let v100: i64;  // [sp-0x2a8]
    let v101: i64;  // [sp-0x290]
    let v102: i64;  // [sp-0x288]
    let v103: i128;  // [sp-0x280]
    let v104: i64;  // [sp-0x270]
    let v105: i128;  // [sp-0x268]
    let v106: i64;  // [sp-0x258]
    let v107: i128;  // [sp-0x250]
    let v108: i64;  // [sp-0x240]
    let v109: i128;  // [sp-0x238]
    let v110: i64;  // [sp-0x228]
    let v111: i128;  // [sp-0x220]
    let v112: i64;  // [sp-0x210]
    let v113: i128;  // [sp-0x208]
    let v114: i64;  // [sp-0x1f8]
    let v115: i128;  // [sp-0x1f0]
    let v116: i64;  // [sp-0x1e0]
    let v117: i128;  // [sp-0x1d8]
    let v118: i64;  // [sp-0x1c8]
    let v119: i128;  // [sp-0x1c0]
    let v120: i64;  // [sp-0x1b0]
    let v121: i128;  // [bp-0x1a8]
    let v122: i128;  // [bp-0x1a0]
    let v123: i64;  // [sp-0x198]
    let v124: i128;  // [bp-0x190]
    let v125: i64;  // [sp-0x180]
    let v126: i128;  // [sp-0x178]
    let v127: i64;  // [sp-0x168]
    let v128: i128;  // [sp-0x160]
    let v129: i64;  // [sp-0x150]
    let v130: i64;  // [sp-0x148]
    let v131: i192;  // [sp-0x140]
    let v132: i64;  // [sp-0x128]
    let v133: i64;  // [sp-0x100]
    let v134: i64;  // [sp-0xe8]
    let v135: i64;  // [sp-0xe0]
    let v136: i64;  // [sp-0xd8]
    let v137: i64;  // [sp-0xd0]
    let v138: i64;  // [sp-0xc8]
    let v139: i64;  // [sp-0xb8]
    let v140: i32;  // [sp-0xb0]
    let v141: i8;  // [bp-0xac]
    let v142: i16;  // [sp-0xab]
    let v143: i8;  // [sp-0xa9]
    let v144: i64;  // [sp-0x98]
    let v145: i64;  // [sp-0x90]
    let v146: i64;  // [sp-0x3c]
    let v147: i32;  // [sp-0x34]
    let v149: i64;  // rbx
    let v150: i64;  // rax
    let v151: i64;  // rcx
    let v152: i64;  // rax
    let v153: i64;  // rcx
    let v154: i64;  // rax
    let v155: i64;  // rdx
    let v157: i64;  // rax
    let v158: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v95 = clap_builder::builder::command::Command::new(g_4eb970, g_4eb978);
    v144 = &g_4195a2;
    v145 = &g_1;
    memcpy(&v49, &v95, 712);
    v1 = uucore::format_usage(&g_4195a8, &g_11);
    v149 = v1;
    if v149 != 0x8000000000000000 {
        v95 = *((&v1 as &char + 8) as &i128);
    }
    v84 = v149;
    v85 = v95;
    memcpy(&v95, &v49, 712);
    v49 = clap_builder::builder::command::Command::about(&v95, &g_4195c0, 126);
    memcpy(&v95, &v49, 700);
    v146 = 549755814016 | *((&v49 as &char + 700) as &i64);
    v147 = *((&v49 as &char + 708) as &i32);
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
    v1 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = &g_1;
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
    v39 = &g_412df4;
    v40 = &g_1;
    v41 = 0;
    v43 = 0;
    v44 = 0x301000000040011000000110000;
    v49 = clap_builder::builder::command::Command::arg(&v95, &v1);
    v103 = 0;
    v105 = 0;
    v107 = 0;
    v109 = 0;
    v111 = 0;
    v113 = 0;
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v95 = 0;
    v97 = 0;
    v98 = 0;
    v99 = 0;
    v100 = &g_1;
    v101 = 0;
    v102 = &g_1;
    v104 = &g_1;
    v106 = &g_1;
    v108 = &g_1;
    v110 = &g_1;
    v112 = &g_1;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v130 = 0;
    v131 = 0x8000000000000000;
    v132 = 0x8000000000000000;
    v133 = 9223372036854775809;
    v134 = &g_419568;
    v135 = &g_1;
    v136 = &g_419568;
    v137 = &g_1;
    v138 = 0;
    v139 = 4785074604081249;
    v140 = 0;
    v141 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v150 = v2;
    v151 = v3;
    *((v150 + v151 + &g_11 as &u8) as &i128) = 146720930606250289395343850669117567861;
    *((v150 + v151 + &g_1 as &u8) as &i128) = 141066398662804681402946906620687053675;
    *((v150 + v151) as &i128) = 146720930606250341187751472353405464419;
    *((v150 + v151 + &g_21 as &u8) as &i16) = 29547;
    v3 = v151 + &g_31 as &u8;
    v0 = *((&v1 as &char + 8) as &i128);
    if v131 != 0x8000000000000000 {
        v1 = v0;
    }
    v131 = v1;
    memcpy(&v1, &v95, 588);
    v47 = v142;
    v48 = v143;
    v46 = &g_1;
    v95 = clap_builder::builder::command::Command::arg(&v49, &v1);
    v56 = 0;
    v58 = 0;
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
    v80 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v55 = &g_1;
    v57 = &g_1;
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
    v79 = &g_1;
    v81 = &g_1;
    v82 = 0;
    v83 = 0x8000000000000000;
    v84 = 0x8000000000000000;
    v86 = 9223372036854775809;
    v87 = &g_41956b;
    v88 = &g_1;
    v89 = &g_41956b;
    v90 = &g_1;
    v91 = 0;
    v92 = 0x11000000110000;
    v93 = 0;
    v94 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 55);
    v152 = v2;
    v153 = v3;
    *((v152 + v153 + &g_11 as &u8) as &i128) = 140163181632681978653846574439562616934;
    *((v152 + v153 + &g_1 as &u8) as &i128) = 147712801541520087197158071608590362980;
    *((v152 + v153) as &i128) = 129461730646966023786156915268906807139;
    *((v152 + v153 + &g_21 as &u8) as &i64) = 2981714045694207081;
    v3 = v153 + 55;
    v0 = *((&v1 as &char + 8) as &i128);
    if v83 != 0x8000000000000000 {
        v1 = v0;
    }
    v83 = v1;
    memcpy(&v1, &v49, 588);
    v47 = *((&v49 as &char + 589) as &i16);
    v48 = *((&v49 as &char + 591) as &i8);
    v46 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v95, &v1);
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
    v1 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = &g_1;
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
    v39 = &g_412d94;
    v40 = &g_1;
    v41 = &g_412d94;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081268;
    v45 = 0;
    v46 = 3337;
    v95 = 0;
    v96 = &g_1;
    v97 = 0;
    v95 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 99);
    v154 = v96;
    v155 = v97;
    *((v154 + v155 + &g_41 as &u8) as &i128) = 43134467114307651562784187325151649892;
    *((v154 + v155 + 64) as &i128) = 129461899478772011551518116472696304229;
    *((v154 + v155 + &g_21 as &u8) as &i128) = 154706461355933512378349380631144964197;
    *((v154 + v155 + &g_11 as &u8) as &i128) = 157354668239213566643470861758111117168;
    *((v154 + v155 + &g_1 as &u8) as &i128) = 43046117551479482434147522481607697780;
    *((v154 + v155) as &i128) = 129529013731692731205116937057920709493;
    *((v154 + v155 + &g_51 as &u8) as &i32) = 694234400;
    v97 = v155 + 99;
    v0 = *((&v95 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v95 = v0;
    }
    v36 = v95;
    memcpy(&v95, &v1, 360);
    memcpy(&v95, &v29, 220);
    v142 = v47;
    v143 = v48;
    v124 = v29;
    v141 = &g_1;
    v0 = struct32 {
        field_0: &g_41970a
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v124 = v3;
    v122 = v1;
    memcpy(&v1, &v95, 592);
    v95 = clap_builder::builder::command::Command::arg(&v49, &v1);
    v56 = 0;
    v58 = 0;
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
    v80 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v55 = &g_1;
    v57 = &g_1;
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
    v79 = &g_1;
    v81 = &g_1;
    v82 = 0;
    v83 = 0x8000000000000000;
    v84 = 0x8000000000000000;
    v86 = 9223372036854775809;
    v87 = &g_419575;
    v88 = &g_1;
    v89 = &g_419575;
    v90 = &g_1;
    v91 = 0;
    v92 = 4785074604081237;
    v93 = 0;
    v94 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 53);
    v157 = v2;
    v158 = v3;
    *((v157 + v158 + &g_11 as &u8) as &i128) = 43108424188956081653513055847053871427;
    *((v157 + v158 + &g_1 as &u8) as &i128) = 110664081206141564058398377988103891302;
    *((v157 + v158) as &i128) = 43139984250355618335144062592314797673;
    *((v157 + v158 + &g_21 as &u8) as &i64) = 4047968968095329889;
    v3 = v158 + 53;
    v0 = *((&v1 as &char + 8) as &i128);
    if v83 != 0x8000000000000000 {
        v1 = v0;
    }
    v83 = v1;
    memcpy(&v1, &v49, 588);
    v47 = *((&v49 as &char + 589) as &i16);
    v48 = *((&v49 as &char + 591) as &i8);
    v46 = &g_1;
    clap_builder::builder::command::Command::arg(a0, &v95, &v1);
    return a0;
}
