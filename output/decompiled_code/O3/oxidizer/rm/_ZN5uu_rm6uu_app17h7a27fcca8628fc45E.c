fn uu_rm::uu_app(a0: u32) -> u64 {
    let v0: i64;  // [bp-0xa78], Other Possible Types: struct712, struct24, Enum
    let v1: i64;  // [sp-0xa70]
    let v2: i64;  // [sp-0xa68]
    let v3: i64;  // [sp-0xa60]
    let v4: i64;  // [sp-0xa58]
    let v5: i64;  // [sp-0xa50]
    let v6: i64;  // [sp-0xa40]
    let v7: i64;  // [sp-0xa28]
    let v8: i64;  // [sp-0xa10]
    let v9: i64;  // [sp-0xa08]
    let v10: i128;  // [sp-0xa00]
    let v11: i64;  // [sp-0x9f0]
    let v12: i128;  // [sp-0x9e8]
    let v13: i64;  // [sp-0x9d8]
    let v14: i128;  // [sp-0x9d0]
    let v15: i64;  // [sp-0x9c0]
    let v16: i128;  // [sp-0x9b8]
    let v17: i64;  // [sp-0x9a8]
    let v18: i128;  // [sp-0x9a0]
    let v19: i64;  // [sp-0x990]
    let v20: i128;  // [sp-0x988]
    let v21: i64;  // [sp-0x978]
    let v22: i128;  // [sp-0x970]
    let v23: i64;  // [sp-0x960]
    let v24: i128;  // [sp-0x958]
    let v25: i64;  // [sp-0x948]
    let v26: i128;  // [sp-0x940]
    let v27: struct16;  // [sp-0x938]
    let v28: i64;  // [sp-0x930]
    let v29: i128;  // [bp-0x928]
    let v30: i64;  // [sp-0x918]
    let v31: i128;  // [bp-0x910]
    let v32: i128;  // [bp-0x908]
    let v33: i64;  // [sp-0x900]
    let v34: i128;  // [sp-0x8f8]
    let v35: i64;  // [sp-0x8e8]
    let v36: i128;  // [bp-0x8e0]
    let v37: i128;  // [bp-0x8d8]
    let v38: i64;  // [sp-0x8d0]
    let v39: i64;  // [sp-0x8c8]
    let v40: i192;  // [sp-0x8c0]
    let v41: i64;  // [sp-0x8a8]
    let v42: i64;  // [sp-0x880]
    let v43: i64;  // [sp-0x868]
    let v44: i64;  // [sp-0x860]
    let v45: i64;  // [sp-0x858]
    let v46: i64;  // [sp-0x850]
    let v47: i64;  // [sp-0x848]
    let v48: i64;  // [sp-0x838]
    let v49: i32;  // [sp-0x830]
    let v50: i16;  // [bp-0x82c]
    let v51: i8;  // [sp-0x82b]
    let v52: i16;  // [sp-0x82a]
    let v53: i64;  // [sp-0x7bc]
    let v54: i32;  // [sp-0x7b4]
    let v55: i64;  // [sp-0x7b0], Other Possible Types: struct712, Enum
    let v56: i64;  // [sp-0x7a0]
    let v57: i64;  // [sp-0x788]
    let v58: i64;  // [sp-0x778]
    let v59: i64;  // [sp-0x760]
    let v60: i64;  // [sp-0x748]
    let v61: i64;  // [sp-0x740]
    let v62: i128;  // [sp-0x738]
    let v63: i64;  // [sp-0x728]
    let v64: i128;  // [sp-0x720]
    let v65: i64;  // [sp-0x710]
    let v66: i128;  // [sp-0x708]
    let v67: i64;  // [sp-0x6f8]
    let v68: i128;  // [sp-0x6f0]
    let v69: i64;  // [sp-0x6e0]
    let v70: i128;  // [sp-0x6d8]
    let v71: i64;  // [sp-0x6c8]
    let v72: i128;  // [sp-0x6c0]
    let v73: i64;  // [sp-0x6b0]
    let v74: i128;  // [sp-0x6a8]
    let v75: i64;  // [sp-0x698]
    let v76: i128;  // [sp-0x690]
    let v77: struct16;  // [sp-0x688]
    let v78: i64;  // [sp-0x680]
    let v79: i128;  // [bp-0x678]
    let v80: i64;  // [sp-0x668]
    let v81: i128;  // [sp-0x660]
    let v82: i64;  // [sp-0x650]
    let v83: i128;  // [sp-0x648]
    let v84: i64;  // [sp-0x638]
    let v85: i128;  // [sp-0x630]
    let v86: i64;  // [sp-0x620]
    let v87: i128;  // [sp-0x618]
    let v88: i64;  // [sp-0x608]
    let v89: i64;  // [sp-0x600]
    let v90: i192;  // [sp-0x5f8]
    let v91: i64;  // [sp-0x5e0]
    let v92: i128;  // [sp-0x5d8]
    let v93: i64;  // [sp-0x5b8]
    let v94: i64;  // [sp-0x5a0]
    let v95: i64;  // [sp-0x598]
    let v96: i64;  // [sp-0x590]
    let v97: i64;  // [sp-0x588]
    let v98: i64;  // [sp-0x580]
    let v99: i64;  // [sp-0x570]
    let v100: i32;  // [sp-0x568]
    let v101: i16;  // [sp-0x564]
    let v102: i64;  // [sp-0x550]
    let v103: i64;  // [sp-0x548]
    let v104: i192;  // [sp-0x4e8], Other Possible Types: Enum, struct24, struct592
    let v105: i64;  // [sp-0x4e0]
    let v106: i128;  // [sp-0x4d8]
    let v107: i64;  // [sp-0x4d0]
    let v108: i64;  // [sp-0x4c8]
    let v109: i8;  // [bp-0x4c0]
    let v110: i128;  // [bp-0x468], Other Possible Types: struct16
    let v111: i64;  // [sp-0x458]
    let v112: i192;  // [bp-0x390]
    let v113: i64;  // [sp-0x380]
    let v114: i128;  // [sp-0x378]
    let v115: i128;  // [sp-0x368]
    let v116: i128;  // [sp-0x358]
    let v117: i128;  // [sp-0x348]
    let v118: i64;  // [sp-0x338]
    let v119: i8;  // [bp-0x330]
    let v120: i128;  // [sp-0x328]
    let v121: i64;  // [sp-0x2c8]
    let v122: i64;  // [sp-0x2c0]
    let v123: i128;  // [sp-0x2b8]
    let v124: i128;  // [bp-0x2a8]
    let v125: i32;  // [sp-0x2a0]
    let v126: i8;  // [sp-0x29c]
    let v127: i16;  // [sp-0x29b]
    let v128: i8;  // [sp-0x299]
    let v129: i64;  // [sp-0x290]
    let v130: i128;  // [bp-0x288], Other Possible Types: struct32, struct8
    let v131: i8;  // [sp-0x3c]
    let v132: i16;  // [sp-0x3b]
    let v133: i8;  // [sp-0x39]
    let v135: i64;  // rbx
    let v136: i64;  // rax
    let v137: i64;  // rcx
    let v138: i64;  // rax
    let v139: i64;  // rcx
    let v140: i64;  // rsi
    let v141: i64;  // rsi
    let v142: i64;  // rax
    let v143: i64;  // rcx
    let v144: i64;  // rbx
    let v145: i64;  // rsi
    let v146: i64;  // rsi
    let v147: i64;  // rax
    let v148: i64;  // rcx
    let v149: i64;  // rax
    let v150: i64;  // rcx
    let v151: i32;  // r12d
    let v152: i64;  // rbp
    let v153: i64;  // rsi
    let v154: i64;  // rsi
    let v155: i64;  // rax
    let v156: i64;  // rcx
    let v157: i64;  // rbx
    let v158: i64;  // rax
    let v159: i64;  // rcx
    let v160: i64;  // rax
    let v161: i64;  // rcx
    let v162: i64;  // r14
    let v164: i64;  // rax
    let v165: i64;  // rcx
    let v166: i64;  // rdx
    let v167: i64;  // rbx
    let v168: i64;  // rax
    let v169: i64;  // rcx
    let v170: i64;  // rax
    let v171: i64;  // rcx
    let v172: i64;  // r14
    let v174: i64;  // rax
    let v175: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v55 = clap_builder::builder::command::Command::new(g_4f3390, g_4f3398);
    v102 = &g_41a09a;
    v103 = &g_1;
    memcpy(&v0, &v55, 712);
    v55 = clap_builder::builder::command::Command::about(&v0, &g_41a0a0, &g_11);
    v104 = uucore::format_usage(&g_41a0bb, &g_11);
    v135 = v104;
    if v135 != 0x8000000000000000 {
        v0 = *((&v104 as &char + 8) as &i128);
    }
    v91 = v135;
    v92 = v0;
    memcpy(&v0, &v55, 700);
    v53 = 584115552392 | *((&v55 as &char + 700) as &i64);
    v54 = *((&v55 as &char + 708) as &i32);
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v93 = 9223372036854775809;
    v94 = &g_41a041;
    v95 = &g_1;
    v96 = &g_41a041;
    v97 = &g_1;
    v98 = 0;
    v99 = 4785074604081254;
    v100 = 0;
    v101 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v136 = v105;
    v137 = v106;
    *((v136 + v137 + &g_11 as &u8) as &i128) = 152114186868155271914162823415013404021;
    *((v136 + v137 + &g_1 as &u8) as &i128) = 137504375367834001417686465950125159534;
    *((v136 + v137) as &i128) = 134856674843188851310227899640466794345;
    *((v136 + v137 + &g_21 as &u8) as &i32) = 1953525103;
    v106 = v137 + &g_31 as &u8;
    v130 = *((&v104 as &char + 8) as &i128);
    if v90 != 0x8000000000000000 {
        v104 = v130;
    }
    v90 = v104;
    memcpy(&v104, &v55, 588);
    v127 = *((&v55 as &char + 589) as &i16);
    v128 = *((&v55 as &char + 591) as &i8);
    v126 = &g_1;
    v55 = clap_builder::builder::command::Command::arg(&v0, &v104);
    v10 = 0;
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
    v34 = 0;
    v36 = 0;
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
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v38 = &g_1;
    v39 = 0;
    v40 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v42 = 9223372036854775809;
    v43 = &g_41a062;
    v44 = &g_1;
    v45 = 0;
    v47 = 0;
    v48 = 4785074604081257;
    v49 = 0;
    v50 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v138 = v105;
    v139 = v106;
    *((v138 + v139 + &g_1 as &u8) as &i128) = 144062678492564569061163835434259735922;
    *((v138 + v139) as &i128) = 157373982559899786824466221764998820464;
    v106 = v139 + &g_11 as &u8;
    v130 = *((&v104 as &char + 8) as &i128);
    if v40 != 0x8000000000000000 {
        v104 = v130;
    }
    v40 = v104;
    memcpy(&v104, &v0, 592);
    v140 = v111;
    v141 = v140;
    if v110 - v140 <= 1 {
        v110 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v140, &g_1);
        v141 = v111;
    }
    v142 = *((&v110 as &char + 8) as &i64);
    v143 = v141 * &g_1;
    *((v142 + v143) as &&i64) = &g_41a068;
    *((v142 + v143 + &g_1 as &u8) as &&i64) = &g_1;
    *((v142 + v143 + &g_1 as &u8) as &&i64) = &g_41a036;
    *((v142 + v143 + &g_11 as &u8) as &&i64) = &g_1;
    v111 = v141 + &g_1 as &u8;
    memcpy(&v130, &v104, 588);
    v132 = v127;
    v133 = v128;
    v131 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v55, &v130);
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v93 = 9223372036854775809;
    v94 = &g_41a068;
    v95 = &g_1;
    v96 = 0;
    v98 = 0;
    v99 = 4785074604081225;
    v100 = 0;
    v101 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 161);
    v144 = v106;
    memcpy(v105 + v144, &g_41a120, 161);
    v106 = v144 + 161;
    v130 = *((&v104 as &char + 8) as &i128);
    if v90 != 0x8000000000000000 {
        v104 = v130;
    }
    v90 = v104;
    memcpy(&v104, &v55, 592);
    v145 = v111;
    v146 = v145;
    if v110 - v145 <= 1 {
        v110 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v145, &g_1);
        v146 = v111;
    }
    v147 = *((&v110 as &char + 8) as &i64);
    v148 = v146 * &g_1;
    *((v147 + v148) as &&i64) = &g_41a062;
    *((v147 + v148 + &g_1 as &u8) as &&i64) = &g_1;
    *((v147 + v148 + &g_1 as &u8) as &&i64) = &g_41a036;
    *((v147 + v148 + &g_11 as &u8) as &&i64) = &g_1;
    v111 = v146 + &g_1 as &u8;
    memcpy(&v130, &v104, 588);
    v132 = v127;
    v133 = v128;
    v131 = &g_1;
    v55 = clap_builder::builder::command::Command::arg(&v0, &v130);
    v10 = 0;
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
    v34 = 0;
    v36 = 0;
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
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v38 = &g_1;
    v39 = 0;
    v40 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v42 = 9223372036854775809;
    v43 = &g_41a036;
    v44 = &g_1;
    v45 = &g_41a036;
    v46 = &g_1;
    v47 = 0;
    v48 = 0x11000000110000;
    v49 = 0;
    v50 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_51);
    v129 = 9223372036854775809;
    v149 = v105;
    v150 = v106;
    *((v149 + v150 + 64) as &i128) = 154774204371595821811109078736615798127;
    *((v149 + v150 + &g_21 as &u8) as &i128) = 138844154553039139412470483890345178988;
    *((v149 + v150 + &g_11 as &u8) as &i128) = 129103590089587717546790150869491805984;
    *((v149 + v150 + &g_1 as &u8) as &i128) = 59080011560093534282716704846048621600;
    *((v149 + v150) as &i128) = 137483773831525752033177506533163889264;
    *((v149 + v150 + &g_41 as &u8) as &i64) = 8320788952091009139;
    v106 = v150 + &g_51 as &u8;
    v130 = *((&v104 as &char + 8) as &i128);
    if v40 != 0x8000000000000000 {
        v104 = v130;
    }
    v40 = v104;
    v104 = v0;
    memcpy(&v109, &v5, 320);
    v114 = *((&v31 as &char + 8) as &i128);
    v115 = v34;
    v116 = v35;
    v117 = *((&v36 as &char + 8) as &i128);
    memcpy(&v119, &v40, 144);
    v151 = *((&v0 as &char + 588) as &i32);
    v106 = *((&v0 as &char + 16) as &i128);
    v108 = v4;
    v113 = v31;
    v118 = 0;
    v125 = 0;
    v126 = v151;
    v130 = struct32 {
        field_0: &g_4117cc
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v130);
    v112 = v0;
    v0 = v104;
    memcpy(&v5, &v109, 320);
    v32 = v114;
    v34 = v115;
    v35 = v116;
    v37 = v117;
    memcpy(&v40, &v119, 144);
    v2 = &g_1;
    v3 = 0;
    v4 = &g_1;
    v31 = v113;
    v39 = 0;
    v49 = 128;
    v50 = v151;
    v130 = struct32 {
        field_0: &g_41a219
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v104 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v130);
    v152 = v129;
    v39 = v106;
    v37 = v104;
    memcpy(&v104, &v0, 592);
    v153 = v111;
    v154 = v153;
    if v110 - v153 <= 1 {
        v110 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v153, &g_1);
        v154 = v111;
    }
    v155 = *((&v110 as &char + 8) as &i64);
    v156 = v154 * &g_1;
    *((v155 + v156) as &&i64) = &g_41a062;
    *((v155 + v156 + &g_1 as &u8) as &&i64) = &g_1;
    *((v155 + v156 + &g_1 as &u8) as &&i64) = &g_41a068;
    *((v155 + v156 + &g_11 as &u8) as &&i64) = &g_1;
    v111 = v154 + &g_1 as &u8;
    memcpy(&v130, &v104, 592);
    v0 = clap_builder::builder::command::Command::arg(&v55, &v130);
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v93 = v152;
    v94 = &g_41a046;
    v95 = &g_1;
    v96 = &g_41a046;
    v97 = &g_1;
    v98 = 0;
    v99 = 0x11000000110000;
    v100 = 0;
    v101 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 163);
    v157 = v106;
    memcpy(v105 + v157, &g_41a21f, 163);
    v106 = v157 + 163;
    v130 = *((&v104 as &char + 8) as &i128);
    if v90 != 0x8000000000000000 {
        v104 = v130;
    }
    v90 = v104;
    memcpy(&v104, &v55, 588);
    v127 = *((&v55 as &char + 589) as &i16);
    v128 = *((&v55 as &char + 591) as &i8);
    v126 = &g_1;
    v55 = clap_builder::builder::command::Command::arg(&v0, &v104);
    v10 = 0;
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
    v34 = 0;
    v36 = 0;
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
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v38 = &g_1;
    v39 = 0;
    v40 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v42 = v152;
    v43 = &g_411200;
    v44 = &g_1;
    v45 = &g_411200;
    v46 = &g_1;
    v47 = 0;
    v48 = 0x11000000110000;
    v49 = 0;
    v50 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v158 = v105;
    v159 = v106;
    *((v158 + v159 + &g_1 as &u8) as &i128) = 161399553768681628990017340965503661153;
    *((v158 + v159) as &i128) = 52084723373256604827484802983282110308;
    v106 = v159 + &g_11 as &u8;
    v130 = *((&v104 as &char + 8) as &i128);
    if v40 != 0x8000000000000000 {
        v104 = v130;
    }
    v40 = v104;
    memcpy(&v104, &v0, 588);
    v127 = *((&v0 as &char + 589) as &i16);
    v128 = *((&v0 as &char + 591) as &i8);
    v126 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v55, &v104);
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v93 = v152;
    v94 = &g_41a055;
    v95 = &g_1;
    v96 = &g_41a055;
    v97 = &g_1;
    v98 = 0;
    v99 = 0x11000000110000;
    v100 = 0;
    v101 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v160 = v105;
    v161 = v106;
    *((v160 + v161 + &g_1 as &u8) as &i128) = 55102854062847634536150606884955514230;
    *((v160 + v161) as &i128) = 62676872455179573632330711575421808484;
    v106 = v161 + &g_11 as &u8;
    v130 = *((&v104 as &char + 8) as &i128);
    if v90 != 0x8000000000000000 {
        v104 = v130;
    }
    v90 = v104;
    memcpy(&v104, &v55, 588);
    v127 = *((&v55 as &char + 589) as &i16);
    v128 = *((&v55 as &char + 591) as &i8);
    v126 = &g_1;
    v55 = clap_builder::builder::command::Command::arg(&v0, &v104);
    v10 = 0;
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
    v34 = 0;
    v36 = 0;
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
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v38 = &g_1;
    v39 = 0;
    v40 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v42 = v152;
    v43 = &g_41a073;
    v44 = &g_1;
    v45 = 0;
    v47 = 0;
    v48 = 4785074604081266;
    v49 = 0;
    v50 = 3337;
    v162 = v29;
    v164 = &g_1;
    if v162 == *((&v26 as &char + 8) as &i64) {
        v27 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v164 = v28;
    }
    *((v164 + v162 * &g_1) as &&i64) = &g_51;
    *((v164 + v162 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    v29 = v162 + &g_1 as &u8;
    memcpy(&v104, &v0, 544);
    v123 = *((&v0 as &char + 560) as &i128);
    v124 = *((&v0 as &char + 576) as &i128);
    v121 = &g_41a073;
    v122 = &g_1;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v165 = v1;
    v166 = v2;
    *((v165 + v166 + &g_11 as &u8) as &i128) = 144083447206502374782265066237719373172;
    *((v165 + v166 + &g_1 as &u8) as &i128) = 146793435016898781074553261425487278949;
    *((v165 + v166) as &i128) = 140163121967983651768628729298811708786;
    *((v165 + v166 + &g_21 as &u8) as &i8) = 121;
    v2 = v166 + &g_31 as &u8;
    v167 = v0;
    v130 = *((&v0 as &char + 8) as &i128);
    if v167 != 0x8000000000000000 {
        v0 = v130;
    }
    v119 = v167;
    v120 = v0;
    memcpy(&v130, &v104, 588);
    v132 = v127;
    v133 = v128;
    v131 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v55, &v130);
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v93 = v152;
    v94 = &g_41a033;
    v95 = &g_1;
    v96 = &g_41a033;
    v97 = &g_1;
    v98 = 0;
    v99 = 4785074604081252;
    v100 = 0;
    v101 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v168 = v105;
    v169 = v106;
    *((v168 + v169) as &i128) = 152079213503476584542017076196067337586;
    *((v168 + v169 + &g_1 as &u8) as &i64) = 8315168227226575717;
    v106 = v169 + &g_11 as &u8;
    v130 = *((&v104 as &char + 8) as &i128);
    if v90 != 0x8000000000000000 {
        v104 = v130;
    }
    v90 = v104;
    memcpy(&v104, &v55, 588);
    v127 = *((&v55 as &char + 589) as &i16);
    v128 = *((&v55 as &char + 591) as &i8);
    v126 = &g_1;
    v55 = clap_builder::builder::command::Command::arg(&v0, &v104);
    v10 = 0;
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
    v34 = 0;
    v36 = 0;
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
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v38 = &g_1;
    v39 = 0;
    v40 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v42 = v152;
    v43 = &g_41a07c;
    v44 = &g_1;
    v45 = &g_41a07c;
    v46 = &g_1;
    v47 = 0;
    v48 = 4785074604081270;
    v49 = 0;
    v50 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v170 = v105;
    v171 = v106;
    *((v170 + v171 + &g_1 as &u8) as &i128) = 134825439509026152042503714814086378593;
    *((v170 + v171) as &i128) = 43134542228176417259448481801986668645;
    v106 = v171 + &g_11 as &u8;
    v130 = *((&v104 as &char + 8) as &i128);
    if v40 != 0x8000000000000000 {
        v104 = v130;
    }
    v40 = v104;
    memcpy(&v104, &v0, 588);
    v127 = *((&v0 as &char + 589) as &i16);
    v128 = *((&v0 as &char + 591) as &i8);
    v126 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v55, &v104);
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v93 = v152;
    v94 = &g_41a083;
    v95 = &g_11;
    v96 = &g_41a35a;
    v97 = &g_11;
    v98 = 0;
    v99 = 0x11000000110000;
    v100 = 0;
    v101 = 3337;
    v172 = v79;
    v174 = &g_1;
    if v172 == *((&v76 as &char + 8) as &i64) {
        v77 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v174 = v78;
    }
    v175 = v172 * &g_1;
    *((v174 + v175 * &g_1) as &&i64) = &g_41a083;
    *((v174 + v175 * &g_1 + &g_1 as &u8) as &&i64) = &g_11;
    *((v174 + v175 * &g_1 + &g_1 as &u8) as &i8) = 0;
    v79 = v172 + &g_1 as &u8;
    memcpy(&v104, &v55, 584);
    v125 = v100 | &g_1;
    *(&v126 as &unsigned long) = -0x100 & *((&v55 as &char + 588) as &i32) | &g_1;
    v55 = clap_builder::builder::command::Command::arg(&v0, &v104);
    v10 = 0;
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
    v34 = 0;
    v36 = 0;
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
    v28 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v38 = &g_1;
    v39 = 0;
    v40 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v42 = v152;
    v43 = &g_41a095;
    v44 = &g_1;
    v45 = 0;
    v47 = 0;
    v48 = 0x11000000110000;
    v49 = 0;
    v50 = 3329;
    v130 = struct8 {
        field_0: &g_1
    };
    v104 = clap_builder::builder::arg::Arg::value_parser(&v0, &v130);
    v106 = &g_1;
    v107 = &g_1;
    v108 = -1;
    memcpy(&v0, &v104, 589);
    v51 = &g_1;
    v52 = *((&v104 as &char + 590) as &i16);
    clap_builder::builder::command::Command::arg(a0, &v55, &v0);
    return a0;
}
