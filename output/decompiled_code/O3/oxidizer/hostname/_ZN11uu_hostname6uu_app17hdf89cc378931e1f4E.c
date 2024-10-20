fn uu_hostname::uu_app(a0: u32) -> u64 {
    let v0: i64;  // [sp-0xa78], Other Possible Types: struct712, Enum
    let v1: i64;  // [sp-0xa70]
    let v2: i64;  // [sp-0xa68]
    let v3: i64;  // [sp-0xa50]
    let v4: i64;  // [sp-0xa40]
    let v5: i64;  // [sp-0xa28]
    let v6: i64;  // [sp-0xa10]
    let v7: i64;  // [sp-0xa08]
    let v8: i128;  // [sp-0xa00]
    let v9: struct16;  // [sp-0x9f8]
    let v10: i64;  // [sp-0x9f0]
    let v11: i64;  // [bp-0x9e8]
    let v12: i64;  // [sp-0x9d8]
    let v13: i128;  // [sp-0x9d0]
    let v14: i64;  // [sp-0x9c0]
    let v15: i128;  // [sp-0x9b8]
    let v16: i64;  // [sp-0x9a8]
    let v17: i128;  // [sp-0x9a0]
    let v18: i64;  // [sp-0x990]
    let v19: i128;  // [sp-0x988]
    let v20: i64;  // [sp-0x978]
    let v21: i128;  // [sp-0x970]
    let v22: i64;  // [sp-0x960]
    let v23: i128;  // [sp-0x958]
    let v24: i64;  // [sp-0x948]
    let v25: i128;  // [sp-0x940]
    let v26: i64;  // [sp-0x930]
    let v27: i128;  // [sp-0x928]
    let v28: i64;  // [sp-0x918]
    let v29: i128;  // [sp-0x910]
    let v30: i64;  // [sp-0x900]
    let v31: i128;  // [sp-0x8f8]
    let v32: i64;  // [sp-0x8e8]
    let v33: i128;  // [sp-0x8e0]
    let v34: i64;  // [sp-0x8d0]
    let v35: i64;  // [sp-0x8c8]
    let v36: i64;  // [sp-0x8c0]
    let v37: i64;  // [sp-0x8a8]
    let v38: i128;  // [sp-0x8a0]
    let v39: i64;  // [sp-0x880]
    let v40: i64;  // [sp-0x868]
    let v41: i64;  // [sp-0x860]
    let v42: i64;  // [sp-0x858]
    let v43: i64;  // [sp-0x850]
    let v44: i64;  // [sp-0x848]
    let v45: i64;  // [sp-0x838]
    let v46: i32;  // [sp-0x830]
    let v47: i16;  // [sp-0x82c]
    let v48: i64;  // [sp-0x818]
    let v49: i64;  // [sp-0x810]
    let v50: i64;  // [bp-0x7a8], Other Possible Types: struct712, Enum
    let v51: i64;  // [sp-0x7a0]
    let v52: i64;  // [sp-0x798]
    let v53: i64;  // [sp-0x780]
    let v54: i64;  // [sp-0x770]
    let v55: i64;  // [sp-0x758]
    let v56: i64;  // [sp-0x740]
    let v57: i64;  // [sp-0x738]
    let v58: i128;  // [sp-0x730]
    let v59: struct16;  // [sp-0x728]
    let v60: i64;  // [sp-0x720]
    let v61: i64;  // [bp-0x718]
    let v62: i64;  // [sp-0x708]
    let v63: i128;  // [sp-0x700]
    let v64: i64;  // [sp-0x6f0]
    let v65: i128;  // [sp-0x6e8]
    let v66: i64;  // [sp-0x6d8]
    let v67: i128;  // [sp-0x6d0]
    let v68: i64;  // [sp-0x6c0]
    let v69: i128;  // [sp-0x6b8]
    let v70: i64;  // [sp-0x6a8]
    let v71: i128;  // [sp-0x6a0]
    let v72: i64;  // [sp-0x690]
    let v73: i128;  // [sp-0x688]
    let v74: i64;  // [sp-0x678]
    let v75: i128;  // [sp-0x670]
    let v76: i64;  // [sp-0x660]
    let v77: i128;  // [sp-0x658]
    let v78: i64;  // [sp-0x648]
    let v79: i128;  // [sp-0x640]
    let v80: i64;  // [sp-0x630]
    let v81: i128;  // [sp-0x628]
    let v82: i64;  // [sp-0x618]
    let v83: i128;  // [sp-0x610]
    let v84: i64;  // [sp-0x600]
    let v85: i64;  // [sp-0x5f8]
    let v86: i64;  // [sp-0x5f0]
    let v87: i64;  // [sp-0x5d8]
    let v88: i64;  // [sp-0x5b0]
    let v89: i64;  // [sp-0x598]
    let v90: i64;  // [sp-0x590]
    let v91: i64;  // [sp-0x588]
    let v92: i64;  // [sp-0x580]
    let v93: i64;  // [sp-0x578]
    let v94: i64;  // [sp-0x568]
    let v95: i32;  // [sp-0x560]
    let v96: i16;  // [sp-0x55c]
    let v97: i64;  // [sp-0x4ec]
    let v98: i32;  // [sp-0x4e4]
    let v99: i192;  // [sp-0x4d8], Other Possible Types: struct592, struct24
    let v100: i64;  // [sp-0x320]
    let v101: i128;  // [sp-0x318]
    let v102: i8;  // [bp-0x28b]
    let v103: i8;  // [bp-0x289]
    let v104: i128;  // [bp-0x288]
    let v105: i8;  // [sp-0x3c]
    let v106: i16;  // [sp-0x3b]
    let v107: i8;  // [sp-0x39]
    let v109: i64;  // rbx
    let v110: i64;  // rsi
    let v111: i64;  // rax
    let v112: i64;  // rcx
    let v113: i64;  // rax
    let v114: i64;  // rcx
    let v115: i64;  // r14
    let v116: i64;  // rsi
    let v117: i64;  // rax
    let v118: i64;  // rcx
    let v119: i64;  // rax
    let v120: i64;  // rcx
    let v121: i64;  // r14
    let v122: i64;  // rsi
    let v123: i64;  // rax
    let v124: i64;  // rcx
    let v125: i64;  // rax
    let v126: i64;  // rcx
    let v127: i64;  // r14
    let v128: i64;  // rsi
    let v129: i64;  // rax
    let v130: i64;  // rcx
    let v131: i64;  // rax
    let v132: i64;  // rcx
    let v133: i64;  // rbx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v0 = clap_builder::builder::command::Command::new(g_4e6888, g_4e6890);
    v48 = &g_419480;
    v49 = &g_1;
    memcpy(&v50, &v0, 712);
    v0 = clap_builder::builder::command::Command::about(&v50, &g_419486, &g_1f);
    v99 = uucore::format_usage(&g_4194ac, &g_11);
    v109 = v99;
    if v109 != 0x8000000000000000 {
        v50 = *((&v99 as &char + 8) as &i128);
    }
    v37 = v109;
    v38 = v50;
    memcpy(&v50, &v0, 700);
    v97 = 549755814016 | *((&v0 as &char + 700) as &i64);
    v98 = *((&v0 as &char + 708) as &i32);
    v8 = 0;
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
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v39 = 9223372036854775809;
    v40 = &g_41946b;
    v41 = &g_1;
    v42 = &g_41946b;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081252;
    v46 = 0;
    v47 = 3337;
    v110 = v11;
    if *((&v8 as &char + 8) as &i64) - v110 < 4 {
        v9 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v110, &g_1);
        v110 = v11;
    }
    v111 = v10;
    v112 = v110 * &g_1;
    *((v111 + v112) as &&i64) = &g_41946b;
    *((v111 + v112 + &g_1 as &u8) as &&i64) = &g_1;
    *((v111 + v112 + &g_1 as &u8) as &&i64) = &g_419471;
    *((v111 + v112 + &g_11 as &u8) as &&i64) = &g_1;
    *((v111 + v112 + &g_1f as &u8) as &&i64) = &g_410dc0;
    *((v111 + v112 + &g_1f as &u8) as &&i64) = &g_1;
    *((v111 + v112 + 48) as &&i64) = &g_41947b;
    *((v111 + v112 + &g_31 as &u8) as &&i64) = &g_1;
    v11 = v110 + &g_1 as &u8;
    memcpy(&v99, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1f);
    v113 = v1;
    v114 = v2;
    *((v113 + v114 + &g_11 as &u8) as &i128) = 134814791665826815258382769933991371117;
    *((v113 + v114 + &g_1 as &u8) as &i128) = 129503335229003623403639630541466529568;
    *((v113 + v114) as &i128) = 134819964050712345246243254700424259908;
    v2 = v114 + &g_1f as &u8;
    v115 = v0;
    v104 = *((&v0 as &char + 8) as &i128);
    if v115 != 0x8000000000000000 {
        v0 = v104;
    }
    v100 = v115;
    v101 = v0;
    memcpy(&v104, &v99, 588);
    v106 = v102;
    v107 = v103;
    v105 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v50, &v104);
    v58 = 0;
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
    v81 = 0;
    v83 = 0;
    v50 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = &g_1;
    v56 = 0;
    v57 = &g_1;
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
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_419471;
    v90 = &g_1;
    v91 = &g_419471;
    v92 = &g_1;
    v93 = 0;
    v94 = 4785074604081257;
    v95 = 0;
    v96 = 3337;
    v116 = v61;
    if *((&v58 as &char + 8) as &i64) - v116 < 4 {
        v59 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v116, &g_1);
        v116 = v61;
    }
    v117 = v60;
    v118 = v116 * &g_1;
    *((v117 + v118) as &&i64) = &g_41946b;
    *((v117 + v118 + &g_1 as &u8) as &&i64) = &g_1;
    *((v117 + v118 + &g_1 as &u8) as &&i64) = &g_419471;
    *((v117 + v118 + &g_11 as &u8) as &&i64) = &g_1;
    *((v117 + v118 + &g_1f as &u8) as &&i64) = &g_410dc0;
    *((v117 + v118 + &g_1f as &u8) as &&i64) = &g_1;
    *((v117 + v118 + 48) as &&i64) = &g_41947b;
    *((v117 + v118 + &g_31 as &u8) as &&i64) = &g_1;
    v61 = v116 + &g_1 as &u8;
    memcpy(&v99, &v50, 592);
    v50 = 0;
    v51 = &g_1;
    v52 = 0;
    v50 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1f);
    v119 = v51;
    v120 = v52;
    *((v119 + v120 + &g_11 as &u8) as &i128) = 154789821247002768343366120323855639848;
    *((v119 + v120 + &g_1 as &u8) as &i128) = 42750520527985041554107417304566035055;
    *((v119 + v120) as &i128) = 158782495182488989358593191048780147012;
    v52 = v120 + &g_1f as &u8;
    v121 = v50;
    v104 = *((&v50 as &char + 8) as &i128);
    if v121 != 0x8000000000000000 {
        v50 = v104;
    }
    v100 = v121;
    v101 = v50;
    memcpy(&v104, &v99, 588);
    v106 = v102;
    v107 = v103;
    v105 = &g_1;
    v50 = clap_builder::builder::command::Command::arg(&v0, &v104);
    v8 = 0;
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
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v39 = 9223372036854775809;
    v40 = &g_410dc0;
    v41 = &g_1;
    v42 = &g_410dc0;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081254;
    v46 = 0;
    v47 = 3337;
    v122 = v11;
    if *((&v8 as &char + 8) as &i64) - v122 < 4 {
        v9 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v122, &g_1);
        v122 = v11;
    }
    v123 = v10;
    v124 = v122 * &g_1;
    *((v123 + v124) as &&i64) = &g_41946b;
    *((v123 + v124 + &g_1 as &u8) as &&i64) = &g_1;
    *((v123 + v124 + &g_1 as &u8) as &&i64) = &g_419471;
    *((v123 + v124 + &g_11 as &u8) as &&i64) = &g_1;
    *((v123 + v124 + &g_1f as &u8) as &&i64) = &g_410dc0;
    *((v123 + v124 + &g_1f as &u8) as &&i64) = &g_1;
    *((v123 + v124 + 48) as &&i64) = &g_41947b;
    *((v123 + v124 + &g_31 as &u8) as &&i64) = &g_1;
    v11 = v122 + &g_1 as &u8;
    memcpy(&v99, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v125 = v1;
    v126 = v2;
    *((v125 + v126 + &g_1f as &u8) as &i128) = 53336112945559413877317440130343247972;
    *((v125 + v126 + &g_1 as &u8) as &i128) = 134799295902701497411031578010290890784;
    *((v125 + v126) as &i128) = 104034508288779193239385655066699721028;
    *((v125 + v126 + 48) as &i64) = 2987131704254555492;
    v2 = v126 + &g_31 as &u8;
    v127 = v0;
    v104 = *((&v0 as &char + 8) as &i128);
    if v127 != 0x8000000000000000 {
        v0 = v104;
    }
    v100 = v127;
    v101 = v0;
    memcpy(&v104, &v99, 588);
    v106 = v102;
    v107 = v103;
    v105 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v50, &v104);
    v58 = 0;
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
    v81 = 0;
    v83 = 0;
    v50 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = &g_1;
    v56 = 0;
    v57 = &g_1;
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
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_41947b;
    v90 = &g_1;
    v91 = &g_41947b;
    v92 = &g_1;
    v93 = 0;
    v94 = 4785074604081267;
    v95 = 0;
    v96 = 3337;
    v128 = v61;
    if *((&v58 as &char + 8) as &i64) - v128 < 4 {
        v59 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v128, &g_1);
        v128 = v61;
    }
    v129 = v60;
    v130 = v128 * &g_1;
    *((v129 + v130) as &&i64) = &g_41946b;
    *((v129 + v130 + &g_1 as &u8) as &&i64) = &g_1;
    *((v129 + v130 + &g_1 as &u8) as &&i64) = &g_419471;
    *((v129 + v130 + &g_11 as &u8) as &&i64) = &g_1;
    *((v129 + v130 + &g_1f as &u8) as &&i64) = &g_410dc0;
    *((v129 + v130 + &g_1f as &u8) as &&i64) = &g_1;
    *((v129 + v130 + 48) as &&i64) = &g_41947b;
    *((v129 + v130 + &g_31 as &u8) as &&i64) = &g_1;
    v61 = v128 + &g_1 as &u8;
    memcpy(&v99, &v50, 592);
    v50 = 0;
    v51 = &g_1;
    v52 = 0;
    v50 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_3a);
    v131 = v51;
    v132 = v52;
    *((v131 + v132 + 57) as &i128) = 134814791665826815258382769932834467684;
    *((v131 + v132 + 48) as &i128) = 136127099061704480616063955371932280168;
    *((v131 + v132 + &g_1f as &u8) as &i128) = 154358658600380476478704510828786380656;
    *((v131 + v132 + &g_1 as &u8) as &i128) = 43061836421313521947602679082800128116;
    *((v131 + v132) as &i128) = 152110454962641359382264463075205933380;
    v52 = v132 + &g_3a as &u8;
    v133 = v50;
    v104 = *((&v50 as &char + 8) as &i128);
    if v133 != 0x8000000000000000 {
        v50 = v104;
    }
    v100 = v133;
    v101 = v50;
    memcpy(&v104, &v99, 588);
    v106 = v102;
    v107 = v103;
    v105 = &g_1;
    v50 = clap_builder::builder::command::Command::arg(&v0, &v104);
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
    v10 = &g_1;
    v11 = 0;
    v12 = &g_1;
    v13 = 0;
    v14 = &g_1;
    v15 = 0;
    v16 = &g_1;
    v17 = 0;
    v18 = &g_1;
    v19 = 0;
    v20 = &g_1;
    v21 = 0;
    v22 = &g_1;
    v23 = 0;
    v24 = &g_1;
    v25 = 0;
    v26 = &g_1;
    v27 = 0;
    v28 = &g_1;
    v29 = 0;
    v30 = &g_1;
    v31 = 0;
    v32 = &g_1;
    v33 = 0;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v39 = 9223372036854775809;
    v40 = &g_410de4;
    v41 = &g_1;
    v42 = 0;
    v44 = 0;
    v45 = 0x11000000110000;
    v46 = 0;
    v47 = 3337;
    v104 = &g_1;
    v99 = clap_builder::builder::arg::Arg::value_parser(&v0, &v104);
    v102 = &g_1;
    memcpy(&v0, &v99, 592);
    clap_builder::builder::command::Command::arg(a0, &v50, &v0);
    return a0;
}
