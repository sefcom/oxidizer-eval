fn uu_mktemp::uu_app(a0: u32) -> u64 {
    let v0: i192;  // [sp-0xa98], Other Possible Types: struct24, Enum, struct592
    let v1: i64;  // [sp-0xa90]
    let v2: i64;  // [sp-0xa88]
    let v3: i64;  // [sp-0xa80]
    let v4: i64;  // [sp-0xa78]
    let v5: i64;  // [sp-0xa70]
    let v6: i64;  // [sp-0xa60]
    let v7: i64;  // [sp-0xa48]
    let v8: i64;  // [sp-0xa30]
    let v9: i64;  // [sp-0xa28]
    let v10: i128;  // [sp-0xa20]
    let v11: struct16;  // [sp-0xa18]
    let v12: i64;  // [sp-0xa10]
    let v13: i64;  // [bp-0xa08]
    let v14: i64;  // [sp-0x9f8]
    let v15: i128;  // [sp-0x9f0]
    let v16: i64;  // [sp-0x9e0]
    let v17: i128;  // [sp-0x9d8]
    let v18: i64;  // [sp-0x9c8]
    let v19: i128;  // [sp-0x9c0]
    let v20: i64;  // [sp-0x9b0]
    let v21: i128;  // [sp-0x9a8]
    let v22: i64;  // [sp-0x998]
    let v23: i128;  // [sp-0x990]
    let v24: i64;  // [sp-0x980]
    let v25: i128;  // [sp-0x978]
    let v26: i64;  // [sp-0x968]
    let v27: i128;  // [sp-0x960]
    let v28: i64;  // [sp-0x950]
    let v29: i128;  // [sp-0x948]
    let v30: i64;  // [sp-0x938]
    let v31: i128;  // [bp-0x930]
    let v32: i64;  // [sp-0x920]
    let v33: i128;  // [sp-0x918]
    let v34: i64;  // [sp-0x908]
    let v35: i128;  // [sp-0x900]
    let v36: i64;  // [sp-0x8f0]
    let v37: i64;  // [sp-0x8e8]
    let v38: i64;  // [sp-0x8e0]
    let v39: i64;  // [sp-0x8c8]
    let v40: i64;  // [sp-0x8a0]
    let v41: i64;  // [sp-0x888]
    let v42: i64;  // [sp-0x880]
    let v43: i64;  // [sp-0x878]
    let v44: i64;  // [sp-0x870]
    let v45: i64;  // [sp-0x868]
    let v46: i64;  // [sp-0x858]
    let v47: i32;  // [sp-0x850]
    let v48: i16;  // [sp-0x84c]
    let v49: i16;  // [bp-0x84b]
    let v50: i8;  // [sp-0x849]
    let v51: i64;  // [sp-0x840]
    let v52: i5696;  // [sp-0x838], Other Possible Types: struct712, Enum, struct592
    let v53: i64;  // [sp-0x830]
    let v54: i64;  // [bp-0x828]
    let v55: i64;  // [sp-0x818]
    let v56: i64;  // [sp-0x810]
    let v57: i64;  // [sp-0x800]
    let v58: i64;  // [sp-0x7e8]
    let v59: i64;  // [sp-0x7d0]
    let v60: i64;  // [sp-0x7c8]
    let v61: i128;  // [sp-0x7c0]
    let v62: i64;  // [sp-0x7b0]
    let v63: i128;  // [sp-0x7a8]
    let v64: i64;  // [sp-0x798]
    let v65: i128;  // [sp-0x790]
    let v66: i64;  // [sp-0x780]
    let v67: i128;  // [sp-0x778]
    let v68: i64;  // [sp-0x768]
    let v69: i128;  // [sp-0x760]
    let v70: i64;  // [sp-0x750]
    let v71: i128;  // [sp-0x748]
    let v72: i64;  // [sp-0x738]
    let v73: i128;  // [sp-0x730]
    let v74: i64;  // [sp-0x720]
    let v75: i128;  // [sp-0x718]
    let v76: i64;  // [sp-0x708]
    let v77: i128;  // [sp-0x700]
    let v78: i64;  // [sp-0x6f0]
    let v79: i128;  // [bp-0x6e8]
    let v80: i128;  // [bp-0x6e0]
    let v81: i64;  // [sp-0x6d8]
    let v82: i128;  // [bp-0x6d0]
    let v83: i64;  // [sp-0x6c0]
    let v84: i128;  // [sp-0x6b8]
    let v85: i64;  // [sp-0x6a8]
    let v86: i128;  // [sp-0x6a0]
    let v87: i64;  // [sp-0x690]
    let v88: i64;  // [sp-0x688]
    let v89: i64;  // [sp-0x680]
    let v90: i64;  // [sp-0x668]
    let v91: i128;  // [sp-0x660]
    let v92: i64;  // [sp-0x640]
    let v93: i64;  // [sp-0x628]
    let v94: i64;  // [sp-0x620]
    let v95: i64;  // [sp-0x618]
    let v96: i64;  // [sp-0x610]
    let v97: i64;  // [sp-0x608]
    let v98: i64;  // [sp-0x5f8]
    let v99: i32;  // [sp-0x5f0]
    let v100: i16;  // [bp-0x5ec]
    let v101: i8;  // [sp-0x5eb]
    let v102: i64;  // [sp-0x5d8]
    let v103: i64;  // [sp-0x5d0]
    let v104: i192;  // [bp-0x568], Other Possible Types: struct712, Enum
    let v105: i64;  // [sp-0x560]
    let v106: i64;  // [sp-0x558]
    let v107: i64;  // [sp-0x550]
    let v108: i64;  // [sp-0x548]
    let v109: i64;  // [sp-0x540]
    let v110: i64;  // [sp-0x530]
    let v111: i64;  // [sp-0x518]
    let v112: i64;  // [sp-0x500]
    let v113: i64;  // [sp-0x4f8]
    let v114: i128;  // [sp-0x4f0]
    let v115: i64;  // [sp-0x4e0]
    let v116: i128;  // [sp-0x4d8]
    let v117: i64;  // [sp-0x4c8]
    let v118: i128;  // [sp-0x4c0]
    let v119: i64;  // [sp-0x4b0]
    let v120: i128;  // [sp-0x4a8]
    let v121: i64;  // [sp-0x498]
    let v122: i128;  // [sp-0x490]
    let v123: i64;  // [sp-0x480]
    let v124: i128;  // [sp-0x478]
    let v125: i64;  // [sp-0x468]
    let v126: i128;  // [sp-0x460]
    let v127: i64;  // [sp-0x450]
    let v128: i128;  // [sp-0x448]
    let v129: i64;  // [sp-0x438]
    let v130: i128;  // [sp-0x430]
    let v131: i64;  // [sp-0x420]
    let v132: i128;  // [bp-0x418]
    let v133: i128;  // [bp-0x410]
    let v134: i64;  // [sp-0x408]
    let v135: i128;  // [bp-0x400]
    let v136: i64;  // [sp-0x3f0]
    let v137: i128;  // [sp-0x3e8]
    let v138: i64;  // [sp-0x3d8]
    let v139: i128;  // [sp-0x3d0]
    let v140: i64;  // [sp-0x3c0]
    let v141: i64;  // [sp-0x3b8]
    let v142: i64;  // [sp-0x3b0]
    let v143: i64;  // [sp-0x398]
    let v144: i64;  // [sp-0x370]
    let v145: i64;  // [sp-0x358]
    let v146: i64;  // [sp-0x350]
    let v147: i64;  // [sp-0x348]
    let v148: i64;  // [sp-0x340]
    let v149: i64;  // [sp-0x338]
    let v150: i64;  // [sp-0x328]
    let v151: i32;  // [sp-0x320]
    let v152: i16;  // [bp-0x31c]
    let v153: i16;  // [bp-0x31b]
    let v154: i8;  // [bp-0x319]
    let v155: i64;  // [sp-0x2ac]
    let v156: i32;  // [sp-0x2a4]
    let v157: struct8;  // [bp-0x2a0]
    let v158: i128;  // [bp-0x288], Other Possible Types: struct32
    let v160: i64;  // rbx
    let v161: i64;  // rax
    let v162: i64;  // rcx
    let v163: i64;  // rax
    let v164: i64;  // rcx
    let v165: i64;  // rax
    let v166: i64;  // rcx
    let v167: i64;  // rax
    let v168: i64;  // rcx
    let v170: i64;  // rax
    let v171: i64;  // rdx
    let v172: i64;  // r13
    let v174: i64;  // r14
    let v175: i64;  // r12
    let v176: i32;  // ebp
    let v178: i64;  // rbx
    let v179: i64;  // rax
    let v180: i64;  // rcx
    let v181: i64;  // r13
    let v182: i64;  // rax
    let v183: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v52 = clap_builder::builder::command::Command::new(g_4f54b8, g_4f54c0);
    v102 = &g_41ade6;
    v103 = &g_1;
    memcpy(&v104, &v52, 712);
    v52 = clap_builder::builder::command::Command::about(&v104, &g_41adec, 37);
    v0 = uucore::format_usage(&g_41ae11, &g_11);
    v160 = v0;
    if v160 != 0x8000000000000000 {
        v104 = *((&v0 as &char + 8) as &i128);
    }
    v90 = v160;
    v91 = v104;
    memcpy(&v104, &v52, 700);
    v155 = 549755814016 | *((&v52 as &char + 700) as &i64);
    v156 = *((&v52 as &char + 708) as &i32);
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v52 = 0;
    v54 = 0;
    v56 = 0;
    v57 = 0;
    v58 = &g_1;
    v59 = 0;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v88 = 0;
    v89 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &g_41ac98;
    v94 = &g_1;
    v95 = &g_41ac98;
    v96 = &g_1;
    v97 = 0;
    v98 = 4785074604081252;
    v99 = 0;
    v100 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v161 = v1;
    v162 = v2;
    *((v161 + v162 + &g_1 as &u8) as &i128) = 140099210569253155338196482132519315744;
    *((v161 + v162) as &i128) = 161430769900542305735089637495715619149;
    *((v161 + v162 + &g_11 as &u8) as &i16) = 25964;
    v2 = v162 + &g_21 as &u8;
    v158 = *((&v0 as &char + 8) as &i128);
    if v89 != 0x8000000000000000 {
        v0 = v158;
    }
    v89 = v0;
    memcpy(&v0, &v52, 588);
    v49 = *((&v52 as &char + 589) as &i16);
    v50 = *((&v52 as &char + 591) as &i8);
    v48 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
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
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v104 = 0;
    v106 = 0;
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
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v143 = 0x8000000000000000;
    v144 = 9223372036854775809;
    v145 = &g_41aca1;
    v146 = &g_1;
    v147 = &g_41aca1;
    v148 = &g_1;
    v149 = 0;
    v150 = 4785074604081269;
    v151 = 0;
    v152 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v163 = v1;
    v164 = v2;
    *((v163 + v164 + &g_11 as &u8) as &i128) = 153434748390780422596369649121052486002;
    *((v163 + v164 + &g_1 as &u8) as &i128) = 149042151786983568149433481646465119353;
    *((v163 + v164) as &i128) = 146719389406788361106402976304776376164;
    *((v163 + v164 + 48) as &i32) = 694511201;
    v2 = v164 + &g_31 as &u8;
    v158 = *((&v0 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v0 = v158;
    }
    v142 = v0;
    memcpy(&v0, &v104, 588);
    v49 = v153;
    v50 = v154;
    v48 = &g_1;
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v52 = 0;
    v54 = 0;
    v56 = 0;
    v57 = 0;
    v58 = &g_1;
    v59 = 0;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v88 = 0;
    v89 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &g_41aca8;
    v94 = &g_1;
    v95 = &g_41aca8;
    v96 = &g_1;
    v97 = 0;
    v98 = 4785074604081265;
    v99 = 0;
    v100 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v165 = v1;
    v166 = v2;
    *((v165 + v166 + &g_1 as &u8) as &i128) = 153455522273423371856176580840920080672;
    *((v165 + v166) as &i128) = 136127105397487694803649170517948719430;
    *((v165 + v166 + &g_11 as &u8) as &i8) = 46;
    v2 = v166 + &g_21 as &u8;
    v158 = *((&v0 as &char + 8) as &i128);
    if v89 != 0x8000000000000000 {
        v0 = v158;
    }
    v89 = v0;
    memcpy(&v0, &v52, 588);
    v49 = *((&v52 as &char + 589) as &i16);
    v50 = *((&v52 as &char + 591) as &i8);
    v48 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v10 = 0;
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
    v35 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
    v9 = &g_1;
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
    v36 = &g_1;
    v37 = 0;
    v38 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_41acad;
    v42 = &g_1;
    v43 = &g_41acad;
    v44 = &g_1;
    v45 = 0;
    v46 = 0x11000000110000;
    v47 = 0;
    v48 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_6d);
    v167 = v105;
    v168 = v106;
    *((v167 + v168 + &g_61 as &u8) as &i128) = 61602067242521174231310153213681823264;
    *((v167 + v168 + &g_51 as &u8) as &i128) = 154769026098418612930729065049716968773;
    *((v167 + v168 + &g_41 as &u8) as &i128) = 111823382280167576076152727229934299424;
    *((v167 + v168 + 64) as &i128) = 146793563365910012076909642145433022324;
    *((v167 + v168 + 48) as &i128) = 129529013731692731334745171845267353193;
    *((v167 + v168 + &g_11 as &u8) as &i128) = 129539661916787571892243835083018805336;
    *((v167 + v168 + &g_1 as &u8) as &i128) = 97398531001188587325291778815560078368;
    *((v167 + v168) as &i128) = 148147269999578682669895554938545664097;
    v106 = v168 + &g_6d as &u8;
    v158 = *((&v104 as &char + 8) as &i128);
    if v38 != 0x8000000000000000 {
        v104 = v158;
    }
    v38 = v104;
    memcpy(&v104, &v0, 360);
    memcpy(&v104, &v31, 224);
    v135 = v31;
    v158 = struct32 {
        field_0: &g_41af1d
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v158);
    v135 = v2;
    v133 = v0;
    memcpy(&v0, &v104, 592);
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
    v10 = 0;
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
    v35 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
    v9 = &g_1;
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
    v36 = &g_1;
    v37 = 0;
    v38 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_41acb9;
    v42 = &g_1;
    v43 = 0;
    v45 = 0;
    v46 = 4785074604081264;
    v47 = 0;
    v48 = 3337;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v51 = 9223372036854775809;
    v170 = v53;
    v171 = *((&v52 as &char + 16) as &i64);
    *((v170 + v171) as &i128) = 60049570321727213397670757927555655795;
    *((v170 + v171 + &g_1 as &u8) as &i64) = 8244231026913848621;
    v54 = v171 + &g_11 as &u8;
    v158 = *((&v52 as &char + 8) as &i128);
    if v38 != 0x8000000000000000 {
        v52 = v158;
    }
    v38 = v52;
    v52 = v0;
    memcpy(&v52, &v5, 320);
    v172 = v31;
    memcpy(&v52, &v31, 224);
    v54 = v2;
    v55 = v4;
    v82 = v172;
    v158 = struct32 {
        field_0: &g_41af39
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v158);
    v82 = v2;
    v80 = v0;
    v0 = v52;
    memcpy(&v5, &v52, 320);
    memcpy(&v31, &v52, 224);
    v2 = &g_1;
    v3 = &g_1;
    v4 = &g_1;
    v31 = v82;
    v157 = struct8 {
        field_0: &g_1
    };
    v52 = clap_builder::builder::arg::Arg::value_parser(&v0, &v157);
    v101 = &g_1;
    memcpy(&v0, &v52, 592);
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v10 = 0;
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
    v35 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
    v9 = &g_1;
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
    v36 = &g_1;
    v37 = 0;
    v38 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = v51;
    v41 = &g_41acb3;
    v42 = &g_1;
    v43 = &g_41acb3;
    v44 = &g_1;
    v45 = 0;
    v46 = 0x11000000110000;
    v47 = 0;
    v48 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 0x100);
    v174 = v106;
    memcpy(v105 + v174, &g_41af3c, 0x100);
    v106 = v174 + 0x100;
    v158 = *((&v104 as &char + 8) as &i128);
    if v38 != 0x8000000000000000 {
        v104 = v158;
    }
    v38 = v104;
    v104 = v0;
    memcpy(&v104, &v5, 320);
    v175 = v31;
    memcpy(&v104, &v31, 216);
    v176 = v48;
    v106 = v2;
    v108 = v4;
    v135 = v175;
    v151 = 0;
    v152 = v176;
    v158 = struct32 {
        field_0: &g_41af39
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v158);
    v135 = v2;
    v133 = v0;
    v0 = v104;
    memcpy(&v5, &v104, 320);
    memcpy(&v31, &v104, 216);
    v2 = &g_1;
    v3 = 0;
    v4 = &g_1;
    v31 = v135;
    v47 = 128;
    v48 = v176;
    v178 = v13;
    if v178 == *((&v10 as &char + 8) as &i64) {
        v11 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v179 = v12;
    v180 = v178 * &g_1;
    *((v179 + v180) as &&i64) = &g_41acb9;
    *((v179 + v180 + &g_1 as &u8) as &&i64) = &g_1;
    v13 = v178 + &g_1 as &u8;
    memcpy(&v104, &v0, 592);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v104, &v157);
    v181 = v51;
    *(&v49 as &&i64) = &g_1;
    memcpy(&v158, &v0, 592);
    v104 = clap_builder::builder::command::Command::arg(&v52, &v158);
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v52 = 0;
    v54 = 0;
    v56 = 0;
    v57 = 0;
    v58 = &g_1;
    v59 = 0;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v88 = 0;
    v89 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v92 = v181;
    v93 = &g_41acba;
    v94 = &g_1;
    v95 = 0;
    v97 = 0;
    v98 = 4785074604081268;
    v99 = 0;
    v100 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 125);
    v182 = v1;
    v183 = v2;
    *((v182 + v183 + &g_6d as &u8) as &i128) = 124139491037827688095137989801571349601;
    *((v182 + v183 + &g_51 as &u8) as &i128) = 134856309995034222036273750557411601513;
    *((v182 + v183 + &g_41 as &u8) as &i128) = 135749379029965969516734828039710452084;
    *((v182 + v183 + 64) as &i128) = 134849798863922709053457995339750908014;
    *((v182 + v183 + 48) as &i128) = 147712089750980832599840939825579451502;
    *((v182 + v183 + &g_11 as &u8) as &i128) = 129103711330409569281695341683944747125;
    *((v182 + v183 + &g_1 as &u8) as &i128) = 153029429813776745376246541814405100641;
    *((v182 + v183) as &i128) = 144140379613557432373439805356520662343;
    v2 = v183 + 125;
    v158 = *((&v0 as &char + 8) as &i128);
    if v89 != 0x8000000000000000 {
        v0 = v158;
    }
    v89 = v0;
    memcpy(&v0, &v52, 588);
    v49 = *((&v52 as &char + 589) as &i16);
    v50 = *((&v52 as &char + 591) as &i8);
    v48 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
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
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v104 = 0;
    v106 = &g_1;
    v107 = 0;
    v108 = &g_1;
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
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v141 = 0;
    v142 = 0x8000000000000000;
    v143 = 0x8000000000000000;
    v144 = v181;
    v145 = &g_411e40;
    v146 = &g_1;
    v147 = 0;
    v149 = 0;
    v150 = 0x11000000110000;
    v151 = 0;
    v152 = 3337;
    clap_builder::builder::command::Command::arg(a0, &v52, &v104);
    return a0;
}
