fn uu_join::uu_app(a0: u32) -> u64 {
    let v0: i5696;  // [sp-0xaa8], Other Possible Types: struct712, Enum, struct592, struct24
    let v1: i64;  // [sp-0xaa0]
    let v2: i64;  // [sp-0xa98]
    let v3: i64;  // [sp-0xa90]
    let v4: i64;  // [sp-0xa88]
    let v5: i64;  // [sp-0xa80]
    let v6: i64;  // [sp-0xa70]
    let v7: i64;  // [sp-0xa58]
    let v8: i64;  // [sp-0xa40]
    let v9: i64;  // [sp-0xa38]
    let v10: i128;  // [sp-0xa30]
    let v11: i64;  // [sp-0xa20]
    let v12: i128;  // [sp-0xa18]
    let v13: i64;  // [sp-0xa08]
    let v14: i128;  // [sp-0xa00]
    let v15: i64;  // [sp-0x9f0]
    let v16: i128;  // [sp-0x9e8]
    let v17: i64;  // [sp-0x9d8]
    let v18: i128;  // [sp-0x9d0]
    let v19: i64;  // [sp-0x9c0]
    let v20: i128;  // [sp-0x9b8]
    let v21: i64;  // [sp-0x9a8]
    let v22: i128;  // [sp-0x9a0]
    let v23: i64;  // [sp-0x990]
    let v24: i128;  // [sp-0x988]
    let v25: i64;  // [sp-0x978]
    let v26: i128;  // [sp-0x970]
    let v27: i64;  // [sp-0x960]
    let v28: i128;  // [bp-0x958]
    let v29: i128;  // [bp-0x950]
    let v30: i64;  // [sp-0x948]
    let v31: i64;  // [bp-0x940]
    let v32: i64;  // [sp-0x930]
    let v33: i128;  // [sp-0x928]
    let v34: i64;  // [sp-0x918]
    let v35: i128;  // [sp-0x910]
    let v36: i64;  // [sp-0x900]
    let v37: i64;  // [sp-0x8f8]
    let v38: i64;  // [sp-0x8f0]
    let v39: i128;  // [sp-0x8e8]
    let v40: i64;  // [sp-0x8d8]
    let v41: i128;  // [sp-0x8d0]
    let v42: i64;  // [sp-0x8b0]
    let v43: i64;  // [sp-0x898]
    let v44: i64;  // [sp-0x890]
    let v45: i64;  // [sp-0x888]
    let v46: i64;  // [sp-0x880]
    let v47: i64;  // [sp-0x878]
    let v48: i64;  // [sp-0x868]
    let v49: i32;  // [sp-0x860]
    let v50: i16;  // [sp-0x85c]
    let v51: i64;  // [sp-0x848]
    let v52: i64;  // [sp-0x840]
    let v53: i192;  // [bp-0x7d8], Other Possible Types: struct712, Enum, struct24
    let v54: i64;  // [sp-0x7d0]
    let v55: i64;  // [sp-0x7c8]
    let v56: i64;  // [sp-0x7c0]
    let v57: i64;  // [sp-0x7b8]
    let v58: i64;  // [sp-0x7b0]
    let v59: i64;  // [sp-0x7a0]
    let v60: i64;  // [sp-0x788]
    let v61: i64;  // [sp-0x770]
    let v62: i64;  // [sp-0x768]
    let v63: i128;  // [sp-0x760]
    let v64: i64;  // [sp-0x750]
    let v65: i128;  // [sp-0x748]
    let v66: i64;  // [sp-0x738]
    let v67: i128;  // [sp-0x730]
    let v68: i64;  // [sp-0x720]
    let v69: i128;  // [sp-0x718]
    let v70: i64;  // [sp-0x708]
    let v71: i128;  // [sp-0x700]
    let v72: i64;  // [sp-0x6f0]
    let v73: i128;  // [sp-0x6e8]
    let v74: i64;  // [sp-0x6d8]
    let v75: i128;  // [sp-0x6d0]
    let v76: i64;  // [sp-0x6c0]
    let v77: i128;  // [sp-0x6b8]
    let v78: i64;  // [sp-0x6a8]
    let v79: i128;  // [sp-0x6a0]
    let v80: i64;  // [sp-0x690]
    let v81: i128;  // [bp-0x688]
    let v82: i128;  // [bp-0x680]
    let v83: i64;  // [sp-0x678]
    let v84: i64;  // [bp-0x670]
    let v85: i64;  // [sp-0x660]
    let v86: i128;  // [sp-0x658]
    let v87: i64;  // [sp-0x648]
    let v88: i128;  // [sp-0x640]
    let v89: i64;  // [sp-0x630]
    let v90: i64;  // [sp-0x628]
    let v91: i64;  // [sp-0x620]
    let v92: i128;  // [sp-0x618]
    let v93: i64;  // [sp-0x608]
    let v94: i64;  // [sp-0x5e0]
    let v95: i64;  // [sp-0x5c8]
    let v96: i64;  // [sp-0x5c0]
    let v97: i64;  // [sp-0x5b8]
    let v98: i64;  // [sp-0x5b0]
    let v99: i64;  // [sp-0x5a8]
    let v100: i64;  // [sp-0x598]
    let v101: i32;  // [sp-0x590]
    let v102: i16;  // [sp-0x58c]
    let v103: i64;  // [sp-0x51c]
    let v104: i32;  // [sp-0x514]
    let v105: i128;  // [sp-0x508], Other Possible Types: struct24, Enum, struct592
    let v106: i64;  // [sp-0x500]
    let v107: i64;  // [sp-0x4f8]
    let v108: i128;  // [sp-0x4f0]
    let v109: i128;  // [sp-0x4e0]
    let v110: i64;  // [sp-0x4d0]
    let v111: i128;  // [sp-0x4c8]
    let v112: i64;  // [sp-0x4b8]
    let v113: i128;  // [sp-0x4b0]
    let v114: i64;  // [sp-0x4a0]
    let v115: i64;  // [sp-0x498]
    let v116: i128;  // [sp-0x490]
    let v117: i64;  // [sp-0x480]
    let v118: i128;  // [sp-0x478]
    let v119: i64;  // [sp-0x468]
    let v120: i128;  // [sp-0x460]
    let v121: i64;  // [sp-0x450]
    let v122: i128;  // [sp-0x448]
    let v123: i64;  // [sp-0x438]
    let v124: i128;  // [sp-0x430]
    let v125: i64;  // [sp-0x420]
    let v126: i128;  // [sp-0x418]
    let v127: i64;  // [sp-0x408]
    let v128: i128;  // [sp-0x400]
    let v129: i64;  // [sp-0x3f0]
    let v130: i128;  // [sp-0x3e8]
    let v131: i64;  // [sp-0x3d8]
    let v132: i128;  // [sp-0x3d0]
    let v133: i64;  // [sp-0x3c0]
    let v134: i128;  // [sp-0x3b8]
    let v135: i128;  // [sp-0x3a8]
    let v136: i64;  // [sp-0x398]
    let v137: i64;  // [sp-0x390]
    let v138: i128;  // [sp-0x388]
    let v139: i64;  // [sp-0x378]
    let v140: i128;  // [sp-0x370]
    let v141: i64;  // [sp-0x360]
    let v142: i64;  // [sp-0x358]
    let v143: i64;  // [sp-0x350]
    let v144: i128;  // [sp-0x348]
    let v145: i64;  // [sp-0x338]
    let v146: i128;  // [sp-0x330]
    let v147: i128;  // [sp-0x320]
    let v148: i64;  // [sp-0x310]
    let v149: i128;  // [sp-0x308]
    let v150: i64;  // [sp-0x2f8]
    let v151: i64;  // [sp-0x2f0]
    let v152: i64;  // [sp-0x2e8]
    let v153: i64;  // [sp-0x2e0]
    let v154: i64;  // [sp-0x2d8]
    let v155: i64;  // [sp-0x2d0]
    let v156: i128;  // [bp-0x2c8]
    let v157: i8;  // [sp-0x2bc]
    let v158: i16;  // [sp-0x2bb]
    let v159: i8;  // [sp-0x2b9]
    let v160: struct32;  // [bp-0x2b0]
    let v161: i128;  // [bp-0x288], Other Possible Types: struct32, struct24, struct8
    let v162: i64;  // [sp-0x278]
    let v163: i64;  // [sp-0xd0]
    let v164: i128;  // [sp-0xc8]
    let v166: i64;  // rbx
    let v167: i64;  // rax
    let v168: i64;  // rcx
    let v169: i64;  // r14
    let v170: i64;  // rax
    let v171: i64;  // rcx
    let v172: i64;  // rbx
    let v173: i64;  // rax
    let v174: i64;  // rcx
    let v175: i64;  // rbx
    let v176: i64;  // rax
    let v177: i64;  // rcx
    let v178: i64;  // rax
    let v179: i64;  // rcx
    let v180: i64;  // r14
    let v181: i64;  // rax
    let v182: i64;  // rcx
    let v183: i64;  // r14
    let v184: i64;  // rax
    let v185: i64;  // rcx
    let v186: i64;  // r14
    let v187: i64;  // rax
    let v188: i64;  // rcx
    let v189: i64;  // r14
    let v190: i64;  // rax
    let v191: i64;  // rcx
    let v192: i64;  // r14
    let v193: i64;  // rax
    let v194: i64;  // rcx
    let v195: i64;  // rax
    let v196: i64;  // rcx
    let v197: i64;  // rax
    let v198: i64;  // rcx
    let v199: i64;  // rax
    let v200: i64;  // rcx
    let v201: i128;  // xmm0
    let v202: i64;  // rdi
    let v203: i128;  // xmm2
    let v204: i128;  // xmm0
    let v205: i64;  // rsi
    let v206: i128;  // xmm2

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v0 = clap_builder::builder::command::Command::new(g_502d10, g_502d18);
    v51 = &g_41b1e3;
    v52 = &g_1;
    memcpy(&v53, &v0, 712);
    v0 = clap_builder::builder::command::Command::about(&v53, &g_41b1e9, 212);
    v105 = uucore::format_usage(&g_41b2bd, &g_11);
    v166 = v105;
    if v166 != 0x8000000000000000 {
        v53 = *((&v105 as &char + 8) as &i128);
    }
    v40 = v166;
    v41 = v53;
    memcpy(&v53, &v0, 700);
    v103 = 549755814016 | *((&v0 as &char + 700) as &i64);
    v104 = *((&v0 as &char + 708) as &i32);
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
    v0 = struct24 {
        field_80: 0
        field_88: <UNKNOWN>
        field_96: &g_1
    };
    v3 = &g_1;
    v4 = &g_1;
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
    v42 = 9223372036854775809;
    v43 = &g_41b1bc;
    v44 = &g_1;
    v45 = 0;
    v47 = 0;
    v48 = 4785074604081249;
    v49 = 0;
    v50 = 3329;
    v161 = struct32 {
        field_0: &g_41b1be
        field_8: &g_1
        field_16: &g_41b1bf
        field_24: &g_1
    };
    v105 = clap_builder::builder::arg::Arg::value_parser(&v0, &v161);
    memcpy(&v0, &v105, 592);
    v160 = struct32 {
        field_0: &g_41b2d7
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v161 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v160);
    v31 = v162;
    v29 = v161;
    memcpy(&v161, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 103);
    v167 = v1;
    v168 = v2;
    *((v167 + v168 + &g_41 as &u8) as &i128) = 147711460360022012287760410994320958574;
    *((v167 + v168 + &g_31 as &u8) as &i128) = 148128185294850031143809800573362839601;
    *((v167 + v168 + &g_21 as &u8) as &i128) = 43134542216091871065874970982214690152;
    *((v167 + v168 + &g_11 as &u8) as &i128) = 158345183550870026930782747195637065248;
    *((v167 + v168 + &g_1 as &u8) as &i128) = 145464516777863614537964443979181351282;
    *((v167 + v168) as &i128) = 140074872733916512097608977822573096033;
    *((v167 + v168 + &g_51 as &u8) as &i64) = 3622385352882287215;
    v2 = v168 + 103;
    v169 = v0;
    v105 = *((&v0 as &char + 8) as &i128);
    if v169 != 0x8000000000000000 {
        v0 = v105;
    }
    v163 = v169;
    v164 = v0;
    memcpy(&v105, &v161, 592);
    v0 = clap_builder::builder::command::Command::arg(&v53, &v105);
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v84 = 0;
    v86 = 0;
    v88 = 0;
    v53 = struct24 {
        field_80: 0
        field_88: <UNKNOWN>
        field_96: &g_1
    };
    v56 = &g_1;
    v57 = &g_1;
    v58 = 0;
    v59 = 0;
    v60 = &g_1;
    v61 = 0;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v93 = 0x8000000000000000;
    v94 = 9223372036854775809;
    v95 = &g_41b1bb;
    v96 = &g_1;
    v97 = 0;
    v99 = 0;
    v100 = 4785074604081270;
    v101 = 0;
    v102 = 3329;
    v161 = struct32 {
        field_0: &g_41b1be
        field_8: &g_1
        field_16: &g_41b1bf
        field_24: &g_1
    };
    v105 = clap_builder::builder::arg::Arg::value_parser(&v53, &v161);
    memcpy(&v53, &v105, 592);
    v160 = struct32 {
        field_0: &g_41b2d7
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v161 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v160);
    v84 = v162;
    v82 = v161;
    memcpy(&v161, &v53, 592);
    v53 = 0;
    v54 = &g_1;
    v55 = 0;
    v53 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v170 = v54;
    v171 = v55;
    *((v170 + v171 + &g_11 as &u8) as &i128) = 134825318448409579469029749101668167273;
    *((v170 + v171 + &g_1 as &u8) as &i128) = 148095349183189777675952859404383380000;
    *((v170 + v171) as &i128) = 58887568878703156706090778584647690604;
    *((v170 + v171 + &g_21 as &u8) as &i8) = 115;
    v55 = v171 + &g_31 as &u8;
    v172 = v53;
    v105 = *((&v53 as &char + 8) as &i128);
    if v172 != 0x8000000000000000 {
        v53 = v105;
    }
    v163 = v172;
    v164 = v53;
    memcpy(&v105, &v161, 592);
    v53 = clap_builder::builder::command::Command::arg(&v0, &v105);
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
    v31 = 0;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v37 = 0;
    v38 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v42 = 9223372036854775809;
    v43 = &g_41b1c3;
    v44 = &g_1;
    v45 = 0;
    v47 = 0;
    v48 = 4785074604081253;
    v49 = 0;
    v50 = 3337;
    v161 = struct32 {
        field_0: &g_41b376
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v105 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v161);
    v31 = v107;
    v29 = v105;
    memcpy(&v105, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v173 = v1;
    v174 = v2;
    *((v173 + v174 + &g_1 as &u8) as &i128) = 154738054858952613760788814516731276905;
    *((v173 + v174) as &i128) = 43072341861290161320383100428110292338;
    *((v173 + v174 + &g_11 as &u8) as &i64) = 6436858060221737076;
    v2 = v174 + &g_21 as &u8;
    v175 = v0;
    v161 = *((&v0 as &char + 8) as &i128);
    if v175 != 0x8000000000000000 {
        v0 = v161;
    }
    v143 = v175;
    v144 = v0;
    memcpy(&v161, &v105, 592);
    v0 = clap_builder::builder::command::Command::arg(&v53, &v161);
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v84 = 0;
    v86 = 0;
    v88 = 0;
    v53 = 0;
    v55 = 0;
    v58 = 0;
    v59 = 0;
    v60 = &g_1;
    v61 = 0;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v93 = 0x8000000000000000;
    v94 = 9223372036854775809;
    v95 = &g_41b1c0;
    v96 = &g_1;
    v97 = &g_41b3a2;
    v98 = &g_1;
    v99 = 0;
    v100 = 4785074604081257;
    v101 = 0;
    v102 = 3337;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v105 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v176 = v106;
    v177 = v107;
    *((v176 + v177 + &g_11 as &u8) as &i128) = 153382647736019805956434776608442511203;
    *((v176 + v177 + &g_1 as &u8) as &i128) = 43108505319522890156639666851696112485;
    *((v176 + v177) as &i128) = 132166781823907777952523360605913900905;
    v107 = v177 + &g_21 as &u8;
    v161 = *((&v105 as &char + 8) as &i128);
    if v91 != 0x8000000000000000 {
        v105 = v161;
    }
    v91 = v105;
    memcpy(&v105, &v53, 588);
    v158 = *((&v53 as &char + 589) as &i16);
    v159 = *((&v53 as &char + 591) as &i8);
    v157 = &g_1;
    v53 = clap_builder::builder::command::Command::arg(&v0, &v105);
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
    v31 = 0;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v37 = 0;
    v38 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v42 = 9223372036854775809;
    v43 = &g_41b1bd;
    v44 = &g_1;
    v45 = 0;
    v47 = 0;
    v48 = 4785074604081258;
    v49 = 0;
    v50 = 3337;
    v161 = struct32 {
        field_0: &g_41b3dd
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v105 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v161);
    v31 = v107;
    v29 = v105;
    memcpy(&v105, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v178 = v1;
    v179 = v2;
    *((v178 + v179 + &g_1 as &u8) as &i128) = 90783523566244315028257611420742852657;
    *((v178 + v179) as &i128) = 60018417255176925091444926813954208101;
    *((v178 + v179 + &g_11 as &u8) as &&i64) = &g_21;
    v2 = v179 + &g_21 as &u8;
    v180 = v0;
    v161 = *((&v0 as &char + 8) as &i128);
    if v180 != 0x8000000000000000 {
        v0 = v161;
    }
    v143 = v180;
    v144 = v0;
    memcpy(&v161, &v105, 592);
    v0 = clap_builder::builder::command::Command::arg(&v53, &v161);
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v86 = 0;
    v88 = 0;
    v53 = 0;
    v55 = 0;
    v58 = 0;
    v59 = 0;
    v60 = &g_1;
    v61 = 0;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v83 = &g_1;
    v84 = 0;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v93 = 0x8000000000000000;
    v94 = 9223372036854775809;
    v95 = &g_41b1c2;
    v96 = &g_1;
    v97 = 0;
    v99 = 0;
    v100 = 4785074604081263;
    v101 = 0;
    v102 = 3337;
    v161 = struct32 {
        field_0: &g_41b403
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v105 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v161);
    v84 = v107;
    v82 = v105;
    memcpy(&v105, &v53, 592);
    v53 = 0;
    v54 = &g_1;
    v55 = 0;
    v53 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v181 = v54;
    v182 = v55;
    *((v181 + v182 + &g_11 as &u8) as &i128) = 134825318448409579469029749101719087476;
    *((v181 + v182 + &g_1 as &u8) as &i128) = 147712558867522460174681095085406494821;
    *((v181 + v182) as &i128) = 144103933523672568609069516362711655023;
    v55 = v182 + &g_21 as &u8;
    v183 = v53;
    v161 = *((&v53 as &char + 8) as &i128);
    if v183 != 0x8000000000000000 {
        v53 = v161;
    }
    v143 = v183;
    v144 = v53;
    memcpy(&v161, &v105, 592);
    v53 = clap_builder::builder::command::Command::arg(&v0, &v161);
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
    v31 = 0;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v37 = 0;
    v38 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v42 = 9223372036854775809;
    v43 = &g_41b1c1;
    v44 = &g_1;
    v45 = 0;
    v47 = 0;
    v48 = 4785074604081268;
    v49 = 0;
    v50 = 3337;
    v161 = struct32 {
        field_0: &g_4122e4
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v105 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v161);
    v31 = v107;
    v29 = v105;
    memcpy(&v105, &v0, 592);
    v161 = struct8 {
        field_0: &g_1
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v105, &v161);
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v105 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v184 = v106;
    v185 = v107;
    *((v184 + v185 + &g_11 as &u8) as &i128) = 152110696950822650555809745059252364832;
    *((v184 + v185 + &g_1 as &u8) as &i128) = 134799290121545669504623612192580771956;
    *((v184 + v185) as &i128) = 156103452149047528954953394467744609141;
    v107 = v185 + &g_21 as &u8;
    v186 = v105;
    v161 = *((&v105 as &char + 8) as &i128);
    if v186 != 0x8000000000000000 {
        v105 = v161;
    }
    v38 = v186;
    v39 = v105;
    memcpy(&v105, &v0, 592);
    v0 = clap_builder::builder::command::Command::arg(&v53, &v105);
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v86 = 0;
    v88 = 0;
    v53 = 0;
    v55 = 0;
    v58 = 0;
    v59 = 0;
    v60 = &g_1;
    v61 = 0;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v83 = &g_1;
    v84 = 0;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v93 = 0x8000000000000000;
    v94 = 9223372036854775809;
    v95 = &g_41b1be;
    v96 = &g_1;
    v97 = 0;
    v99 = 0;
    v100 = 4785074604081201;
    v101 = 0;
    v102 = 3337;
    v161 = struct32 {
        field_0: &g_41b3dd
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v105 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v161);
    v84 = v107;
    v82 = v105;
    memcpy(&v105, &v53, 592);
    v53 = 0;
    v54 = &g_1;
    v55 = 0;
    v53 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v187 = v54;
    v188 = v55;
    *((v187 + v188 + &g_1 as &u8) as &i128) = 65300382405564902085805547582176970272;
    *((v187 + v188) as &i128) = 92097191719523900329421570094211362666;
    v55 = v188 + &g_11 as &u8;
    v189 = v53;
    v161 = *((&v53 as &char + 8) as &i128);
    if v189 != 0x8000000000000000 {
        v53 = v161;
    }
    v143 = v189;
    v144 = v53;
    memcpy(&v161, &v105, 592);
    v53 = clap_builder::builder::command::Command::arg(&v0, &v161);
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
    v31 = 0;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v37 = 0;
    v38 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v42 = 9223372036854775809;
    v43 = &g_41b1bf;
    v44 = &g_1;
    v45 = 0;
    v47 = 0;
    v48 = 4785074604081202;
    v49 = 0;
    v50 = 3337;
    v161 = struct32 {
        field_0: &g_41b3dd
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v105 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v161);
    v31 = v107;
    v29 = v105;
    memcpy(&v105, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v190 = v1;
    v191 = v2;
    *((v190 + v191 + &g_1 as &u8) as &i128) = 66629610401349817958709354642457314848;
    *((v190 + v191) as &i128) = 92097191719523900329421570094211362666;
    v2 = v191 + &g_11 as &u8;
    v192 = v0;
    v161 = *((&v0 as &char + 8) as &i128);
    if v192 != 0x8000000000000000 {
        v0 = v161;
    }
    v143 = v192;
    v144 = v0;
    memcpy(&v161, &v105, 592);
    v0 = clap_builder::builder::command::Command::arg(&v53, &v161);
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v84 = 0;
    v86 = 0;
    v88 = 0;
    v53 = 0;
    v55 = 0;
    v58 = 0;
    v59 = 0;
    v60 = &g_1;
    v61 = 0;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v93 = 0x8000000000000000;
    v94 = 9223372036854775809;
    v95 = &g_41b1d1;
    v96 = &g_1;
    v97 = &g_41b1d1;
    v98 = &g_1;
    v99 = 0;
    v100 = 0x11000000110000;
    v101 = 0;
    v102 = 3337;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v105 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_41);
    v193 = v106;
    v194 = v107;
    *((v193 + v194 + &g_31 as &u8) as &i128) = 134814791031679874763119546348627780974;
    *((v193 + v194 + &g_21 as &u8) as &i128) = 134825318448409579468593939302852927590;
    *((v193 + v194 + &g_11 as &u8) as &i128) = 139737332160631581364775751496873746553;
    *((v193 + v194 + &g_1 as &u8) as &i128) = 144160945976375764408905763418338062446;
    *((v193 + v194) as &i128) = 139737149855927647798093206270102562915;
    v107 = v194 + &g_41 as &u8;
    v161 = *((&v105 as &char + 8) as &i128);
    if v91 != 0x8000000000000000 {
        v105 = v161;
    }
    v91 = v105;
    memcpy(&v105, &v53, 588);
    v158 = *((&v53 as &char + 589) as &i16);
    v159 = *((&v53 as &char + 591) as &i8);
    v157 = &g_1;
    v53 = clap_builder::builder::command::Command::arg(&v0, &v105);
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
    v42 = 9223372036854775809;
    v43 = &g_41b1c4;
    v44 = &g_1;
    v45 = &g_41b1c4;
    v46 = &g_1;
    v47 = 0;
    v48 = 0x11000000110000;
    v49 = 0;
    v50 = 3337;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v105 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v195 = v106;
    v196 = v107;
    *((v195 + v196 + &g_11 as &u8) as &i128) = 133449583387220171015789399974247296867;
    *((v195 + v196 + &g_1 as &u8) as &i128) = 131762065888285580141672173130363445364;
    *((v195 + v196) as &i128) = 129477469792474744386909198512742756196;
    v107 = v196 + &g_21 as &u8;
    v161 = *((&v105 as &char + 8) as &i128);
    if v38 != 0x8000000000000000 {
        v105 = v161;
    }
    v38 = v105;
    memcpy(&v105, &v0, 588);
    v158 = *((&v0 as &char + 589) as &i16);
    v159 = *((&v0 as &char + 591) as &i8);
    v157 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v53, &v105);
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v84 = 0;
    v86 = 0;
    v88 = 0;
    v53 = 0;
    v55 = 0;
    v58 = 0;
    v59 = 0;
    v60 = &g_1;
    v61 = 0;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v93 = 0x8000000000000000;
    v94 = 9223372036854775809;
    v95 = &g_41b1dc;
    v96 = &g_1;
    v97 = &g_41b1dc;
    v98 = &g_1;
    v99 = 0;
    v100 = 0x11000000110000;
    v101 = 0;
    v102 = 3337;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v105 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_51);
    v197 = v106;
    v198 = v107;
    *((v197 + v198 + &g_41 as &u8) as &i128) = 145412392094375314668997367728777424489;
    *((v197 + v198 + &g_31 as &u8) as &i128) = 148147271199494619528961021120789116009;
    *((v197 + v198 + &g_21 as &u8) as &i128) = 158346503814896145012441287807451558770;
    *((v197 + v198 + &g_11 as &u8) as &i128) = 134773232688131554962718468918617383013;
    *((v197 + v198 + &g_1 as &u8) as &i128) = 144103886088304428714017556318319962476;
    *((v197 + v198) as &i128) = 43139943842441683957281807327767655028;
    v107 = v198 + &g_51 as &u8;
    v161 = *((&v105 as &char + 8) as &i128);
    if v91 != 0x8000000000000000 {
        v105 = v161;
    }
    v91 = v105;
    memcpy(&v105, &v53, 588);
    v158 = *((&v53 as &char + 589) as &i16);
    v159 = *((&v53 as &char + 591) as &i8);
    v157 = &g_1;
    v53 = clap_builder::builder::command::Command::arg(&v0, &v105);
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
    v42 = 9223372036854775809;
    v43 = &g_41b1e2;
    v44 = &g_1;
    v45 = &g_41b56e;
    v46 = &g_1;
    v47 = 0;
    v48 = 4785074604081274;
    v49 = 0;
    v50 = 3337;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v105 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v199 = v106;
    v200 = v107;
    *((v199 + v200 + &g_1 as &u8) as &i128) = 140132129261007763084871203607542636659;
    *((v199 + v200) as &i128) = 139737413289656226403140227931854236012;
    *((v199 + v200 + &g_11 as &u8) as &i16) = 25966;
    v107 = v200 + &g_21 as &u8;
    v161 = *((&v105 as &char + 8) as &i128);
    if v38 != 0x8000000000000000 {
        v105 = v161;
    }
    v38 = v105;
    memcpy(&v105, &v0, 588);
    v158 = *((&v0 as &char + 589) as &i16);
    v159 = *((&v0 as &char + 591) as &i8);
    v157 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v53, &v105);
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v86 = 0;
    v88 = 0;
    v53 = 0;
    v55 = 0;
    v58 = 0;
    v59 = 0;
    v60 = &g_1;
    v61 = 0;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v83 = &g_1;
    v84 = 0;
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v93 = 0x8000000000000000;
    v94 = 9223372036854775809;
    v95 = &g_41b59f;
    v96 = &g_1;
    v97 = 0;
    v99 = 0;
    v100 = 0xd09000000010011000000110000;
    v161 = struct32 {
        field_0: &g_41b5a4
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v105 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v161);
    v84 = v107;
    v82 = v105;
    v108 = *((&v53 as &char + 24) as &i128);
    v111 = *((&v53 as &char + 64) as &i128);
    v113 = *((&v53 as &char + 88) as &i128);
    v116 = v63;
    v118 = v65;
    v120 = v67;
    v122 = v69;
    v124 = v71;
    v126 = v73;
    v128 = v75;
    v130 = v77;
    v132 = v79;
    v134 = v81;
    v201 = *((&v82 as &char + 8) as &i128);
    v138 = v86;
    v140 = v88;
    v144 = v92;
    v146 = *((&v53 as &char + 472) as &i128);
    v147 = *((&v53 as &char + 488) as &i128);
    v149 = *((&v53 as &char + 0x200) as &i128);
    v202 = *((&v53 as &char + 568) as &i64);
    v203 = *((&v53 as &char + 40) as &i128);
    v105 = v53;
    v107 = v55;
    v109 = v203;
    v110 = v59;
    v112 = v60;
    v114 = v61;
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
    v135 = v201;
    v136 = 0;
    v137 = &g_1;
    v139 = &g_1;
    v141 = &g_1;
    v142 = 0;
    v143 = 0x8000000000000000;
    v145 = 0x8000000000000000;
    v148 = 9223372036854775809;
    v150 = &g_41b59f;
    v151 = &g_1;
    v152 = 0;
    v153 = v98;
    v154 = 0;
    v155 = v202;
    v156 = 0x309000000050011000000110000;
    v53 = clap_builder::builder::command::Command::arg(&v0, &v105);
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
    v31 = 0;
    v32 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v37 = 0;
    v38 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v42 = 9223372036854775809;
    v43 = &g_41b5a9;
    v44 = &g_1;
    v45 = 0;
    v47 = 0;
    v48 = 0xd09000000010011000000110000;
    v161 = struct32 {
        field_0: &g_41b5ae
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v105 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v161);
    v31 = v107;
    v29 = v105;
    v108 = *((&v0 as &char + 24) as &i128);
    v111 = *((&v0 as &char + 64) as &i128);
    v113 = *((&v0 as &char + 88) as &i128);
    v116 = v10;
    v118 = v12;
    v120 = v14;
    v122 = v16;
    v124 = v18;
    v126 = v20;
    v128 = v22;
    v130 = v24;
    v132 = v26;
    v134 = v28;
    v204 = *((&v29 as &char + 8) as &i128);
    v138 = v33;
    v140 = v35;
    v144 = v39;
    v146 = v41;
    v147 = *((&v0 as &char + 488) as &i128);
    v149 = *((&v0 as &char + 0x200) as &i128);
    v205 = *((&v0 as &char + 568) as &i64);
    v206 = *((&v0 as &char + 40) as &i128);
    v105 = v0;
    v107 = v2;
    v109 = v206;
    v110 = v6;
    v112 = v7;
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
    v135 = v204;
    v136 = 0;
    v137 = &g_1;
    v139 = &g_1;
    v141 = &g_1;
    v142 = 0;
    v143 = 0x8000000000000000;
    v145 = 0x8000000000000000;
    v148 = 9223372036854775809;
    v150 = &g_41b5a9;
    v151 = &g_1;
    v152 = 0;
    v153 = v46;
    v154 = 0;
    v155 = v205;
    v156 = 0x309000000050011000000110000;
    clap_builder::builder::command::Command::arg(a0, &v53, &v105);
    return a0;
}
