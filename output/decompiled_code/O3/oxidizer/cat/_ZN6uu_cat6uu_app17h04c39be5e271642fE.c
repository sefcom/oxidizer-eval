fn uu_cat::uu_app(a0: i64) -> u64 {
    let v0: i128;  // [sp-0x838]
    let v1: i5696;  // [bp-0x820], Other Possible Types: struct712
    let v2: i64;  // [sp-0x810]
    let v3: i64;  // [sp-0x7f8]
    let v4: i64;  // [sp-0x7e8]
    let v5: i64;  // [sp-0x7d0]
    let v6: i64;  // [sp-0x7b8]
    let v7: i64;  // [sp-0x7b0]
    let v8: i128;  // [sp-0x7a8]
    let v9: i64;  // [sp-0x798]
    let v10: i128;  // [sp-0x790]
    let v11: i64;  // [sp-0x780]
    let v12: i128;  // [sp-0x778]
    let v13: i64;  // [sp-0x768]
    let v14: i128;  // [sp-0x760]
    let v15: i64;  // [sp-0x750]
    let v16: i128;  // [sp-0x748]
    let v17: i64;  // [sp-0x738]
    let v18: i128;  // [sp-0x730]
    let v19: i64;  // [sp-0x720]
    let v20: i128;  // [sp-0x718]
    let v21: i64;  // [sp-0x708]
    let v22: i128;  // [sp-0x700]
    let v23: i64;  // [sp-0x6f0]
    let v24: i128;  // [sp-0x6e8]
    let v25: i64;  // [sp-0x6d8]
    let v26: i128;  // [sp-0x6d0]
    let v27: i64;  // [sp-0x6c0]
    let v28: i128;  // [sp-0x6b8]
    let v29: i64;  // [sp-0x6a8]
    let v30: i128;  // [sp-0x6a0]
    let v31: i64;  // [sp-0x690]
    let v32: i128;  // [sp-0x688]
    let v33: i64;  // [sp-0x678]
    let v34: i64;  // [sp-0x670]
    let v35: i64;  // [sp-0x668]
    let v36: i64;  // [sp-0x650]
    let v37: i128;  // [sp-0x648]
    let v38: i64;  // [sp-0x628]
    let v39: i64;  // [sp-0x610]
    let v40: i64;  // [sp-0x608]
    let v41: i64;  // [sp-0x600]
    let v42: i64;  // [sp-0x5f8]
    let v43: i64;  // [sp-0x5f0]
    let v44: i64;  // [sp-0x5e0]
    let v45: i32;  // [sp-0x5d8]
    let v46: i16;  // [sp-0x5d4]
    let v47: i64;  // [sp-0x558], Other Possible Types: struct712, Enum
    let v48: i64;  // [sp-0x548]
    let v49: i64;  // [sp-0x530]
    let v50: i64;  // [sp-0x520]
    let v51: i64;  // [sp-0x508]
    let v52: i64;  // [sp-0x4f0]
    let v53: i64;  // [sp-0x4e8]
    let v54: i128;  // [sp-0x4e0]
    let v55: i64;  // [sp-0x4d0]
    let v56: i128;  // [sp-0x4c8]
    let v57: i64;  // [sp-0x4b8]
    let v58: i128;  // [sp-0x4b0]
    let v59: i64;  // [sp-0x4a0]
    let v60: i128;  // [sp-0x498]
    let v61: i64;  // [sp-0x488]
    let v62: i128;  // [sp-0x480]
    let v63: i64;  // [sp-0x470]
    let v64: i128;  // [sp-0x468]
    let v65: i64;  // [sp-0x458]
    let v66: i128;  // [sp-0x450]
    let v67: i64;  // [sp-0x440]
    let v68: i128;  // [sp-0x438]
    let v69: i64;  // [sp-0x428]
    let v70: i128;  // [sp-0x420]
    let v71: i64;  // [sp-0x410]
    let v72: i128;  // [sp-0x408]
    let v73: i64;  // [sp-0x3f8]
    let v74: i128;  // [sp-0x3f0]
    let v75: i64;  // [sp-0x3e0]
    let v76: i128;  // [sp-0x3d8]
    let v77: i64;  // [sp-0x3c8]
    let v78: i128;  // [sp-0x3c0]
    let v79: i64;  // [sp-0x3b0]
    let v80: i64;  // [sp-0x3a8]
    let v81: i64;  // [sp-0x3a0]
    let v82: i64;  // [sp-0x388]
    let v83: i64;  // [sp-0x360]
    let v84: i64;  // [sp-0x348]
    let v85: i64;  // [sp-0x340]
    let v86: i64;  // [sp-0x338]
    let v87: i64;  // [sp-0x330]
    let v88: i64;  // [sp-0x328]
    let v89: i64;  // [sp-0x318]
    let v90: i32;  // [sp-0x310]
    let v91: i16;  // [sp-0x30c]
    let v92: i8;  // [bp-0x309]
    let v93: i64;  // [sp-0x2f8]
    let v94: i64;  // [sp-0x2f0]
    let v95: i64;  // [sp-0x29c]
    let v96: i32;  // [sp-0x294]
    let v97: i128;  // [sp-0x288], Other Possible Types: Enum, struct24
    let v98: i64;  // [sp-0x280]
    let v99: i64;  // [sp-0x278]
    let v100: i64;  // [sp-0x260]
    let v101: i64;  // [sp-0x250]
    let v102: i64;  // [sp-0x238]
    let v103: i64;  // [sp-0x220]
    let v104: i64;  // [sp-0x218]
    let v105: i128;  // [sp-0x210]
    let v106: i64;  // [sp-0x200]
    let v107: i128;  // [sp-0x1f8]
    let v108: i64;  // [sp-0x1e8]
    let v109: i128;  // [sp-0x1e0]
    let v110: i64;  // [sp-0x1d0]
    let v111: i128;  // [sp-0x1c8]
    let v112: i64;  // [sp-0x1b8]
    let v113: i128;  // [sp-0x1b0]
    let v114: i64;  // [sp-0x1a0]
    let v115: i128;  // [sp-0x198]
    let v116: i64;  // [sp-0x188]
    let v117: i128;  // [sp-0x180]
    let v118: i64;  // [sp-0x170]
    let v119: i128;  // [sp-0x168]
    let v120: i64;  // [sp-0x158]
    let v121: i128;  // [sp-0x150]
    let v122: i64;  // [sp-0x140]
    let v123: i128;  // [sp-0x138]
    let v124: i64;  // [sp-0x128]
    let v125: i128;  // [sp-0x120]
    let v126: i64;  // [sp-0x110]
    let v127: i128;  // [sp-0x108]
    let v128: i64;  // [sp-0xf8]
    let v129: i128;  // [sp-0xf0]
    let v130: i64;  // [sp-0xe0]
    let v131: i64;  // [sp-0xd8]
    let v132: i64;  // [sp-0xd0]
    let v133: i64;  // [sp-0xb8]
    let v134: i64;  // [sp-0x90]
    let v135: i64;  // [sp-0x78]
    let v136: i64;  // [sp-0x70]
    let v137: i64;  // [sp-0x68]
    let v138: i64;  // [sp-0x58]
    let v139: i128;  // [bp-0x48]
    let v140: i8;  // [sp-0x3c]
    let v141: i16;  // [sp-0x3b]
    let v142: i8;  // [sp-0x39]
    let v144: i64;  // rbx
    let v145: i64;  // rax
    let v146: i64;  // rcx
    let v147: i64;  // rax
    let v148: i64;  // rcx
    let v149: i64;  // rax
    let v150: i64;  // rcx
    let v151: i64;  // rax
    let v152: i64;  // rcx
    let v153: i64;  // rax
    let v154: i64;  // rcx
    let v155: i64;  // rax
    let v156: i64;  // rcx
    let v157: i64;  // rax
    let v158: i64;  // rcx
    let v159: i64;  // rax
    let v160: i64;  // rcx
    let v161: i64;  // rax
    let v162: i64;  // rcx
    let v163: i64;  // rax
    let v164: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v47 = clap_builder::builder::command::Command::new(g_4e9a40, g_4e9a48);
    v93 = &g_4190c2;
    v94 = &g_1;
    memcpy(&v1, &v47, 712);
    v97 = uucore::format_usage(&g_4190c8, 24);
    v144 = v97;
    if v144 != 0x8000000000000000 {
        v47 = *((&v97 as &char + 8) as &i128);
    }
    v36 = v144;
    v37 = v47;
    memcpy(&v47, &v1, 712);
    v1 = clap_builder::builder::command::Command::about(&v47, &g_4190e0, 112);
    memcpy(&v47, &v1, 700);
    v95 = 584115552392 | *((&v1 as &char + 700) as &i64);
    v96 = *((&v1 as &char + 708) as &i32);
    v105 = 0;
    v107 = 0;
    v109 = 0;
    v111 = 0;
    v113 = 0;
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v127 = 0;
    v129 = 0;
    v97 = 0;
    v99 = 0;
    v100 = 0;
    v101 = 0;
    v102 = &g_1;
    v103 = 0;
    v104 = &g_1;
    v106 = &g_1;
    v108 = &g_1;
    v110 = &g_1;
    v112 = &g_1;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v126 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v131 = 0;
    v132 = 0x8000000000000000;
    v133 = 0x8000000000000000;
    v134 = 9223372036854775809;
    v135 = &anon.42361cee55f06dd1cb7425420bf289bc.16.llvm.17685125084060184286;
    v136 = &g_1;
    v137 = 0;
    v138 = 0;
    v139 = 0x301000000040011000000110000;
    v1 = clap_builder::builder::command::Command::arg(&v47, &v97);
    v54 = 0;
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
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = &g_1;
    v52 = 0;
    v53 = &g_1;
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
    v80 = 0;
    v81 = 0x8000000000000000;
    v82 = 0x8000000000000000;
    v83 = 9223372036854775809;
    v84 = &anon.42361cee55f06dd1cb7425420bf289bc.17.llvm.17685125084060184286;
    v85 = &g_1;
    v86 = &anon.42361cee55f06dd1cb7425420bf289bc.17.llvm.17685125084060184286;
    v87 = &g_1;
    v88 = 0;
    v89 = 4785074604081217;
    v90 = 0;
    v91 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v145 = v98;
    v146 = v99;
    *((v145 + v146) as &i128) = 157083214728626992779194025192394682725;
    *((v145 + v146 + &g_1 as &u8) as &i16) = 21573;
    v99 = v146 + &g_11 as &u8;
    v0 = *((&v97 as &char + 8) as &i128);
    if v81 != 0x8000000000000000 {
        v97 = v0;
    }
    v81 = v97;
    memcpy(&v97, &v47, 588);
    v141 = v91;
    v142 = v92;
    v140 = &g_1;
    v47 = clap_builder::builder::command::Command::arg(&v1, &v97);
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
    v1 = 0;
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
    v36 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &anon.42361cee55f06dd1cb7425420bf289bc.18.llvm.17685125084060184286;
    v40 = &g_1;
    v41 = &anon.42361cee55f06dd1cb7425420bf289bc.18.llvm.17685125084060184286;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081250;
    v45 = 0;
    v46 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1b);
    v147 = v98;
    v148 = v99;
    *((v147 + v148 + 26) as &i128) = 146449391074700195790125004022182867813;
    *((v147 + v148 + &g_1 as &u8) as &i128) = 157425901012777305392748897887168263535;
    *((v147 + v148) as &i128) = 43165925451924736361493870546453886318;
    v99 = v148 + &g_1b as &u8;
    v0 = *((&v97 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v97 = v0;
    }
    v35 = v97;
    memcpy(&v97, &v1, 588);
    v141 = *((&v1 as &char + 589) as &i16);
    v142 = *((&v1 as &char + 591) as &i8);
    v140 = &g_1;
    v1 = clap_builder::builder::command::Command::arg(&v47, &v97);
    v54 = 0;
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
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = &g_1;
    v52 = 0;
    v53 = &g_1;
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
    v80 = 0;
    v81 = 0x8000000000000000;
    v82 = 0x8000000000000000;
    v83 = 9223372036854775809;
    v84 = &anon.42361cee55f06dd1cb7425420bf289bc.19.llvm.17685125084060184286;
    v85 = &g_1;
    v86 = 0;
    v88 = 0;
    v89 = 4785074604081253;
    v90 = 0;
    v91 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v149 = v98;
    v150 = v99;
    *((v149 + v150) as &i128) = 157083214728626992779194025192394682725;
    *((v149 + v150 + &g_1 as &u8) as &i8) = 69;
    v99 = v150 + &g_11 as &u8;
    v0 = *((&v97 as &char + 8) as &i128);
    if v81 != 0x8000000000000000 {
        v97 = v0;
    }
    v81 = v97;
    memcpy(&v97, &v47, 588);
    v141 = *((&v47 as &char + 589) as &i16);
    v142 = *((&v47 as &char + 591) as &i8);
    v140 = &g_1;
    v47 = clap_builder::builder::command::Command::arg(&v1, &v97);
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
    v1 = 0;
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
    v36 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &anon.42361cee55f06dd1cb7425420bf289bc.20.llvm.17685125084060184286;
    v40 = &g_1;
    v41 = &anon.42361cee55f06dd1cb7425420bf289bc.20.llvm.17685125084060184286;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081221;
    v45 = 0;
    v46 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1b);
    v151 = v98;
    v152 = v99;
    *((v151 + v152 + &g_1 as &u8) as &i128) = 134825318448394987078791721951282097765;
    *((v151 + v152) as &i128) = 133496003327619266330619576374013421924;
    v99 = v152 + &g_1b as &u8;
    v0 = *((&v97 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v97 = v0;
    }
    v35 = v97;
    memcpy(&v97, &v1, 588);
    v141 = *((&v1 as &char + 589) as &i16);
    v142 = *((&v1 as &char + 591) as &i8);
    v140 = &g_1;
    v1 = clap_builder::builder::command::Command::arg(&v47, &v97);
    v54 = 0;
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
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = &g_1;
    v52 = 0;
    v53 = &g_1;
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
    v80 = 0;
    v81 = 0x8000000000000000;
    v82 = 0x8000000000000000;
    v83 = 9223372036854775809;
    v84 = &anon.42361cee55f06dd1cb7425420bf289bc.21.llvm.17685125084060184286;
    v85 = &g_1;
    v86 = &anon.42361cee55f06dd1cb7425420bf289bc.21.llvm.17685125084060184286;
    v87 = &g_1;
    v88 = 0;
    v89 = 4785074604081262;
    v90 = 0;
    v91 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 23);
    v153 = v98;
    v154 = v99;
    *((v153 + v154) as &i128) = 156103574818592129318061718212522636654;
    *((v153 + v154 + &g_1 as &u8) as &i64) = 8315173686074176629;
    v99 = v154 + 23;
    v0 = *((&v97 as &char + 8) as &i128);
    if v81 != 0x8000000000000000 {
        v97 = v0;
    }
    v81 = v97;
    memcpy(&v97, &v47, 588);
    v141 = *((&v47 as &char + 589) as &i16);
    v142 = *((&v47 as &char + 591) as &i8);
    v140 = &g_1;
    v47 = clap_builder::builder::command::Command::arg(&v1, &v97);
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
    v1 = 0;
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
    v36 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &anon.42361cee55f06dd1cb7425420bf289bc.22.llvm.17685125084060184286;
    v40 = &g_1;
    v41 = &anon.42361cee55f06dd1cb7425420bf289bc.22.llvm.17685125084060184286;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081267;
    v45 = 0;
    v46 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1b);
    v155 = v98;
    v156 = v99;
    *((v155 + v156 + &g_1 as &u8) as &i128) = 143725139108256177582293876837911437412;
    *((v155 + v156) as &i128) = 134856309440427472877088957714769409395;
    *((v155 + v156 + &g_1b as &u8) as &i32) = 1936027241;
    v99 = v156 + &g_1b as &u8;
    v0 = *((&v97 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v97 = v0;
    }
    v35 = v97;
    memcpy(&v97, &v1, 588);
    v141 = *((&v1 as &char + 589) as &i16);
    v142 = *((&v1 as &char + 591) as &i8);
    v140 = &g_1;
    v1 = clap_builder::builder::command::Command::arg(&v47, &v97);
    v54 = 0;
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
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = &g_1;
    v52 = 0;
    v53 = &g_1;
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
    v80 = 0;
    v81 = 0x8000000000000000;
    v82 = 0x8000000000000000;
    v83 = 9223372036854775809;
    v84 = &anon.42361cee55f06dd1cb7425420bf289bc.23.llvm.17685125084060184286;
    v85 = &g_1;
    v86 = 0;
    v88 = 0;
    v89 = 4785074604081268;
    v90 = 0;
    v91 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v157 = v98;
    v158 = v99;
    *((v157 + v158) as &i128) = 157083214728626992779194025192394682725;
    *((v157 + v158 + &g_1 as &u8) as &i8) = 84;
    v99 = v158 + &g_11 as &u8;
    v0 = *((&v97 as &char + 8) as &i128);
    if v81 != 0x8000000000000000 {
        v97 = v0;
    }
    v81 = v97;
    memcpy(&v97, &v47, 588);
    v141 = *((&v47 as &char + 589) as &i16);
    v142 = *((&v47 as &char + 591) as &i8);
    v140 = &g_1;
    v47 = clap_builder::builder::command::Command::arg(&v1, &v97);
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
    v1 = 0;
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
    v36 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &anon.42361cee55f06dd1cb7425420bf289bc.24.llvm.17685125084060184286;
    v40 = &g_1;
    v41 = &anon.42361cee55f06dd1cb7425420bf289bc.24.llvm.17685125084060184286;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081236;
    v45 = 0;
    v46 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1b);
    v159 = v98;
    v160 = v99;
    *((v159 + v160 + &g_1 as &u8) as &i128) = 97522377854634577788459580795845175395;
    *((v159 + v160) as &i128) = 152037761538928774400960480333909944676;
    v99 = v160 + &g_1b as &u8;
    v0 = *((&v97 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v97 = v0;
    }
    v35 = v97;
    memcpy(&v97, &v1, 588);
    v141 = *((&v1 as &char + 589) as &i16);
    v142 = *((&v1 as &char + 591) as &i8);
    v140 = &g_1;
    v1 = clap_builder::builder::command::Command::arg(&v47, &v97);
    v54 = 0;
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
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = &g_1;
    v52 = 0;
    v53 = &g_1;
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
    v80 = 0;
    v81 = 0x8000000000000000;
    v82 = 0x8000000000000000;
    v83 = 9223372036854775809;
    v84 = &anon.42361cee55f06dd1cb7425420bf289bc.25.llvm.17685125084060184286;
    v85 = &g_1;
    v86 = &anon.42361cee55f06dd1cb7425420bf289bc.25.llvm.17685125084060184286;
    v87 = &g_1;
    v88 = 0;
    v89 = 4785074604081270;
    v90 = 0;
    v91 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_2f);
    v161 = v98;
    v162 = v99;
    *((v161 + v162 + &g_1b as &u8) as &i128) = 86836629656220794304278156877836853362;
    *((v161 + v162 + &g_1 as &u8) as &i128) = 148074580074055275161499112713593910369;
    *((v161 + v162) as &i128) = 154769026076725274962240329020336337781;
    *((v161 + v162 + 46) as &i64) = 2987113780263141716;
    v99 = v162 + &g_2f as &u8;
    v0 = *((&v97 as &char + 8) as &i128);
    if v81 != 0x8000000000000000 {
        v97 = v0;
    }
    v81 = v97;
    memcpy(&v97, &v47, 588);
    v141 = *((&v47 as &char + 589) as &i16);
    v142 = *((&v47 as &char + 591) as &i8);
    v140 = &g_1;
    v47 = clap_builder::builder::command::Command::arg(&v1, &v97);
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
    v1 = 0;
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
    v36 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &anon.42361cee55f06dd1cb7425420bf289bc.26.llvm.17685125084060184286;
    v40 = &g_1;
    v41 = 0;
    v43 = 0;
    v44 = 4785074604081269;
    v45 = 0;
    v46 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1);
    v163 = v98;
    v164 = v99;
    *((v163 + v164) as &i64) = 7234314199359777064;
    *((v163 + v164 + &g_1 as &u8) as &&i64) = &g_1b;
    v99 = v164 + &g_1 as &u8;
    v0 = *((&v97 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v97 = v0;
    }
    v35 = v97;
    memcpy(&v97, &v1, 588);
    v141 = *((&v1 as &char + 589) as &i16);
    v142 = *((&v1 as &char + 591) as &i8);
    v140 = &g_1;
    clap_builder::builder::command::Command::arg(a0, &v47, &v97);
    return a0;
}
