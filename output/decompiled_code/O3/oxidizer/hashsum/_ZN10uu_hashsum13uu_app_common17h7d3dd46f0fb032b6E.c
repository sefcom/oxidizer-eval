fn uu_hashsum::uu_app_common(a0: u32) -> u64 {
    let v0: i5696;  // [sp-0xa80], Other Possible Types: struct712, Enum, struct24
    let v1: i64;  // [sp-0xa70]
    let v2: i64;  // [sp-0xa58]
    let v3: i64;  // [sp-0xa50]
    let v4: i64;  // [sp-0xa48]
    let v5: i64;  // [sp-0xa30]
    let v6: i64;  // [sp-0xa18]
    let v7: i64;  // [sp-0xa10]
    let v8: i128;  // [sp-0xa08]
    let v9: i64;  // [sp-0x9f8]
    let v10: i128;  // [sp-0x9f0]
    let v11: i64;  // [sp-0x9e0]
    let v12: i128;  // [sp-0x9d8]
    let v13: i64;  // [sp-0x9c8]
    let v14: i128;  // [sp-0x9c0]
    let v15: i64;  // [sp-0x9b0]
    let v16: i128;  // [sp-0x9a8]
    let v17: i64;  // [sp-0x998]
    let v18: i128;  // [sp-0x990]
    let v19: i64;  // [sp-0x980]
    let v20: i128;  // [sp-0x978]
    let v21: i64;  // [sp-0x968]
    let v22: i128;  // [sp-0x960]
    let v23: i64;  // [sp-0x950]
    let v24: i128;  // [sp-0x948]
    let v25: i64;  // [sp-0x938]
    let v26: i128;  // [sp-0x930]
    let v27: i64;  // [sp-0x920]
    let v28: i128;  // [sp-0x918]
    let v29: i64;  // [sp-0x908]
    let v30: i128;  // [sp-0x900]
    let v31: i64;  // [sp-0x8f0]
    let v32: i128;  // [sp-0x8e8]
    let v33: i64;  // [sp-0x8d8]
    let v34: i64;  // [sp-0x8d0]
    let v35: i192;  // [sp-0x8c8]
    let v36: i64;  // [sp-0x8b0]
    let v37: i128;  // [sp-0x8a8]
    let v38: i64;  // [sp-0x888]
    let v39: i64;  // [sp-0x870]
    let v40: i64;  // [sp-0x868]
    let v41: i64;  // [sp-0x860]
    let v42: i64;  // [sp-0x858]
    let v43: i64;  // [sp-0x850]
    let v44: i64;  // [sp-0x840]
    let v45: i32;  // [sp-0x838]
    let v46: i16;  // [sp-0x834]
    let v47: i64;  // [sp-0x820]
    let v48: i64;  // [sp-0x818]
    let v49: i64;  // [bp-0x7b8], Other Possible Types: struct712
    let v50: i64;  // [sp-0x7a8]
    let v51: i64;  // [sp-0x790]
    let v52: i64;  // [sp-0x780]
    let v53: i64;  // [sp-0x768]
    let v54: i64;  // [sp-0x750]
    let v55: i64;  // [sp-0x748]
    let v56: i128;  // [sp-0x740]
    let v57: i64;  // [sp-0x730]
    let v58: i128;  // [sp-0x728]
    let v59: i64;  // [sp-0x718]
    let v60: i128;  // [sp-0x710]
    let v61: i64;  // [sp-0x700]
    let v62: i128;  // [sp-0x6f8]
    let v63: i64;  // [sp-0x6e8]
    let v64: i128;  // [sp-0x6e0]
    let v65: i64;  // [sp-0x6d0]
    let v66: i128;  // [sp-0x6c8]
    let v67: i64;  // [sp-0x6b8]
    let v68: i128;  // [sp-0x6b0]
    let v69: i64;  // [sp-0x6a0]
    let v70: i128;  // [sp-0x698]
    let v71: i64;  // [sp-0x688]
    let v72: i128;  // [sp-0x680]
    let v73: i64;  // [sp-0x670]
    let v74: i128;  // [sp-0x668]
    let v75: i64;  // [sp-0x658]
    let v76: i128;  // [sp-0x650]
    let v77: i64;  // [sp-0x640]
    let v78: i128;  // [sp-0x638]
    let v79: i64;  // [sp-0x628]
    let v80: i128;  // [sp-0x620]
    let v81: i64;  // [sp-0x610]
    let v82: i64;  // [sp-0x608]
    let v83: i192;  // [sp-0x600]
    let v84: i64;  // [sp-0x5e8]
    let v85: i64;  // [sp-0x5c0]
    let v86: i64;  // [sp-0x5a8]
    let v87: i64;  // [sp-0x5a0]
    let v88: i64;  // [sp-0x598]
    let v89: i64;  // [sp-0x590]
    let v90: i64;  // [sp-0x588]
    let v91: i64;  // [sp-0x578]
    let v92: i32;  // [sp-0x570]
    let v93: i16;  // [sp-0x56c]
    let v94: i8;  // [bp-0x569]
    let v95: i64;  // [sp-0x4fc]
    let v96: i32;  // [sp-0x4f4]
    let v97: i128;  // [sp-0x4e8], Other Possible Types: Enum, struct592, struct24
    let v98: i64;  // [sp-0x4e0]
    let v99: i64;  // [sp-0x4d8]
    let v100: i128;  // [bp-0x480], Other Possible Types: struct16
    let v101: i64;  // [sp-0x470]
    let v102: i8;  // [sp-0x29c]
    let v103: i8;  // [bp-0x29b]
    let v104: i8;  // [sp-0x299]
    let v105: i128;  // [bp-0x288], Other Possible Types: struct8, struct16
    let v106: i8;  // [sp-0x3c]
    let v107: i16;  // [sp-0x3b]
    let v108: i8;  // [sp-0x39]
    let v110: i64;  // rbx
    let v111: i64;  // rax
    let v112: i64;  // rcx
    let v113: i64;  // rax
    let v114: i64;  // rcx
    let v115: i64;  // r14
    let v116: i64;  // rax
    let v117: i64;  // rcx
    let v118: i64;  // rax
    let v119: i64;  // rcx
    let v120: i64;  // r14
    let v121: i64;  // rax
    let v122: i64;  // rcx
    let v123: i64;  // rax
    let v124: i64;  // rcx
    let v125: i64;  // r14
    let v126: i64;  // rax
    let v127: i64;  // rcx
    let v128: i64;  // rax
    let v129: i64;  // rcx
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
    v0 = clap_builder::builder::command::Command::new(g_700b10, g_700b18);
    v47 = &g_471861;
    v48 = &g_1;
    memcpy(&v49, &v0, 712);
    v0 = clap_builder::builder::command::Command::about(&v49, &g_471867, &g_1c);
    v97 = uucore::format_usage(&g_471889, &g_11);
    v110 = v97;
    if v110 != 0x8000000000000000 {
        v49 = *((&v97 as &char + 8) as &i128);
    }
    v36 = v110;
    v37 = v49;
    memcpy(&v49, &v0, 700);
    v95 = 584115552392 | *((&v0 as &char + 700) as &i64);
    v96 = *((&v0 as &char + 708) as &i32);
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
    v1 = 0;
    v2 = 0;
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
    v39 = &g_47189f;
    v40 = &g_1;
    v41 = &g_47189f;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081250;
    v45 = 0;
    v46 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v111 = v98;
    v112 = v99;
    *((v111 + v112) as &i128) = 145054468273755038560310350990809326962;
    *((v111 + v112 + &g_1 as &u8) as &i32) = 1701080941;
    v99 = v112 + &g_11 as &u8;
    v105 = *((&v97 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v97 = v105;
    }
    v35 = v97;
    memcpy(&v97, &v0, 588);
    v103 = *((&v0 as &char + 589) as &i16);
    v104 = *((&v0 as &char + 591) as &i8);
    v102 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v49, &v97);
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
    v80 = 0;
    v49 = 0;
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
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v82 = 0;
    v83 = 0x8000000000000000;
    v84 = 0x8000000000000000;
    v85 = 9223372036854775809;
    v86 = &g_4718b8;
    v87 = &g_1;
    v88 = &g_4718b8;
    v89 = &g_1;
    v90 = 0;
    v91 = 4785074604081251;
    v92 = 0;
    v93 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1c);
    v113 = v98;
    v114 = v99;
    *((v113 + v114 + &g_11 as &u8) as &i128) = 145412392094366823927290455543827734643;
    *((v113 + v114 + &g_1 as &u8) as &i128) = 133495922197637725260535244572476861807;
    *((v113 + v114) as &i128) = 152062263981272823313338983722004866418;
    v99 = v114 + &g_1c as &u8;
    v105 = *((&v97 as &char + 8) as &i128);
    if v83 != 0x8000000000000000 {
        v97 = v105;
    }
    v83 = v97;
    memcpy(&v97, &v49, 588);
    v103 = v93;
    v104 = v94;
    v102 = &g_1;
    v115 = v101;
    if v115 == v100 {
        v100 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v116 = *((&v100 as &char + 8) as &i64);
    v117 = v115 * &g_1;
    *((v116 + v117) as &&i64) = &g_4718e8;
    *((v116 + v117 + &g_1 as &u8) as &&i64) = &g_1;
    v101 = v115 + &g_1 as &u8;
    memcpy(&v105, &v97, 592);
    v49 = clap_builder::builder::command::Command::arg(&v0, &v105);
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
    v1 = 0;
    v2 = 0;
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
    v39 = &g_4718e8;
    v40 = &g_1;
    v41 = &g_4718e8;
    v42 = &g_1;
    v43 = 0;
    v44 = 0x11000000110000;
    v45 = 0;
    v46 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v118 = v98;
    v119 = v99;
    *((v118 + v119 + &g_1 as &u8) as &i128) = 145495691258283824382206426425685388612;
    *((v118 + v119) as &i128) = 161441229989082227494626001533020762723;
    v99 = v119 + &g_11 as &u8;
    v105 = *((&v97 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v97 = v105;
    }
    v35 = v97;
    memcpy(&v97, &v0, 588);
    v103 = *((&v0 as &char + 589) as &i16);
    v104 = *((&v0 as &char + 591) as &i8);
    v102 = &g_1;
    v120 = v101;
    if v120 == v100 {
        v100 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v121 = *((&v100 as &char + 8) as &i64);
    v122 = v120 * &g_1;
    *((v121 + v122) as &&i64) = &g_45f380;
    *((v121 + v122 + &g_1 as &u8) as &&i64) = &g_1;
    v101 = v120 + &g_1 as &u8;
    memcpy(&v105, &v97, 592);
    v0 = clap_builder::builder::command::Command::arg(&v49, &v105);
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
    v80 = 0;
    v49 = 0;
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
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v82 = 0;
    v83 = 0x8000000000000000;
    v84 = 0x8000000000000000;
    v85 = 9223372036854775809;
    v86 = &g_45f380;
    v87 = &g_1;
    v88 = &g_45f380;
    v89 = &g_1;
    v90 = 0;
    v91 = 4785074604081268;
    v92 = 0;
    v93 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v123 = v98;
    v124 = v99;
    *((v123 + v124 + &g_1 as &u8) as &i128) = 55102854062847634536150675283522691188;
    *((v123 + v124) as &i128) = 133501357883782762984486391066384229746;
    v99 = v124 + &g_11 as &u8;
    v105 = *((&v97 as &char + 8) as &i128);
    if v83 != 0x8000000000000000 {
        v97 = v105;
    }
    v83 = v97;
    memcpy(&v97, &v49, 592);
    v125 = v101;
    if v125 == v100 {
        v100 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v126 = *((&v100 as &char + 8) as &i64);
    v127 = v125 * &g_1;
    *((v126 + v127) as &&i64) = &g_47189f;
    *((v126 + v127 + &g_1 as &u8) as &&i64) = &g_1;
    v101 = v125 + &g_1 as &u8;
    memcpy(&v105, &v97, 588);
    v107 = v103;
    v108 = v104;
    v106 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v0, &v105);
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
    v1 = 0;
    v2 = 0;
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
    v39 = &g_471921;
    v40 = &g_1;
    v41 = &g_471921;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081265;
    v45 = 0;
    v46 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v128 = v98;
    v129 = v99;
    *((v128 + v129 + &g_1c as &u8) as &i128) = 140099210828295694182445070644134308981;
    *((v128 + v129 + &g_1 as &u8) as &i128) = 136180710218701012365310478102181212783;
    *((v128 + v129) as &i128) = 135748936519323923137291471149849276260;
    *((v128 + v129 + &g_2e as &u8) as &i16) = 25964;
    v99 = v129 + &g_31 as &u8;
    v105 = *((&v97 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v97 = v105;
    }
    v35 = v97;
    memcpy(&v97, &v0, 588);
    v103 = *((&v0 as &char + 589) as &i16);
    v104 = *((&v0 as &char + 591) as &i8);
    v102 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v49, &v97);
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
    v80 = 0;
    v49 = 0;
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
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v82 = 0;
    v83 = 0x8000000000000000;
    v84 = 0x8000000000000000;
    v85 = 9223372036854775809;
    v86 = &g_471958;
    v87 = &g_1;
    v88 = &g_471958;
    v89 = &g_1;
    v90 = 0;
    v91 = 4785074604081267;
    v92 = 0;
    v93 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_2e);
    v130 = v98;
    v131 = v99;
    *((v130 + v131 + &g_1c as &u8) as &i128) = 153460390051735892256070714559419147620;
    *((v130 + v131 + &g_1 as &u8) as &i128) = 148059003105817057583238992664627603572;
    *((v130 + v131) as &i128) = 161409710109488642842490286211106500452;
    v99 = v131 + &g_2e as &u8;
    v105 = *((&v97 as &char + 8) as &i128);
    if v83 != 0x8000000000000000 {
        v97 = v105;
    }
    v83 = v97;
    memcpy(&v97, &v49, 588);
    v103 = *((&v49 as &char + 589) as &i16);
    v104 = *((&v49 as &char + 591) as &i8);
    v102 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v0, &v97);
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
    v1 = 0;
    v2 = 0;
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
    v39 = &g_47198e;
    v40 = &g_1;
    v41 = &g_47198e;
    v42 = &g_1;
    v43 = 0;
    v44 = 0x11000000110000;
    v45 = 0;
    v46 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 53);
    v132 = v98;
    v133 = v99;
    *((v132 + v133 + &g_1c as &u8) as &i128) = 43103638409094979121914818652536070509;
    *((v132 + v133 + &g_1 as &u8) as &i128) = 152110407849437338702546087510186467442;
    *((v132 + v133) as &i128) = 148074579678533539841414242459292629093;
    *((v132 + v133 + 45) as &i64) = 8315173686074174837;
    v99 = v133 + 53;
    v105 = *((&v97 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v97 = v105;
    }
    v35 = v97;
    memcpy(&v97, &v0, 588);
    v103 = *((&v0 as &char + 589) as &i16);
    v104 = *((&v0 as &char + 591) as &i8);
    v102 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v49, &v97);
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
    v80 = 0;
    v49 = 0;
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
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v82 = 0;
    v83 = 0x8000000000000000;
    v84 = 0x8000000000000000;
    v85 = 9223372036854775809;
    v86 = &g_4719c9;
    v87 = &g_1;
    v88 = &g_4719c9;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x11000000110000;
    v92 = 0;
    v93 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 45);
    v134 = v98;
    v135 = v99;
    *((v134 + v135 + &g_1c as &u8) as &i128) = 153387840348778246421073618404714246767;
    *((v134 + v135 + &g_1 as &u8) as &i128) = 43129477145771961520215692352167243632;
    *((v134 + v135) as &i128) = 134844607519659350668428622821678018404;
    v99 = v135 + 45;
    v105 = *((&v97 as &char + 8) as &i128);
    if v83 != 0x8000000000000000 {
        v97 = v105;
    }
    v83 = v97;
    memcpy(&v97, &v49, 588);
    v103 = *((&v49 as &char + 589) as &i16);
    v104 = *((&v49 as &char + 591) as &i8);
    v102 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v0, &v97);
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
    v1 = 0;
    v2 = 0;
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
    v39 = &g_45e254;
    v40 = &g_1;
    v41 = &g_45e254;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081271;
    v45 = 0;
    v46 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_2e);
    v136 = v98;
    v137 = v99;
    *((v136 + v137 + &g_1c as &u8) as &i128) = 153387880915454392247386948976523812964;
    *((v136 + v137 + &g_1 as &u8) as &i128) = 43056583300825654961832098373326497136;
    *((v136 + v137) as &i128) = 148138509672279116902151394191486378359;
    v99 = v137 + &g_2e as &u8;
    v105 = *((&v97 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v97 = v105;
    }
    v35 = v97;
    memcpy(&v97, &v0, 588);
    v103 = *((&v0 as &char + 589) as &i16);
    v104 = *((&v0 as &char + 591) as &i8);
    v102 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v49, &v97);
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
    v80 = 0;
    v49 = 0;
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
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v82 = 0;
    v83 = 0x8000000000000000;
    v84 = 0x8000000000000000;
    v85 = 9223372036854775809;
    v86 = &g_45ffe4;
    v87 = &g_1;
    v88 = &g_45ffe4;
    v89 = &g_1;
    v90 = 0;
    v91 = 4785074604081274;
    v92 = 0;
    v93 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1c);
    v138 = v98;
    v139 = v99;
    *((v138 + v139 + &g_11 as &u8) as &i128) = 134825318475316606903885954708509840718;
    *((v138 + v139 + &g_1 as &u8) as &i128) = 146382131509577447352441537475422087532;
    *((v138 + v139) as &i128) = 43139984252227407021545087172924960357;
    v99 = v139 + &g_1c as &u8;
    v105 = *((&v97 as &char + 8) as &i128);
    if v83 != 0x8000000000000000 {
        v97 = v105;
    }
    v83 = v97;
    memcpy(&v97, &v49, 588);
    v103 = *((&v49 as &char + 589) as &i16);
    v104 = *((&v49 as &char + 591) as &i8);
    v102 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v0, &v97);
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
    v30 = 0;
    v32 = 0;
    v0 = struct24 {
        field_344: 0
        field_352: <UNKNOWN>
        field_360: 0
    };
    v2 = &g_1;
    v3 = &g_1;
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
    v28 = 0;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &g_460dc8;
    v40 = &g_1;
    v41 = 0;
    v43 = 0;
    v44 = 0x11000000110000;
    v45 = 0;
    v46 = 3329;
    v105 = struct16 {
        field_0: &g_460dc8
        field_8: &g_1
    };
    v97 = clap_builder::builder::arg::Arg::value_names(&v0, &v105);
    *(&v103 as &&i64) = &g_1;
    memcpy(&v0, &v97, 592);
    v105 = struct8 {
        field_0: &g_1
    };
    v97 = clap_builder::builder::arg::Arg::value_parser(&v0, &v105);
    clap_builder::builder::command::Command::arg(a0, &v49, &v97);
    return a0;
}
