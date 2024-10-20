fn uu_uname::uu_app(a0: u32) -> u64 {
    let v0: i64;  // [sp-0xa70], Other Possible Types: struct712, Enum
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
    let v34: i192;  // [sp-0x8b8]
    let v35: i64;  // [sp-0x8a0]
    let v36: i128;  // [sp-0x898]
    let v37: i64;  // [sp-0x878]
    let v38: i64;  // [sp-0x860]
    let v39: i64;  // [sp-0x858]
    let v40: i64;  // [sp-0x850]
    let v41: i64;  // [sp-0x848]
    let v42: i64;  // [sp-0x840]
    let v43: i64;  // [sp-0x830]
    let v44: i32;  // [sp-0x828]
    let v45: i16;  // [sp-0x824]
    let v46: i64;  // [sp-0x810]
    let v47: i64;  // [sp-0x808]
    let v48: i5696;  // [bp-0x7a8], Other Possible Types: struct712, Enum
    let v49: i64;  // [sp-0x7a0]
    let v50: i64;  // [sp-0x798]
    let v51: i64;  // [sp-0x780]
    let v52: i64;  // [sp-0x770]
    let v53: i64;  // [sp-0x758]
    let v54: i64;  // [sp-0x740]
    let v55: i64;  // [sp-0x738]
    let v56: i128;  // [sp-0x730]
    let v57: i64;  // [sp-0x720]
    let v58: i128;  // [sp-0x718]
    let v59: i64;  // [sp-0x708]
    let v60: i128;  // [sp-0x700]
    let v61: i64;  // [sp-0x6f0]
    let v62: i128;  // [sp-0x6e8]
    let v63: i64;  // [sp-0x6d8]
    let v64: i128;  // [sp-0x6d0]
    let v65: i64;  // [sp-0x6c0]
    let v66: i128;  // [sp-0x6b8]
    let v67: i64;  // [sp-0x6a8]
    let v68: i128;  // [sp-0x6a0]
    let v69: i64;  // [sp-0x690]
    let v70: i128;  // [sp-0x688]
    let v71: struct16;  // [sp-0x680]
    let v72: i64;  // [sp-0x678]
    let v73: i128;  // [bp-0x670]
    let v74: i64;  // [sp-0x660]
    let v75: i128;  // [sp-0x658]
    let v76: i64;  // [sp-0x648]
    let v77: i128;  // [sp-0x640]
    let v78: i64;  // [sp-0x630]
    let v79: i128;  // [sp-0x628]
    let v80: i64;  // [sp-0x618]
    let v81: i128;  // [sp-0x610]
    let v82: i64;  // [sp-0x600]
    let v83: i64;  // [sp-0x5f8]
    let v84: i192;  // [sp-0x5f0]
    let v85: i64;  // [sp-0x5d8]
    let v86: i64;  // [sp-0x5b0]
    let v87: i64;  // [sp-0x598]
    let v88: i64;  // [sp-0x590]
    let v89: i64;  // [sp-0x588]
    let v90: i64;  // [sp-0x580]
    let v91: i64;  // [sp-0x578]
    let v92: i64;  // [sp-0x568]
    let v93: i32;  // [sp-0x560]
    let v94: i16;  // [sp-0x55c]
    let v95: i64;  // [sp-0x4ec]
    let v96: i32;  // [sp-0x4e4]
    let v97: i128;  // [sp-0x4d8], Other Possible Types: Enum, struct24
    let v98: i64;  // [sp-0x4d0]
    let v99: i64;  // [sp-0x4c8]
    let v100: i64;  // [sp-0x320]
    let v101: i128;  // [sp-0x318]
    let v102: i32;  // [sp-0x290]
    let v103: i8;  // [sp-0x28c]
    let v104: i16;  // [sp-0x28b]
    let v105: i8;  // [sp-0x289]
    let v106: i128;  // [sp-0x288]
    let v107: i8;  // [sp-0x3c]
    let v108: i16;  // [sp-0x3b]
    let v109: i8;  // [sp-0x39]
    let v111: i64;  // rbx
    let v112: i64;  // rax
    let v113: i64;  // rcx
    let v114: i64;  // rbx
    let v116: i64;  // rax
    let v117: i64;  // rcx
    let v118: i64;  // rax
    let v119: i64;  // rcx
    let v120: i64;  // r14
    let v121: i64;  // rax
    let v122: i64;  // rcx
    let v123: i64;  // r14
    let v125: i64;  // rax
    let v126: i64;  // rcx
    let v127: i64;  // rax
    let v128: i64;  // rcx
    let v129: i64;  // r14
    let v130: i64;  // rax
    let v131: i64;  // rcx
    let v132: i64;  // rax
    let v133: i64;  // rcx
    let v134: i64;  // rax
    let v135: i64;  // rcx
    let v136: i64;  // rax
    let v137: i64;  // rcx
    let v138: i64;  // rax
    let v139: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v0 = clap_builder::builder::command::Command::new(g_4de518, g_4de520);
    v46 = &g_418328;
    v47 = &g_1;
    memcpy(&v48, &v0, 712);
    v0 = clap_builder::builder::command::Command::about(&v48, &g_41832e, 62);
    v97 = uucore::format_usage(&g_41836c, &g_1);
    v111 = v97;
    if v111 != 0x8000000000000000 {
        v48 = *((&v97 as &char + 8) as &i128);
    }
    v35 = v111;
    v36 = v48;
    memcpy(&v48, &v0, 700);
    v95 = 549755814016 | *((&v0 as &char + 700) as &i64);
    v96 = *((&v0 as &char + 708) as &i32);
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
    v38 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.0.llvm.1701710318722987878;
    v39 = &g_1;
    v40 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.0.llvm.1701710318722987878;
    v41 = &g_1;
    v42 = 0;
    v43 = 4785074604081249;
    v44 = 0;
    v45 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_2c);
    v112 = v98;
    v113 = v99;
    *((v112 + v113 + &g_21 as &u8) as &i128) = 61665774365981523331238984787777910560;
    *((v112 + v113 + &g_11 as &u8) as &i128) = 134846007377709051978232443114622250607;
    *((v112 + v113 + &g_1 as &u8) as &i128) = 140173526427233969820573560260283621664;
    *((v112 + v113) as &i128) = 138776900006636834017112559919781406018;
    v99 = v113 + &g_2c as &u8;
    v106 = *((&v97 as &char + 8) as &i128);
    if v34 != 0x8000000000000000 {
        v97 = v106;
    }
    v34 = v97;
    memcpy(&v97, &v0, 588);
    v104 = *((&v0 as &char + 589) as &i16);
    v105 = *((&v0 as &char + 591) as &i8);
    v103 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v48, &v97);
    v56 = 0;
    v58 = 0;
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v48 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v55 = &g_1;
    v57 = &g_1;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v83 = 0;
    v84 = 0x8000000000000000;
    v85 = 0x8000000000000000;
    v86 = 9223372036854775809;
    v87 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.1.llvm.1701710318722987878;
    v88 = &g_1;
    v89 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.1.llvm.1701710318722987878;
    v90 = &g_1;
    v91 = 0;
    v92 = 4785074604081267;
    v93 = 0;
    v94 = 3337;
    v114 = v73;
    if v114 == *((&v70 as &char + 8) as &i64) {
        v71 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v116 = v72;
    }
    v117 = v114 * &g_1;
    *((v116 + v117 * &g_1) as &&i64) = &g_4183b5;
    *((v116 + v117 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    *((v116 + v117 * &g_1 + &g_1 as &u8) as &i8) = 0;
    v73 = v114 + &g_1 as &u8;
    memcpy(&v97, &v48, 592);
    v48 = 0;
    v49 = &g_1;
    v50 = 0;
    v48 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v118 = v49;
    v119 = v50;
    *((v118 + v119) as &i128) = 144083285655937354215003759599071883888;
    *((v118 + v119 + &g_1 as &u8) as &i64) = 3343198563619335269;
    v50 = v119 + &g_11 as &u8;
    v120 = v48;
    v106 = *((&v48 as &char + 8) as &i128);
    if v120 != 0x8000000000000000 {
        v48 = v106;
    }
    v100 = v120;
    v101 = v48;
    memcpy(&v106, &v97, 588);
    v108 = v104;
    v109 = v105;
    v107 = &g_1;
    v48 = clap_builder::builder::command::Command::arg(&v0, &v106);
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
    v38 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.2.llvm.1701710318722987878;
    v39 = &g_1;
    v40 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.2.llvm.1701710318722987878;
    v41 = &g_1;
    v42 = 0;
    v43 = 4785074604081262;
    v44 = 0;
    v45 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_61);
    v121 = v98;
    v122 = v99;
    *((v121 + v122 + &g_41 as &u8) as &i128) = 146383574262496479906946046590507118435;
    *((v121 + v122 + 64) as &i128) = 43039606527768062131650302401726586995;
    *((v121 + v122 + &g_2c as &u8) as &i128) = 139737311877620354250373117270966952296;
    *((v121 + v122 + &g_11 as &u8) as &i128) = 154358658199916219314704298971196648736;
    *((v121 + v122 + &g_1 as &u8) as &i128) = 134819964072065634943975743688712152429;
    *((v121 + v122) as &i128) = 129508324726247861872656409142846124656;
    *((v121 + v122 + &g_51 as &u8) as &i64) = 3326307939030365285;
    v99 = v122 + &g_61 as &u8;
    v106 = *((&v97 as &char + 8) as &i128);
    if v34 != 0x8000000000000000 {
        v97 = v106;
    }
    v34 = v97;
    memcpy(&v97, &v0, 588);
    v104 = *((&v0 as &char + 589) as &i16);
    v105 = *((&v0 as &char + 591) as &i8);
    v103 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v48, &v97);
    v56 = 0;
    v58 = 0;
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v48 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v55 = &g_1;
    v57 = &g_1;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v83 = 0;
    v84 = 0x8000000000000000;
    v85 = 0x8000000000000000;
    v86 = 9223372036854775809;
    v87 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.4.llvm.1701710318722987878;
    v88 = &g_1;
    v89 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.4.llvm.1701710318722987878;
    v90 = &g_1;
    v91 = 0;
    v92 = 4785074604081266;
    v93 = 0;
    v94 = 3337;
    v123 = v73;
    if v123 == *((&v70 as &char + 8) as &i64) {
        v71 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v125 = v72;
    }
    v126 = v123 * &g_1;
    *((v125 + v126 * &g_1) as &&i64) = &g_41843a;
    *((v125 + v126 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    *((v125 + v126 * &g_1 + &g_1 as &u8) as &i8) = 0;
    v73 = v123 + &g_1 as &u8;
    memcpy(&v97, &v48, 592);
    v48 = 0;
    v49 = &g_1;
    v50 = 0;
    v48 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v127 = v49;
    v128 = v50;
    *((v127 + v128 + &g_1 as &u8) as &i128) = 129461736111450958938574722497824386665;
    *((v127 + v128) as &i128) = 154696420537864014620278655441602966128;
    *((v127 + v128 + &g_11 as &u8) as &i32) = 778400609;
    v50 = v128 + &g_21 as &u8;
    v129 = v48;
    v106 = *((&v48 as &char + 8) as &i128);
    if v129 != 0x8000000000000000 {
        v48 = v106;
    }
    v100 = v129;
    v101 = v48;
    memcpy(&v106, &v97, 588);
    v108 = v104;
    v109 = v105;
    v107 = &g_1;
    v48 = clap_builder::builder::command::Command::arg(&v0, &v106);
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
    v38 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.3.llvm.1701710318722987878;
    v39 = &g_1;
    v40 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.3.llvm.1701710318722987878;
    v41 = &g_1;
    v42 = 0;
    v43 = 4785074604081270;
    v44 = 0;
    v45 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v130 = v98;
    v131 = v99;
    *((v130 + v131 + &g_1 as &u8) as &i128) = 140168373929445335457912529887083064937;
    *((v130 + v131) as &i128) = 154696420537864014620278655441602966128;
    *((v130 + v131 + &g_11 as &u8) as &i32) = 778989417;
    v99 = v131 + &g_21 as &u8;
    v106 = *((&v97 as &char + 8) as &i128);
    if v34 != 0x8000000000000000 {
        v97 = v106;
    }
    v34 = v97;
    memcpy(&v97, &v0, 588);
    v104 = *((&v0 as &char + 589) as &i16);
    v105 = *((&v0 as &char + 591) as &i8);
    v103 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v48, &v97);
    v56 = 0;
    v58 = 0;
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v48 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v55 = &g_1;
    v57 = &g_1;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v83 = 0;
    v84 = 0x8000000000000000;
    v85 = 0x8000000000000000;
    v86 = 9223372036854775809;
    v87 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.5.llvm.1701710318722987878;
    v88 = &g_1;
    v89 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.5.llvm.1701710318722987878;
    v90 = &g_1;
    v91 = 0;
    v92 = 4785074604081261;
    v93 = 0;
    v94 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v132 = v98;
    v133 = v99;
    *((v132 + v133 + &g_1 as &u8) as &i128) = 61671128290679225435316074243003261029;
    *((v132 + v133) as &i128) = 146762387950825743459691737101732770416;
    v99 = v133 + &g_11 as &u8;
    v106 = *((&v97 as &char + 8) as &i128);
    if v84 != 0x8000000000000000 {
        v97 = v106;
    }
    v84 = v97;
    memcpy(&v97, &v48, 588);
    v104 = *((&v48 as &char + 589) as &i16);
    v105 = *((&v48 as &char + 591) as &i8);
    v103 = &g_1;
    v48 = clap_builder::builder::command::Command::arg(&v0, &v97);
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
    v38 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.8.llvm.1701710318722987878;
    v39 = &g_1;
    v40 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.8.llvm.1701710318722987878;
    v41 = &g_1;
    v42 = 0;
    v43 = 4785074604081263;
    v44 = 0;
    v45 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v134 = v98;
    v135 = v99;
    *((v134 + v135 + &g_1 as &u8) as &i128) = 61671128290679262975808255721703173737;
    *((v134 + v135) as &i128) = 154696420537864014620278655441602966128;
    v99 = v135 + &g_11 as &u8;
    v106 = *((&v97 as &char + 8) as &i128);
    if v34 != 0x8000000000000000 {
        v97 = v106;
    }
    v34 = v97;
    memcpy(&v97, &v0, 588);
    v104 = *((&v0 as &char + 589) as &i16);
    v105 = *((&v0 as &char + 591) as &i8);
    v103 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v48, &v97);
    v56 = 0;
    v58 = 0;
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v48 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v55 = &g_1;
    v57 = &g_1;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v83 = 0;
    v84 = 0x8000000000000000;
    v85 = 0x8000000000000000;
    v86 = 9223372036854775809;
    v87 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.6.llvm.1701710318722987878;
    v88 = &g_1;
    v89 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.6.llvm.1701710318722987878;
    v90 = &g_1;
    v91 = 0;
    v92 = 4785074604081264;
    v93 = 0;
    v94 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v136 = v98;
    v137 = v99;
    *((v136 + v137 + &g_1 as &u8) as &i128) = 148126766238297610903555724913205735283;
    *((v136 + v137) as &i128) = 153387658286270987370938291859933983344;
    *((v136 + v137 + &g_11 as &u8) as &i64) = 2982909498000437871;
    v99 = v137 + &g_21 as &u8;
    v106 = *((&v97 as &char + 8) as &i128);
    if v84 != 0x8000000000000000 {
        v97 = v106;
    }
    v84 = v97;
    memcpy(&v97, &v48, 584);
    v102 = &g_1;
    *(&v103 as &unsigned long) = -0x100 & *((&v48 as &char + 588) as &i32) | &g_1;
    v48 = clap_builder::builder::command::Command::arg(&v0, &v97);
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
    v38 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.7.llvm.1701710318722987878;
    v39 = &g_11;
    v40 = &anon.c2f135aab18a70c12863f4c9d1e7a6ab.7.llvm.1701710318722987878;
    v41 = &g_11;
    v42 = 0;
    v43 = 4785074604081257;
    v44 = 0;
    v45 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v138 = v98;
    v139 = v99;
    *((v138 + v139 + &g_11 as &u8) as &i128) = 55024968104651510911045186374144106605;
    *((v138 + v139 + &g_1 as &u8) as &i128) = 146793658731856847773877108570863986034;
    *((v138 + v139) as &i128) = 129555036220419303176926967234977952368;
    v99 = v139 + &g_21 as &u8;
    v106 = *((&v97 as &char + 8) as &i128);
    if v34 != 0x8000000000000000 {
        v97 = v106;
    }
    v34 = v97;
    memcpy(&v97, &v0, 584);
    v102 = &g_1;
    *(&v103 as &unsigned long) = -0x100 & *((&v0 as &char + 588) as &i32) | &g_1;
    clap_builder::builder::command::Command::arg(a0, &v48, &v97);
    return a0;
}
