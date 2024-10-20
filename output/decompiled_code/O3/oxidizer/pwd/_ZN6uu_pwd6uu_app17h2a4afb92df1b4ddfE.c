fn uu_pwd::uu_app(a0: i64) -> u64 {
    let v0: i128;  // [sp-0xae8]
    let v1: i128;  // [bp-0xad8], Other Possible Types: Enum
    let v2: i64;  // [sp-0xad0]
    let v3: i64;  // [sp-0xac8]
    let v4: i64;  // [sp-0xab0]
    let v5: i64;  // [sp-0xaa0]
    let v6: i64;  // [sp-0xa88]
    let v7: i64;  // [sp-0xa70]
    let v8: i64;  // [sp-0xa68]
    let v9: i128;  // [sp-0xa60]
    let v10: struct16;  // [sp-0xa58]
    let v11: i64;  // [sp-0xa50]
    let v12: i64;  // [bp-0xa48]
    let v13: i64;  // [sp-0xa38]
    let v14: i128;  // [sp-0xa30]
    let v15: i64;  // [sp-0xa20]
    let v16: i128;  // [sp-0xa18]
    let v17: i64;  // [sp-0xa08]
    let v18: i128;  // [sp-0xa00]
    let v19: i64;  // [sp-0x9f0]
    let v20: i128;  // [sp-0x9e8]
    let v21: i64;  // [sp-0x9d8]
    let v22: i128;  // [sp-0x9d0]
    let v23: i64;  // [sp-0x9c0]
    let v24: i128;  // [sp-0x9b8]
    let v25: i64;  // [sp-0x9a8]
    let v26: i128;  // [sp-0x9a0]
    let v27: i64;  // [sp-0x990]
    let v28: i128;  // [sp-0x988]
    let v29: i64;  // [sp-0x978]
    let v30: i128;  // [sp-0x970]
    let v31: i64;  // [sp-0x960]
    let v32: i128;  // [sp-0x958]
    let v33: i64;  // [sp-0x948]
    let v34: i128;  // [sp-0x940]
    let v35: i64;  // [sp-0x930]
    let v36: i64;  // [sp-0x928]
    let v37: i64;  // [sp-0x920]
    let v38: i64;  // [sp-0x908]
    let v39: i64;  // [sp-0x8e0]
    let v40: i64;  // [sp-0x8c8]
    let v41: i64;  // [sp-0x8c0]
    let v42: i64;  // [sp-0x8b8]
    let v43: i64;  // [sp-0x8b0]
    let v44: i64;  // [sp-0x8a8]
    let v45: i64;  // [sp-0x898]
    let v46: i32;  // [sp-0x890]
    let v47: i8;  // [bp-0x88c]
    let v48: i16;  // [sp-0x88b]
    let v49: i8;  // [sp-0x889]
    let v50: i64;  // [sp-0x81c]
    let v51: i32;  // [sp-0x814]
    let v52: i5696;  // [sp-0x810], Other Possible Types: struct712
    let v53: i64;  // [sp-0x800]
    let v54: i64;  // [sp-0x7e8]
    let v55: i64;  // [sp-0x7d8]
    let v56: i64;  // [sp-0x7c0]
    let v57: i64;  // [sp-0x7a8]
    let v58: i64;  // [sp-0x7a0]
    let v59: i128;  // [sp-0x798]
    let v60: i64;  // [sp-0x788]
    let v61: i128;  // [sp-0x780]
    let v62: i64;  // [sp-0x770]
    let v63: i128;  // [sp-0x768]
    let v64: i64;  // [sp-0x758]
    let v65: i128;  // [sp-0x750]
    let v66: i64;  // [sp-0x740]
    let v67: i128;  // [sp-0x738]
    let v68: i64;  // [sp-0x728]
    let v69: i128;  // [sp-0x720]
    let v70: i64;  // [sp-0x710]
    let v71: i128;  // [sp-0x708]
    let v72: i64;  // [sp-0x6f8]
    let v73: i128;  // [sp-0x6f0]
    let v74: i64;  // [sp-0x6e0]
    let v75: i128;  // [sp-0x6d8]
    let v76: i64;  // [sp-0x6c8]
    let v77: i128;  // [sp-0x6c0]
    let v78: i64;  // [sp-0x6b0]
    let v79: i128;  // [sp-0x6a8]
    let v80: i64;  // [sp-0x698]
    let v81: i128;  // [sp-0x690]
    let v82: i64;  // [sp-0x680]
    let v83: i128;  // [sp-0x678]
    let v84: i64;  // [sp-0x668]
    let v85: i64;  // [sp-0x660]
    let v86: i64;  // [sp-0x658]
    let v87: i64;  // [sp-0x640]
    let v88: i128;  // [sp-0x638]
    let v89: i64;  // [sp-0x618]
    let v90: i64;  // [sp-0x600]
    let v91: i64;  // [sp-0x5f8]
    let v92: i64;  // [sp-0x5f0]
    let v93: i64;  // [sp-0x5e8]
    let v94: i64;  // [sp-0x5e0]
    let v95: i64;  // [sp-0x5d0]
    let v96: i32;  // [sp-0x5c8]
    let v97: i16;  // [sp-0x5c4]
    let v98: i192;  // [sp-0x548], Other Possible Types: Enum, struct24
    let v99: i64;  // [sp-0x540]
    let v100: i64;  // [sp-0x538]
    let v101: i64;  // [sp-0x390]
    let v102: i128;  // [sp-0x388]
    let v103: i8;  // [sp-0x2fc]
    let v104: i16;  // [sp-0x2fb]
    let v105: i8;  // [sp-0x2f9]
    let v106: i3336;  // [sp-0x2f8], Other Possible Types: Enum
    let v107: i64;  // [sp-0x98]
    let v108: i64;  // [sp-0x90]
    let v110: i64;  // r14
    let v111: i64;  // rax
    let v112: i64;  // rdx
    let v113: i64;  // r14
    let v114: i64;  // rax
    let v115: i64;  // rcx
    let v116: i64;  // rcx
    let v117: i64;  // rdx
    let v118: i64;  // r14

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v106 = clap_builder::builder::command::Command::new(g_4dcbc8, g_4dcbd0);
    v107 = &g_418040;
    v108 = &g_1;
    v52 = clap_builder::builder::command::Command::about(&v106, &g_418046, 59);
    v98 = uucore::format_usage(&g_418081, &g_11);
    v110 = v98;
    if v110 != 0x8000000000000000 {
        v1 = *((&v98 as &char + 8) as &i128);
    }
    v87 = v110;
    v88 = v1;
    memcpy(&v1, &v52, 700);
    v50 = 549755814016 | *((&v52 as &char + 700) as &i64);
    v51 = *((&v52 as &char + 708) as &i32);
    v59 = 0;
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
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
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
    v89 = 9223372036854775809;
    v90 = &g_418099;
    v91 = &g_1;
    v92 = &g_418099;
    v93 = &g_1;
    v94 = 0;
    v95 = 4785074604081228;
    v96 = 0;
    v97 = 3337;
    v98 = 0;
    v99 = &g_1;
    v100 = 0;
    v98 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 54);
    v111 = v99;
    v112 = v100;
    *((v111 + v112 + &g_11 as &u8) as &i128) = 161434359811223080301230383527971332198;
    *((v111 + v112 + &g_1 as &u8) as &i128) = 139737332160631581365931189762104717929;
    *((v111 + v112) as &i128) = 157422107249598670387135067671685854069;
    *((v111 + v112 + &g_21 as &u8) as &i64) = 8316862535939488115;
    v100 = v112 + 54;
    v0 = *((&v98 as &char + 8) as &i128);
    if v86 != 0x8000000000000000 {
        v98 = v0;
    }
    v86 = v98;
    memcpy(&v98, &v52, 588);
    v104 = *((&v52 as &char + 589) as &i16);
    v105 = *((&v52 as &char + 591) as &i8);
    v103 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v1, &v98);
    v9 = 0;
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
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = &g_1;
    v7 = 0;
    v8 = &g_1;
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
    v39 = 9223372036854775809;
    v40 = &g_40f950;
    v41 = &g_1;
    v42 = &g_40f950;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081232;
    v46 = 0;
    v47 = 3337;
    v113 = v12;
    if v113 == *((&v9 as &char + 8) as &i64) {
        v10 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v114 = v11;
    v115 = v113 * &g_1;
    *((v114 + v115) as &&i64) = &g_418099;
    *((v114 + v115 + &g_1 as &u8) as &&i64) = &g_1;
    v12 = v113 + &g_1 as &u8;
    memcpy(&v98, &v1, 592);
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v116 = v2;
    v117 = v3;
    *((v116 + v117) as &i128) = 146762469880180677129056869049378502241;
    *((v116 + v117 + &g_1 as &u8) as &i16) = 29547;
    v3 = v117 + &g_11 as &u8;
    v118 = v1;
    v0 = *((&v1 as &char + 8) as &i128);
    if v118 != 0x8000000000000000 {
        v1 = v0;
    }
    v101 = v118;
    v102 = v1;
    memcpy(&v1, &v98, 588);
    v48 = v104;
    v49 = v105;
    v47 = &g_1;
    clap_builder::builder::command::Command::arg(a0, &v52, &v1);
    return a0;
}
