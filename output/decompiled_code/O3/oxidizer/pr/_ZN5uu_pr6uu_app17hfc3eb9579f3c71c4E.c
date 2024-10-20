fn uu_pr::uu_app(a0: u32) -> u64 {
    let v0: i192;  // [sp-0xa78], Other Possible Types: struct24, Enum
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
    let v43: i64;  // [bp-0x848]
    let v44: i64;  // [sp-0x838]
    let v45: i32;  // [sp-0x830]
    let v46: i8;  // [bp-0x82c]
    let v47: i16;  // [sp-0x82b]
    let v48: i8;  // [sp-0x829]
    let v49: i64;  // [sp-0x828], Other Possible Types: struct712, Enum
    let v50: i64;  // [sp-0x820]
    let v51: i64;  // [sp-0x818]
    let v52: i64;  // [sp-0x800]
    let v53: i64;  // [sp-0x7f0]
    let v54: i64;  // [sp-0x7d8]
    let v55: i64;  // [sp-0x7c0]
    let v56: i64;  // [sp-0x7b8]
    let v57: i128;  // [sp-0x7b0]
    let v58: i64;  // [sp-0x7a0]
    let v59: i128;  // [sp-0x798]
    let v60: i64;  // [sp-0x788]
    let v61: i128;  // [sp-0x780]
    let v62: i64;  // [sp-0x770]
    let v63: i128;  // [sp-0x768]
    let v64: i64;  // [sp-0x758]
    let v65: i128;  // [sp-0x750]
    let v66: i64;  // [sp-0x740]
    let v67: i128;  // [sp-0x738]
    let v68: i64;  // [sp-0x728]
    let v69: i128;  // [sp-0x720]
    let v70: i64;  // [sp-0x710]
    let v71: i128;  // [sp-0x708]
    let v72: i64;  // [sp-0x6f8]
    let v73: i128;  // [sp-0x6f0]
    let v74: i64;  // [sp-0x6e0]
    let v75: i128;  // [bp-0x6d8]
    let v76: i128;  // [bp-0x6d0]
    let v77: i64;  // [sp-0x6c8]
    let v78: i64;  // [bp-0x6c0]
    let v79: i64;  // [sp-0x6b0]
    let v80: i128;  // [sp-0x6a8]
    let v81: i64;  // [sp-0x698]
    let v82: i128;  // [sp-0x690]
    let v83: i64;  // [sp-0x680]
    let v84: i64;  // [sp-0x678]
    let v85: i64;  // [sp-0x670]
    let v86: i128;  // [sp-0x668]
    let v87: i64;  // [sp-0x658]
    let v88: i64;  // [sp-0x630]
    let v89: i64;  // [sp-0x618]
    let v90: i64;  // [sp-0x610]
    let v91: i64;  // [sp-0x608]
    let v92: i64;  // [sp-0x600]
    let v93: i64;  // [sp-0x5f8]
    let v94: i64;  // [sp-0x5e8]
    let v95: i32;  // [sp-0x5e0]
    let v96: i16;  // [bp-0x5dc]
    let v97: i64;  // [sp-0x5c8]
    let v98: i64;  // [sp-0x5c0]
    let v99: i64;  // [sp-0x56c]
    let v100: i32;  // [sp-0x564]
    let v101: i5696;  // [bp-0x558], Other Possible Types: struct712, Enum
    let v102: i64;  // [sp-0x550]
    let v103: i64;  // [sp-0x548]
    let v104: i64;  // [sp-0x530]
    let v105: i64;  // [sp-0x520]
    let v106: i64;  // [sp-0x508]
    let v107: i64;  // [sp-0x4f0]
    let v108: i64;  // [sp-0x4e8]
    let v109: i128;  // [sp-0x4e0]
    let v110: i64;  // [sp-0x4d0]
    let v111: i128;  // [sp-0x4c8]
    let v112: i64;  // [sp-0x4b8]
    let v113: i128;  // [sp-0x4b0]
    let v114: i64;  // [sp-0x4a0]
    let v115: i128;  // [sp-0x498]
    let v116: i64;  // [sp-0x488]
    let v117: i128;  // [sp-0x480]
    let v118: i64;  // [sp-0x470]
    let v119: i128;  // [sp-0x468]
    let v120: i64;  // [sp-0x458]
    let v121: i128;  // [sp-0x450]
    let v122: i64;  // [sp-0x440]
    let v123: i128;  // [sp-0x438]
    let v124: i64;  // [sp-0x428]
    let v125: i128;  // [sp-0x420]
    let v126: struct16;  // [sp-0x418]
    let v127: i64;  // [sp-0x410]
    let v128: i128;  // [bp-0x408]
    let v129: i128;  // [bp-0x400]
    let v130: i64;  // [sp-0x3f8]
    let v131: i64;  // [bp-0x3f0]
    let v132: i64;  // [sp-0x3e0]
    let v133: i128;  // [sp-0x3d8]
    let v134: i64;  // [sp-0x3c8]
    let v135: i128;  // [sp-0x3c0]
    let v136: i64;  // [sp-0x3b0]
    let v137: i64;  // [sp-0x3a8]
    let v138: i64;  // [sp-0x3a0]
    let v139: i128;  // [sp-0x398]
    let v140: i64;  // [sp-0x388]
    let v141: i128;  // [sp-0x380]
    let v142: i64;  // [sp-0x360]
    let v143: i64;  // [sp-0x348]
    let v144: i64;  // [sp-0x340]
    let v145: i64;  // [sp-0x338]
    let v146: i64;  // [sp-0x330]
    let v147: i64;  // [sp-0x328]
    let v148: i64;  // [sp-0x318]
    let v149: i32;  // [sp-0x310]
    let v150: i16;  // [sp-0x30c]
    let v151: i128;  // [bp-0x288], Other Possible Types: struct32
    let v152: i8;  // [sp-0x3c]
    let v153: i16;  // [sp-0x3b]
    let v154: i8;  // [sp-0x39]
    let v156: i64;  // rbx
    let v157: i64;  // rax
    let v158: i64;  // rcx
    let v160: i64;  // rax
    let v161: i64;  // rcx
    let v163: i64;  // rax
    let v164: i64;  // rcx
    let v165: i64;  // r14
    let v167: i32;  // eax
    let v168: i64;  // rax
    let v169: i64;  // rcx
    let v171: i64;  // r14
    let v172: i64;  // r14
    let v174: i64;  // rax
    let v175: i64;  // rcx
    let v176: i64;  // rbp
    let v178: i64;  // rax
    let v179: i128;  // xmm1
    let v180: i64;  // rax
    let v181: i64;  // rcx
    let v182: i64;  // r14
    let v183: i64;  // r14
    let v185: i64;  // rax
    let v186: i64;  // rcx
    let v188: i64;  // r14
    let v189: i64;  // r15
    let v191: i64;  // r14
    let v193: i64;  // r14
    let v195: i64;  // r14
    let v196: i64;  // r14
    let v198: i64;  // rax
    let v199: i64;  // rcx
    let v200: i64;  // rax
    let v201: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v49 = clap_builder::builder::command::Command::new(g_6ccf18, g_6ccf20);
    v97 = &g_46a079;
    v98 = &g_1;
    memcpy(&v101, &v49, 712);
    v49 = clap_builder::builder::command::Command::about(&v101, &g_46a07f, &g_51);
    v101 = clap_builder::builder::command::Command::after_help(&v49, &g_46a0d6, 877);
    v0 = uucore::format_usage(&g_46a443, &g_11);
    v156 = v0;
    if v156 != 0x8000000000000000 {
        v49 = *((&v0 as &char + 8) as &i128);
    }
    v140 = v156;
    v141 = v49;
    memcpy(&v49, &v101, 700);
    v99 = 1126484022657160 | *((&v101 as &char + 700) as &i64);
    v100 = *((&v101 as &char + 708) as &i32);
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
    v39 = &g_46a45b;
    v40 = &g_1;
    v41 = &g_46a45b;
    v42 = &g_1;
    v43 = 0;
    v44 = 0x11000000110000;
    v45 = 0;
    v46 = 3337;
    v101 = 0;
    v102 = &g_1;
    v103 = 0;
    v101 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v157 = v102;
    v158 = v103;
    *((v157 + v158 + &g_11 as &u8) as &i128) = 86795617898228587080750654373962850405;
    *((v157 + v158 + &g_1 as &u8) as &i128) = 137416410558628197095079256985206417778;
    *((v157 + v158) as &i128) = 149041969487624780896655565211723851074;
    *((v157 + v158 + &g_21 as &u8) as &i64) = 6720856364767204435;
    v103 = v158 + &g_31 as &u8;
    v151 = *((&v101 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v101 = v151;
    }
    v35 = v101;
    v36 = v101;
    memcpy(&v101, &v0, 360);
    memcpy(&v101, &v28, 224);
    v131 = v28;
    v151 = struct32 {
        field_0: &g_46a498
        field_8: &g_11
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v151);
    v131 = v2;
    v129 = v0;
    memcpy(&v0, &v101, 592);
    v101 = clap_builder::builder::command::Command::arg(&v49, &v0);
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
    v39 = &g_46a4ae;
    v40 = &g_1;
    v41 = &g_46a4ae;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081256;
    v45 = 0;
    v46 = 3337;
    v49 = 0;
    v50 = &g_1;
    v51 = 0;
    v49 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_41);
    v160 = v50;
    v161 = v51;
    *((v160 + v161 + &g_21 as &u8) as &i128) = 146762463777429164417983071552894410862;
    *((v160 + v161 + &g_11 as &u8) as &i128) = 139737150246282144792026905047451857952;
    *((v160 + v161 + &g_1 as &u8) as &i128) = 134768040948429518406966277664317661541;
    *((v160 + v161) as &i128) = 138407962897025711450138980135700099925;
    *((v160 + v161 + 64) as &i16) = 11877;
    v51 = v161 + &g_41 as &u8;
    v151 = *((&v49 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v49 = v151;
    }
    v35 = v49;
    v36 = v49;
    memcpy(&v49, &v0, 360);
    memcpy(&v49, &v28, 224);
    v78 = v28;
    v151 = struct32 {
        field_0: &g_46a4f6
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v151);
    v78 = v2;
    v76 = v0;
    memcpy(&v0, &v49, 592);
    v49 = clap_builder::builder::command::Command::arg(&v101, &v0);
    v109 = 0;
    v111 = 0;
    v113 = 0;
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v128 = 0;
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v101 = 0;
    v103 = 0;
    v104 = 0;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v108 = &g_1;
    v110 = &g_1;
    v112 = &g_1;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v127 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v137 = 0;
    v138 = 0x8000000000000000;
    v140 = 0x8000000000000000;
    v142 = 9223372036854775809;
    v143 = &g_46a4fc;
    v144 = &g_1;
    v145 = &g_46a4fc;
    v146 = &g_1;
    v147 = 0;
    v148 = 4785074604081252;
    v149 = 0;
    v150 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_6b);
    v163 = v1;
    v164 = v2;
    *((v163 + v164 + &g_61 as &u8) as &i128) = 61749176191344440279312848084615062638;
    *((v163 + v164 + &g_51 as &u8) as &i128) = 43108580738947760248031652388411108471;
    *((v163 + v164 + 80) as &i128) = 134824399746178736633943437007520231276;
    *((v163 + v164 + 64) as &i128) = 144135039873191289580721444656854889061;
    *((v163 + v164 + &g_21 as &u8) as &i128) = 154706461355933512377215875432622548334;
    *((v163 + v164 + &g_11 as &u8) as &i128) = 79921809708355957491392038313935594337;
    *((v163 + v164 + &g_1 as &u8) as &i128) = 149471306739337224099368543599287624040;
    *((v163 + v164) as &i128) = 154358963074535504565518685150246826576;
    v2 = v164 + &g_6b as &u8;
    v151 = *((&v0 as &char + 8) as &i128);
    if v138 != 0x8000000000000000 {
        v0 = v151;
    }
    v138 = v0;
    v139 = v0;
    memcpy(&v0, &v101, 588);
    v47 = *((&v101 as &char + 589) as &i16);
    v48 = *((&v101 as &char + 591) as &i8);
    v46 = &g_1;
    v101 = clap_builder::builder::command::Command::arg(&v49, &v0);
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
    v39 = &g_46a582;
    v40 = &g_1;
    v41 = &g_46a582;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081262;
    v45 = 0;
    v46 = 3337;
    v49 = 0;
    v50 = &g_1;
    v51 = 0;
    v49 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 389);
    v165 = v51;
    memcpy(v50 + v165, &g_46a58e, 389);
    v51 = v165 + 389;
    v151 = *((&v49 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v49 = v151;
    }
    v35 = v49;
    v36 = v49;
    memcpy(&v49, &v0, 360);
    memcpy(&v49, &v28, 216);
    v167 = v46;
    v78 = v28;
    v95 = &g_11;
    v96 = v167;
    v151 = struct32 {
        field_0: &g_46a713
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v151);
    v78 = v2;
    v76 = v0;
    memcpy(&v0, &v49, 592);
    v49 = clap_builder::builder::command::Command::arg(&v101, &v0);
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
    v39 = &g_46a720;
    v40 = &g_11;
    v41 = &g_46a720;
    v42 = &g_11;
    v43 = 0;
    v44 = 4785074604081230;
    v45 = 0;
    v46 = 3337;
    v101 = 0;
    v102 = &g_1;
    v103 = 0;
    v101 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 60);
    v168 = v102;
    v169 = v103;
    *((v168 + v169 + &g_21 as &u8) as &i128) = 133449583068449778121034707083898155890;
    *((v168 + v169 + &g_11 as &u8) as &i128) = 43139943842441683976209386502366175348;
    *((v168 + v169 + &g_1 as &u8) as &i128) = 153116300318966820536405178186021237865;
    *((v168 + v169) as &i128) = 158346382833801839103721814043383657587;
    v103 = v169 + 60;
    v151 = *((&v101 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v101 = v151;
    }
    v35 = v101;
    v36 = v101;
    memcpy(&v101, &v0, 360);
    memcpy(&v101, &v28, 224);
    v131 = v28;
    v151 = struct32 {
        field_0: &g_46a76d
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v151);
    v131 = v2;
    v129 = v0;
    memcpy(&v0, &v101, 592);
    v101 = clap_builder::builder::command::Command::arg(&v49, &v0);
    v57 = 0;
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
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
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v84 = 0;
    v85 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_46a773;
    v90 = &g_1;
    v91 = &g_46a773;
    v92 = &g_1;
    v93 = 0;
    v94 = 4785074604081268;
    v95 = 0;
    v96 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 190);
    v171 = v2;
    memcpy(v1 + v171, &g_46a77e, 190);
    v2 = v171 + 190;
    v151 = *((&v0 as &char + 8) as &i128);
    if v85 != 0x8000000000000000 {
        v0 = v151;
    }
    v85 = v0;
    v86 = v0;
    memcpy(&v0, &v49, 588);
    v47 = *((&v49 as &char + 589) as &i16);
    v48 = *((&v49 as &char + 591) as &i8);
    v46 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v101, &v0);
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
    v39 = &g_46a83c;
    v40 = &g_1;
    v41 = &g_46a83c;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081260;
    v45 = 0;
    v46 = 3337;
    v101 = 0;
    v102 = &g_1;
    v103 = 0;
    v101 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 305);
    v172 = v103;
    memcpy(v102 + v172, &g_46a842, 305);
    v103 = v172 + 305;
    v151 = *((&v101 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v101 = v151;
    }
    v35 = v101;
    v36 = v101;
    memcpy(&v101, &v0, 360);
    memcpy(&v101, &v28, 224);
    v131 = v28;
    v151 = struct32 {
        field_0: &g_46a973
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v151);
    v131 = v2;
    v129 = v0;
    memcpy(&v0, &v101, 592);
    v101 = clap_builder::builder::command::Command::arg(&v49, &v0);
    v57 = 0;
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
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
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v84 = 0;
    v85 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_459dd0;
    v90 = &g_1;
    v91 = &g_459dd0;
    v92 = &g_1;
    v93 = 0;
    v94 = 4785074604081266;
    v95 = 0;
    v96 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v174 = v1;
    v175 = v2;
    *((v174 + v175 + &g_11 as &u8) as &i128) = 133449460663101085357194271548660146531;
    *((v174 + v175 + &g_1 as &u8) as &i128) = 43139862397432314839062080163808354414;
    *((v174 + v175) as &i128) = 134794442621618595979511637905871826287;
    v2 = v175 + &g_21 as &u8;
    v151 = *((&v0 as &char + 8) as &i128);
    if v85 != 0x8000000000000000 {
        v0 = v151;
    }
    v85 = v0;
    memcpy(&v0, &v49, 588);
    v47 = *((&v49 as &char + 589) as &i16);
    v48 = *((&v49 as &char + 591) as &i8);
    v46 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v101, &v0);
    v109 = 0;
    v111 = 0;
    v113 = 0;
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v128 = 0;
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v101 = 0;
    v103 = 0;
    v104 = 0;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v108 = &g_1;
    v110 = &g_1;
    v112 = &g_1;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v127 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v137 = 0;
    v138 = 0x8000000000000000;
    v140 = 0x8000000000000000;
    v142 = 9223372036854775809;
    v143 = &g_46a9a7;
    v144 = &g_1;
    v145 = 0;
    v147 = 0;
    v148 = 4785074604081222;
    v149 = 0;
    v150 = 3337;
    v176 = v128;
    v178 = &g_1;
    if v176 == *((&v125 as &char + 8) as &i64) {
        v126 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v178 = v127;
    }
    *((v178 + v176 * &g_1) as &&i64) = &g_61;
    *((v178 + v176 * &g_1 + &g_1 as &u8) as &i8) = 0;
    v128 = v176 + &g_1 as &u8;
    memcpy(&v0, &v101, 544);
    v179 = *((&v101 as &char + 576) as &i128);
    v43 = *((&v101 as &char + 560) as &i128);
    v44 = v179;
    v41 = &g_46a9a7;
    v42 = &g_1;
    v101 = 0;
    v102 = &g_1;
    v103 = 0;
    v101 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_61);
    v180 = v102;
    v181 = v103;
    *((v180 + v181 + 80) as &i128) = 146762470666266688270055836302229529973;
    *((v180 + v181 + 64) as &i128) = 150729520548872408149653747692852507680;
    *((v180 + v181 + &g_21 as &u8) as &i128) = 152110475502855588493431935980162934116;
    *((v180 + v181 + &g_11 as &u8) as &i128) = 43061836418922312479882974715152591136;
    *((v180 + v181 + &g_1 as &u8) as &i128) = 59085202667294110335654230192692797502;
    *((v180 + v181) as &i128) = 133449278179905288915570500057119945557;
    *((v180 + v181 + &g_51 as &u8) as &i32) = 779304549;
    v103 = v181 + &g_61 as &u8;
    v182 = v101;
    v151 = *((&v101 as &char + 8) as &i128);
    if v182 != 0x8000000000000000 {
        v101 = v151;
    }
    v35 = v182;
    v36 = v101;
    memcpy(&v151, &v0, 588);
    v153 = v47;
    v154 = v48;
    v152 = &g_1;
    v101 = clap_builder::builder::command::Command::arg(&v49, &v151);
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
    v39 = &g_46aa14;
    v40 = &g_1;
    v41 = &g_46aa14;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081271;
    v45 = 0;
    v46 = 3337;
    v49 = 0;
    v50 = &g_1;
    v51 = 0;
    v49 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 288);
    v183 = v51;
    memcpy(v50 + v183, &g_46aa19, 288);
    v51 = v183 + 288;
    v151 = *((&v49 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v49 = v151;
    }
    v35 = v49;
    memcpy(&v49, &v0, 360);
    memcpy(&v49, &v28, 224);
    v78 = v28;
    v151 = struct32 {
        field_0: &g_46aa14
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v151);
    v78 = v2;
    v76 = v0;
    memcpy(&v0, &v49, 592);
    v49 = clap_builder::builder::command::Command::arg(&v101, &v0);
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
    v39 = &g_46ab39;
    v40 = &g_1;
    v41 = &g_46ab39;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081239;
    v45 = 0;
    v46 = 3337;
    v101 = 0;
    v102 = &g_1;
    v103 = 0;
    v101 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 123);
    v185 = v102;
    v186 = v103;
    *((v185 + v186 + &g_6b as &u8) as &i128) = 153095530977409150612063512905740477795;
    *((v185 + v186 + &g_51 as &u8) as &i128) = 140187479953506018818567552128145844512;
    *((v185 + v186 + 80) as &i128) = 148116112745733866730360018447536583792;
    *((v185 + v186 + 64) as &i128) = 147711965505221046226635285403933042030;
    *((v185 + v186 + &g_21 as &u8) as &i128) = 140130364693307655328597951729236146529;
    *((v185 + v186 + &g_11 as &u8) as &i128) = 158740869523888577706813223312623345705;
    *((v185 + v186 + &g_1 as &u8) as &i128) = 66747789970535348637848744487541547119;
    *((v185 + v186) as &i128) = 154358719602664987921750077077235983731;
    v103 = v186 + 123;
    v151 = *((&v101 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v101 = v151;
    }
    v35 = v101;
    memcpy(&v101, &v0, 360);
    memcpy(&v101, &v28, 224);
    v131 = v28;
    v151 = &g_46aa14;
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v151);
    v131 = v2;
    v129 = v0;
    memcpy(&v0, &v101, 592);
    v101 = clap_builder::builder::command::Command::arg(&v49, &v0);
    v57 = 0;
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
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
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v84 = 0;
    v85 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_46abbe;
    v90 = &g_1;
    v91 = &g_46abbe;
    v92 = &g_1;
    v93 = 0;
    v94 = 4785074604081249;
    v95 = 0;
    v96 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 262);
    v188 = v2;
    memcpy(v1 + v188, &g_46abc4, 262);
    v2 = v188 + 262;
    v151 = *((&v0 as &char + 8) as &i128);
    if v85 != 0x8000000000000000 {
        v0 = v151;
    }
    v85 = v0;
    memcpy(&v0, &v49, 588);
    v47 = *((&v49 as &char + 589) as &i16);
    v48 = *((&v49 as &char + 591) as &i8);
    v46 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v101, &v0);
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
    v39 = &g_46acca;
    v40 = &g_1;
    v41 = &g_46acca;
    v42 = &g_1;
    v43 = 0;
    v44 = 0x11000000110000;
    v45 = 0;
    v46 = 3337;
    v101 = 0;
    v102 = &g_1;
    v103 = 0;
    v101 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 540);
    v189 = v103;
    memcpy(v102 + v189, &g_46acd0, 540);
    v103 = v189 + 540;
    v151 = *((&v101 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v101 = v151;
    }
    v35 = v101;
    memcpy(&v101, &v0, 360);
    memcpy(&v101, &v28, 224);
    v131 = v28;
    v151 = struct32 {
        field_0: &g_46acca
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v151);
    v131 = v2;
    v129 = v0;
    memcpy(&v0, &v101, 592);
    v101 = clap_builder::builder::command::Command::arg(&v49, &v0);
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
    v39 = &g_46aeec;
    v40 = &g_1;
    v41 = &g_46aeec;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081267;
    v45 = 0;
    v46 = 3337;
    v49 = 0;
    v50 = &g_1;
    v51 = 0;
    v49 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 142);
    v191 = v51;
    memcpy(v50 + v191, &g_46aef5, 142);
    v51 = v191 + 142;
    v151 = *((&v49 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v49 = v151;
    }
    v35 = v49;
    memcpy(&v49, &v0, 360);
    memcpy(&v49, &v28, 224);
    v78 = v28;
    v151 = struct32 {
        field_0: &g_45e6c0
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v151);
    v78 = v2;
    v76 = v0;
    memcpy(&v0, &v49, 592);
    v49 = clap_builder::builder::command::Command::arg(&v101, &v0);
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
    v39 = &g_46af83;
    v40 = &g_1;
    v41 = &g_46af83;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081235;
    v45 = 0;
    v46 = 3337;
    v101 = 0;
    v102 = &g_1;
    v103 = 0;
    v101 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 138);
    v193 = v103;
    memcpy(v102 + v193, &g_46af8d, 138);
    v103 = v193 + 138;
    v151 = *((&v101 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v101 = v151;
    }
    v35 = v101;
    memcpy(&v101, &v0, 360);
    memcpy(&v101, &v28, 224);
    v131 = v28;
    v151 = struct32 {
        field_0: &g_46b017
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v151);
    v131 = v2;
    v129 = v0;
    memcpy(&v0, &v101, 592);
    v101 = clap_builder::builder::command::Command::arg(&v49, &v0);
    v57 = 0;
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
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
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v84 = 0;
    v85 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_46b01d;
    v90 = &g_1;
    v91 = &g_46b01d;
    v92 = &g_1;
    v93 = 0;
    v94 = 4785074604081261;
    v95 = 0;
    v96 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 293);
    v195 = v2;
    memcpy(v1 + v195, &g_46b022, 293);
    v2 = v195 + 293;
    v151 = *((&v0 as &char + 8) as &i128);
    if v85 != 0x8000000000000000 {
        v0 = v151;
    }
    v85 = v0;
    memcpy(&v0, &v49, 588);
    v47 = *((&v49 as &char + 589) as &i16);
    v48 = *((&v49 as &char + 591) as &i8);
    v46 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v101, &v0);
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
    v39 = &g_46b147;
    v40 = &g_1;
    v41 = &g_46b147;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081263;
    v45 = 0;
    v46 = 3337;
    v101 = 0;
    v102 = &g_1;
    v103 = 0;
    v101 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 209);
    v196 = v103;
    memcpy(v102 + v196, &g_46b14d, 209);
    v103 = v196 + 209;
    v151 = *((&v101 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v101 = v151;
    }
    v35 = v101;
    memcpy(&v101, &v0, 360);
    memcpy(&v101, &v28, 224);
    v131 = v28;
    v151 = struct32 {
        field_0: &g_46b21e
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v151);
    v131 = v2;
    v129 = v0;
    memcpy(&v0, &v101, 592);
    v101 = clap_builder::builder::command::Command::arg(&v49, &v0);
    v57 = 0;
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
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
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v84 = 0;
    v85 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_46b224;
    v90 = &g_1;
    v91 = 0;
    v93 = 0;
    v94 = 4785074604081226;
    v95 = 0;
    v96 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_61);
    v198 = v1;
    v199 = v2;
    *((v198 + v199 + &g_51 as &u8) as &i128) = 153455401925229476362671443813436060448;
    *((v198 + v199 + 80) as &i128) = 43134770801037152895795325513628474215;
    *((v198 + v199 + 64) as &i128) = 146762592127294279433309882948812828261;
    *((v198 + v199 + &g_21 as &u8) as &i128) = 145459101635682701323426953992758914926;
    *((v198 + v199 + &g_11 as &u8) as &i128) = 42765996818911902445717699461208436329;
    *((v198 + v199 + &g_1 as &u8) as &i128) = 143724545189174174074138126843148247084;
    *((v198 + v199) as &i128) = 153387880915454387359142403589390099821;
    v2 = v199 + &g_61 as &u8;
    v151 = *((&v0 as &char + 8) as &i128);
    if v85 != 0x8000000000000000 {
        v0 = v151;
    }
    v85 = v0;
    memcpy(&v0, &v49, 588);
    v47 = *((&v49 as &char + 589) as &i16);
    v48 = *((&v49 as &char + 591) as &i8);
    v46 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v101, &v0);
    v109 = 0;
    v111 = 0;
    v113 = 0;
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v128 = 0;
    v131 = 0;
    v133 = 0;
    v135 = 0;
    v101 = 0;
    v103 = 0;
    v104 = 0;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v108 = &g_1;
    v110 = &g_1;
    v112 = &g_1;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v127 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v137 = 0;
    v138 = 0x8000000000000000;
    v140 = 0x8000000000000000;
    v142 = 9223372036854775809;
    v143 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v144 = &g_1;
    v145 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v146 = &g_1;
    v147 = 0;
    v148 = 0x11000000110000;
    v149 = 0;
    v150 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v200 = v1;
    v201 = v2;
    *((v200 + v201) as &i128) = 152110414024190366979331735664405869136;
    *((v200 + v201 + &g_1 as &u8) as &i64) = 7957695015158641263;
    v2 = v201 + &g_11 as &u8;
    v151 = *((&v0 as &char + 8) as &i128);
    if v138 != 0x8000000000000000 {
        v0 = v151;
    }
    v138 = v0;
    memcpy(&v0, &v101, 588);
    v47 = *((&v101 as &char + 589) as &i16);
    v48 = *((&v101 as &char + 591) as &i8);
    v46 = &g_1;
    v101 = clap_builder::builder::command::Command::arg(&v49, &v0);
    v57 = 0;
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
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
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v84 = 0;
    v85 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_46b2ae;
    v90 = &g_1;
    v91 = 0;
    v93 = 0;
    v94 = 0x11000000110000;
    v95 = 0;
    v96 = 769;
    clap_builder::builder::command::Command::arg(a0, &v101, &v49);
    return a0;
}
