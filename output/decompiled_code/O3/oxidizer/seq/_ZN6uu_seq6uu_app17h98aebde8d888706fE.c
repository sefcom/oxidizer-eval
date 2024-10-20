fn uu_seq::uu_app(a0: u32) -> u64 {
    let v0: i128;  // [sp-0x838]
    let v1: i64;  // [sp-0x820], Other Possible Types: struct712, Enum
    let v2: i64;  // [sp-0x810]
    let v3: i64;  // [sp-0x808]
    let v4: i64;  // [sp-0x800]
    let v5: i64;  // [sp-0x7f8]
    let v6: i64;  // [sp-0x7e8]
    let v7: i64;  // [sp-0x7d0]
    let v8: i64;  // [sp-0x7b8]
    let v9: i64;  // [sp-0x7b0]
    let v10: i128;  // [sp-0x7a8]
    let v11: i64;  // [sp-0x798]
    let v12: i128;  // [sp-0x790]
    let v13: i64;  // [sp-0x780]
    let v14: i128;  // [sp-0x778]
    let v15: i64;  // [sp-0x768]
    let v16: i128;  // [sp-0x760]
    let v17: i64;  // [sp-0x750]
    let v18: i128;  // [sp-0x748]
    let v19: i64;  // [sp-0x738]
    let v20: i128;  // [sp-0x730]
    let v21: i64;  // [sp-0x720]
    let v22: i128;  // [sp-0x718]
    let v23: i64;  // [sp-0x708]
    let v24: i128;  // [sp-0x700]
    let v25: i64;  // [sp-0x6f0]
    let v26: i128;  // [sp-0x6e8]
    let v27: i64;  // [sp-0x6d8]
    let v28: i128;  // [sp-0x6d0]
    let v29: i64;  // [sp-0x6c0]
    let v30: i128;  // [sp-0x6b8]
    let v31: i64;  // [sp-0x6a8]
    let v32: i128;  // [sp-0x6a0]
    let v33: i64;  // [sp-0x690]
    let v34: i128;  // [sp-0x688]
    let v35: i64;  // [sp-0x678]
    let v36: i64;  // [sp-0x670]
    let v37: i192;  // [sp-0x668]
    let v38: i64;  // [sp-0x650]
    let v39: i128;  // [sp-0x648]
    let v40: i64;  // [sp-0x628]
    let v41: i64;  // [sp-0x610]
    let v42: i64;  // [sp-0x608]
    let v43: i64;  // [sp-0x600]
    let v44: i64;  // [sp-0x5f8]
    let v45: i64;  // [sp-0x5f0]
    let v46: i64;  // [sp-0x5e0]
    let v47: i32;  // [sp-0x5d8]
    let v48: i16;  // [sp-0x5d4]
    let v49: i8;  // [bp-0x5b0]
    let v50: i8;  // [bp-0x5a0]
    let v51: i8;  // [bp-0x590]
    let v52: i8;  // [bp-0x580]
    let v53: i128;  // [bp-0x574]
    let v54: i8;  // [bp-0x564]
    let v55: i8;  // [bp-0x560]
    let v56: i8;  // [bp-0x558], Other Possible Types: struct712
    let v57: i64;  // [sp-0x548]
    let v58: i64;  // [sp-0x530]
    let v59: i64;  // [sp-0x520]
    let v60: i64;  // [sp-0x508]
    let v61: i64;  // [sp-0x4f0]
    let v62: i64;  // [sp-0x4e8]
    let v63: i128;  // [sp-0x4e0]
    let v64: i64;  // [sp-0x4d0]
    let v65: i128;  // [sp-0x4c8]
    let v66: i64;  // [sp-0x4b8]
    let v67: i128;  // [sp-0x4b0]
    let v68: i64;  // [sp-0x4a0]
    let v69: i128;  // [sp-0x498]
    let v70: i64;  // [sp-0x488]
    let v71: i128;  // [sp-0x480]
    let v72: i64;  // [sp-0x470]
    let v73: i128;  // [sp-0x468]
    let v74: i64;  // [sp-0x458]
    let v75: i128;  // [sp-0x450]
    let v76: i64;  // [sp-0x440]
    let v77: i128;  // [sp-0x438]
    let v78: i64;  // [sp-0x428]
    let v79: i128;  // [sp-0x420]
    let v80: i64;  // [sp-0x410]
    let v81: i128;  // [sp-0x408]
    let v82: i64;  // [sp-0x3f8]
    let v83: i128;  // [sp-0x3f0]
    let v84: i64;  // [sp-0x3e0]
    let v85: i128;  // [sp-0x3d8]
    let v86: i64;  // [sp-0x3c8]
    let v87: i128;  // [sp-0x3c0]
    let v88: i64;  // [sp-0x3b0]
    let v89: i64;  // [sp-0x3a8]
    let v90: i192;  // [sp-0x3a0]
    let v91: i64;  // [sp-0x388]
    let v92: i64;  // [sp-0x360]
    let v93: i64;  // [sp-0x348]
    let v94: i64;  // [sp-0x340]
    let v95: i64;  // [sp-0x338]
    let v96: i64;  // [sp-0x330]
    let v97: i64;  // [sp-0x328]
    let v98: i64;  // [sp-0x318]
    let v99: i32;  // [sp-0x310]
    let v100: i16;  // [sp-0x30c]
    let v101: i64;  // [sp-0x2f8]
    let v102: i64;  // [sp-0x2f0]
    let v103: i128;  // [sp-0x2e8]
    let v104: i128;  // [sp-0x2d8]
    let v105: i128;  // [sp-0x2c8]
    let v106: i128;  // [bp-0x2b8]
    let v107: i128;  // [sp-0x2ac]
    let v108: i32;  // [sp-0x29c]
    let v109: i64;  // [sp-0x298]
    let v110: i192;  // [sp-0x288], Other Possible Types: Enum, struct24
    let v111: i64;  // [sp-0x280]
    let v112: i64;  // [sp-0x278]
    let v113: i8;  // [sp-0x3c]
    let v114: i16;  // [sp-0x3b]
    let v115: i8;  // [sp-0x39]
    let v117: i64;  // rbx
    let v118: i64;  // rax
    let v119: i64;  // rcx
    let v120: i64;  // rcx
    let v121: i64;  // rdx
    let v122: i64;  // rax
    let v123: i64;  // rcx
    let v124: i64;  // rax
    let v125: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v1 = clap_builder::builder::command::Command::new(g_50cc08, g_50cc10);
    memcpy(&v56, &v1, 608);
    v103 = v49;
    v104 = v50;
    v105 = v51;
    v106 = v52;
    v107 = v53;
    v101 = &g_41f177;
    v102 = &g_1;
    v108 = 164 | v54;
    v109 = 128 | v55;
    v1 = clap_builder::builder::command::Command::about(&v56, &g_41f17d, 58);
    v110 = uucore::format_usage(&g_41f1b7, 81);
    v117 = v110;
    if v117 != 0x8000000000000000 {
        v56 = *((&v110 as &char + 8) as &i128);
    }
    v38 = v117;
    v39 = v56;
    memcpy(&v56, &v1, 712);
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
    v34 = 0;
    v1 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_41f208;
    v42 = &g_1;
    v43 = &g_41f208;
    v44 = &g_1;
    v45 = 0;
    v46 = 4785074604081267;
    v47 = 0;
    v48 = 3337;
    v110 = 0;
    v111 = &g_1;
    v112 = 0;
    v110 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v118 = v111;
    v119 = v112;
    *((v118 + v119 + &g_1 as &u8) as &i128) = 148147272152093087332470003344184862068;
    *((v118 + v119) as &i128) = 132099544290117407775762596518704473427;
    *((v118 + v119 + &g_11 as &u8) as &i32) = 695098400;
    v112 = v119 + &g_21 as &u8;
    v0 = *((&v110 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v110 = v0;
    }
    v37 = v110;
    memcpy(&v110, &v1, 592);
    v1 = clap_builder::builder::command::Command::arg(&v56, &v110);
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
    v87 = 0;
    v56 = 0;
    v57 = 0;
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
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &g_41f235;
    v94 = &g_1;
    v95 = &g_41f235;
    v96 = &g_1;
    v97 = 0;
    v98 = 4785074604081268;
    v99 = 0;
    v100 = 3337;
    v110 = 0;
    v111 = &g_1;
    v112 = 0;
    v110 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 37);
    v120 = v111;
    v121 = v112;
    *((v120 + v121 + &g_1 as &u8) as &i128) = 154358942711660912677739431185053217891;
    *((v120 + v121) as &i128) = 129529013097148507721138568679556015444;
    *((v120 + v121 + &g_11 as &u8) as &i64) = 2985424897371807859;
    v112 = v121 + 37;
    v0 = *((&v110 as &char + 8) as &i128);
    if v90 != 0x8000000000000000 {
        v110 = v0;
    }
    v90 = v110;
    memcpy(&v110, &v56, 592);
    v56 = clap_builder::builder::command::Command::arg(&v1, &v110);
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
    v34 = 0;
    v1 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_41f264;
    v42 = &g_1;
    v43 = &g_41f264;
    v44 = &g_1;
    v45 = 0;
    v46 = 4785074604081271;
    v47 = 0;
    v48 = 3337;
    v110 = 0;
    v111 = &g_1;
    v112 = 0;
    v110 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v122 = v111;
    v123 = v112;
    *((v122 + v123 + &g_11 as &u8) as &i128) = 162334087578938423634238153709612703865;
    *((v122 + v123 + &g_1 as &u8) as &i128) = 130432838626886794223348544159755560559;
    *((v122 + v123) as &i128) = 43134528595990445291003672013573550405;
    *((v122 + v123 + 48) as &i32) = 1936683621;
    v112 = v123 + &g_31 as &u8;
    v0 = *((&v110 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v110 = v0;
    }
    v37 = v110;
    memcpy(&v110, &v1, 588);
    v114 = *((&v1 as &char + 589) as &i16);
    v115 = *((&v1 as &char + 591) as &i8);
    v113 = &g_1;
    v1 = clap_builder::builder::command::Command::arg(&v56, &v110);
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
    v87 = 0;
    v56 = 0;
    v57 = 0;
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
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v88 = &g_1;
    v89 = 0;
    v90 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &g_41f2a3;
    v94 = &g_1;
    v95 = &g_41f2a3;
    v96 = &g_1;
    v97 = 0;
    v98 = 4785074604081254;
    v99 = 0;
    v100 = 3337;
    v110 = 0;
    v111 = &g_1;
    v112 = 0;
    v110 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 38);
    v124 = v111;
    v125 = v112;
    *((v124 + v125 + &g_1 as &u8) as &i128) = 43139841719209263815761973023609742880;
    *((v124 + v125) as &i128) = 134815259032657103638792197494066738037;
    *((v124 + v125 + &g_11 as &u8) as &i64) = 6071218788584792180;
    v112 = v125 + 38;
    v0 = *((&v110 as &char + 8) as &i128);
    if v90 != 0x8000000000000000 {
        v110 = v0;
    }
    v90 = v110;
    memcpy(&v110, &v56, 592);
    v56 = clap_builder::builder::command::Command::arg(&v1, &v110);
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
    v34 = 0;
    v1 = 0;
    v2 = &g_1;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_41f2cf;
    v42 = &g_1;
    v43 = 0;
    v45 = 0;
    v46 = 0x11000000110000;
    v47 = 0;
    v48 = 3329;
    clap_builder::builder::command::Command::arg(a0, &v56, &v1);
    return a0;
}
