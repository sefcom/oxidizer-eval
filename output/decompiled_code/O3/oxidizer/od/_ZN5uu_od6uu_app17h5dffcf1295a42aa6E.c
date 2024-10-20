fn uu_od::uu_app(a0: u32) -> u64 {
    let v0: i192;  // [sp-0xaa8], Other Possible Types: Enum, struct24
    let v1: i64;  // [sp-0xaa0]
    let v2: i64;  // [bp-0xa98]
    let v3: i64;  // [sp-0xa88]
    let v4: i64;  // [sp-0xa80]
    let v5: i64;  // [sp-0xa70]
    let v6: i64;  // [sp-0xa58]
    let v7: i64;  // [sp-0xa40]
    let v8: i64;  // [sp-0xa38]
    let v9: i128;  // [sp-0xa30]
    let v10: i64;  // [sp-0xa20]
    let v11: i128;  // [sp-0xa18]
    let v12: i64;  // [sp-0xa08]
    let v13: i128;  // [sp-0xa00]
    let v14: i64;  // [sp-0x9f0]
    let v15: i128;  // [sp-0x9e8]
    let v16: i64;  // [sp-0x9d8]
    let v17: i128;  // [sp-0x9d0]
    let v18: i64;  // [sp-0x9c0]
    let v19: i128;  // [sp-0x9b8]
    let v20: i64;  // [sp-0x9a8]
    let v21: i128;  // [sp-0x9a0]
    let v22: i64;  // [sp-0x990]
    let v23: i128;  // [sp-0x988]
    let v24: i64;  // [sp-0x978]
    let v25: i128;  // [sp-0x970]
    let v26: i64;  // [sp-0x960]
    let v27: i128;  // [bp-0x958]
    let v28: i128;  // [bp-0x950]
    let v29: i64;  // [sp-0x948]
    let v30: i128;  // [bp-0x940]
    let v31: i64;  // [sp-0x930]
    let v32: i128;  // [sp-0x928]
    let v33: i64;  // [sp-0x918]
    let v34: i128;  // [sp-0x910]
    let v35: i64;  // [sp-0x900]
    let v36: i64;  // [sp-0x8f8]
    let v37: i64;  // [sp-0x8f0]
    let v38: i128;  // [sp-0x8e8]
    let v39: i64;  // [sp-0x8d8]
    let v40: i64;  // [sp-0x8b0]
    let v41: i64;  // [sp-0x898]
    let v42: i64;  // [sp-0x890]
    let v43: i64;  // [sp-0x888]
    let v44: i64;  // [sp-0x880]
    let v45: i64;  // [sp-0x878]
    let v46: i64;  // [sp-0x868]
    let v47: i32;  // [sp-0x860]
    let v48: i8;  // [sp-0x85c]
    let v49: i16;  // [sp-0x85b]
    let v50: i8;  // [sp-0x859]
    let v51: i64;  // [sp-0x858], Other Possible Types: struct712, Enum, struct48
    let v52: i64;  // [sp-0x850]
    let v53: i64;  // [sp-0x848]
    let v54: i64;  // [sp-0x830]
    let v55: i64;  // [sp-0x820]
    let v56: i64;  // [sp-0x808]
    let v57: i64;  // [sp-0x7f0]
    let v58: i64;  // [sp-0x7e8]
    let v59: i128;  // [sp-0x7e0]
    let v60: i64;  // [sp-0x7d0]
    let v61: i128;  // [sp-0x7c8]
    let v62: i64;  // [sp-0x7b8]
    let v63: i128;  // [sp-0x7b0]
    let v64: i64;  // [sp-0x7a0]
    let v65: i128;  // [sp-0x798]
    let v66: i64;  // [sp-0x788]
    let v67: i128;  // [sp-0x780]
    let v68: i64;  // [sp-0x770]
    let v69: i128;  // [sp-0x768]
    let v70: i64;  // [sp-0x758]
    let v71: i128;  // [sp-0x750]
    let v72: i64;  // [sp-0x740]
    let v73: i128;  // [sp-0x738]
    let v74: i64;  // [sp-0x728]
    let v75: i128;  // [sp-0x720]
    let v76: i64;  // [sp-0x710]
    let v77: i128;  // [bp-0x708]
    let v78: i128;  // [bp-0x700]
    let v79: i64;  // [sp-0x6f8]
    let v80: i128;  // [bp-0x6f0]
    let v81: i64;  // [sp-0x6e0]
    let v82: i128;  // [sp-0x6d8]
    let v83: i64;  // [sp-0x6c8]
    let v84: i128;  // [sp-0x6c0]
    let v85: i64;  // [sp-0x6b0]
    let v86: i64;  // [sp-0x6a8]
    let v87: i192;  // [sp-0x6a0]
    let v88: i128;  // [sp-0x698]
    let v89: i64;  // [sp-0x688]
    let v90: i128;  // [sp-0x680]
    let v91: i64;  // [sp-0x660]
    let v92: i64;  // [sp-0x648]
    let v93: i64;  // [sp-0x640]
    let v94: i64;  // [sp-0x638]
    let v95: i64;  // [sp-0x630]
    let v96: i64;  // [sp-0x628]
    let v97: i64;  // [sp-0x618]
    let v98: i32;  // [sp-0x610]
    let v99: i16;  // [sp-0x60c]
    let v100: i64;  // [sp-0x5f8]
    let v101: i64;  // [sp-0x5f0]
    let v102: i64;  // [bp-0x588], Other Possible Types: struct712, Enum, struct32
    let v103: i64;  // [sp-0x580]
    let v104: i64;  // [sp-0x578]
    let v105: i64;  // [sp-0x570]
    let v106: i64;  // [sp-0x568]
    let v107: i64;  // [sp-0x560]
    let v108: i64;  // [sp-0x550]
    let v109: i64;  // [sp-0x538]
    let v110: i64;  // [sp-0x520]
    let v111: i64;  // [sp-0x518]
    let v112: i128;  // [sp-0x510]
    let v113: i64;  // [sp-0x500]
    let v114: i128;  // [sp-0x4f8]
    let v115: i64;  // [sp-0x4e8]
    let v116: i128;  // [sp-0x4e0]
    let v117: i64;  // [sp-0x4d0]
    let v118: i128;  // [sp-0x4c8]
    let v119: i64;  // [sp-0x4b8]
    let v120: i128;  // [sp-0x4b0]
    let v121: i64;  // [sp-0x4a0]
    let v122: i128;  // [sp-0x498]
    let v123: i64;  // [sp-0x488]
    let v124: i128;  // [sp-0x480]
    let v125: i64;  // [sp-0x470]
    let v126: i128;  // [sp-0x468]
    let v127: i64;  // [sp-0x458]
    let v128: i128;  // [sp-0x450]
    let v129: i64;  // [sp-0x440]
    let v130: i128;  // [bp-0x438]
    let v131: i128;  // [bp-0x430]
    let v132: i64;  // [sp-0x428]
    let v133: i64;  // [bp-0x420]
    let v134: i8;  // [bp-0x418]
    let v135: i64;  // [sp-0x410]
    let v136: i128;  // [sp-0x408]
    let v137: i64;  // [sp-0x3f8]
    let v138: i128;  // [bp-0x3f0]
    let v139: i128;  // [bp-0x3e8]
    let v140: i64;  // [sp-0x3e0]
    let v141: i64;  // [sp-0x3d8]
    let v142: i64;  // [sp-0x3d0]
    let v143: i128;  // [sp-0x3c8]
    let v144: i64;  // [sp-0x3b8]
    let v145: i64;  // [sp-0x390]
    let v146: i64;  // [sp-0x378]
    let v147: i64;  // [sp-0x370]
    let v148: i64;  // [sp-0x368]
    let v149: i64;  // [sp-0x358]
    let v150: i64;  // [sp-0x348]
    let v151: i32;  // [sp-0x340]
    let v152: i16;  // [bp-0x33c]
    let v153: i16;  // [sp-0x33b]
    let v154: i8;  // [sp-0x339]
    let v155: i32;  // [sp-0x2cc]
    let v156: i64;  // [sp-0x2c8]
    let v157: i64;  // [sp-0x2b8]
    let v158: i192;  // [sp-0x2a8], Other Possible Types: struct24, struct32
    let v159: i128;  // [bp-0x288], Other Possible Types: struct32, struct24, struct592
    let v160: i64;  // [sp-0x278]
    let v161: i64;  // [sp-0x270]
    let v162: i64;  // [sp-0x268]
    let v163: i64;  // [sp-0x120]
    let v165: i64;  // rbx
    let v166: i128;  // xmm0
    let v167: i256;  // ymm0
    let v169: i128;  // xmm0
    let v170: i64;  // rax
    let v171: i64;  // rcx
    let v172: i128;  // xmm0
    let v173: i256;  // ymm0
    let v174: i128;  // xmm0
    let v175: i128;  // xmm0
    let v176: i64;  // rax
    let v177: i64;  // rcx
    let v178: i128;  // xmm0
    let v179: i256;  // ymm0
    let v180: i128;  // xmm0
    let v181: i256;  // ymm0
    let v185: i64;  // rax
    let v186: i64;  // rdx
    let v190: i64;  // rax
    let v191: i64;  // rcx
    let v193: i64;  // rax
    let v194: i64;  // rcx
    let v195: i64;  // rax
    let v196: i64;  // rcx
    let v198: i64;  // rax
    let v199: i64;  // rcx
    let v200: i64;  // rax
    let v201: i64;  // rcx
    let v202: i64;  // rax
    let v203: i64;  // rcx
    let v204: i64;  // rax
    let v205: i64;  // rcx
    let v206: i64;  // rax
    let v207: i64;  // rcx
    let v208: i64;  // rax
    let v209: i64;  // rcx
    let v210: i64;  // rax
    let v211: i64;  // rcx
    let v212: i64;  // rax
    let v213: i64;  // rcx
    let v214: i64;  // rax
    let v215: i64;  // rcx
    let v216: i64;  // rax
    let v217: i64;  // rcx
    let v218: i64;  // rax
    let v219: i64;  // rcx
    let v220: i64;  // rax
    let v221: i64;  // rcx
    let v222: i64;  // rax
    let v223: i64;  // rcx
    let v224: i64;  // rax
    let v225: i64;  // rcx
    let v226: i64;  // rax
    let v227: i64;  // rcx
    let v228: i64;  // rax
    let v229: i64;  // rcx
    let v230: i64;  // rax
    let v231: i64;  // rcx
    let v232: i64;  // rax
    let v233: i64;  // rcx
    let v234: i64;  // rax
    let v235: i64;  // rcx
    let v236: i64;  // rax
    let v237: i64;  // rcx
    let v239: i64;  // rax
    let v240: i64;  // rcx
    let v241: i64;  // rax
    let v242: i64;  // rcx
    let v243: i64;  // rbp
    let v245: i64;  // rax
    let v246: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v51 = clap_builder::builder::command::Command::new(g_509808, g_509810);
    v100 = &g_41ce87;
    v101 = &g_1;
    memcpy(&v102, &v51, 712);
    v51 = clap_builder::builder::command::Command::about(&v102, &g_41ce8d, &g_21);
    v0 = uucore::format_usage(&g_41ceb2, 175);
    v165 = v0;
    if v165 != 0x8000000000000000 {
        v166 = *((&v0 as &char + 8) as &i128);
        v102 = v166;
    }
    v89 = v165;
    v169 = v102;
    v90 = v169;
    memcpy(&v102, &v51, 712);
    v51 = clap_builder::builder::command::Command::after_help(&v102, &g_41cf61, 1805);
    memcpy(&v102, &v51, 700);
    v155 = 262376 | *((&v51 as &char + 700) as &i32);
    v156 = 262344 | *((&v51 as &char + 704) as &i64);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v93 = &g_1;
    v94 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v95 = &g_1;
    v96 = 0;
    v97 = 0x11000000110000;
    v98 = 0;
    v99 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v170 = v1;
    v171 = *((&v0 as &char + 16) as &i64);
    *((v170 + v171) as &i128) = 152110414024190366979331735664405869136;
    *((v170 + v171 + &g_1 as &u8) as &i64) = 3345734071897648498;
    v2 = v171 + &g_11 as &u8;
    v172 = *((&v0 as &char + 8) as &i128);
    vvar_14{reg 224} = (((((((((vvar_169{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_168{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_182{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x726f666e6920706c656820746e697250<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_234{reg 224}))
    v159 = v172;
    if v87 != 0x8000000000000000 {
        v174 = v159;
        vvar_14{reg 224} = ((vvar_14{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_239{reg 224}))
        v0 = v174;
    }
    v87 = v0;
    v175 = v0;
    v88 = v175;
    memcpy(&v0, &v51, 588);
    v49 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v48 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
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
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v0 = 0;
    v2 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_41ce23;
    v42 = &g_1;
    v43 = &g_41ce23;
    v44 = &g_1;
    v45 = 0;
    v46 = 4785074604081217;
    v47 = 0;
    v48 = 3337;
    v102 = 0;
    v103 = &g_1;
    v104 = 0;
    v102 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v176 = v103;
    v177 = v104;
    *((v176 + v177 + &g_11 as &u8) as &i128) = 134856573429296852648216816231075115878;
    *((v176 + v177 + &g_1 as &u8) as &i128) = 136158257594062316248070706749291654761;
    *((v176 + v177) as &i128) = 43062058040434204823706361012368991571;
    *((v176 + v177 + &g_21 as &u8) as &i16) = 11876;
    v104 = v177 + &g_31 as &u8;
    v178 = *((&v102 as &char + 8) as &i128);
    vvar_284{reg 224} = (((((((((((vvar_14{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_241{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x65746e69727020657261207374657366<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x666f20656c6966206863696877206e69<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x206573616220656874207463656c6553<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_283{reg 224}))
    v159 = v178;
    if v37 != 0x8000000000000000 {
        v180 = v159;
        vvar_289{reg 224} = ((vvar_284{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_288{reg 224}))
        v102 = v180;
    }
    v37 = v102;
    v38 = v102;
    memcpy(&v102, &v0, 360);
    memcpy(&v134, &v30, 224);
    v133 = v30;
    v159 = struct32 {
        field_0: &g_41d6b7
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v159);
    v133 = *((&v0 as &char + 16) as &i64);
    v131 = v0;
    memcpy(&v0, &v102, 592);
    v102 = clap_builder::builder::command::Command::arg(&v51, &v0);
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
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v0 = 0;
    v2 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_41cdc4;
    v42 = &g_1;
    v43 = &g_41cdc4;
    v44 = &g_1;
    v45 = 0;
    v46 = 4785074604081258;
    v47 = 0;
    v48 = 3337;
    v51 = 0;
    v52 = &g_1;
    v53 = 0;
    v51 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 53);
    v185 = v52;
    v186 = v53;
    *((v185 + v186 + &g_11 as &u8) as &i128) = 140163277572415113499381245805498297714;
    *((v185 + v186 + &g_1 as &u8) as &i128) = 148074578886263910541768101692727452192;
    *((v185 + v186) as &i128) = 154800226621007458246672733520620251987;
    *((v185 + v186 + &g_21 as &u8) as &i64) = 3343762647549571703;
    v53 = v186 + 53;
    v159 = *((&v51 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v51 = v159;
    }
    v37 = v51;
    v38 = v51;
    memcpy(&v51, &v0, 360);
    memcpy(&v51, &v30, 224);
    v80 = v30;
    v159 = struct32 {
        field_0: &g_41d6f1
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v159);
    v80 = *((&v0 as &char + 16) as &i64);
    v78 = v0;
    memcpy(&v0, &v51, 592);
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
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
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v0 = 0;
    v2 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_41ce19;
    v42 = &g_1;
    v43 = &g_41ce19;
    v44 = &g_1;
    v45 = 0;
    v46 = 4785074604081230;
    v47 = 0;
    v48 = 3337;
    v102 = 0;
    v103 = &g_1;
    v104 = 0;
    v102 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v190 = v103;
    v191 = v104;
    *((v190 + v191 + &g_1 as &u8) as &i128) = 153388003874467797343775501500182516825;
    *((v190 + v191) as &i128) = 118644641084893644938420683542834801004;
    v104 = v191 + &g_11 as &u8;
    v159 = *((&v102 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v102 = v159;
    }
    v37 = v102;
    v38 = v102;
    memcpy(&v102, &v0, 360);
    memcpy(&v102, &v30, 224);
    v133 = v30;
    v159 = struct32 {
        field_0: &g_41d6f1
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v159);
    v133 = *((&v0 as &char + 16) as &i64);
    v131 = v0;
    memcpy(&v0, &v102, 592);
    v102 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &g_41cd9b;
    v93 = &g_1;
    v94 = &g_41cd9b;
    v95 = &g_1;
    v96 = 0;
    v97 = 0x11000000110000;
    v98 = 0;
    v99 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v193 = v1;
    v194 = *((&v0 as &char + 16) as &i64);
    *((v193 + v194 + &g_1 as &u8) as &i128) = 134856795959842823866462324393419087973;
    *((v193 + v194) as &i128) = 153469376115086743138912783624131869026;
    *((v193 + v194 + &g_11 as &u8) as &i64) = 8319381534359381536;
    v2 = v194 + &g_21 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v87 != 0x8000000000000000 {
        v0 = v159;
    }
    v87 = v0;
    v88 = v0;
    memcpy(&v0, &v51, 592);
    v51 = struct48 {
        field_0: &g_41cda7
        field_8: &g_1
        field_16: &g_41cda1
        field_24: &g_1
        field_32: 0
        field_40: &g_1
    };
    v158 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v51);
    v159 = clap_builder::builder::arg::Arg::value_parser(&v0, &v158);
    memcpy(&v51, &v159, 592);
    v158 = struct32 {
        field_0: &g_41d73d
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v158);
    v80 = *((&v0 as &char + 16) as &i64);
    v78 = v0;
    memcpy(&v0, &v51, 592);
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
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
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v0 = 0;
    v2 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_41d747;
    v42 = &g_1;
    v43 = &g_41d747;
    v44 = &g_1;
    v45 = 0;
    v46 = 4785074604081235;
    v47 = 0;
    v48 = 3337;
    v102 = 0;
    v103 = &g_1;
    v104 = 0;
    v102 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_5a);
    v195 = v103;
    v196 = v104;
    *((v195 + v196 + &g_51 as &u8) as &i128) = 61665774365981523331238984852152655987;
    *((v195 + v196 + &g_41 as &u8) as &i128) = 153029734602661084263120003682179096686;
    *((v195 + v196 + &g_3f as &u8) as &i128) = 134794442620679279636341310986018955315;
    *((v195 + v196 + &g_21 as &u8) as &i128) = 42776483059871098921718847426268391200;
    *((v195 + v196 + &g_11 as &u8) as &i128) = 110685902927565337264568406150347825254;
    *((v195 + v196 + &g_1 as &u8) as &i128) = 147712801703374764077065697516873610607;
    *((v195 + v196) as &i128) = 42838485361950828999568937348934954830;
    v104 = v196 + &g_5a as &u8;
    v159 = *((&v102 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v102 = v159;
    }
    v37 = v102;
    v38 = v102;
    memcpy(&v102, &v0, 592);
    v159 = struct32 {
        field_0: &g_41d7b7
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v159);
    v141 = *((&v0 as &char + 16) as &i64);
    v139 = v0;
    memcpy(&v0, &v102, 360);
    memcpy(&v30, &v102, 224);
    v30 = *((&v102 as &char + 360) as &i64);
    v102 = struct32 {
        field_0: &g_41d6f1
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v159 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v102);
    v30 = v160;
    v28 = v159;
    memcpy(&v159, &v0, 592);
    v102 = clap_builder::builder::command::Command::arg(&v51, &v159);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &g_41d7b8;
    v93 = &g_1;
    v94 = 0;
    v96 = 0;
    v97 = 4785074604081249;
    v98 = 0;
    v99 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v198 = v1;
    v199 = *((&v0 as &char + 16) as &i64);
    *((v198 + v199 + &g_11 as &u8) as &i128) = 154737628928042623453000371785322471527;
    *((v198 + v199 + &g_1 as &u8) as &i128) = 60357356122980691561983000223626633260;
    *((v198 + v199) as &i128) = 153455199101731938130417162578538881390;
    v2 = v199 + &g_21 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v87 != 0x8000000000000000 {
        v0 = v159;
    }
    v87 = v0;
    v88 = v0;
    memcpy(&v0, &v51, 588);
    v49 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v48 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v102 = 0;
    v104 = 0;
    v107 = 0;
    v108 = 0;
    v109 = &g_1;
    v110 = 0;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v144 = 0x8000000000000000;
    v145 = 9223372036854775809;
    v146 = &g_41d7e2;
    v147 = &g_1;
    v148 = 0;
    v149 = 0;
    v150 = 4785074604081250;
    v151 = 0;
    v152 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1);
    v200 = v1;
    v201 = *((&v0 as &char + 16) as &i64);
    *((v200 + v201) as &i64) = 8746589076170498927;
    *((v200 + v201 + &g_1 as &u8) as &i32) = 1936028793;
    v2 = v201 + &g_1 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v0 = v159;
    }
    v142 = v0;
    v143 = v0;
    memcpy(&v0, &v102, 588);
    v49 = v153;
    v50 = v154;
    v48 = &g_1;
    v102 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &g_41d7e3;
    v93 = &g_1;
    v94 = 0;
    v96 = 0;
    v97 = 4785074604081251;
    v98 = 0;
    v99 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v202 = v1;
    v203 = *((&v0 as &char + 16) as &i64);
    *((v202 + v203 + &g_1 as &u8) as &i128) = 153386298810522115390015224092512382752;
    *((v202 + v203) as &i128) = 153455199101731938130417162462102246209;
    *((v202 + v203 + &g_11 as &u8) as &i64) = 8315175850592134432;
    v2 = v203 + &g_21 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v87 != 0x8000000000000000 {
        v0 = v159;
    }
    v87 = v0;
    v88 = v0;
    memcpy(&v0, &v51, 588);
    v49 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v48 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v102 = 0;
    v104 = 0;
    v107 = 0;
    v108 = 0;
    v109 = &g_1;
    v110 = 0;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v144 = 0x8000000000000000;
    v145 = 9223372036854775809;
    v146 = &g_41d809;
    v147 = &g_1;
    v148 = 0;
    v149 = 0;
    v150 = 4785074604081252;
    v151 = 0;
    v152 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v204 = v1;
    v205 = *((&v0 as &char + 16) as &i64);
    *((v204 + v205 + &g_1 as &u8) as &i128) = 153465664355210536266227725936135790957;
    *((v204 + v205) as &i128) = 144062495472414244897682924667212623477;
    v2 = v205 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v0 = v159;
    }
    v142 = v0;
    v143 = v0;
    memcpy(&v0, &v102, 588);
    v49 = v153;
    v50 = v154;
    v48 = &g_1;
    v102 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &g_41d827;
    v93 = &g_1;
    v94 = 0;
    v96 = 0;
    v97 = 4785074604081220;
    v98 = 0;
    v99 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v206 = v1;
    v207 = *((&v0 as &char + 16) as &i64);
    *((v206 + v207 + &g_1 as &u8) as &i128) = 153465664355210536266227725944725725549;
    *((v206 + v207) as &i128) = 144062495472414244897682924667212623477;
    v2 = v207 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v87 != 0x8000000000000000 {
        v0 = v159;
    }
    v87 = v0;
    v88 = v0;
    memcpy(&v0, &v51, 588);
    v49 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v48 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v102 = 0;
    v104 = 0;
    v107 = 0;
    v108 = 0;
    v109 = &g_1;
    v110 = 0;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v144 = 0x8000000000000000;
    v145 = 9223372036854775809;
    v146 = &g_41d845;
    v147 = &g_1;
    v148 = 0;
    v149 = 0;
    v150 = 4785074604081263;
    v151 = 0;
    v152 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v208 = v1;
    v209 = *((&v0 as &char + 16) as &i64);
    *((v208 + v209) as &i128) = 140142467820478620000349697253938848623;
    *((v208 + v209 + &g_1 as &u8) as &i16) = 29556;
    v2 = v209 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v0 = v159;
    }
    v142 = v0;
    v143 = v0;
    memcpy(&v0, &v102, 588);
    v49 = v153;
    v50 = v154;
    v48 = &g_1;
    v102 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &g_41d858;
    v93 = &g_1;
    v94 = 0;
    v96 = 0;
    v97 = 4785074604081225;
    v98 = 0;
    v99 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v210 = v1;
    v211 = *((&v0 as &char + 16) as &i64);
    *((v210 + v211) as &i128) = 155687886757711466547785115124648600932;
    *((v210 + v211 + &g_1 as &u8) as &i32) = 1937009006;
    v2 = v211 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v87 != 0x8000000000000000 {
        v0 = v159;
    }
    v87 = v0;
    v88 = v0;
    memcpy(&v0, &v51, 588);
    v49 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v48 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v102 = 0;
    v104 = 0;
    v107 = 0;
    v108 = 0;
    v109 = &g_1;
    v110 = 0;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v144 = 0x8000000000000000;
    v145 = 9223372036854775809;
    v146 = &g_41d86d;
    v147 = &g_1;
    v148 = 0;
    v149 = 0;
    v150 = 4785074604081228;
    v151 = 0;
    v152 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v212 = v1;
    v213 = *((&v0 as &char + 16) as &i64);
    *((v212 + v213) as &i128) = 155687886757711466547785115124648600932;
    *((v212 + v213 + &g_1 as &u8) as &i32) = 1937009006;
    v2 = v213 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v0 = v159;
    }
    v142 = v0;
    v143 = v0;
    memcpy(&v0, &v102, 588);
    v49 = v153;
    v50 = v154;
    v48 = &g_1;
    v102 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &g_41d86e;
    v93 = &g_1;
    v94 = 0;
    v96 = 0;
    v97 = 4785074604081257;
    v98 = 0;
    v99 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v214 = v1;
    v215 = *((&v0 as &char + 16) as &i64);
    *((v214 + v215) as &i128) = 155687886757711466473998138829810394468;
    *((v214 + v215 + &g_1 as &u8) as &i32) = 1937009006;
    v2 = v215 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v87 != 0x8000000000000000 {
        v0 = v159;
    }
    v87 = v0;
    v88 = v0;
    memcpy(&v0, &v51, 588);
    v49 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v48 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v102 = 0;
    v104 = 0;
    v107 = 0;
    v108 = 0;
    v109 = &g_1;
    v110 = 0;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v144 = 0x8000000000000000;
    v145 = 9223372036854775809;
    v146 = &g_41d883;
    v147 = &g_1;
    v148 = 0;
    v149 = 0;
    v150 = 4785074604081260;
    v151 = 0;
    v152 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v216 = v1;
    v217 = *((&v0 as &char + 16) as &i64);
    *((v216 + v217) as &i128) = 155687886757711466547785115124648600932;
    *((v216 + v217 + &g_1 as &u8) as &i32) = 1937009006;
    v2 = v217 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v0 = v159;
    }
    v142 = v0;
    v143 = v0;
    memcpy(&v0, &v102, 588);
    v49 = v153;
    v50 = v154;
    v48 = &g_1;
    v102 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &g_41d884;
    v93 = &g_1;
    v94 = 0;
    v96 = 0;
    v97 = 4785074604081272;
    v98 = 0;
    v99 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v218 = v1;
    v219 = *((&v0 as &char + 16) as &i64);
    *((v218 + v219) as &i128) = 161346349261986068157981989656161969512;
    *((v218 + v219 + &g_1 as &u8) as &i64) = 8319390334792525172;
    v2 = v219 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v87 != 0x8000000000000000 {
        v0 = v159;
    }
    v87 = v0;
    v88 = v0;
    memcpy(&v0, &v51, 588);
    v49 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v48 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v102 = 0;
    v104 = 0;
    v107 = 0;
    v108 = 0;
    v109 = &g_1;
    v110 = 0;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v144 = 0x8000000000000000;
    v145 = 9223372036854775809;
    v146 = &g_41d89d;
    v147 = &g_1;
    v148 = 0;
    v149 = 0;
    v150 = 4785074604081256;
    v151 = 0;
    v152 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v220 = v1;
    v221 = *((&v0 as &char + 16) as &i64);
    *((v220 + v221) as &i128) = 161346349261986068157981989656161969512;
    *((v220 + v221 + &g_1 as &u8) as &i64) = 8319390334792525172;
    v2 = v221 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v0 = v159;
    }
    v142 = v0;
    v143 = v0;
    memcpy(&v0, &v102, 588);
    v49 = v153;
    v50 = v154;
    v48 = &g_1;
    v102 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &g_41d89e;
    v93 = &g_1;
    v94 = 0;
    v96 = 0;
    v97 = 4785074604081231;
    v98 = 0;
    v99 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v222 = v1;
    v223 = *((&v0 as &char + 16) as &i64);
    *((v222 + v223) as &i128) = 140142467820478620000350260203892269935;
    *((v222 + v223 + &g_1 as &u8) as &i16) = 29556;
    v2 = v223 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v87 != 0x8000000000000000 {
        v0 = v159;
    }
    v87 = v0;
    memcpy(&v0, &v51, 588);
    v49 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v48 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v102 = 0;
    v104 = 0;
    v107 = 0;
    v108 = 0;
    v109 = &g_1;
    v110 = 0;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v144 = 0x8000000000000000;
    v145 = 9223372036854775809;
    v146 = &g_41d8b1;
    v147 = &g_1;
    v148 = 0;
    v149 = 0;
    v150 = 4785074604081267;
    v151 = 0;
    v152 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v224 = v1;
    v225 = *((&v0 as &char + 16) as &i64);
    *((v224 + v225) as &i128) = 155687886757711466437104650682391291236;
    *((v224 + v225 + &g_1 as &u8) as &i32) = 1937009006;
    v2 = v225 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v0 = v159;
    }
    v142 = v0;
    memcpy(&v0, &v102, 588);
    v49 = v153;
    v50 = v154;
    v48 = &g_1;
    v102 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &g_41d8c6;
    v93 = &g_1;
    v94 = 0;
    v96 = 0;
    v97 = 4785074604081240;
    v98 = 0;
    v99 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v226 = v1;
    v227 = *((&v0 as &char + 16) as &i64);
    *((v226 + v227) as &i128) = 161346349420442393186510664843249870184;
    *((v226 + v227 + &g_1 as &u8) as &i64) = 8319390334792525172;
    v2 = v227 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v87 != 0x8000000000000000 {
        v0 = v159;
    }
    v87 = v0;
    memcpy(&v0, &v51, 588);
    v49 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v48 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v102 = 0;
    v104 = 0;
    v107 = 0;
    v108 = 0;
    v109 = &g_1;
    v110 = 0;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v144 = 0x8000000000000000;
    v145 = 9223372036854775809;
    v146 = &g_41d8df;
    v147 = &g_1;
    v148 = 0;
    v149 = 0;
    v150 = 4785074604081224;
    v151 = 0;
    v152 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v228 = v1;
    v229 = *((&v0 as &char + 16) as &i64);
    *((v228 + v229) as &i128) = 161346349420442393186510664843249870184;
    *((v228 + v229 + &g_1 as &u8) as &i64) = 8319390334792525172;
    v2 = v229 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v0 = v159;
    }
    v142 = v0;
    memcpy(&v0, &v102, 588);
    v49 = v153;
    v50 = v154;
    v48 = &g_1;
    v102 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &g_41d8e0;
    v93 = &g_1;
    v94 = 0;
    v96 = 0;
    v97 = 4785074604081253;
    v98 = 0;
    v99 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v230 = v1;
    v231 = *((&v0 as &char + 16) as &i64);
    *((v230 + v231 + &g_11 as &u8) as &i128) = 153465664355210252923085832261770682478;
    *((v230 + v231 + &g_1 as &u8) as &i128) = 43108708221697391031395987036125164911;
    *((v230 + v231) as &i128) = 133091314585207248237353353276933762150;
    v2 = v231 + &g_21 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v87 != 0x8000000000000000 {
        v0 = v159;
    }
    v87 = v0;
    memcpy(&v0, &v51, 588);
    v49 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v48 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v102 = 0;
    v104 = 0;
    v107 = 0;
    v108 = 0;
    v109 = &g_1;
    v110 = 0;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v144 = 0x8000000000000000;
    v145 = 9223372036854775809;
    v146 = &g_41d90f;
    v147 = &g_1;
    v148 = 0;
    v149 = 0;
    v150 = 4785074604081254;
    v151 = 0;
    v152 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v232 = v1;
    v233 = *((&v0 as &char + 16) as &i64);
    *((v232 + v233 + &g_11 as &u8) as &i128) = 153465664355210252923085832253130416238;
    *((v232 + v233 + &g_1 as &u8) as &i128) = 43108708221697391031395987036125164911;
    *((v232 + v233) as &i128) = 133091314585207248237353353276933762150;
    v2 = v233 + &g_21 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v0 = v159;
    }
    v142 = v0;
    memcpy(&v0, &v102, 588);
    v49 = v153;
    v50 = v154;
    v48 = &g_1;
    v102 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &g_41d93e;
    v93 = &g_1;
    v94 = 0;
    v96 = 0;
    v97 = 4785074604081222;
    v98 = 0;
    v99 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v234 = v1;
    v235 = *((&v0 as &char + 16) as &i64);
    *((v234 + v235 + &g_11 as &u8) as &i128) = 153465664355210252923085832261770682478;
    *((v234 + v235 + &g_1 as &u8) as &i128) = 43108708221697391031395987036125164911;
    *((v234 + v235) as &i128) = 133091314585207248237353353276933762150;
    v2 = v235 + &g_21 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v87 != 0x8000000000000000 {
        v0 = v159;
    }
    v87 = v0;
    memcpy(&v0, &v51, 588);
    v49 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v48 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
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
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v0 = 0;
    v2 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_41d93f;
    v42 = &g_1;
    v43 = &g_41d93f;
    v44 = &g_1;
    v45 = 0;
    v46 = 4785074604081268;
    v47 = 0;
    v48 = 3337;
    v102 = 0;
    v103 = &g_1;
    v104 = 0;
    v102 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v236 = v103;
    v237 = v104;
    *((v236 + v237 + &g_1 as &u8) as &i128) = 153465502015872597821224739948590887535;
    *((v236 + v237) as &i128) = 148074580075616078620232230598783821171;
    v104 = v237 + &g_11 as &u8;
    v159 = *((&v102 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v102 = v159;
    }
    v37 = v102;
    v102 = v0;
    memcpy(&v102, &v4, 320);
    memcpy(&v102, &v30, 220);
    v153 = v49;
    v154 = v50;
    v104 = &g_1;
    v105 = &g_1;
    v106 = &g_1;
    v133 = v30;
    v152 = &g_1;
    v159 = struct32 {
        field_0: &g_415e18
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v159);
    v133 = *((&v0 as &char + 16) as &i64);
    v131 = v0;
    memcpy(&v0, &v102, 592);
    v102 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &g_41ce08;
    v93 = &g_11;
    v94 = &g_41ce08;
    v95 = &g_11;
    v96 = 0;
    v97 = 4785074604081270;
    v98 = 0;
    v99 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v239 = v1;
    v240 = *((&v0 as &char + 16) as &i64);
    *((v239 + v240 + &g_1 as &u8) as &i128) = 134846229955928209702787950011338613101;
    *((v239 + v240) as &i128) = 43113996124267432977471064950496587620;
    *((v239 + v240 + &g_11 as &u8) as &i64) = 7957695011165139568;
    v2 = v240 + &g_21 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v87 != 0x8000000000000000 {
        v0 = v159;
    }
    v87 = v0;
    memcpy(&v0, &v51, 588);
    v49 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v48 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
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
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v0 = 0;
    v2 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_41cdce;
    v42 = &g_1;
    v43 = &g_41cdce;
    v44 = &g_1;
    v45 = 0;
    v46 = 4785074604081271;
    v47 = 0;
    v48 = 3337;
    v102 = 0;
    v103 = &g_1;
    v104 = 0;
    v102 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_41);
    v241 = v103;
    v242 = v104;
    *((v241 + v242 + 62) as &i128) = 61665774365981523331238984852152655987;
    *((v241 + v242 + &g_21 as &u8) as &i128) = 43134542217929467014090913976763752548;
    *((v241 + v242 + &g_11 as &u8) as &i128) = 134799418152075012568556090610936604014;
    *((v241 + v242 + &g_1 as &u8) as &i128) = 140130365882057792348580569024823325541;
    *((v241 + v242) as &i128) = 154820705668146383742088929053452301679;
    v104 = v242 + &g_41 as &u8;
    v159 = *((&v102 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v102 = v159;
    }
    v157 = 9223372036854775809;
    v37 = v102;
    memcpy(&v102, &v0, 592);
    v159 = struct32 {
        field_0: &g_41d9d7
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v159);
    v141 = *((&v0 as &char + 16) as &i64);
    v139 = v0;
    v0 = v102;
    memcpy(&v4, &v102, 320);
    v243 = *((&v102 as &char + 360) as &i64);
    memcpy(&v30, &v102, 224);
    v2 = *((&v102 as &char + 16) as &i128);
    v3 = v106;
    v30 = v243;
    v102 = struct32 {
        field_0: &g_41d6f1
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v159 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v102);
    v30 = v160;
    v28 = v159;
    v159 = v0;
    memcpy(&v159, &v4, 320);
    memcpy(&v159, &v30, 224);
    v160 = &g_1;
    v161 = 0;
    v162 = &g_1;
    v163 = v30;
    v102 = clap_builder::builder::command::Command::arg(&v51, &v159);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v91 = v157;
    v92 = &g_41d9d9;
    v93 = &g_1;
    v94 = &g_41d9d9;
    v95 = &g_1;
    v96 = 0;
    v97 = 0x11000000110000;
    v98 = 0;
    v99 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 52);
    v245 = v1;
    v246 = *((&v0 as &char + 16) as &i64);
    *((v245 + v246 + &g_11 as &u8) as &i128) = 129496540645942939483148544296102145140;
    *((v245 + v246 + &g_1 as &u8) as &i128) = 156103452149030666837943995153111868772;
    *((v245 + v246) as &i128) = 148110926549448649493185991668585557859;
    *((v245 + v246 + &g_21 as &u8) as &i32) = 778855778;
    v2 = v246 + 52;
    v159 = *((&v0 as &char + 8) as &i128);
    if v87 != 0x8000000000000000 {
        v0 = v159;
    }
    v87 = v0;
    memcpy(&v0, &v51, 588);
    v49 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v48 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v102, &v0);
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v102 = 0;
    v104 = 0;
    v107 = 0;
    v108 = 0;
    v109 = &g_1;
    v110 = 0;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v144 = 0x8000000000000000;
    v145 = v91;
    v146 = &g_415c80;
    v147 = &g_1;
    v148 = 0;
    v149 = 0;
    v150 = 0x301000000040011000000110000;
    clap_builder::builder::command::Command::arg(a0, &v51, &v102);
    return a0;
}
