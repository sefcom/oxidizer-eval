fn uu_echo::uu_app(a0: u32) -> u64 {
    let v0: i8;  // [bp-0xa70], Other Possible Types: struct712
    let v1: i64;  // [sp-0xa60]
    let v2: i64;  // [sp-0xa48]
    let v3: i64;  // [sp-0xa38]
    let v4: i64;  // [sp-0xa20]
    let v5: i64;  // [sp-0xa08]
    let v6: i64;  // [sp-0xa00]
    let v7: i128;  // [sp-0x9f8]
    let v8: i64;  // [sp-0x9e8]
    let v9: i128;  // [sp-0x9e0]
    let v10: i64;  // [sp-0x9d0]
    let v11: i128;  // [sp-0x9c8]
    let v12: i64;  // [sp-0x9b8]
    let v13: i128;  // [sp-0x9b0]
    let v14: i64;  // [sp-0x9a0]
    let v15: i128;  // [sp-0x998]
    let v16: i64;  // [sp-0x988]
    let v17: i128;  // [sp-0x980]
    let v18: i64;  // [sp-0x970]
    let v19: i128;  // [sp-0x968]
    let v20: i64;  // [sp-0x958]
    let v21: i128;  // [sp-0x950]
    let v22: i64;  // [sp-0x940]
    let v23: i128;  // [sp-0x938]
    let v24: i64;  // [sp-0x928]
    let v25: i128;  // [sp-0x920]
    let v26: i64;  // [sp-0x910]
    let v27: i128;  // [sp-0x908]
    let v28: i64;  // [sp-0x8f8]
    let v29: i128;  // [sp-0x8f0]
    let v30: i64;  // [sp-0x8e0]
    let v31: i128;  // [sp-0x8d8]
    let v32: i64;  // [sp-0x8c8]
    let v33: i64;  // [sp-0x8c0]
    let v34: i64;  // [sp-0x8b8]
    let v35: i64;  // [sp-0x8a0]
    let v36: i128;  // [sp-0x898]
    let v37: i64;  // [sp-0x878]
    let v38: i64;  // [sp-0x860]
    let v39: i64;  // [sp-0x858]
    let v40: i64;  // [sp-0x850]
    let v41: i64;  // [sp-0x840]
    let v42: i64;  // [sp-0x830]
    let v43: i32;  // [sp-0x828]
    let v44: i16;  // [sp-0x824]
    let v45: i64;  // [sp-0x810]
    let v46: i64;  // [sp-0x808]
    let v47: i128;  // [sp-0x800]
    let v48: i128;  // [sp-0x7f0]
    let v49: i128;  // [sp-0x7e0]
    let v50: i128;  // [bp-0x7d0]
    let v51: i128;  // [sp-0x7c4]
    let v52: i32;  // [sp-0x7b4]
    let v53: i64;  // [sp-0x7b0]
    let v54: i3336;  // [sp-0x7a8], Other Possible Types: struct712, Enum
    let v55: i64;  // [sp-0x798]
    let v56: i64;  // [sp-0x780]
    let v57: i64;  // [sp-0x770]
    let v58: i64;  // [sp-0x758]
    let v59: i64;  // [sp-0x740]
    let v60: i64;  // [sp-0x738]
    let v61: i128;  // [sp-0x730]
    let v62: i64;  // [sp-0x720]
    let v63: i128;  // [sp-0x718]
    let v64: i64;  // [sp-0x708]
    let v65: i128;  // [sp-0x700]
    let v66: i64;  // [sp-0x6f0]
    let v67: i128;  // [sp-0x6e8]
    let v68: i64;  // [sp-0x6d8]
    let v69: i128;  // [sp-0x6d0]
    let v70: i64;  // [sp-0x6c0]
    let v71: i128;  // [sp-0x6b8]
    let v72: i64;  // [sp-0x6a8]
    let v73: i128;  // [sp-0x6a0]
    let v74: i64;  // [sp-0x690]
    let v75: i128;  // [sp-0x688]
    let v76: i64;  // [sp-0x678]
    let v77: i128;  // [sp-0x670]
    let v78: i64;  // [sp-0x660]
    let v79: i128;  // [sp-0x658]
    let v80: i64;  // [sp-0x648]
    let v81: i128;  // [sp-0x640]
    let v82: i64;  // [sp-0x630]
    let v83: i128;  // [sp-0x628]
    let v84: i64;  // [sp-0x618]
    let v85: i128;  // [sp-0x610]
    let v86: i64;  // [sp-0x600]
    let v87: i64;  // [sp-0x5f8]
    let v88: i192;  // [sp-0x5f0]
    let v89: i64;  // [sp-0x5d8]
    let v90: i64;  // [sp-0x5b0]
    let v91: i64;  // [sp-0x598]
    let v92: i64;  // [sp-0x590]
    let v93: i64;  // [sp-0x588]
    let v94: i64;  // [sp-0x578]
    let v95: i64;  // [sp-0x568]
    let v96: i32;  // [sp-0x560]
    let v97: i16;  // [sp-0x55c]
    let v98: i8;  // [bp-0x538]
    let v99: i8;  // [bp-0x528]
    let v100: i8;  // [bp-0x518]
    let v101: i8;  // [bp-0x508]
    let v102: i128;  // [bp-0x4fc]
    let v103: i8;  // [bp-0x4ec]
    let v104: i8;  // [bp-0x4e8]
    let v105: i64;  // [sp-0x4d8], Other Possible Types: Enum, struct24
    let v106: i64;  // [sp-0x4d0]
    let v107: i64;  // [sp-0x4c8]
    let v108: i128;  // [bp-0x458], Other Possible Types: struct16
    let v109: i64;  // [sp-0x448]
    let v110: i8;  // [sp-0x28c]
    let v111: i16;  // [sp-0x28b]
    let v112: i8;  // [sp-0x289]
    let v113: i128;  // [sp-0x288]
    let v115: i64;  // rbx
    let v116: i64;  // rax
    let v117: i64;  // rcx
    let v118: i64;  // rax
    let v119: i64;  // rcx
    let v120: i64;  // r14
    let v121: i64;  // rax
    let v122: i64;  // rcx
    let v123: i64;  // rax
    let v124: i64;  // rcx
    let v125: i64;  // rbx
    let v126: i64;  // rax
    let v127: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v54 = clap_builder::builder::command::Command::new(g_4dbff0, g_4dbff8);
    memcpy(&v0, &v54, 608);
    v47 = v98;
    v48 = v99;
    v49 = v100;
    v50 = v101;
    v51 = v102;
    v45 = &g_417db1;
    v46 = &g_1;
    v52 = v103 | &g_21;
    v53 = v104;
    v54 = clap_builder::builder::command::Command::about(&v0, &g_417db7, &g_11);
    v0 = clap_builder::builder::command::Command::after_help(&v54, &g_417dcd, 437);
    v105 = uucore::format_usage(&g_417f82, &g_11);
    v115 = v105;
    if v115 != 0x8000000000000000 {
        v54 = *((&v105 as &char + 8) as &i128);
    }
    v35 = v115;
    v36 = v54;
    memcpy(&v54, &v0, 712);
    v7 = 0;
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
    v29 = 0;
    v31 = 0;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = &g_1;
    v5 = 0;
    v6 = &g_1;
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
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v33 = 0;
    v34 = 0x8000000000000000;
    v35 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_417f9d;
    v39 = &g_1;
    v40 = 0;
    v41 = 0;
    v42 = 4785074604081262;
    v43 = 0;
    v44 = 3337;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v105 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v116 = v106;
    v117 = v107;
    *((v116 + v117 + &g_1 as &u8) as &i128) = 140132129261007701675321353517378314341;
    *((v116 + v117) as &i128) = 138842676261141155096705008177116114788;
    *((v116 + v117 + &g_11 as &u8) as &i16) = 25966;
    v107 = v117 + &g_21 as &u8;
    v113 = *((&v105 as &char + 8) as &i128);
    if v34 != 0x8000000000000000 {
        v105 = v113;
    }
    v34 = v105;
    memcpy(&v105, &v0, 588);
    v111 = *((&v0 as &char + 589) as &i16);
    v112 = *((&v0 as &char + 591) as &i8);
    v110 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v54, &v105);
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
    v85 = 0;
    v54 = 0;
    v55 = 0;
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
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v87 = 0;
    v88 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v90 = 9223372036854775809;
    v91 = &g_417fc9;
    v92 = &g_11;
    v93 = 0;
    v94 = 0;
    v95 = 4785074604081253;
    v96 = 0;
    v97 = 3337;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v105 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 42);
    v118 = v106;
    v119 = v107;
    *((v118 + v119 + &g_11 as &u8) as &i128) = 153387920843763235843553511599801852769;
    *((v118 + v119 + &g_1 as &u8) as &i128) = 129498224637133155190341521284457395297;
    *((v118 + v119) as &i128) = 154717190597415219194000782042924674661;
    v107 = v119 + 42;
    v113 = *((&v105 as &char + 8) as &i128);
    if v88 != 0x8000000000000000 {
        v105 = v113;
    }
    v88 = v105;
    memcpy(&v105, &v54, 588);
    v111 = *((&v54 as &char + 589) as &i16);
    v112 = *((&v54 as &char + 591) as &i8);
    v110 = &g_1;
    v120 = v109;
    if v120 == v108 {
        v108 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v121 = *((&v108 as &char + 8) as &i64);
    v122 = v120 * &g_1;
    *((v121 + v122) as &&i64) = &g_41800a;
    *((v121 + v122 + &g_1 as &u8) as &&i64) = &g_11;
    v109 = v120 + &g_1 as &u8;
    memcpy(&v113, &v105, 592);
    v54 = clap_builder::builder::command::Command::arg(&v0, &v113);
    v7 = 0;
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
    v29 = 0;
    v31 = 0;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = &g_1;
    v5 = 0;
    v6 = &g_1;
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
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v33 = 0;
    v34 = 0x8000000000000000;
    v35 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_41800a;
    v39 = &g_11;
    v40 = 0;
    v41 = 0;
    v42 = 4785074604081221;
    v43 = 0;
    v44 = 3337;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v105 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_2e);
    v123 = v106;
    v124 = v107;
    *((v123 + v124 + &g_11 as &u8) as &i128) = 136107708972903328179892208911199531873;
    *((v123 + v124 + &g_1 as &u8) as &i128) = 144155915775056772780092527939576684916;
    *((v123 + v124) as &i128) = 134846230109434351912745740903604513124;
    *((v123 + v124 + 45) as &i64) = 2987131704254555492;
    v107 = v124 + &g_2e as &u8;
    v113 = *((&v105 as &char + 8) as &i128);
    if v34 != 0x8000000000000000 {
        v105 = v113;
    }
    v34 = v105;
    memcpy(&v105, &v0, 588);
    v111 = *((&v0 as &char + 589) as &i16);
    v112 = *((&v0 as &char + 591) as &i8);
    v110 = &g_1;
    v125 = v109;
    if v125 == v108 {
        v108 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v126 = *((&v108 as &char + 8) as &i64);
    v127 = v125 * &g_1;
    *((v126 + v127) as &&i64) = &g_417fc9;
    *((v126 + v127 + &g_1 as &u8) as &&i64) = &g_11;
    v109 = v125 + &g_1 as &u8;
    memcpy(&v113, &v105, 592);
    v0 = clap_builder::builder::command::Command::arg(&v54, &v113);
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
    v85 = 0;
    v54 = 0;
    v55 = 0;
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
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v87 = 0;
    v88 = 0x8000000000000000;
    v89 = 0x8000000000000000;
    v90 = 9223372036854775809;
    v91 = &g_418057;
    v92 = &g_1;
    v93 = 0;
    v94 = 0;
    v95 = 0x11000000110000;
    v96 = 0;
    v97 = 3329;
    clap_builder::builder::command::Command::arg(a0, &v0, &v54);
    return a0;
}
