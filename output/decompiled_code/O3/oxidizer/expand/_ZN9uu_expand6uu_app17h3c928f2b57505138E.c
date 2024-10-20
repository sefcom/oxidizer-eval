fn uu_expand::uu_app(a0: u32) -> u64 {
    let v0: i5696;  // [sp-0xa78], Other Possible Types: struct712, Enum
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
    let v26: i128;  // [bp-0x928]
    let v27: i128;  // [bp-0x920]
    let v28: i64;  // [sp-0x918]
    let v29: i64;  // [bp-0x910]
    let v30: i64;  // [sp-0x900]
    let v31: i128;  // [sp-0x8f8]
    let v32: i64;  // [sp-0x8e8]
    let v33: i128;  // [bp-0x8e0]
    let v34: i64;  // [sp-0x8d8]
    let v35: i64;  // [sp-0x8d0]
    let v36: i64;  // [sp-0x8c8]
    let v37: i64;  // [sp-0x8c0]
    let v38: i64;  // [sp-0x8a8]
    let v39: i64;  // [sp-0x880]
    let v40: i64;  // [sp-0x868]
    let v41: i64;  // [sp-0x860]
    let v42: i64;  // [sp-0x858]
    let v43: i64;  // [sp-0x850]
    let v44: i64;  // [sp-0x848]
    let v45: i32;  // [sp-0x838]
    let v46: i64;  // [sp-0x834]
    let v47: i16;  // [sp-0x82c]
    let v48: i64;  // [sp-0x818]
    let v49: i64;  // [sp-0x810]
    let v50: i64;  // [sp-0x7bc]
    let v51: i32;  // [sp-0x7b4]
    let v52: i192;  // [sp-0x7a8], Other Possible Types: struct24, Enum
    let v53: i64;  // [sp-0x7a0]
    let v54: i64;  // [sp-0x798]
    let v55: i128;  // [sp-0x790]
    let v56: i128;  // [sp-0x780]
    let v57: i64;  // [sp-0x770]
    let v58: i128;  // [sp-0x768]
    let v59: i64;  // [sp-0x758]
    let v60: i128;  // [sp-0x750]
    let v61: i128;  // [sp-0x740]
    let v62: i128;  // [sp-0x730]
    let v63: i64;  // [sp-0x720]
    let v64: i128;  // [sp-0x718]
    let v65: i64;  // [sp-0x708]
    let v66: i128;  // [sp-0x700]
    let v67: i64;  // [sp-0x6f0]
    let v68: i128;  // [sp-0x6e8]
    let v69: i64;  // [sp-0x6d8]
    let v70: i128;  // [sp-0x6d0]
    let v71: i64;  // [sp-0x6c0]
    let v72: i128;  // [sp-0x6b8]
    let v73: i64;  // [sp-0x6a8]
    let v74: i128;  // [sp-0x6a0]
    let v75: i64;  // [sp-0x690]
    let v76: i128;  // [sp-0x688]
    let v77: i64;  // [sp-0x678]
    let v78: i128;  // [sp-0x670]
    let v79: i64;  // [sp-0x660]
    let v80: i128;  // [sp-0x658]
    let v81: i128;  // [sp-0x648]
    let v82: i64;  // [sp-0x638]
    let v83: i64;  // [sp-0x630]
    let v84: i128;  // [sp-0x628]
    let v85: i64;  // [sp-0x618]
    let v86: i128;  // [sp-0x610]
    let v87: i64;  // [sp-0x600]
    let v88: i64;  // [sp-0x5f8]
    let v89: i64;  // [sp-0x5f0]
    let v90: i128;  // [sp-0x5e8]
    let v91: i64;  // [sp-0x5d8]
    let v92: i128;  // [sp-0x5d0]
    let v93: i128;  // [sp-0x5c0]
    let v94: i64;  // [sp-0x5b0]
    let v95: i128;  // [sp-0x5a8]
    let v96: i64;  // [sp-0x598]
    let v97: i64;  // [sp-0x590]
    let v98: i64;  // [sp-0x588]
    let v99: i64;  // [sp-0x580]
    let v100: i64;  // [sp-0x578]
    let v101: i64;  // [sp-0x570]
    let v102: i32;  // [sp-0x568]
    let v103: i64;  // [sp-0x564]
    let v104: i16;  // [sp-0x55c]
    let v105: i16;  // [sp-0x55b]
    let v106: i8;  // [sp-0x559]
    let v107: i5696;  // [bp-0x550], Other Possible Types: struct712
    let v108: i64;  // [sp-0x540]
    let v109: i64;  // [sp-0x528]
    let v110: i64;  // [sp-0x518]
    let v111: i64;  // [sp-0x500]
    let v112: i64;  // [sp-0x4e8]
    let v113: i64;  // [sp-0x4e0]
    let v114: i128;  // [sp-0x4d8]
    let v115: i64;  // [sp-0x4c8]
    let v116: i128;  // [sp-0x4c0]
    let v117: i64;  // [sp-0x4b0]
    let v118: i128;  // [sp-0x4a8]
    let v119: i64;  // [sp-0x498]
    let v120: i128;  // [sp-0x490]
    let v121: i64;  // [sp-0x480]
    let v122: i128;  // [sp-0x478]
    let v123: i64;  // [sp-0x468]
    let v124: i128;  // [sp-0x460]
    let v125: i64;  // [sp-0x450]
    let v126: i128;  // [sp-0x448]
    let v127: i64;  // [sp-0x438]
    let v128: i128;  // [sp-0x430]
    let v129: i64;  // [sp-0x420]
    let v130: i128;  // [sp-0x418]
    let v131: i64;  // [sp-0x408]
    let v132: i128;  // [sp-0x400]
    let v133: i64;  // [sp-0x3f0]
    let v134: i128;  // [sp-0x3e8]
    let v135: i64;  // [sp-0x3d8]
    let v136: i128;  // [sp-0x3d0]
    let v137: i64;  // [sp-0x3c0]
    let v138: i128;  // [sp-0x3b8]
    let v139: i64;  // [sp-0x3a8]
    let v140: i64;  // [sp-0x3a0]
    let v141: i192;  // [sp-0x398]
    let v142: i64;  // [sp-0x380]
    let v143: i128;  // [sp-0x378]
    let v144: i64;  // [sp-0x358]
    let v145: i64;  // [sp-0x340]
    let v146: i64;  // [sp-0x338]
    let v147: i64;  // [sp-0x330]
    let v148: i64;  // [sp-0x328]
    let v149: i64;  // [sp-0x320]
    let v150: i32;  // [sp-0x310]
    let v151: i64;  // [sp-0x30c]
    let v152: i16;  // [sp-0x304]
    let v153: i8;  // [bp-0x301]
    let v154: i8;  // [bp-0x294]
    let v155: i8;  // [bp-0x28c]
    let v156: i128;  // [bp-0x288], Other Possible Types: struct32
    let v158: i64;  // r14
    let v159: i64;  // rax
    let v160: i64;  // rcx
    let v161: i128;  // xmm0
    let v162: i128;  // xmm1
    let v163: i64;  // rsi
    let v164: i128;  // xmm3
    let v165: i64;  // rcx
    let v166: i64;  // rdx
    let v167: i64;  // r14
    let v168: i64;  // rax
    let v169: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v0 = clap_builder::builder::command::Command::new(g_4ea430, g_4ea438);
    v48 = &g_419129;
    v49 = &g_1;
    memcpy(&v107, &v0, 712);
    v0 = clap_builder::builder::command::Command::about(&v107, &g_41912f, 126);
    v34 = 0;
    v35 = &g_1;
    v36 = 0;
    memcpy(&v107, &v0, 712);
    v52 = uucore::format_usage(&g_4191ad, &g_11);
    v158 = v52;
    if v158 != 0x8000000000000000 {
        v0 = *((&v52 as &char + 8) as &i128);
    }
    v142 = v158;
    v143 = v0;
    memcpy(&v0, &v107, 700);
    v50 = 584115552392 | v154;
    v51 = v155;
    v114 = 0;
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
    v136 = 0;
    v138 = 0;
    v107 = 0;
    v108 = 0;
    v109 = 0;
    v110 = 0;
    v111 = &g_1;
    v112 = 0;
    v113 = &g_1;
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
    v135 = &g_1;
    v137 = &g_1;
    v139 = &g_1;
    v140 = 0;
    v141 = 0x8000000000000000;
    v142 = 0x8000000000000000;
    v144 = 9223372036854775809;
    v145 = &anon.c0a2baf3a258817979713691effb9d34.7.llvm.9602832291383151297;
    v146 = &g_1;
    v147 = &anon.c0a2baf3a258817979713691effb9d34.7.llvm.9602832291383151297;
    v148 = &g_1;
    v149 = 0;
    v151 = 0x110000;
    v152 = 3337;
    v150 = 105;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v159 = v53;
    v160 = v54;
    *((v159 + v160 + &g_1 as &u8) as &i128) = 144066126423598491960031621484092023393;
    *((v159 + v160) as &i128) = 154358962833449066714573181477713899364;
    *((v159 + v160 + &g_11 as &u8) as &i32) = 1936420449;
    v54 = v160 + &g_21 as &u8;
    v156 = *((&v52 as &char + 8) as &i128);
    if v141 != 0x8000000000000000 {
        v52 = v156;
    }
    v141 = v52;
    memcpy(&v52, &v107, 588);
    v105 = v152;
    v106 = v153;
    v104 = &g_1;
    v107 = clap_builder::builder::command::Command::arg(&v0, &v52);
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
    v31 = 0;
    v33 = 0;
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
    v28 = &g_1;
    v29 = 0;
    v30 = &g_1;
    v32 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v39 = 9223372036854775809;
    v40 = &anon.c0a2baf3a258817979713691effb9d34.6.llvm.9602832291383151297;
    v41 = &g_1;
    v42 = &anon.c0a2baf3a258817979713691effb9d34.6.llvm.9602832291383151297;
    v43 = &g_1;
    v44 = 0;
    v45 = 116;
    v46 = 0x110000;
    v47 = 3337;
    v156 = struct32 {
        field_0: &g_4191e9
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v52 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v156);
    v29 = v54;
    v27 = v52;
    v55 = *((&v0 as &char + 24) as &i128);
    v58 = *((&v0 as &char + 64) as &i128);
    v60 = *((&v0 as &char + 88) as &i128);
    v161 = v6;
    v62 = v8;
    v64 = v10;
    v66 = v12;
    v68 = v14;
    v70 = v16;
    v72 = v18;
    v74 = v20;
    v76 = v22;
    v78 = v24;
    v80 = v26;
    v162 = *((&v27 as &char + 8) as &i128);
    v84 = v31;
    v86 = v33;
    v90 = *((&v0 as &char + 448) as &i128);
    v92 = *((&v0 as &char + 472) as &i128);
    v93 = *((&v0 as &char + 488) as &i128);
    v95 = *((&v0 as &char + 0x200) as &i128);
    v163 = *((&v0 as &char + 568) as &i64);
    v164 = *((&v0 as &char + 40) as &i128);
    v52 = v0;
    v54 = v2;
    v56 = v164;
    v57 = v4;
    v59 = v5;
    v61 = v161;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = v162;
    v82 = 0;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v88 = 0;
    v89 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v94 = 9223372036854775809;
    v96 = &anon.c0a2baf3a258817979713691effb9d34.6.llvm.9602832291383151297;
    v97 = &g_1;
    v98 = &anon.c0a2baf3a258817979713691effb9d34.6.llvm.9602832291383151297;
    v99 = &g_1;
    v100 = 0;
    v101 = v163;
    v102 = 116;
    v103 = 0x110000;
    v104 = 3329;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_4a);
    v165 = v1;
    v166 = v2;
    *((v165 + v166 + &g_41 as &u8) as &i128) = 153434631872154969234397924124042228841;
    *((v165 + v166 + &g_31 as &u8) as &i128) = 43046117551496380298875372431021729391;
    *((v165 + v166 + &g_2e as &u8) as &i128) = 43139943130232372672774048468189934368;
    *((v165 + v166 + &g_11 as &u8) as &i128) = 129503295556368153685967831852255813748;
    *((v165 + v166 + &g_1 as &u8) as &i128) = 148116112745749499237840349780453385057;
    *((v165 + v166) as &i128) = 152037761538943126249300053841891713384;
    v2 = v166 + &g_4a as &u8;
    v167 = v0;
    v156 = *((&v0 as &char + 8) as &i128);
    if v167 != 0x8000000000000000 {
        v0 = v156;
    }
    v89 = v167;
    v90 = v0;
    memcpy(&v156, &v52, 592);
    v0 = clap_builder::builder::command::Command::arg(&v107, &v156);
    v114 = 0;
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
    v136 = 0;
    v138 = 0;
    v107 = 0;
    v108 = 0;
    v109 = 0;
    v110 = 0;
    v111 = &g_1;
    v112 = 0;
    v113 = &g_1;
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
    v135 = &g_1;
    v137 = &g_1;
    v139 = &g_1;
    v140 = 0;
    v141 = 0x8000000000000000;
    v142 = 0x8000000000000000;
    v144 = 9223372036854775809;
    v145 = &anon.c0a2baf3a258817979713691effb9d34.8.llvm.9602832291383151297;
    v146 = &g_1;
    v147 = &anon.c0a2baf3a258817979713691effb9d34.8.llvm.9602832291383151297;
    v148 = &g_1;
    v149 = 0;
    v151 = 0x110000;
    v152 = 3337;
    v150 = &g_4a;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v168 = v53;
    v169 = v54;
    *((v168 + v169 + &g_11 as &u8) as &i128) = 43108424188956081653513055847053871427;
    *((v168 + v169 + &g_1 as &u8) as &i128) = 110664081206141564058398377988103891302;
    *((v168 + v169) as &i128) = 43139984250355618335144062592314797673;
    *((v168 + v169 + 45) as &i64) = 4047968968095329889;
    v54 = v169 + &g_31 as &u8;
    v156 = *((&v52 as &char + 8) as &i128);
    if v141 != 0x8000000000000000 {
        v52 = v156;
    }
    v141 = v52;
    memcpy(&v52, &v107, 588);
    v105 = *((&v107 as &char + 589) as &i16);
    v106 = *((&v107 as &char + 591) as &i8);
    v104 = &g_1;
    v107 = clap_builder::builder::command::Command::arg(&v0, &v52);
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
    v29 = 0;
    v31 = 0;
    v33 = 0;
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
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v39 = 9223372036854775809;
    v40 = &anon.c0a2baf3a258817979713691effb9d34.9.llvm.9602832291383151297;
    v41 = &g_1;
    v42 = 0;
    v44 = 0;
    v45 = 0x301000000040011000000110000;
    clap_builder::builder::command::Command::arg(a0, &v107, &v0);
    return a0;
}
