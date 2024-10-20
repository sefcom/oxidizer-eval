fn uu_mkdir::uu_app(a0: u32) -> u64 {
    let v0: i128;  // [bp-0x838]
    let v1: i5696;  // [sp-0x820], Other Possible Types: struct712, Enum
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
    let v35: i192;  // [sp-0x668]
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
    let v47: i64;  // [sp-0x5c0]
    let v48: i64;  // [sp-0x5b8]
    let v49: i64;  // [bp-0x558], Other Possible Types: struct712
    let v50: i64;  // [sp-0x548]
    let v51: i64;  // [sp-0x540]
    let v52: i64;  // [sp-0x538]
    let v53: i64;  // [sp-0x530]
    let v54: i64;  // [sp-0x520]
    let v55: i64;  // [sp-0x508]
    let v56: i64;  // [sp-0x4f0]
    let v57: i64;  // [sp-0x4e8]
    let v58: i128;  // [sp-0x4e0]
    let v59: i64;  // [sp-0x4d0]
    let v60: i128;  // [sp-0x4c8]
    let v61: i64;  // [sp-0x4b8]
    let v62: i128;  // [sp-0x4b0]
    let v63: i64;  // [sp-0x4a0]
    let v64: i128;  // [sp-0x498]
    let v65: i64;  // [sp-0x488]
    let v66: i128;  // [sp-0x480]
    let v67: i64;  // [sp-0x470]
    let v68: i128;  // [sp-0x468]
    let v69: i64;  // [sp-0x458]
    let v70: i128;  // [sp-0x450]
    let v71: i64;  // [sp-0x440]
    let v72: i128;  // [sp-0x438]
    let v73: i64;  // [sp-0x428]
    let v74: i128;  // [sp-0x420]
    let v75: i64;  // [sp-0x410]
    let v76: i128;  // [sp-0x408]
    let v77: i64;  // [sp-0x3f8]
    let v78: i128;  // [sp-0x3f0]
    let v79: i64;  // [sp-0x3e0]
    let v80: i128;  // [sp-0x3d8]
    let v81: i64;  // [sp-0x3c8]
    let v82: i128;  // [sp-0x3c0]
    let v83: i64;  // [sp-0x3b0]
    let v84: i64;  // [sp-0x3a8]
    let v85: i64;  // [sp-0x3a0]
    let v86: i64;  // [sp-0x388]
    let v87: i64;  // [sp-0x360]
    let v88: i64;  // [sp-0x348]
    let v89: i64;  // [sp-0x340]
    let v90: i64;  // [sp-0x338]
    let v91: i64;  // [sp-0x330]
    let v92: i64;  // [sp-0x328]
    let v93: i64;  // [sp-0x318]
    let v94: i32;  // [sp-0x310]
    let v95: i16;  // [sp-0x30c]
    let v96: i8;  // [bp-0x309]
    let v97: i64;  // [sp-0x29c]
    let v98: i32;  // [sp-0x294]
    let v99: i4736;  // [sp-0x288], Other Possible Types: Enum, struct592, struct24
    let v100: i64;  // [sp-0x280]
    let v101: i64;  // [sp-0x278]
    let v102: i8;  // [sp-0x3c]
    let v103: i16;  // [bp-0x3b]
    let v104: i8;  // [sp-0x39]
    let v106: i64;  // r14
    let v107: i64;  // rax
    let v108: i64;  // rcx
    let v109: i64;  // rax
    let v110: i64;  // rcx
    let v111: i64;  // rax
    let v112: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v1 = clap_builder::builder::command::Command::new(g_4e9fb0, g_4e9fb8);
    v47 = &g_419238;
    v48 = &g_1;
    memcpy(&v49, &v1, 712);
    v1 = clap_builder::builder::command::Command::about(&v49, &g_41923e, 52);
    v99 = uucore::format_usage(&g_419272, &g_1b);
    v106 = v99;
    if v106 != 0x8000000000000000 {
        v49 = *((&v99 as &char + 8) as &i128);
    }
    v36 = v106;
    v37 = v49;
    memcpy(&v49, &v1, 700);
    v97 = 549755814016 | *((&v1 as &char + 700) as &i64);
    v98 = *((&v1 as &char + 708) as &i32);
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
    v39 = &g_410678;
    v40 = &g_1;
    v41 = &g_410678;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081261;
    v45 = 0;
    v46 = 3337;
    v99 = 0;
    v100 = &g_1;
    v101 = 0;
    v99 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1b);
    v107 = v100;
    v108 = v101;
    *((v107 + v108 + &g_11 as &u8) as &i128) = 55097884398063910466731308763081700462;
    *((v107 + v108 + &g_1 as &u8) as &i128) = 147712497310637277440627902207053821039;
    *((v107 + v108) as &i128) = 146423428480917077002374165787558831475;
    v101 = v108 + &g_1b as &u8;
    v0 = *((&v99 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v99 = v0;
    }
    v35 = v99;
    memcpy(&v99, &v1, 592);
    v1 = clap_builder::builder::command::Command::arg(&v49, &v99);
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
    v82 = 0;
    v49 = 0;
    v50 = 0;
    v53 = 0;
    v54 = 0;
    v55 = &g_1;
    v56 = 0;
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
    v83 = &g_1;
    v84 = 0;
    v85 = 0x8000000000000000;
    v86 = 0x8000000000000000;
    v87 = 9223372036854775809;
    v88 = &g_4192b7;
    v89 = &g_1;
    v90 = &g_4192b7;
    v91 = &g_1;
    v92 = 0;
    v93 = 4785074604081264;
    v94 = 0;
    v95 = 3337;
    v99 = 0;
    v100 = &g_1;
    v101 = 0;
    v99 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1b);
    v109 = v100;
    v110 = v101;
    *((v109 + v110 + &g_1 as &u8) as &i128) = 134773313819626950255942133328999576675;
    *((v109 + v110) as &i128) = 134846087002018385405799861852230607213;
    *((v109 + v110 + &g_1b as &u8) as &i8) = 100;
    v101 = v110 + &g_1b as &u8;
    v0 = *((&v99 as &char + 8) as &i128);
    if v85 != 0x8000000000000000 {
        v99 = v0;
    }
    v85 = v99;
    memcpy(&v99, &v49, 588);
    v103 = v95;
    v104 = v96;
    v102 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v1, &v99);
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
    v39 = &g_4192df;
    v40 = &g_1;
    v41 = &g_4192df;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081270;
    v45 = 0;
    v46 = 3337;
    v99 = 0;
    v100 = &g_1;
    v101 = 0;
    v99 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1b);
    v111 = v100;
    v112 = v101;
    *((v111 + v112 + &g_11 as &u8) as &i128) = 161430769900542305735089641090855102834;
    *((v111 + v112 + &g_1 as &u8) as &i128) = 133449583068449778121249753918860324710;
    *((v111 + v112) as &i128) = 43061814656880547099851240092211966576;
    v101 = v112 + &g_1b as &u8;
    v0 = *((&v99 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v99 = v0;
    }
    v35 = v99;
    memcpy(&v99, &v1, 588);
    v103 = *((&v1 as &char + 589) as &i16);
    v104 = *((&v1 as &char + 591) as &i8);
    v102 = &g_1;
    v1 = clap_builder::builder::command::Command::arg(&v49, &v99);
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
    v82 = 0;
    v49 = 0;
    v50 = &g_1;
    v51 = &g_1;
    v52 = -1;
    v53 = 0;
    v54 = 0;
    v55 = &g_1;
    v56 = 0;
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
    v83 = &g_1;
    v84 = 0;
    v85 = 0x8000000000000000;
    v86 = 0x8000000000000000;
    v87 = 9223372036854775809;
    v88 = &g_410630;
    v89 = &g_1;
    v90 = 0;
    v92 = 0;
    v93 = 0x11000000110000;
    v94 = 0;
    v95 = 3329;
    v0 = &g_1;
    v99 = clap_builder::builder::arg::Arg::value_parser(&v49, &v0);
    *(&v103 as &&i64) = &g_1;
    memcpy(&v49, &v99, 592);
    clap_builder::builder::command::Command::arg(a0, &v1, &v49);
    return a0;
}
