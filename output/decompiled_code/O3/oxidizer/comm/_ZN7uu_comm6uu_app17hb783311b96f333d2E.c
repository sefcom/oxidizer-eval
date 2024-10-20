fn uu_comm::uu_app(a0: u32) -> u64 {
    let v0: i64;  // [sp-0xa78], Other Possible Types: Enum, struct592, struct24
    let v1: i64;  // [sp-0xa70]
    let v2: i64;  // [sp-0xa68]
    let v3: i64;  // [sp-0xa50]
    let v4: i64;  // [sp-0xa40]
    let v5: i64;  // [sp-0xa28]
    let v6: i64;  // [sp-0xa10]
    let v7: i64;  // [sp-0xa08]
    let v8: i128;  // [sp-0xa00]
    let v9: i64;  // [sp-0x9f0]
    let v10: i128;  // [sp-0x9e8]
    let v11: i64;  // [sp-0x9d8]
    let v12: i128;  // [sp-0x9d0]
    let v13: i64;  // [sp-0x9c0]
    let v14: i128;  // [sp-0x9b8]
    let v15: i64;  // [sp-0x9a8]
    let v16: i128;  // [sp-0x9a0]
    let v17: i64;  // [sp-0x990]
    let v18: i128;  // [sp-0x988]
    let v19: i64;  // [sp-0x978]
    let v20: i128;  // [sp-0x970]
    let v21: i64;  // [sp-0x960]
    let v22: i128;  // [sp-0x958]
    let v23: i64;  // [sp-0x948]
    let v24: i128;  // [sp-0x940]
    let v25: i64;  // [sp-0x930]
    let v26: i128;  // [sp-0x928]
    let v27: i64;  // [sp-0x918]
    let v28: i128;  // [sp-0x910]
    let v29: i64;  // [sp-0x900]
    let v30: i128;  // [sp-0x8f8]
    let v31: i64;  // [sp-0x8e8]
    let v32: i128;  // [sp-0x8e0]
    let v33: i64;  // [sp-0x8d0]
    let v34: i64;  // [sp-0x8c8]
    let v35: i64;  // [sp-0x8c0]
    let v36: i128;  // [sp-0x8b8]
    let v37: i64;  // [sp-0x8a8]
    let v38: i64;  // [sp-0x880]
    let v39: i64;  // [sp-0x868]
    let v40: i64;  // [sp-0x860]
    let v41: i64;  // [sp-0x858]
    let v42: i64;  // [sp-0x850]
    let v43: i64;  // [sp-0x848]
    let v44: i64;  // [sp-0x838]
    let v45: i32;  // [sp-0x830]
    let v46: i8;  // [sp-0x82c]
    let v47: i16;  // [sp-0x82b]
    let v48: i8;  // [sp-0x829]
    let v49: i3336;  // [sp-0x828], Other Possible Types: struct712, Enum
    let v50: i64;  // [sp-0x820]
    let v51: i64;  // [sp-0x818]
    let v52: i64;  // [sp-0x800]
    let v53: i64;  // [sp-0x7f0]
    let v54: i64;  // [sp-0x7d8]
    let v55: i64;  // [sp-0x7c0]
    let v56: i64;  // [sp-0x7b8]
    let v57: i128;  // [sp-0x7b0]
    let v58: struct16;  // [sp-0x7a8]
    let v59: i64;  // [sp-0x7a0]
    let v60: i128;  // [bp-0x798]
    let v61: i64;  // [sp-0x788]
    let v62: i128;  // [sp-0x780]
    let v63: i64;  // [sp-0x770]
    let v64: i128;  // [sp-0x768]
    let v65: i64;  // [sp-0x758]
    let v66: i128;  // [sp-0x750]
    let v67: i64;  // [sp-0x740]
    let v68: i128;  // [sp-0x738]
    let v69: i64;  // [sp-0x728]
    let v70: i128;  // [sp-0x720]
    let v71: i64;  // [sp-0x710]
    let v72: i128;  // [sp-0x708]
    let v73: i64;  // [sp-0x6f8]
    let v74: i128;  // [sp-0x6f0]
    let v75: i64;  // [sp-0x6e0]
    let v76: i128;  // [sp-0x6d8]
    let v77: i64;  // [sp-0x6c8]
    let v78: i128;  // [sp-0x6c0]
    let v79: i64;  // [sp-0x6b0]
    let v80: i128;  // [sp-0x6a8]
    let v81: i64;  // [sp-0x698]
    let v82: i128;  // [sp-0x690]
    let v83: i64;  // [sp-0x680]
    let v84: i64;  // [sp-0x678]
    let v85: i64;  // [sp-0x670]
    let v86: i64;  // [sp-0x658]
    let v87: i128;  // [sp-0x650]
    let v88: i64;  // [sp-0x630]
    let v89: i64;  // [sp-0x618]
    let v90: i64;  // [sp-0x610]
    let v91: i64;  // [sp-0x608]
    let v92: i64;  // [sp-0x600]
    let v93: i64;  // [sp-0x5f8]
    let v94: i64;  // [bp-0x5e8]
    let v95: i64;  // [bp-0x5e4]
    let v96: i32;  // [sp-0x5e0]
    let v97: i16;  // [sp-0x5dc]
    let v98: i64;  // [sp-0x5c8]
    let v99: i64;  // [sp-0x5c0]
    let v100: i64;  // [bp-0x558], Other Possible Types: struct712, Enum
    let v101: i64;  // [sp-0x550]
    let v102: i64;  // [sp-0x548]
    let v103: i64;  // [sp-0x530]
    let v104: i64;  // [sp-0x520]
    let v105: i64;  // [sp-0x508]
    let v106: i64;  // [sp-0x4f0]
    let v107: i64;  // [sp-0x4e8]
    let v108: i128;  // [sp-0x4e0]
    let v109: i64;  // [sp-0x4d0]
    let v110: i128;  // [sp-0x4c8]
    let v111: i64;  // [sp-0x4b8]
    let v112: i128;  // [sp-0x4b0]
    let v113: i64;  // [sp-0x4a0]
    let v114: i128;  // [sp-0x498]
    let v115: i64;  // [sp-0x488]
    let v116: i128;  // [sp-0x480]
    let v117: i64;  // [sp-0x470]
    let v118: i128;  // [sp-0x468]
    let v119: i64;  // [sp-0x458]
    let v120: i128;  // [sp-0x450]
    let v121: i64;  // [sp-0x440]
    let v122: i128;  // [sp-0x438]
    let v123: i64;  // [sp-0x428]
    let v124: i128;  // [sp-0x420]
    let v125: i64;  // [sp-0x410]
    let v126: i128;  // [sp-0x408]
    let v127: i64;  // [sp-0x3f8]
    let v128: i128;  // [bp-0x3f0]
    let v129: i64;  // [sp-0x3e8]
    let v130: i64;  // [sp-0x3e0]
    let v131: i64;  // [bp-0x3d8]
    let v132: i64;  // [sp-0x3c8]
    let v133: i128;  // [sp-0x3c0]
    let v134: i64;  // [sp-0x3b0]
    let v135: i64;  // [sp-0x3a8]
    let v136: i64;  // [sp-0x3a0]
    let v137: i64;  // [sp-0x388]
    let v138: i64;  // [sp-0x360]
    let v139: i64;  // [sp-0x348]
    let v140: i64;  // [sp-0x340]
    let v141: i64;  // [sp-0x338]
    let v142: i64;  // [sp-0x330]
    let v143: i64;  // [sp-0x328]
    let v144: i64;  // [sp-0x318]
    let v145: i32;  // [sp-0x310]
    let v146: i16;  // [sp-0x30c]
    let v147: i8;  // [bp-0x309]
    let v148: i64;  // [sp-0x29c]
    let v149: i32;  // [sp-0x294]
    let v150: i128;  // [bp-0x288], Other Possible Types: struct16
    let v151: i32;  // [sp-0x40]
    let v152: i32;  // [bp-0x3c]
    let v153: i16;  // [sp-0x3b]
    let v154: i8;  // [sp-0x39]
    let v156: i64;  // rbx
    let v157: i64;  // rax
    let v158: i64;  // rcx
    let v159: i64;  // rax
    let v160: i64;  // rcx
    let v161: i64;  // rax
    let v162: i64;  // rcx
    let v163: i64;  // rcx
    let v164: i64;  // rsi
    let v166: i64;  // r15
    let v167: i64;  // rax
    let v168: i64;  // rcx
    let v169: i64;  // rcx
    let v170: i64;  // rdx
    let v171: i64;  // r14
    let v172: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v49 = clap_builder::builder::command::Command::new(g_4e1c40, g_4e1c48);
    v98 = &g_418913;
    v99 = &g_1;
    memcpy(&v100, &v49, 712);
    v49 = clap_builder::builder::command::Command::about(&v100, &g_418919, 284);
    v0 = uucore::format_usage(&g_418a35, &g_1a);
    v156 = v0;
    if v156 != 0x8000000000000000 {
        v100 = *((&v0 as &char + 8) as &i128);
    }
    v86 = v156;
    v87 = v100;
    memcpy(&v100, &v49, 700);
    v148 = 584115552392 | *((&v49 as &char + 700) as &i64);
    v149 = *((&v49 as &char + 708) as &i32);
    v57 = 0;
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
    v82 = 0;
    v49 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = &g_1;
    v55 = 0;
    v56 = &g_1;
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
    v83 = &g_1;
    v84 = 0;
    v85 = 0x8000000000000000;
    v86 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_4188fc;
    v90 = &g_1;
    v91 = 0;
    v93 = 0;
    v94 = 4785074604081201;
    v96 = 0;
    v97 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v157 = v1;
    v158 = v2;
    *((v157 + v158 + &g_11 as &u8) as &i128) = 54754175903529944088218050993593085557;
    *((v157 + v158 + &g_1 as &u8) as &i128) = 43062099875164777867601477175679131697;
    *((v157 + v158) as &i128) = 43108668605456991112643099413338682739;
    v2 = v158 + &g_1a as &u8;
    v150 = *((&v0 as &char + 8) as &i128);
    if v85 != 0x8000000000000000 {
        v0 = v150;
    }
    v85 = v0;
    memcpy(&v0, &v49, 588);
    v47 = *((&v49 as &char + 589) as &i16);
    v48 = *((&v49 as &char + 591) as &i8);
    v46 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v100, &v0);
    v108 = 0;
    v110 = 0;
    v112 = 0;
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
    v100 = 0;
    v102 = 0;
    v103 = 0;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v107 = &g_1;
    v109 = &g_1;
    v111 = &g_1;
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
    v134 = &g_1;
    v135 = 0;
    v136 = 0x8000000000000000;
    v137 = 0x8000000000000000;
    v138 = 9223372036854775809;
    v139 = &g_4188fd;
    v140 = &g_1;
    v141 = 0;
    v143 = 0;
    v144 = 4785074604081202;
    v145 = 0;
    v146 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v159 = v1;
    v160 = v2;
    *((v159 + v160 + &g_11 as &u8) as &i128) = 54759368200388478915846581489922305653;
    *((v159 + v160 + &g_1 as &u8) as &i128) = 43062099875164777867601477175679131698;
    *((v159 + v160) as &i128) = 43108668605456991112643099413338682739;
    v2 = v160 + &g_1a as &u8;
    v150 = *((&v0 as &char + 8) as &i128);
    if v136 != 0x8000000000000000 {
        v0 = v150;
    }
    v136 = v0;
    memcpy(&v0, &v100, 588);
    v47 = v146;
    v48 = v147;
    v46 = &g_1;
    v100 = clap_builder::builder::command::Command::arg(&v49, &v0);
    v57 = 0;
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
    v82 = 0;
    v49 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = &g_1;
    v55 = 0;
    v56 = &g_1;
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
    v83 = &g_1;
    v84 = 0;
    v85 = 0x8000000000000000;
    v86 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_4188fe;
    v90 = &g_1;
    v91 = 0;
    v93 = 0;
    v94 = 4785074604081203;
    v96 = 0;
    v97 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_30);
    v161 = v1;
    v162 = v2;
    *((v161 + v162 + &g_1a as &u8) as &i128) = 144103886088325046510741532968411555184;
    *((v161 + v162 + &g_1 as &u8) as &i128) = 149377846580908947184343966082570657843;
    *((v161 + v162) as &i128) = 43108668605456991112643099413338682739;
    *((v161 + v162 + 47) as &i32) = 695428460;
    v2 = v162 + &g_30 as &u8;
    v150 = *((&v0 as &char + 8) as &i128);
    if v85 != 0x8000000000000000 {
        v0 = v150;
    }
    v85 = v0;
    memcpy(&v0, &v49, 588);
    v47 = *((&v49 as &char + 589) as &i16);
    v48 = *((&v49 as &char + 591) as &i8);
    v46 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v100, &v0);
    v8 = 0;
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
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v34 = 0;
    v35 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &g_410170;
    v40 = &g_1;
    v41 = &g_410170;
    v42 = &g_1;
    v43 = 0;
    v44 = 0x11000000110000;
    v45 = 0;
    v46 = 3337;
    v100 = 0;
    v101 = &g_1;
    v102 = 0;
    v100 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v163 = v101;
    v164 = v102;
    *((v163 + v164 + &g_1 as &u8) as &i128) = 109434534598105505106489495513669070691;
    *((v163 + v164) as &i128) = 153434592255605008562650556176754828659;
    v102 = v164 + &g_11 as &u8;
    v150 = *((&v100 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v100 = v150;
    }
    v35 = v100;
    memcpy(&v100, &v0, 360);
    memcpy(&v100, &v28, 224);
    v128 = v28;
    v150 = struct16 {
        field_0: &g_418aed
        field_8: &g_1
    };
    v0 = clap_builder::builder::arg::Arg::value_names(&v100, &v150);
    memcpy(&v100, &v0, 592);
    *(v130 as &&i64) = &g_418af0;
    *((v130 + &g_1 as &u8) as &&i64) = &g_1;
    v129 = &g_1;
    v130 = __rust_alloc(&g_1, &g_1);
    v131 = &g_1;
    memcpy(&v150, &v100, 584);
    v151 = 1056 | v145;
    *(&v152 as &unsigned long) = -0x100 & *((&v100 as &char + 588) as &i32) | &g_1;
    v100 = clap_builder::builder::command::Command::arg(&v49, &v150);
    v57 = 0;
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
    v82 = 0;
    v49 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = &g_1;
    v55 = 0;
    v56 = &g_1;
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
    v83 = &g_1;
    v84 = 0;
    v85 = 0x8000000000000000;
    v86 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_418904;
    v90 = &g_1;
    v91 = &g_418904;
    v92 = &g_1;
    v93 = 0;
    v95 = 0x110000;
    v97 = 3337;
    v94 = 122;
    v166 = v60;
    if v166 == *((&v57 as &char + 8) as &i64) {
        v58 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v167 = v59;
    v168 = v166 * &g_1;
    *((v167 + v168) as &&i64) = &g_418904;
    *((v167 + v168 + &g_1 as &u8) as &&i64) = &g_1;
    v60 = v166 + &g_1 as &u8;
    memcpy(&v0, &v49, 592);
    v49 = 0;
    v50 = &g_1;
    v51 = 0;
    v49 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v169 = v50;
    v170 = v51;
    *((v169 + v170 + &g_1 as &u8) as &i128) = 140132129261007763084871203607542636659;
    *((v169 + v170) as &i128) = 139737413289656226403140227931854236012;
    *((v169 + v170 + &g_1a as &u8) as &i16) = 25966;
    v51 = v170 + &g_1a as &u8;
    v171 = v49;
    v150 = *((&v49 as &char + 8) as &i128);
    if v171 != 0x8000000000000000 {
        v49 = v150;
    }
    v35 = v171;
    v36 = v49;
    memcpy(&v150, &v0, 588);
    v153 = v47;
    v154 = v48;
    v152 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v100, &v150);
    v8 = 0;
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
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v34 = 0;
    v35 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &g_418b13;
    v40 = &g_1;
    v41 = 0;
    v43 = 0;
    v44 = 0x309000000010011000000110000;
    v100 = clap_builder::builder::command::Command::arg(&v49, &v0);
    v8 = 0;
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
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v34 = 0;
    v35 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &g_418b18;
    v40 = &g_1;
    v41 = 0;
    v43 = 0;
    v44 = 0x309000000010011000000110000;
    v49 = clap_builder::builder::command::Command::arg(&v100, &v0);
    v108 = 0;
    v110 = 0;
    v112 = 0;
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
    v100 = 0;
    v102 = 0;
    v103 = 0;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v107 = &g_1;
    v109 = &g_1;
    v111 = &g_1;
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
    v134 = &g_1;
    v135 = 0;
    v136 = 0x8000000000000000;
    v137 = 0x8000000000000000;
    v138 = 9223372036854775809;
    v139 = &g_4188ff;
    v140 = &g_1;
    v141 = &g_4188ff;
    v142 = &g_1;
    v143 = 0;
    v144 = 0x11000000110000;
    v145 = 0;
    v146 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1);
    v172 = v2;
    *((v1 + v172) as &i128) = 161430485395324913298718637796145526127;
    v2 = v172 + &g_1 as &u8;
    v150 = *((&v0 as &char + 8) as &i128);
    if v136 != 0x8000000000000000 {
        v0 = v150;
    }
    v136 = v0;
    memcpy(&v0, &v100, 588);
    v47 = *((&v100 as &char + 589) as &i16);
    v48 = *((&v100 as &char + 591) as &i8);
    v46 = &g_1;
    clap_builder::builder::command::Command::arg(a0, &v49, &v0);
    return a0;
}
