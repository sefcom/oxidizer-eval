fn uu_dircolors::uu_app(a0: u32) -> u64 {
    let v0: i128;  // [sp-0x878]
    let v1: i64;  // [bp-0x868], Other Possible Types: struct712
    let v2: i64;  // [sp-0x858]
    let v3: i128;  // [sp-0x850]
    let v4: i64;  // [sp-0x840]
    let v5: i64;  // [sp-0x830]
    let v6: i128;  // [sp-0x828]
    let v7: i64;  // [sp-0x818]
    let v8: i128;  // [sp-0x810]
    let v9: i64;  // [sp-0x800]
    let v10: i64;  // [sp-0x7f8]
    let v11: i128;  // [sp-0x7f0]
    let v12: i64;  // [sp-0x7e0]
    let v13: i128;  // [sp-0x7d8]
    let v14: i64;  // [sp-0x7c8]
    let v15: i128;  // [sp-0x7c0]
    let v16: i64;  // [sp-0x7b0]
    let v17: i128;  // [sp-0x7a8]
    let v18: i64;  // [sp-0x798]
    let v19: i128;  // [sp-0x790]
    let v20: i64;  // [sp-0x780]
    let v21: i128;  // [sp-0x778]
    let v22: i64;  // [sp-0x768]
    let v23: i128;  // [sp-0x760]
    let v24: i64;  // [sp-0x750]
    let v25: i128;  // [sp-0x748]
    let v26: struct16;  // [sp-0x740]
    let v27: i64;  // [sp-0x738]
    let v28: i64;  // [bp-0x730]
    let v29: i64;  // [sp-0x720]
    let v30: i128;  // [sp-0x718]
    let v31: i64;  // [sp-0x708]
    let v32: i128;  // [sp-0x700]
    let v33: i64;  // [sp-0x6f0]
    let v34: i128;  // [sp-0x6e8]
    let v35: i64;  // [sp-0x6d8]
    let v36: i128;  // [sp-0x6d0]
    let v37: i64;  // [sp-0x6c0]
    let v38: i64;  // [sp-0x6b8]
    let v39: i64;  // [sp-0x6b0]
    let v40: i128;  // [sp-0x6a8]
    let v41: i64;  // [sp-0x698]
    let v42: i128;  // [sp-0x690]
    let v43: i128;  // [sp-0x680]
    let v44: i64;  // [sp-0x670]
    let v45: i128;  // [sp-0x668]
    let v46: i64;  // [sp-0x658]
    let v47: i64;  // [sp-0x650]
    let v48: i64;  // [sp-0x648]
    let v49: i64;  // [sp-0x640]
    let v50: i64;  // [sp-0x638]
    let v51: i32;  // [sp-0x628]
    let v52: i64;  // [bp-0x624]
    let v53: i32;  // [sp-0x620]
    let v54: i16;  // [bp-0x61c]
    let v55: i16;  // [sp-0x61b]
    let v56: i8;  // [sp-0x619]
    let v57: i5696;  // [sp-0x598], Other Possible Types: struct712, Enum
    let v58: i64;  // [sp-0x588]
    let v59: i64;  // [sp-0x570]
    let v60: i64;  // [sp-0x560]
    let v61: i64;  // [sp-0x548]
    let v62: i64;  // [sp-0x530]
    let v63: i64;  // [sp-0x528]
    let v64: i128;  // [sp-0x520]
    let v65: i64;  // [sp-0x510]
    let v66: i128;  // [sp-0x508]
    let v67: i64;  // [sp-0x4f8]
    let v68: i128;  // [sp-0x4f0]
    let v69: i64;  // [sp-0x4e0]
    let v70: i128;  // [sp-0x4d8]
    let v71: i64;  // [sp-0x4c8]
    let v72: i128;  // [sp-0x4c0]
    let v73: i64;  // [sp-0x4b0]
    let v74: i128;  // [sp-0x4a8]
    let v75: i64;  // [sp-0x498]
    let v76: i128;  // [sp-0x490]
    let v77: i64;  // [sp-0x480]
    let v78: i128;  // [sp-0x478]
    let v79: struct16;  // [sp-0x470]
    let v80: i64;  // [sp-0x468]
    let v81: i64;  // [bp-0x460]
    let v82: i64;  // [sp-0x450]
    let v83: i128;  // [sp-0x448]
    let v84: i64;  // [sp-0x438]
    let v85: i128;  // [sp-0x430]
    let v86: i64;  // [sp-0x420]
    let v87: i128;  // [sp-0x418]
    let v88: i64;  // [sp-0x408]
    let v89: i128;  // [sp-0x400]
    let v90: i64;  // [sp-0x3f0]
    let v91: i64;  // [sp-0x3e8]
    let v92: i64;  // [sp-0x3e0]
    let v93: i128;  // [sp-0x3d8]
    let v94: i64;  // [sp-0x3c8]
    let v95: i64;  // [sp-0x3a0]
    let v96: i64;  // [sp-0x388]
    let v97: i64;  // [sp-0x380]
    let v98: i64;  // [sp-0x378]
    let v99: i64;  // [sp-0x370]
    let v100: i64;  // [sp-0x368]
    let v101: i32;  // [sp-0x358]
    let v102: i64;  // [bp-0x354]
    let v103: i32;  // [sp-0x350]
    let v104: i16;  // [sp-0x34c]
    let v105: i64;  // [sp-0x338]
    let v106: i64;  // [sp-0x330]
    let v107: i64;  // [sp-0x2dc]
    let v108: i32;  // [sp-0x2d4]
    let v109: i64;  // [sp-0x2c8], Other Possible Types: Enum, struct24
    let v110: i64;  // [sp-0x2c0]
    let v111: i64;  // [sp-0x2b8]
    let v112: i128;  // [bp-0x248], Other Possible Types: struct16
    let v113: i64;  // [sp-0x238]
    let v114: i8;  // [sp-0x7c]
    let v115: i16;  // [sp-0x7b]
    let v116: i8;  // [sp-0x79]
    let v117: i8;  // [bp-0x70]
    let v118: i8;  // [bp-0x60]
    let v119: i8;  // [bp-0x50]
    let v120: i8;  // [bp-0x40]
    let v122: i64;  // rbx
    let v123: i64;  // rbx
    let v125: i64;  // rax
    let v126: i64;  // rcx
    let v127: i64;  // r14
    let v128: i64;  // rax
    let v129: i64;  // rcx
    let v130: i64;  // rax
    let v131: i64;  // rcx
    let v132: i64;  // r14
    let v133: i64;  // r14
    let v135: i64;  // rax
    let v136: i64;  // rcx
    let v137: i64;  // rbx
    let v138: i64;  // rax
    let v139: i64;  // rcx
    let v140: i64;  // rax
    let v141: i64;  // rcx
    let v142: i64;  // rbx
    let v143: i64;  // rax
    let v144: i64;  // rcx
    let v145: i64;  // rax
    let v146: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v57 = clap_builder::builder::command::Command::new(g_4f96f8, g_4f9700);
    v105 = &g_422907;
    v106 = &g_1;
    memcpy(&v1, &v57, 712);
    v57 = clap_builder::builder::command::Command::about(&v1, &g_42290d, 58);
    v1 = clap_builder::builder::command::Command::after_help(&v57, &g_422947, 218);
    v109 = uucore::format_usage(&g_422a21, &g_11);
    v122 = v109;
    if v122 != 0x8000000000000000 {
        v57 = *((&v109 as &char + 8) as &i128);
    }
    v41 = v122;
    v42 = v57;
    memcpy(&v57, &v1, 700);
    v107 = 584115552392 | *((&v1 as &char + 700) as &i64);
    v108 = *((&v1 as &char + 708) as &i32);
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v1 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v44 = 9223372036854775809;
    v46 = &g_422a36;
    v47 = &g_1;
    v48 = &g_422a42;
    v49 = &g_1;
    v50 = 0;
    v52 = 0x110000;
    v54 = 3337;
    v51 = 98;
    v123 = v28;
    v125 = &g_1;
    if v123 == *((&v25 as &char + 8) as &i64) {
        v26 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v125 = v27;
    }
    v126 = v123 * &g_1;
    *((v125 + v126 * &g_1) as &&i64) = &g_422a36;
    *((v125 + v126 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    *((v125 + v126 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    v28 = v123 + &g_1 as &u8;
    memcpy(&v109, &v1, 592);
    v127 = v113;
    if v127 == v112 {
        v112 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v128 = *((&v112 as &char + 8) as &i64);
    v129 = v127 * &g_1;
    *((v128 + v129) as &&i64) = &g_422a44;
    *((v128 + v129 + &g_1 as &u8) as &&i64) = &g_1;
    v113 = v127 + &g_1 as &u8;
    memcpy(&v1, &v109, 592);
    v109 = 0;
    v110 = &g_1;
    v111 = 0;
    v109 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v130 = v110;
    v131 = v111;
    *((v130 + v131 + &g_11 as &u8) as &i128) = 110753300348777676849790219287816859508;
    *((v130 + v131 + &g_1 as &u8) as &i128) = 43139659945354265369317181675268762725;
    *((v130 + v131) as &i128) = 138837482773696209946444654276393596271;
    v111 = v131 + &g_1a as &u8;
    v132 = v109;
    v0 = *((&v109 as &char + 8) as &i128);
    if v132 != 0x8000000000000000 {
        v109 = v0;
    }
    v39 = v132;
    v40 = v109;
    memcpy(&v109, &v1, 588);
    v115 = v55;
    v116 = v56;
    v114 = &g_1;
    v1 = clap_builder::builder::command::Command::arg(&v57, &v109);
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = &g_1;
    v62 = 0;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v91 = 0;
    v92 = 0x8000000000000000;
    v94 = 0x8000000000000000;
    v95 = 9223372036854775809;
    v96 = &g_422a44;
    v97 = &g_1;
    v98 = &g_42288e;
    v99 = &g_1;
    v100 = 0;
    v102 = 0x110000;
    v104 = 3337;
    v101 = 99;
    v133 = v81;
    v135 = &g_1;
    if v133 == *((&v78 as &char + 8) as &i64) {
        v79 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v135 = v80;
    }
    v136 = v133 * &g_1;
    *((v135 + v136 * &g_1) as &&i64) = &g_422a44;
    *((v135 + v136 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    *((v135 + v136 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    v81 = v133 + &g_1 as &u8;
    memcpy(&v109, &v57, 592);
    v137 = v113;
    if v137 == v112 {
        v112 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v138 = *((&v112 as &char + 8) as &i64);
    v139 = v137 * &g_1;
    *((v138 + v139) as &&i64) = &g_422a36;
    *((v138 + v139 + &g_1 as &u8) as &&i64) = &g_1;
    v113 = v137 + &g_1 as &u8;
    memcpy(&v57, &v109, 592);
    v109 = 0;
    v110 = &g_1;
    v111 = 0;
    v109 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v140 = v110;
    v141 = v111;
    *((v140 + v141 + &g_1 as &u8) as &i128) = 105358828984940119041721407007575336047;
    *((v140 + v141) as &i128) = 131761924170442789767018229046994826607;
    *((v140 + v141 + &g_1a as &u8) as &i32) = 1397903180;
    v111 = v141 + &g_1a as &u8;
    v142 = v109;
    v0 = *((&v109 as &char + 8) as &i128);
    if v142 != 0x8000000000000000 {
        v109 = v0;
    }
    v92 = v142;
    v93 = v109;
    memcpy(&v109, &v57, 588);
    v115 = *((&v57 as &char + 589) as &i16);
    v116 = *((&v57 as &char + 591) as &i8);
    v114 = &g_1;
    v57 = clap_builder::builder::command::Command::arg(&v1, &v109);
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v1 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v7 = &g_1;
    v9 = 0;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v44 = 9223372036854775809;
    v46 = &g_422a98;
    v47 = &g_1;
    v48 = &g_422a98;
    v49 = &g_1;
    v50 = 0;
    v52 = 0x110000;
    v54 = 3337;
    v51 = 112;
    v109 = 0;
    v110 = &g_1;
    v111 = 0;
    v109 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v143 = v110;
    v144 = v111;
    *((v143 + v144) as &i128) = 131761782833582920280046121183582188144;
    *((v143 + v144 + &g_1 as &u8) as &i64) = 8319395862319145061;
    v111 = v144 + &g_11 as &u8;
    v0 = *((&v109 as &char + 8) as &i128);
    if v39 != 0x8000000000000000 {
        v109 = v0;
    }
    v39 = v109;
    memcpy(&v109, &v1, 588);
    v115 = v55;
    v116 = v56;
    v114 = &g_1;
    v1 = clap_builder::builder::command::Command::arg(&v57, &v109);
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = &g_1;
    v62 = 0;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v90 = &g_1;
    v91 = 0;
    v92 = 0x8000000000000000;
    v94 = 0x8000000000000000;
    v95 = 9223372036854775809;
    v96 = &g_422abb;
    v97 = &g_1;
    v98 = &g_422abb;
    v99 = &g_1;
    v100 = 0;
    v101 = 0x11000000110000;
    v103 = 0;
    v104 = 3337;
    v109 = 0;
    v110 = &g_1;
    v111 = 0;
    v109 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v145 = v110;
    v146 = v111;
    *((v145 + v146 + &g_1 as &u8) as &i128) = 43129477145771947261673731941762166881;
    *((v145 + v146) as &i128) = 132192736817688108228038877362538181999;
    *((v145 + v146 + &g_1a as &u8) as &i64) = 8746391181558637600;
    v111 = v146 + &g_1a as &u8;
    v0 = *((&v109 as &char + 8) as &i128);
    if v92 != 0x8000000000000000 {
        v109 = v0;
    }
    v92 = v109;
    memcpy(&v109, &v57, 588);
    v115 = *((&v57 as &char + 589) as &i16);
    v116 = *((&v57 as &char + 591) as &i8);
    v114 = &g_1;
    v57 = clap_builder::builder::command::Command::arg(&v1, &v109);
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v1 = 0;
    v2 = 0;
    v3 = v0;
    v4 = 0;
    v5 = 0;
    v6 = v120;
    v7 = &g_1;
    v8 = v119;
    v9 = 0;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v40 = v118;
    v41 = 0x8000000000000000;
    v42 = v109;
    v43 = v111;
    v44 = 9223372036854775809;
    v45 = v117;
    v46 = &g_413440;
    v47 = &g_1;
    v48 = 0;
    v50 = 0;
    v51 = 0x11000000110000;
    v53 = &g_1;
    v54 = &g_1;
    v56 = 0;
    v55 = &g_1;
    clap_builder::builder::command::Command::arg(a0, &v57, &v1);
    return a0;
}
